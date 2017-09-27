
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
      hwndHTMLHost(NULL),
      hwndPane(NULL),
      hwndScroll(NULL),
      hwndVellum(NULL),

      scaleToPixelsX(0.0),
      scaleToPixelsY(0.0),

      cxHTML(0L),
      cyHTML(0L),

      hdcPDF(NULL),
      hbmPDF(NULL),

      needsImageRegenerated(false),

      refCount(0)

   {
   currentPageNumber = -1L;
   pParent = pp;
   memset(&scrollInfo,0,sizeof(SCROLLINFO));
   memset(&rcPDFPagePixels,0,sizeof(RECT));
   memset(&ptlPDFUpperLeft,0,sizeof(POINTL));
   memset(&rcHTML,0,sizeof(RECT));
   memset(&rcPageParentCoordinates,0,sizeof(RECT));
   return;
   }


   templateDocument::tdUI::~tdUI() {

   if ( hwndPane ) {
      DestroyWindow(hwndScroll);
      DestroyWindow(hwndHTMLHost);
      DestroyWindow(hwndPane);
      DestroyWindow(hwndVellum);
   }

   if ( pIPDFiumControl ) 
      releasePDFiumControl();

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

      gClass.lpfnWndProc = templateDocument::tdUI::pdfDocumentRenderer;
      gClass.lpszClassName = "pdfDocument";

      RegisterClass(&gClass);

      gClass.lpfnWndProc = templateDocument::tdUI::vellumHandler;
      gClass.lpszClassName = "vellum";

      RegisterClass(&gClass);

   }

   hwndPane = CreateWindowEx(WS_EX_CLIENTEDGE,"paneHandler","",WS_CHILD | WS_VISIBLE,parentOffsetX,parentOffsetY,0,0,hwndParent,NULL,hModule,(void *)this);
   hwndHTMLHost = CreateWindowEx(0,"pdfDocument","",WS_CHILD | WS_VISIBLE,0,0,0,0,hwndPane,NULL,hModule,(void *)this);
   hwndScroll = CreateWindowEx(WS_EX_RIGHTSCROLLBAR,"ScrollBar","",WS_CHILD | WS_VISIBLE | SBS_VERT,0,0,0,0,hwndPane,NULL,hModule,NULL);
   hwndVellum = CreateWindowEx(0L,"vellum","",WS_CHILD | WS_VISIBLE,0,0,0,0,hwndPane,NULL,hModule,(void *)this);

   if ( ! pParent -> pIPdfDocument )
      EnableWindow(hwndScroll,FALSE);
   else
      EnableWindow(hwndScroll,TRUE);

   SetScrollInfo(hwndScroll,SB_CTL,&scrollInfo,TRUE);

   if ( ! pParent -> pszDocumentName ) 
      return;

   setupPDFiumControl();

   size();

   setURL(pParent -> pszDocumentName);

   return;
   }


   void templateDocument::tdUI::setupPDFiumControl() {

   if ( pIOleInPlaceFrame_HTML_Host )
      return;

   pIOleInPlaceFrame_HTML_Host = new _IOleInPlaceFrame(this,hwndHTMLHost);
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
      pIConnectionPointContainer -> Release();
   }

   pIUnknown -> Release();
   
   return;
   }


   void templateDocument::tdUI::setURL(char *pszDocument) {

   BSTR bstrURL = SysAllocStringLen(NULL,MAX_PATH);

   MultiByteToWideChar(CP_ACP,0,pszDocument,-1,bstrURL,MAX_PATH);

   LOGBRUSH logBrush;

   GetObject(GetSysColorBrush(COLOR_WINDOW + 1),sizeof(LOGBRUSH),&logBrush);

   RECT rcHost = {0};

   GetWindowRect(hwndHTMLHost,&rcHost);

   pIPDFiumControl -> DisplayDocument(logBrush.lbColor,rcHost.right - rcHost.left - 64,rcHost.bottom - rcHost.top - 32,bstrURL,0);

   SysFreeString(bstrURL);

   pIOleObject_HTML -> DoVerb(OLEIVERB_SHOW,NULL,pIOleClientSite_HTML_Host,0,hwndHTMLHost,NULL);

   return;
   }


   void templateDocument::tdUI::releasePDFiumControl() {

   pIOleObject_HTML -> Close(OLECLOSE_NOSAVE);

   pIOleObject_HTML -> SetClientSite(NULL);

   pIOleInPlaceObject_HTML -> Release();

   if ( pIOleInPlaceActiveObject_HTML )
      pIOleInPlaceActiveObject_HTML -> Release();

   pIOleInPlaceActiveObject_HTML = NULL;

   pIOleObject_HTML -> Release();

   pIOleObject_HTML = NULL;

   pIPDFiumControl -> Cleanup();

   pIPDFiumControl -> Release();

   pIPDFiumControl = NULL;
   return;
   }


   HDC templateDocument::tdUI::pdfDC() {
   if ( ! hdcPDF ) {
      if ( hwndVellum ) 
         ShowWindow(hwndVellum,SW_HIDE);
      SendMessage(hwndPane,WM_GENERATE_BITMAP,0,0);
      if ( hwndVellum )
         ShowWindow(hwndVellum,SW_SHOW);
   }
   return hdcPDF; 
   }


   void templateDocument::tdUI::releaseView() {
   pParent -> releaseView(hwndParent);
   return;
   }


   void templateDocument::tdUI::resetScrollbar(long pageCount) {

   currentPageNumber = 1L;
   scrollInfo.cbSize = sizeof(SCROLLINFO);
   currentPageNumber = 1L;
   scrollInfo.nPage = 1;
   scrollInfo.nPos = 1;
   scrollInfo.nMin = 1;
   scrollInfo.nMax = pageCount;
   scrollInfo.fMask = SIF_POS | SIF_PAGE | SIF_RANGE;

   if ( pageCount ) {
      SetScrollInfo(hwndScroll,SB_CTL,&scrollInfo,TRUE);
      EnableWindow(hwndScroll,TRUE);
   } else
      EnableWindow(hwndScroll,FALSE);

   RESET_PAGE

   return;
   }


   void templateDocument::tdUI::size() {

   RECT rcParent = {0};

   GetWindowRect(hwndParent,&rcParent);

   double aspectRatio = (double)pParent -> PDFPageWidth() / (double)pParent -> PDFPageHeight();

   cxHTML = rcParent.right - rcParent.left - 2 * parentOffsetX - GetSystemMetrics(SM_CXVSCROLL);
   cyHTML = (long)((double)cxHTML / aspectRatio);
   long cyMaxHTML = rcParent.bottom - rcParent.top - parentOffsetY - parentOffsetX;

   if ( cyHTML > cyMaxHTML ) {
      cyHTML = rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY;
      cxHTML = (long)((double)cyHTML * aspectRatio);
   }

   long x = ((rcParent.right - rcParent.left) - (cxHTML + GetSystemMetrics(SM_CXVSCROLL) ) ) / 2;
   long y = parentOffsetY + ((rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY) - cyHTML ) / 2;

   SetWindowPos(hwndPane,HWND_TOP,x,y,cxHTML + GetSystemMetrics(SM_CXVSCROLL),cyHTML,0L);

   RECT rcAdjust = {0};

   AdjustWindowRectEx(&rcAdjust,(DWORD)GetWindowLongPtr(hwndPane,GWL_STYLE),FALSE,(DWORD)GetWindowLongPtr(hwndPane,GWL_EXSTYLE));

   cxHTML -= (rcAdjust.right - rcAdjust.left);
   cyHTML -= (rcAdjust.bottom - rcAdjust.top);

   rcHTML.left = 0;
   rcHTML.top = 0;
   rcHTML.right = cxHTML;
   rcHTML.bottom = cyHTML;

   SetWindowPos(hwndHTMLHost,HWND_TOP,0,0,cxHTML,cyHTML,0L);

   SetWindowPos(hwndScroll,HWND_TOP,cxHTML,0,GetSystemMetrics(SM_CXVSCROLL),cyHTML,0L);

   SetWindowPos(hwndVellum,HWND_TOP,0,0,cxHTML,cyHTML,0L);

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

   if ( pDocument && pDocument -> hwndParent && WM_MOUSEFIRST <= msg && WM_MOUSELAST >= msg ) 
      return SendMessage(pDocument -> hwndParent,msg,wParam,MAKELPARAM(LOWORD(lParam) + pDocument -> rcPageParentCoordinates.left,HIWORD(lParam) + pDocument -> rcPageParentCoordinates.top));

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
      
      if ( ! pDocument -> needsImageRegenerated )
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

      ReleaseDC(pDocument -> hwndHTMLHost,hdcSource);

      pDocument -> needsImageRegenerated = false;

      }
      break;

   case WM_TIMER:
      KillTimer(hwnd,TIMER_ID_PAINT);
      pDocument -> findPDFArea();
      SendMessage(pDocument -> hwndPane,WM_GENERATE_BITMAP,0L,0L);
      if ( pDocument -> pClientPaint ) {
         HDC hdc = GetDC(hwnd);
         pDocument -> pClientPaint(hdc,pDocument);
         ReleaseDC(hwnd,hdc);
      }
      break;

   case WM_ERASEBKGND:
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      pDocument -> needsImageRegenerated = true;
      break;

   case WM_PAINT: {
      PAINTSTRUCT ps;
      BeginPaint(hwnd,&ps);
      EndPaint(hwnd,&ps);
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      }
      return LRESULT(0);

   case WM_VSCROLL: {

      pDocument -> scrollInfo.cbSize = sizeof(SCROLLINFO);

      pDocument -> scrollInfo.fMask = SIF_ALL;

      GetScrollInfo(pDocument -> hwndScroll,SB_CTL,&pDocument -> scrollInfo);

      switch ( LOWORD(wParam) ) {
      case SB_LINEDOWN:
      case SB_PAGEDOWN:
         pDocument -> scrollInfo.nPos += 1;
         break;

      case SB_LINEUP:
      case SB_PAGEUP:
         pDocument -> scrollInfo.nPos -= 1;
         break;

      case SB_THUMBPOSITION:
         pDocument -> scrollInfo.nPos = HIWORD(wParam);
         break;

      default:
         break;
      }

      SetScrollInfo(pDocument -> hwndScroll,SB_CTL,&pDocument -> scrollInfo,TRUE);

      GetScrollInfo(pDocument -> hwndScroll,SB_CTL,&pDocument -> scrollInfo);

      if ( ! ( pDocument -> currentPageNumber == pDocument -> scrollInfo.nPos ) ) {
         RESET_PAGE_PTR(pDocument)
      }

      pDocument -> currentPageNumber = pDocument -> scrollInfo.nPos;

      pDocument -> needsImageRegenerated = true;

      if ( pDocument -> pIPDFiumControl )
         pDocument -> pIPDFiumControl -> GoToPage(pDocument -> currentPageNumber); 

      InvalidateRect(pDocument -> hwndPane,NULL,TRUE);

      UpdateWindow(pDocument -> hwndPane);

      SendMessage(hwnd,WM_ERASEBKGND,0L,0L);

      }
      break;

   }

   return DefWindowProc(hwnd,msg,wParam,lParam);
   }


   LRESULT CALLBACK templateDocument::tdUI::pdfDocumentRenderer(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   templateDocument::tdUI *pDocument = (templateDocument::tdUI *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_CREATE: {
      CREATESTRUCT *pc = reinterpret_cast<CREATESTRUCT *>(lParam);
      pDocument = reinterpret_cast<templateDocument::tdUI *>(pc -> lpCreateParams);
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)pDocument);
      }
      return (LRESULT)0;

   case WM_TIMER:
      KillTimer(hwnd,TIMER_ID_PAINT);
      pDocument -> findPDFArea();
      SendMessage(pDocument -> hwndPane,WM_GENERATE_BITMAP,0L,0L);
      if ( pDocument -> pClientPaint ) {
         HDC hdc = GetDC(hwnd);
         pDocument -> pClientPaint(hdc,pDocument);
         ReleaseDC(hwnd,hdc);
      }
      break;

   case WM_PAINT: {
      PAINTSTRUCT ps;
      BeginPaint(hwnd,&ps);
//HBRUSH hb = CreateSolidBrush(RGB(0,0,255));
//FillRect(ps.hdc,&ps.rcPaint,hb);
      EndPaint(hwnd,&ps);
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
      }
      return LRESULT(0);

   default:
      break;
   }

   return DefWindowProc(hwnd,msg,wParam,lParam);
   }


   LRESULT CALLBACK templateDocument::tdUI::vellumHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   templateDocument::tdUI *pDocument = (templateDocument::tdUI *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   if ( pDocument && pDocument -> hwndParent && WM_MOUSEFIRST <= msg && WM_MOUSELAST >= msg ) 
      return SendMessage(pDocument -> hwndParent,msg,wParam,MAKELPARAM(LOWORD(lParam) + pDocument -> rcPageParentCoordinates.left,HIWORD(lParam) + pDocument -> rcPageParentCoordinates.top));

   switch ( msg ) {

   case WM_CREATE: {
      CREATESTRUCT *pc = reinterpret_cast<CREATESTRUCT *>(lParam);
      pDocument = reinterpret_cast<templateDocument::tdUI *>(pc -> lpCreateParams);
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)pDocument);
      }
      return (LRESULT)0;

   case WM_TIMER:
      KillTimer(hwnd,TIMER_ID_PAINT);
      pDocument -> findPDFArea();
      SendMessage(pDocument -> hwndPane,WM_GENERATE_BITMAP,0L,0L);
      if ( pDocument -> pClientPaint ) {
         HDC hdc = GetDC(hwnd);
         pDocument -> pClientPaint(hdc,pDocument);
         ReleaseDC(hwnd,hdc);
      }
      break;

   case WM_PAINT: {
      PAINTSTRUCT ps;
      BeginPaint(hwnd,&ps);
//HBRUSH hb = CreateSolidBrush(RGB(0,255,0));
//FillRect(ps.hdc,&ps.rcPaint,hb);
      EndPaint(hwnd,&ps);
      SetTimer(hwnd,TIMER_ID_PAINT,TIMER_PAINT_DURATION,NULL);
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



   void templateDocument::tdUI::findPDFArea() {

   pIPDFiumControl -> get_PDFPageXPixelsInView(0,&ptlPDFUpperLeft.x);
   pIPDFiumControl -> get_PDFPageYPixelsInView(0,&ptlPDFUpperLeft.y);

   long cx,cy;

   pIPDFiumControl -> get_PDFPageWidthPixels(0,&cx);
   pIPDFiumControl -> get_PDFPageHeightPixels(0,&cy);

   rcPDFPagePixels.left = ptlPDFUpperLeft.x;
   rcPDFPagePixels.top = ptlPDFUpperLeft.y;
   rcPDFPagePixels.right = ptlPDFUpperLeft.x + cx;
   rcPDFPagePixels.bottom = ptlPDFUpperLeft.y + cy;

   scaleToPixelsX = (double)cx / (double)(pParent -> PDFPageWidth());
   scaleToPixelsY = (double)cy / (double)(pParent -> PDFPageHeight());

   return;
   }


   void templateDocument::tdUI::convertToPoints(RECT *pTarget) {

   pTarget -> left -= rcPDFPagePixels.left;
   pTarget -> right -= rcPDFPagePixels.left;

   pTarget -> left = (long)((double)pTarget -> left / scaleToPixelsX);
   pTarget -> right = (long)((double)pTarget -> right / scaleToPixelsX);

   pTarget -> top -= rcPDFPagePixels.top;
   pTarget -> bottom -= rcPDFPagePixels.top;

   pTarget -> top = pParent -> PDFPageHeight() - (long)((double)pTarget -> top / scaleToPixelsY);
   pTarget -> bottom = pParent -> PDFPageHeight() - (long)((double)pTarget -> bottom / scaleToPixelsY);

   return;
   }


   void templateDocument::tdUI::convertToPoints(POINTL *pTarget) {
   pTarget -> x -= rcPDFPagePixels.left;
   pTarget -> y -= rcPDFPagePixels.top;
   pTarget -> x = (long)((double)pTarget -> x / scaleToPixelsX);
   pTarget -> y = pParent -> PDFPageHeight() - (long)((double)pTarget -> y / scaleToPixelsY);
   return;
   }


   void templateDocument::tdUI::convertToPixels(RECT *pTarget) {
   pTarget -> left = rcPDFPagePixels.left + (long)((double)pTarget -> left * scaleToPixelsX);
   pTarget -> right = rcPDFPagePixels.left + (long)((double)pTarget -> right * scaleToPixelsX);
   pTarget -> top = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> top) * scaleToPixelsY);
   pTarget -> bottom = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> bottom) * scaleToPixelsY);

   return;
   }

   void templateDocument::tdUI::convertToPixels(POINTL *pTarget) {
   pTarget -> x = rcPDFPagePixels.left + (long)((double)pTarget -> x * scaleToPixelsX);
   pTarget -> y = rcPDFPagePixels.top + (long)((double)(pParent -> PDFPageHeight() - pTarget -> y) * scaleToPixelsY);
   return;
   }
