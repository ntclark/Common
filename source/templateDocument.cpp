
#include "templateDocument.h"

#include "PrintingProfileDefines.h"

   templateDocument::templateDocument(ICursiVisionServices *ps,char *pszProfileOverride,char *pszDN,RECT *pszER,char *pszET) :
      pIPdfEnabler(NULL),
      pIPdfDocument(NULL),
      pszProfileFileName(pszProfileOverride),
      pszDocumentName(pszDN),
      pExpectedRects(pszER),
      pszExpectedText(pszET),
      selfAllocatedDocumentName(false),
      pageCount(0L),
      pdfPageWidth(0),
      pdfPageHeight(0),
      pICursiVisionServices(ps)
   {
   CoCreateInstance(CLSID_PdfEnabler,NULL,CLSCTX_INPROC_SERVER,IID_IPdfEnabler,reinterpret_cast<void **>(&pIPdfEnabler));
   if ( pICursiVisionServices )
      pICursiVisionServices -> AddRef();
   return;
   }


   templateDocument::~templateDocument() {

   for ( std::list<createdView *>::iterator it = uiInstances.begin(); it != uiInstances.end(); it++ ) {
      createdView *pView = *it;
      if ( pView -> pUI ) 
         delete pView -> pUI;
      delete pView;
   }

   uiInstances.clear();

   if ( pIPdfDocument )
      pIPdfDocument -> Release();

   pIPdfDocument = NULL;

   if ( pIPdfEnabler )
      pIPdfEnabler -> Release();

   pIPdfEnabler = NULL;

   if ( pICursiVisionServices )
      pICursiVisionServices -> Release();

   if ( pszDocumentName && selfAllocatedDocumentName )
      delete [] pszDocumentName;

   return;
   }


   templateDocument::tdUI *templateDocument::createView(HWND hwndP,long x,long y,void (*pcp)(HDC,templateDocument::tdUI *)) {

   tdUI *pUI = new tdUI(this);

   struct createdView *pView = new createdView();

   pView -> hwndParent = hwndP;
   pView -> pUI = pUI;

   uiInstances.insert(uiInstances.end(),pView);

   pUI -> createView(hwndP,x,y,pcp);

   if ( ! pIPdfDocument )
      return pUI;

   long pageCount;

   pIPdfDocument -> get_PageCount(&pageCount);

   pUI -> resetScrollbar(pageCount);

   return pUI;
   }


   void templateDocument::releaseView(HWND hwndParent) {
   for ( createdView *pView : uiInstances ) {
      if ( hwndParent && ! ( hwndParent == pView -> hwndParent ) ) 
         continue;
      delete pView -> pUI;
      pView -> pUI = NULL;
      return;
   }
   return;
   }


   bool templateDocument::openDocument(char *pszName,char *pszOutlinesOverride) {

   if ( pszOutlinesOverride )
      pszProfileFileName = pszOutlinesOverride;
      
   if ( NULL == pszDocumentName ) {
      pszDocumentName = new char[MAX_PATH];
      selfAllocatedDocumentName = true;
   }

   if ( pszName && pszName != pszDocumentName )
      strcpy(pszDocumentName,pszName);

   if ( pszDocumentName[0] )
      openPDFDocument(pszDocumentName,pszProfileFileName);

   return true;
   }


   void templateDocument::closeDocument() {
   pszDocumentName[0] = '\0';
   if ( pIPdfDocument )
      pIPdfDocument -> Release();
   pIPdfDocument = NULL;
   for ( createdView *pView : uiInstances ) {
      if ( ! pView -> pUI )
         continue;
      pView -> pUI -> resetScrollbar(0);
   }
   return;
   }


   void templateDocument::openPDFDocument(char *pszFileName,char *pszOutlinesFile) {

   pageCount = 0;

   if ( pszOutlinesFile ) {

      FILE *fProfile = fopen(pszOutlinesFile,"rb");

      if ( ! fProfile )
         return;

      long pn,cxPage,cyPage,nextPageOffset,countEntries;
      char bIgnore[5];
      char szProfileData[1024];

      long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

      if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {
         fclose(fProfile);
         return;
      }

      rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&pdfPageWidth,&pdfPageHeight,&countEntries,&nextPageOffset);

      if ( 0 == countEntries ) {
         fclose(fProfile);
         return;
      }

      while ( 1 ) {

         pageCount++;

         fseek(fProfile,nextPageOffset,SEEK_SET);

         rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);
         if ( rc < OUTLINES_PAGE_RECORD_SIZE )
            break;
         rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);
         if ( rc < 6 ) 
            break;
         if ( 0 == nextPageOffset )
            break;
      }

      fclose(fProfile);

   }

   if ( pIPdfDocument )
      pIPdfDocument -> Release();

   pIPdfDocument = NULL;

   FILE *fX = fopen(pszFileName,"rb");
   if ( ! fX )
      return;

   fclose(fX);

   pIPdfEnabler -> Document(&pIPdfDocument);

   long n = (long)strlen(pszFileName);
   BSTR bstrName = SysAllocStringLen(NULL,n);
   MultiByteToWideChar(CP_ACP,0,pszFileName,-1,bstrName,n);

   pIPdfDocument -> Open(bstrName,NULL,NULL);

   SysFreeString(bstrName);

   if ( ! pszOutlinesFile ) {
      pIPdfDocument -> get_PageCount(&pageCount);
      IPdfPage *pIPdfPage = NULL;
      pIPdfDocument -> Page(1,NULL,&pIPdfPage);
      if ( pIPdfPage ) {
         RECT rc;
         pIPdfPage -> DisplayedPageSize(&rc);
         pdfPageWidth = rc.right - rc.left;
         pdfPageHeight = rc.bottom - rc.top;
         pIPdfPage -> Release();
      }
   }

   for ( createdView *pView : uiInstances ) {
      if ( ! pView -> pUI )
         continue;
      pView -> pUI -> setupPDFiumControl();
      pView -> pUI -> setURL(pszFileName);
   }

   for ( createdView *pView : uiInstances ) {
      if ( ! pView -> pUI )
         continue;
      pView -> pUI -> resetScrollbar(pageCount);
      if ( pView -> pUI -> hwndHTMLHost ) {
         pView -> pUI -> size();
      }
   }

   return;
   }

   void templateDocument::GetSinglePagePDFDisplaySize(SIZEL *pSizel) {

   HDC hdc = GetDC(NULL);
   UINT xPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSX);
   UINT yPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSY);
   ReleaseDC(NULL,hdc);

   pSizel -> cx = (long)((double)(PDFPageWidth()) * (double)xPixelsPerInch / 72.0);
   pSizel -> cy = (long)((double)(PDFPageHeight()) * (double)yPixelsPerInch / 72.0);

   return;
   }