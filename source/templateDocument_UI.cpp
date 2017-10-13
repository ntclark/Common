
#include "templateDocument.h"
#include "PrintingProfileDefines.h"

#include "utilities.h"

   extern HMODULE hModule;
   static bool isRegistered = false;

   templateDocument::tdUI::tdUI(templateDocument *pp) :

      pIOleClientSite_HTML_Host(NULL),
      pIOleDocumentSite_HTML_Host(NULL),
      pIOleInPlaceSite_HTML_Host(NULL),
      pIOleInPlaceFrame_HTML_Host(NULL),

      pIOleObject_HTML(NULL),
      pIOleInPlaceObject_HTML(NULL),
      pIOleInPlaceActiveObject_HTML(NULL),

      pIPDFiumControl(NULL),
      pDWebBrowserEvents_HTML(NULL),

      pIConnectionPointContainer_HTML(NULL),
      pIConnectionPoint_HTML(NULL),
      pIEnumConnectionPoints_HTML(NULL),
      pIEnumerateConnections_HTML(NULL),

      connectionCookie_HTML(0L),

      pDocumentRects(NULL),
      pDocumentText(NULL),
      pDocumentPages(NULL),

      countDocumentRects(0),

      currentPageNumber(0L),
      parentOffsetX(0L),parentOffsetY(0L),

      hwndParent(NULL),
      hwndPane(NULL),
      hwndVellum(NULL),

      scaleToPixels(0.0),

      cxHTML(0L),
      cyHTML(0L),

      hdcPDF(NULL),
      hbmPDF(NULL),

      refCount(0)

   {
   currentPageNumber = -1L;
   pParent = pp;
   memset(&scrollInfo,0,sizeof(SCROLLINFO));
   memset(&rcPDFPagePixels,0,sizeof(RECT));
   memset(&rcPDFPagePixelsInView,0,sizeof(RECT));
   memset(&ptlPDFUpperLeft,0,sizeof(POINTL));
   memset(&rcHTML,0,sizeof(RECT));
   memset(&rcPageParentCoordinates,0,sizeof(RECT));
   memset(&rcVellumPixels,0,sizeof(RECT));
   return;
   }


   templateDocument::tdUI::~tdUI() {

   if ( pIPDFiumControl ) 
      releasePDFiumControl();

   if ( hwndPane ) {
      DestroyWindow(hwndPane);
      DestroyWindow(hwndVellum);
   }

   RESET_PAGE

   return;
   }


   void templateDocument::tdUI::createView(HWND hwndP,long x,long y,void (*pcp)(HDC,templateDocument::tdUI *)) {

   parentOffsetX = x;
   parentOffsetY = y;
   pClientPaint = pcp;

   if ( hwndPane ) 
      return;

   hwndParent = hwndP;

   if ( ! isRegistered ) {

      isRegistered = 1L;

      WNDCLASS gClass;
      
      memset(&gClass,0,sizeof(WNDCLASS));

      gClass.style = CS_BYTEALIGNCLIENT | CS_BYTEALIGNWINDOW;
      gClass.lpfnWndProc = templateDocument::tdUI::paneHandler;
      gClass.cbClsExtra = 32;
      gClass.cbWndExtra = 32;
      gClass.hInstance = hModule;
      gClass.hIcon = NULL;
      gClass.hCursor = NULL;
      gClass.hbrBackground = 0;
      gClass.lpszMenuName = NULL;
      gClass.lpszClassName = "paneHandler";

      RegisterClass(&gClass);

      gClass.lpfnWndProc = templateDocument::tdUI::vellumHandler;
      gClass.lpszClassName = "vellum";

      RegisterClass(&gClass);

   }

   hwndPane = CreateWindowEx(0,"paneHandler","",WS_CHILD | WS_VISIBLE,parentOffsetX,parentOffsetY,0,0,hwndParent,NULL,hModule,(void *)this);

   hwndVellum = CreateWindowEx(0L,"vellum","",WS_CHILD | WS_VISIBLE,0,0,0,0,hwndPane,NULL,hModule,(void *)this);

   if ( ! pParent -> pszDocumentName ) 
      return;

   setupPDFiumControl();

   setURL(pParent -> pszDocumentName);

   return;
   }


   void templateDocument::tdUI::setupPDFiumControl() {

   if ( pIOleInPlaceFrame_HTML_Host )
      return;

   pIOleInPlaceFrame_HTML_Host = new _IOleInPlaceFrame(this,hwndPane);
   pIOleInPlaceSite_HTML_Host = new _IOleInPlaceSite(this,pIOleInPlaceFrame_HTML_Host);
   pIOleClientSite_HTML_Host = new _IOleClientSite(this,pIOleInPlaceSite_HTML_Host,pIOleInPlaceFrame_HTML_Host);
   pIOleDocumentSite_HTML_Host = new _IOleDocumentSite(this,pIOleClientSite_HTML_Host);

   CoCreateInstance(CLSID_PDFiumControl,NULL,CLSCTX_ALL,IID_IPDFiumControl,reinterpret_cast<void **>(&pIPDFiumControl));

   pIPDFiumControl -> QueryInterface(IID_IOleObject,reinterpret_cast<void **>(&pIOleObject_HTML));

   HRESULT rc =  pIOleObject_HTML -> QueryInterface(IID_IOleInPlaceObject,reinterpret_cast<void **>(&pIOleInPlaceObject_HTML));

   pIOleObject_HTML -> SetClientSite(pIOleClientSite_HTML_Host);

   pDWebBrowserEvents_HTML = new _DWebBrowserEvents2(this);

   pIConnectionPointContainer_HTML = new _IConnectionPointContainer(this);

   IUnknown *pIUnknown = NULL;

   pDWebBrowserEvents_HTML -> QueryInterface(IID_IUnknown,reinterpret_cast<void **>(&pIUnknown));

   IConnectionPointContainer *pIConnectionPointContainer = NULL;

   pIPDFiumControl -> QueryInterface(IID_IConnectionPointContainer,reinterpret_cast<void**>(&pIConnectionPointContainer));

   if ( pIConnectionPointContainer ) {

      pIConnectionPointContainer -> FindConnectionPoint(DIID_DWebBrowserEvents2,&pIConnectionPoint_HTML);

      if ( pIConnectionPoint_HTML ) 
         pIConnectionPoint_HTML -> Advise(pIUnknown,&connectionCookie_HTML);

      pIPDFiumControlEvents = new _IPDFiumControlEvents(this);

      pIConnectionPointContainer -> FindConnectionPoint(IID_IPDFiumControlEvents,&pIConnectionPoint_PDFiumControlEvents);

      if ( pIConnectionPoint_PDFiumControlEvents ) 
         pIConnectionPoint_PDFiumControlEvents -> Advise(pIUnknown,&connectionCookie_PDFiumControlEvents);

      pIConnectionPointContainer -> Release();

   }

   pIUnknown -> Release();
   
   return;
   }


   void templateDocument::tdUI::setURL(char *pszDocument) {

   size();

   BSTR bstrURL = SysAllocStringLen(NULL,MAX_PATH);

   MultiByteToWideChar(CP_ACP,0,pszDocument,-1,bstrURL,MAX_PATH);

   LOGBRUSH logBrush;

   GetObject(GetSysColorBrush(COLOR_WINDOW + 1),sizeof(LOGBRUSH),&logBrush);

   RECT rcHost = {0};

   GetClientRect(hwndPane,&rcHost);

   //pIOleObject_HTML -> DoVerb(OLEIVERB_SHOW,NULL,pIOleClientSite_HTML_Host,0,hwndPane,&rcHost);

   pIPDFiumControl -> DisplayDocument(logBrush.lbColor,rcHost.right - rcHost.left - 64,rcHost.bottom - rcHost.top - 32,bstrURL,0);

   SysFreeString(bstrURL);

   return;
   }


   void templateDocument::tdUI::releasePDFiumControl() {

   if ( pIConnectionPoint_HTML ) {
      pIConnectionPoint_HTML -> Unadvise(connectionCookie_HTML);
      pIConnectionPoint_HTML -> Release();
      pIConnectionPoint_HTML = NULL;
   }

   if ( pIConnectionPoint_PDFiumControlEvents ) {
      pIConnectionPoint_PDFiumControlEvents -> Unadvise(connectionCookie_PDFiumControlEvents);
      pIConnectionPoint_PDFiumControlEvents -> Release();
      pIConnectionPoint_PDFiumControlEvents = NULL;
   }

   pIOleObject_HTML -> Close(OLECLOSE_NOSAVE);

   pIOleObject_HTML -> SetClientSite(NULL);

   pIOleInPlaceObject_HTML -> Release();

   if ( pIOleInPlaceActiveObject_HTML )
      pIOleInPlaceActiveObject_HTML -> Release();

   pIOleInPlaceActiveObject_HTML = NULL;

   pIOleObject_HTML -> Release();

   pIOleObject_HTML = NULL;

   pIPDFiumControl -> Cleanup();

   pIPDFiumControl -> FinalRelease();

   pIPDFiumControl = NULL;

   return;
   }


   HDC templateDocument::tdUI::pdfDC() {

   if ( hdcPDF ) 
      return hdcPDF;

   if ( hwndVellum ) 
      ShowWindow(hwndVellum,SW_HIDE);

   SendMessage(hwndPane,WM_GENERATE_BITMAP,0,0);

   if ( hwndVellum )
      ShowWindow(hwndVellum,SW_SHOW);

   return hdcPDF; 
   }


   void templateDocument::tdUI::releaseView() {
   pParent -> releaseView(hwndParent);
   return;
   }


   void templateDocument::tdUI::resetScrollbar(long pageCount) {

   RESET_PAGE

   pIPDFiumControl -> get_PDFPageNumberAtY(100,0,&currentPageNumber);

   return;
   }


   void templateDocument::tdUI::size() {

   RECT rcParent = {0};

   GetWindowRect(hwndParent,&rcParent);

   double aspectRatio = (double)pParent -> PDFPageWidth() / (double)pParent -> PDFPageHeight();

   cxHTML = rcParent.right - rcParent.left - 2 * parentOffsetX;
   cyHTML = (long)((double)cxHTML / aspectRatio);
   long cyMaxHTML = rcParent.bottom - rcParent.top - parentOffsetY - parentOffsetX;

   if ( cyHTML > cyMaxHTML ) {
      cyHTML = rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY;
      cxHTML = (long)((double)cyHTML * aspectRatio);
   }

   long x = ((rcParent.right - rcParent.left) - cxHTML ) / 2;
   long y = parentOffsetY + ((rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY) - cyHTML ) / 2;

   SetWindowPos(hwndPane,HWND_TOP,x,y,cxHTML,cyHTML,0L);

   RECT rcAdjust = {0};

   AdjustWindowRectEx(&rcAdjust,(DWORD)GetWindowLongPtr(hwndPane,GWL_STYLE),FALSE,(DWORD)GetWindowLongPtr(hwndPane,GWL_EXSTYLE));

   cxHTML -= (rcAdjust.right - rcAdjust.left);
   cyHTML -= (rcAdjust.bottom - rcAdjust.top);

   rcHTML.left = 0;
   rcHTML.top = 0;
   rcHTML.right = cxHTML;
   rcHTML.bottom = cyHTML;

   rcPageParentCoordinates.left = x;
   rcPageParentCoordinates.right = x + cxHTML;
   rcPageParentCoordinates.top = y;
   rcPageParentCoordinates.bottom = y + cyHTML;

   if ( ! pParent -> pIPdfDocument && ! pParent -> pszProfileFileName )
      return;

   if ( pIOleInPlaceObject_HTML ) 
      pIOleInPlaceObject_HTML -> SetObjectRects(&rcHTML,&rcHTML);

   RESET_PAGE

   return;
   }


   LRESULT CALLBACK templateDocument::tdUI::paneHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   templateDocument::tdUI *pDocument = (templateDocument::tdUI *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_CREATE: {
      CREATESTRUCT *pc = reinterpret_cast<CREATESTRUCT *>(lParam);
      pDocument = reinterpret_cast<templateDocument::tdUI *>(pc -> lpCreateParams);
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)pDocument);
      }
      return (LRESULT)0;

   case WM_GENERATE_BITMAP: {

      if ( ! pDocument -> pIOleObject_HTML )
         break;

      if ( pDocument -> hdcPDF )
         DeleteDC(pDocument -> hdcPDF);

      pDocument -> hdcPDF = CreateCompatibleDC(NULL);

      if ( pDocument -> hbmPDF )
         DeleteObject(pDocument -> hbmPDF);

      pDocument -> hbmPDF = CreateBitmap(pDocument -> cxHTML,pDocument -> cyHTML,1,GetDeviceCaps(pDocument -> hdcPDF,BITSPIXEL),NULL);

      SelectObject(pDocument -> hdcPDF,pDocument -> hbmPDF);

      HWND hwndSource = NULL;

      pDocument -> pIOleInPlaceObject_HTML -> GetWindow(&hwndSource);

      HDC hdcSource = GetDC(hwndSource);

      BitBlt(pDocument -> hdcPDF,0,0,pDocument -> cxHTML,pDocument -> cyHTML,hdcSource,0,0,SRCCOPY);

      ReleaseDC(hwndSource,hdcSource);

      }
      break;

   case WM_TIMER:
      KillTimer(hwnd,TIMER_ID_PAINT);
      pDocument -> findPDFArea();
      SendMessage(pDocument -> hwndPane,WM_GENERATE_BITMAP,0L,0L);
      if ( pDocument -> pClientPaint ) 
         pDocument -> pClientPaint(NULL,pDocument);
      break;

   case WM_ERASEBKGND:
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      break;

   case WM_PAINT: {
      PAINTSTRUCT ps;
      BeginPaint(hwnd,&ps);
      EndPaint(hwnd,&ps);
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      }
      return LRESULT(0);

   }

   return DefWindowProc(hwnd,msg,wParam,lParam);
   }


   LRESULT CALLBACK templateDocument::tdUI::vellumHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   templateDocument::tdUI *pDocument = (templateDocument::tdUI *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_CREATE: {
      CREATESTRUCT *pc = reinterpret_cast<CREATESTRUCT *>(lParam);
      pDocument = reinterpret_cast<templateDocument::tdUI *>(pc -> lpCreateParams);
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)pDocument);
      }
      return (LRESULT)0;

   case WM_PAINT: {
      PAINTSTRUCT ps;
      BeginPaint(hwnd,&ps);
      EndPaint(hwnd,&ps);
      //SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      }
      return LRESULT(0);

   default:
      break;
   }

   return DefWindowProc(hwnd,msg,wParam,lParam);
   }

   char *templateDocument::tdUI::pTextText(long index) {
   return &pDocumentText[index * 33];
   }

   long templateDocument::tdUI::textPage(long index) {
   return pDocumentPages[index];
   }


   RECT *templateDocument::tdUI::pTextRects(long *pCount) {

   if ( pCount )
      *pCount = countDocumentRects;

   if ( ! ( NULL == pDocumentRects ) )
      return pDocumentRects;

   if ( pCount )
      *pCount = 0L;

   char szTempFile[MAX_PATH];

   long countEntries = 0L;

   if ( pParent-> pszProfileFileName )
      strcpy(szTempFile,pParent-> pszProfileFileName);
   else {
      strcpy(szTempFile,_tempnam(NULL,NULL));
      pParent -> pICursiVisionServices -> GenerateOutlines(pParent -> pszDocumentName,szTempFile,currentPageNumber,currentPageNumber,&countEntries);
      if ( 0 == countEntries ) {
         DeleteFile(szTempFile);
         return NULL;
      }
   }

   FILE *fProfile = fopen(szTempFile,"rb");

   if ( ! fProfile )
      return NULL;

   long pn,cxPage,cyPage,nextPageOffset;
   char bIgnore[5];
   char szProfileData[OUTLINES_PAGE_RECORD_SIZE + 2];
   
   long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);
   
   if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {
      fclose(fProfile);
      if ( ! pParent-> pszProfileFileName )
         DeleteFile(szTempFile);
      return NULL;
   }

   rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);

   if ( ! ( rc == 6 ) || 0 == countEntries ) {
      fclose(fProfile);
      if ( ! pParent-> pszProfileFileName )
         DeleteFile(szTempFile);
      return NULL;
   }

   while ( ! ( pn == currentPageNumber ) ) {

      fseek(fProfile,nextPageOffset,SEEK_SET);

      long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

      if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {
         fclose(fProfile);
         if ( ! pParent-> pszProfileFileName )
            DeleteFile(szTempFile);
         return NULL;
      }

      rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);

      if ( rc < 6 ) {
         fclose(fProfile);
         if ( ! pParent-> pszProfileFileName )
            DeleteFile(szTempFile);
         return NULL;
      }

      if ( 0 == nextPageOffset )
         break;

   }

   countDocumentRects = countEntries;

   if ( pCount )
      *pCount = countDocumentRects;

   pDocumentRects = new RECT[countEntries + 1];
   pDocumentText = new char[(countEntries + 1) * 33];
   pDocumentPages = new long[countEntries + 1];

   memset(pDocumentRects,0,(countEntries + 1) * sizeof(RECT));
   memset(pDocumentText,0,(countEntries + 1) * 33 * sizeof(char));
   memset(pDocumentPages,0,(countEntries + 1) * sizeof(long));

   RECT *p = pDocumentRects;
   char *pText = pDocumentText;
   long *pPage = pDocumentPages;
   long countBytes = 0L;

   char szTemp[2048];

   for ( long k = 0; k < countEntries; k++ ) {

      memset(szProfileData,0,sizeof(szProfileData));

      fread(szProfileData,1,OUTLINES_ENTRY_RECORD_PREAMBLE_SIZE,fProfile);

      sscanf(szProfileData,OUTLINES_ENTRY_RECORD_PREAMBLE_FORMAT,&p -> left,&p -> bottom,&p -> right,&p -> top,&countBytes);

      fread(szTemp,1,countBytes + 1,fProfile);

      memcpy(pText,szTemp,min(countBytes,32));

      *pPage = currentPageNumber;

      p++;
      pText += 33;
      pPage++;

   }

   fclose(fProfile);

   if ( ! pParent-> pszProfileFileName )
      DeleteFile(szTempFile);

   return pDocumentRects;
   }


   void templateDocument::tdUI::findPDFArea(long pageNumber) {

   pIPDFiumControl -> get_PDFPageXPixelsInView(pageNumber,&ptlPDFUpperLeft.x);

   long reportedY = 0L;

   pIPDFiumControl -> get_PDFPageYPixelsInView(pageNumber,&reportedY);

   ptlPDFUpperLeft.y = max(0,reportedY);

   long cx,cy;

   pIPDFiumControl -> get_PDFPageWidthPixels(pageNumber,&cx);
   pIPDFiumControl -> get_PDFPageHeightPixels(pageNumber,&cy);

   //
   //NTC: 10-09-2017: I am not sure what the "2" is, MSHTML seems to report that it's window is
   // 2 pixels in and down from the top of it's host window. I can find nothing related to 
   // window styles (WS_EX_CLIENTEDGE, for example), that is accounting for these 2 pixels.
   //
#if 1
   rcPDFPagePixels.left = ptlPDFUpperLeft.x + 2;
   rcPDFPagePixels.top = reportedY + 2;
#else
   rcPDFPagePixels.left = ptlPDFUpperLeft.x;
   rcPDFPagePixels.top = ptlPDFUpperLeft.y;
#endif
   rcPDFPagePixels.right = ptlPDFUpperLeft.x + cx;
   rcPDFPagePixels.bottom = reportedY + 2 + cy;

   //
   //NTC: 10-12-2017: The ..InView rect is that portion of the page that is visible in the current window.
   // use the ..InView rect to check whether the mouse is over the page.
   //
   // The PDFPagePixels rect may reflect that the top of the document is above the top of the view window
   // and therefore may have a negative "top" value.
   //
   rcPDFPagePixelsInView.left = rcPDFPagePixels.left;
   rcPDFPagePixelsInView.top = ptlPDFUpperLeft.y + 2;

   rcPDFPagePixelsInView.right = rcPDFPagePixels.right;
   rcPDFPagePixelsInView.bottom = rcPDFPagePixels.bottom;

   scaleToPixels = (double)cy / (double)(pParent -> PDFPageHeight());

   return;
   }

   void templateDocument::tdUI::resolveCurrentPageNumber(POINTL *pPtlMouse) {
   pIPDFiumControl -> get_PDFPageNumberAtY(pPtlMouse -> y,0,&currentPageNumber);
   findPDFArea(currentPageNumber);
   return;
   }

   void templateDocument::tdUI::convertToPoints(RECT *pTarget) {

   pTarget -> left -= rcPDFPagePixels.left;
   pTarget -> right -= rcPDFPagePixels.left;

   pTarget -> left = (long)((double)pTarget -> left / scaleToPixels);
   pTarget -> right = (long)((double)pTarget -> right / scaleToPixels);

   pTarget -> top -= rcPDFPagePixels.top;
   pTarget -> bottom -= rcPDFPagePixels.top;

   pTarget -> top = pParent -> PDFPageHeight() - (long)((double)pTarget -> top / scaleToPixels);
   pTarget -> bottom = pParent -> PDFPageHeight() - (long)((double)pTarget -> bottom / scaleToPixels);

   return;
   }


   void templateDocument::tdUI::convertToPointsOnPage(long pageNumber,RECT *pTarget) {

   RECT rcPDFPage = {0};

   long x,y;

   pIPDFiumControl -> get_PDFPageXPixels(pageNumber,&x);
   pIPDFiumControl -> get_PDFPageYPixels(pageNumber,&y);

   long cx,cy;

   pIPDFiumControl -> get_PDFPageWidthPixels(pageNumber,&cx);
   pIPDFiumControl -> get_PDFPageHeightPixels(pageNumber,&cy);

   //
   //NTC: 10-09-2017: I am not sure what the "2" is, MSHTML seems to report that it's window is
   // 2 pixels in and down from the top of it's host window. I can find nothing related to 
   // window styles (WS_EX_CLIENTEDGE, for example), that is accounting for these 2 pixels.
   //
#if 1
   rcPDFPage.left = x + 2;
   rcPDFPage.top = y + 2;
#else
   rcPDFPage.left = x;
   rcPDFPage.top = y;
#endif
   rcPDFPage.right = rcPDFPage.left + cx;
   rcPDFPage.bottom = rcPDFPage.top + cy;

   pTarget -> left -= rcPDFPage.left;
   pTarget -> right -= rcPDFPage.left;

   pTarget -> left = (long)((double)pTarget -> left / scaleToPixels);
   pTarget -> right = (long)((double)pTarget -> right / scaleToPixels);

   pTarget -> top -= rcPDFPage.top;
   pTarget -> bottom -= rcPDFPage.top;

   pTarget -> top = pParent -> PDFPageHeight() - (long)((double)pTarget -> top / scaleToPixels);
   pTarget -> bottom = pParent -> PDFPageHeight() - (long)((double)pTarget -> bottom / scaleToPixels);

   return;
   }

   void templateDocument::tdUI::convertToPoints(POINTL *pTarget) {
   pTarget -> x -= rcPDFPagePixels.left;
   pTarget -> y -= rcPDFPagePixels.top;
   pTarget -> x = (long)((double)pTarget -> x / scaleToPixels);
   pTarget -> y = pParent -> PDFPageHeight() - (long)((double)pTarget -> y / scaleToPixels);
   return;
   }


   void templateDocument::tdUI::convertToPixels(RECT *pTarget) {
   pTarget -> left = rcPDFPagePixels.left + (long)((double)pTarget -> left * scaleToPixels);
   pTarget -> right = rcPDFPagePixels.left + (long)((double)pTarget -> right * scaleToPixels);
   pTarget -> top = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> top) * scaleToPixels);
   pTarget -> bottom = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> bottom) * scaleToPixels);
   return;
   }


   void templateDocument::tdUI::convertToPanePixels(long pageNumber,RECT *pTarget) {

   if ( 0 == pageNumber )
      pageNumber = currentPageNumber;

   pIPDFiumControl -> ConvertPointsToScrollPanePixels(pageNumber,pTarget);

   long cx = pTarget -> right - pTarget -> left;
   long cy = pTarget -> bottom - pTarget -> top;

   pTarget -> top += rcVellumPixels.top;
   pTarget -> bottom = pTarget -> top + cy;

   return;
   }

   void templateDocument::tdUI::convertToClippedPanePixels(long pageNumber,RECT *pTarget) {

   convertToPanePixels(pageNumber,pTarget);

   pTarget -> left = max(pTarget -> left,rcPDFPagePixels.left);
   pTarget -> right = min(pTarget -> right,rcPDFPagePixels.right);
   pTarget -> top = max(pTarget -> top,rcPDFPagePixels.top);
   pTarget -> bottom = min(pTarget -> bottom,rcPDFPagePixels.bottom);

   return;
   }

   void templateDocument::tdUI::convertToPixels(POINTL *pTarget) {
   pTarget -> x = rcPDFPagePixels.left + (long)((double)pTarget -> x * scaleToPixels);
   pTarget -> y = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> y) * scaleToPixels);
   return;
   }

   bool templateDocument::tdUI::isDocumentRendered() {

   if ( 0 == rcVellumPixels.left && 0 == rcVellumPixels.right )
      return false;

   if ( 0 == ptlPDFUpperLeft.x && 0 == ptlPDFUpperLeft.y )
      return false;

   if ( ! IsWindowVisible(hwndPane) )
      return false;

   return true;
   }
