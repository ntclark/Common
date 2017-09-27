
#include "utilities.h"

#define SVC_ERROR                        ((DWORD)0xC0020001L)
#define SVC_INFORMATIONAL                ((DWORD)0x40020002L)

#define NEAR_WHITE_RED     192
#define NEAR_WHITE_GREEN   192
#define NEAR_WHITE_BLUE    192

   static COLORREF nearWhite = RGB(NEAR_WHITE_RED,NEAR_WHITE_GREEN,NEAR_WHITE_BLUE);

#if 0

   long IsBottomBandPresent(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar) {

   if ( ! hwndHTMLHost )
      return 0L;

   RECT rectDocument;

   GetClientRect(hwndHTMLHost,&rectDocument);

   HDC hdc = GetDC(hwndHTMLHost);

   long bottomRow = rectDocument.bottom - rectDocument.top - 2;

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      bottomRow -= GetSystemMetrics(SM_CYHSCROLL);

   COLORREF crBackground = GetPixel(hdc,2,bottomRow);

   if ( crBackground > nearWhite )
      return 0L;

   long colEnd = 3 * (rectDocument.right - rectDocument.left) / 4;

   for ( long col = 2; col < colEnd; col++ ) {
      if ( crBackground != GetPixel(hdc,col,bottomRow) ) {
         ReleaseDC(hwndHTMLHost,hdc);
         return 0;
      }
   }

   ReleaseDC(hwndHTMLHost,hdc);

   return 1;
   }


   long IsTopBandPresent(HWND hwndHTMLHost,HWND hwndPDFToolBar) {

   if ( ! hwndHTMLHost )
      return 0L;

   long rowStart = 1;

   if ( hwndPDFToolBar && IsWindowVisible(hwndPDFToolBar) ) {
      RECT rcBar;
      GetWindowRect(hwndPDFToolBar,&rcBar);
      rowStart += rcBar.bottom - rcBar.top;
      rowStart++;
   } 

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF crBackground = GetPixel(hdc,0,rowStart);

   if ( crBackground > nearWhite )
      return 0L;

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long colEnd = 3 * (rectDocument.right - rectDocument.left) / 4;

   for ( long col = 1; col < colEnd; col++ ) {
      if ( crBackground != GetPixel(hdc,col,rowStart) ) {
         ReleaseDC(hwndHTMLHost,hdc);
         return 0;
      }
   }

   ReleaseDC(hwndHTMLHost,hdc);

   return 1;
   }


   long MeasureDocumentLeftBand(HWND hwndHTMLHost) {

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   long row = cy /2;
   long col = 1;

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF backgroundColor = GetPixel(hdc,col,row);
   COLORREF cr;

   while ( col < cx ) {

      cr = GetPixel(hdc,col,row);

      BYTE r = GetRValue(cr);
      BYTE g = GetGValue(cr);
      BYTE b = GetBValue(cr);

      if ( r > NEAR_WHITE_RED && g > NEAR_WHITE_GREEN && b > NEAR_WHITE_BLUE )
         break;

      col++;

   }

   if ( col == cx )
      col = 0;

   ReleaseDC(hwndHTMLHost,hdc);
   return col;
   }


   long MeasureDocumentTopBand(HWND hwndHTMLHost) {

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   long row = 1;
   long col = cx / 2;

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF backgroundColor = GetPixel(hdc,col,row);
   COLORREF cr;

   while ( row < cy ) {

      cr = GetPixel(hdc,col,row);

      BYTE r = GetRValue(cr);
      BYTE g = GetGValue(cr);
      BYTE b = GetBValue(cr);

      if ( r > NEAR_WHITE_RED && g > NEAR_WHITE_GREEN && b > NEAR_WHITE_BLUE )
         break;

      row++;

   }

   if ( row == cy )
      row = 0;

   ReleaseDC(hwndHTMLHost,hdc);
   return row;
   }

   long MeasureDocumentRightBand(HWND hwndHTMLHost,HWND hwndPDFVerticalScrollBar) {

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   if ( hwndPDFVerticalScrollBar && IsWindowVisible(hwndPDFVerticalScrollBar) )
      cx -= GetSystemMetrics(SM_CXVSCROLL);

   long row = cy /2;
   long col = cx - 1;

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF backgroundColor = GetPixel(hdc,col,row);
   COLORREF cr;

   while ( col ) {

      cr = GetPixel(hdc,col,row);

      BYTE r = GetRValue(cr);
      BYTE g = GetGValue(cr);
      BYTE b = GetBValue(cr);

      if ( r > NEAR_WHITE_RED && g > NEAR_WHITE_GREEN && b > NEAR_WHITE_BLUE )
         break;

      col--;

   }

   if ( ! col )
      col = cx;

   ReleaseDC(hwndHTMLHost,hdc);
   return cx - col;
   }

   long MeasureDocumentBottomBand(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar) {

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      cy -= GetSystemMetrics(SM_CYHSCROLL);

   long row = cy - 1;
   long col = cx / 2;

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF backgroundColor = GetPixel(hdc,col,row);
   COLORREF cr;

   while ( row ) {

      cr = GetPixel(hdc,col,row);

      BYTE r = GetRValue(cr);
      BYTE g = GetGValue(cr);
      BYTE b = GetBValue(cr);

      if ( r > NEAR_WHITE_RED && g > NEAR_WHITE_GREEN && b > NEAR_WHITE_BLUE )
         break;

      row--;

   }

   if ( ! row )
      row = cy;

   ReleaseDC(hwndHTMLHost,hdc);
   return cy - row;
   }


   long FindDocumentUpperLeftCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFToolBar,POINTL *pResult) {

   pResult -> x = 0;
   pResult -> y = 0;

   if ( ! hwndHTMLHost )
      return 0L;

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   long startRow = 0;

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      cy -= GetSystemMetrics(SM_CYHSCROLL);//scrollBarHeight;

   if ( hwndPDFToolBar && IsWindowVisible(hwndPDFToolBar) ) {
      RECT rcBar;
      GetWindowRect(hwndPDFToolBar,&rcBar);
      cy -= rcBar.bottom - rcBar.top;
      startRow += rcBar.bottom - rcBar.top;
   }

   cy -= 4;

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF cr = RGB(0,0,0);

   long col = 0;
   long row = startRow;

   long initialStartRow = startRow;

   while ( row < cy ) {

      col = 0;

      while ( col < cx && row < cy ) {

         cr = GetPixel(hdc,col,row);

         if ( cr > nearWhite ) {
            long priorCol = col - 1;
            long priorRow = row - 1;
            COLORREF priorColor = GetPixel(hdc,priorCol,priorRow);
            while ( priorRow < cy ) {
               if ( ! priorColor == GetPixel(hdc,priorCol,priorRow) )
                  break;
               priorRow++;
            }
            if ( priorRow == cy )
               break;
         }

         col++;
         row++;

      }

      if ( col < cx )
         break;

      startRow++;

      row = startRow;

   }

   COLORREF foundColor = cr;

   while ( row > initialStartRow && GetPixel(hdc,col,row) == foundColor )
      row--;
   row++;
   while ( col && ( GetPixel(hdc,col,row) == foundColor ) )
      col--;
   col++;

   pResult -> x = col;
   pResult -> y = row;

   if ( ! IsTopBandPresent(hwndHTMLHost,hwndPDFToolBar) )
      pResult -> y = initialStartRow;

   ReleaseDC(hwndHTMLHost,hdc);

   return 0;
   }


   long FindDocumentUpperRightCorner(HWND hwndHTMLHost,HWND hwndPDFVerticalScrollBar,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFToolBar,POINTL *pResult) {

   pResult -> x = 0;
   pResult -> y = 0;

   if ( ! hwndHTMLHost )
      return 0L;

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   long startRow = 1;

   if ( hwndPDFVerticalScrollBar && IsWindowVisible(hwndPDFVerticalScrollBar) )
      cx -= GetSystemMetrics(SM_CXVSCROLL);

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      cy -= GetSystemMetrics(SM_CYHSCROLL);//scrollBarHeight;

   if ( hwndPDFToolBar && IsWindowVisible(hwndPDFToolBar) ) {
      RECT rcBar;
      GetWindowRect(hwndPDFToolBar,&rcBar);
      cy -= rcBar.bottom - rcBar.top;
      startRow += rcBar.bottom - rcBar.top;
   }

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF cr = RGB(0,0,0);

   long col;
   long row = startRow;
   long initialStartRow = startRow;

   while ( row < cy ) {

//      col = cx - 32;
      col = cx - 1;

      while ( col > 0 && row < cy ) {

         cr = GetPixel(hdc,col,row);

         BYTE r = GetRValue(cr);
         BYTE g = GetGValue(cr);
         BYTE b = GetBValue(cr);

         if ( r > NEAR_WHITE_RED && g > NEAR_WHITE_GREEN && b > NEAR_WHITE_BLUE )
            break;

         col--;
         row++;

      }

      if ( col > 0 )
         break;

      startRow++;

      row = startRow;

   }

   COLORREF foundColor = cr;

   while ( row > initialStartRow && GetPixel(hdc,col,row) == foundColor )
      row--;
   row++;
   while ( col < cx && GetPixel(hdc,col,row) == foundColor )
      col++;
   col--;

   pResult -> x = col;
   pResult -> y = row;

   ReleaseDC(hwndHTMLHost,hdc);

   if ( ! IsTopBandPresent(hwndHTMLHost,hwndPDFToolBar) )
      pResult -> y = initialStartRow;

   return 0;
   }



   long FindDocumentLowerRightCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFVerticalScrollBar,POINTL *pResult) {

   pResult -> x = 0;
   pResult -> y = 0;

   if ( ! hwndHTMLHost )
      return 0L;

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      cy -= GetSystemMetrics(SM_CYHSCROLL);

   if ( hwndPDFVerticalScrollBar && IsWindowVisible(hwndPDFVerticalScrollBar) )
      cx -= GetSystemMetrics(SM_CXVSCROLL);

   HDC hdc = GetDC(hwndHTMLHost);

   COLORREF cr = RGB(0,0,0);

   long y = cy - 2;
   long x = cx - 2;

   long startRow = y;

   while ( y > 0 ) {

      x = cx - 2;

      while ( x > 0 && y > 0 ) {

         cr = GetPixel(hdc,x,y);

         if ( cr > nearWhite )
            break;

         x--;
         y--;

      }

      if ( x > 0 )
         break;

      startRow--;

      y = startRow;

   }

   COLORREF foundColor = cr;

   while ( y < cy && GetPixel(hdc,x,y) == foundColor )
      y++;
   y--;

   while ( x < cx && GetPixel(hdc,x,y) == foundColor )
      x++;
   x--;

   pResult -> x = x;
   pResult -> y = y;

   if ( ! IsBottomBandPresent(hwndHTMLHost,hwndPDFHorizontalScrollBar) )
      pResult -> y = cy;

   ReleaseDC(hwndHTMLHost,hdc);

   return 0L;
   }


   long FindDocumentLowerLeftCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,POINTL *pResult) {

   pResult -> x = 0;
   pResult -> y = 0;

   if ( ! hwndHTMLHost )
      return 0L;

   RECT rectDocument;

   GetWindowRect(hwndHTMLHost,&rectDocument);

   long cx = rectDocument.right - rectDocument.left;
   long cy = rectDocument.bottom - rectDocument.top;

   if ( hwndPDFHorizontalScrollBar && IsWindowVisible(hwndPDFHorizontalScrollBar) )
      cy -= GetSystemMetrics(SM_CYHSCROLL);

   HDC hdc = GetDC(hwndHTMLHost);

   long row = cy;
   long col = 2;

   COLORREF cr = RGB(0,0,0);

   row = cy - 2;

   long startRow = cy;

   while ( row > 0 ) {

      col = 2;

      while ( col < cx && row > 0 ) {

         cr = GetPixel(hdc,col,row);

         if ( cr > nearWhite )
            break;

         col++;
         row--;

      }

      if ( col < cx )
         break;

      startRow--;

      row = startRow;

   }

   COLORREF foundColor = cr;

   while ( row < cy && GetPixel(hdc,col,row) == foundColor )
      row++;
   row--;

   while ( col && GetPixel(hdc,col,row) == foundColor )
      col--;
   col++;

   pResult -> x = col;
   pResult -> y = row;

   if ( ! IsBottomBandPresent(hwndHTMLHost,hwndPDFHorizontalScrollBar) )
      pResult -> y = cy;

   ReleaseDC(hwndHTMLHost,hdc);

   return 0;

   }

#endif

   static HWND hwndFoundChild;
   static LONG_PTR findExStyle;
   static LONG_PTR findStyle;

   HWND APIENTRY FindWindowWithStyle(HWND hwndParent,LONG_PTR theStyle) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithStyle,theStyle);
   return hwndFoundChild;
   }

   HWND APIENTRY FindWindowWithExStyle(HWND hwndParent,LONG_PTR theStyle) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithExStyle,theStyle);
   return hwndFoundChild;
   }

   HWND APIENTRY FindWindowWithText(HWND hwndParent,char* theText) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChild,(LPARAM)theText);
   return hwndFoundChild;
   }
 
   HWND APIENTRY FindWindowContainingText(HWND hwndParent,char* theText) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildContainingText,(LPARAM)theText);
   return hwndFoundChild;
   }
 

   HWND APIENTRY FindWindowContainingInteger(HWND hwndParent) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildContainingInteger,0L);
   return hwndFoundChild;
   }


   HWND APIENTRY FindWindowWithClass(HWND hwndParent,char* theClass) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithClass,(LPARAM)theClass);
   return hwndFoundChild;
   }



   HWND APIENTRY FindHorizontalWindowWithClass(HWND hwndParent,char* theClass) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findHorizontalChildWithClass,(LPARAM)theClass);
   return hwndFoundChild;
   }


   HWND APIENTRY FindWindowWithClassAndStyle(HWND hwndParent,char* theClass,LONG_PTR es) {
   hwndFoundChild = NULL;
   findStyle = es;
   EnumChildWindows(hwndParent,findChildWithClassAndStyle,(LPARAM)theClass);
   return hwndFoundChild;
   }


   BOOL CALLBACK findChild(HWND hwndTest,LPARAM lParam) {

   char *pszTest = (char *)lParam;

   long n = (long)SendMessage(hwndTest,WM_GETTEXTLENGTH,0L,0L);

   if ( 0 == n )
      return TRUE;

   if ( 0 == n || n != strlen(pszTest) ) {
      EnumChildWindows(hwndTest,findChild,lParam);
      if ( hwndFoundChild )
         return FALSE;
      return TRUE;
   }
      
   char szThisText[64];

   SendMessage(hwndTest,WM_GETTEXT,64,(LPARAM)szThisText);

//   GetWindowText(hwndTest,szThisText,64);

   if ( 0 == _stricmp(pszTest,szThisText) ) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }

   EnumChildWindows(hwndTest,findChild,lParam);

   if ( hwndFoundChild )
      return FALSE;

   return TRUE;
   }


   BOOL CALLBACK findChildContainingText(HWND hwndTest,LPARAM lParam) {

   char *pszTest = (char *)lParam;

   long n = (long)SendMessage(hwndTest,WM_GETTEXTLENGTH,0L,0L);

   if ( 0 == n )
      return TRUE;

   char szText[32];

   SendMessage(hwndTest,WM_GETTEXT,min(n,32),(LPARAM)szText);

   if ( strstr(szText,pszTest) ) {
       hwndFoundChild = hwndTest;
       return FALSE;
   }

   GetWindowText(hwndTest,szText,min(n,32));

   if ( strstr(szText,pszTest) ) {
       hwndFoundChild = hwndTest;
       return FALSE;
   }

   EnumChildWindows(hwndTest,findChildContainingText,lParam);

   if ( hwndFoundChild )
      return FALSE;

   return TRUE;
   }


   BOOL CALLBACK findChildContainingInteger(HWND hwndTest,LPARAM lParam) {
   char szText[32];
   GetWindowText(hwndTest,szText,32);
   if ( strlen(szText) < 1 ) return TRUE;
   char *p = szText;
   while ( *p && ( ' ' == *p || ( '0' <= *p && *p <= '9' ) ) ) 
      p++;
   if ( ! *p ) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildContainingInteger,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   BOOL CALLBACK findChildWithClass(HWND hwndTest,LPARAM lParam) {
   char *pszClass = (char *)lParam;
   char szClass[64];
   GetClassName(hwndTest,szClass,64);
   if ( strlen(szClass) < 1 ) return TRUE;
   if ( 0 == _strnicmp(pszClass,szClass,min(strlen(pszClass),strlen(szClass))) ) {
       hwndFoundChild = hwndTest;
       return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWithClass,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   BOOL CALLBACK findChildWithStyle(HWND hwndTest,LPARAM lParam) {
   if ( GetWindowLongPtr(hwndTest,GWL_STYLE) & lParam) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWithStyle,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam) {
   if ( GetWindowLongPtr(hwndTest,GWL_EXSTYLE) & lParam) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWithExStyle,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   BOOL CALLBACK findHorizontalChildWithClass(HWND hwndTest,LPARAM lParam) {
   char *pszClass = (char *)lParam;
   char szClass[64];
   GetClassName(hwndTest,szClass,64);
   if ( strlen(szClass) < 1 ) return TRUE;
   if ( 0 == _strnicmp(pszClass,szClass,min(strlen(pszClass),strlen(szClass))) ) {
      RECT rcWindow;
      GetWindowRect(hwndTest,&rcWindow);
      if ( rcWindow.right - rcWindow.left > 2 * (rcWindow.bottom - rcWindow.top) ) {
         hwndFoundChild = hwndTest;
         return FALSE;
      }
   }
   EnumChildWindows(hwndTest,findHorizontalChildWithClass,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }

   BOOL CALLBACK findChildWithClassAndStyle(HWND hwndTest,LPARAM lParam) {
   char *pszClass = (char *)lParam;
   char szClass[64];
   GetClassName(hwndTest,szClass,64);
   if ( strlen(szClass) < 1 ) return TRUE;
   if ( 0 == _strnicmp(pszClass,szClass,min(strlen(pszClass),strlen(szClass))) ) {
      long style = (long)GetWindowLongPtr(hwndTest,GWL_STYLE);
      if ( findStyle & style || ( 0 == findStyle && 0 == style ) ) {
         hwndFoundChild = hwndTest;
         return FALSE;
      }
   }
   EnumChildWindows(hwndTest,findChildWithClassAndStyle,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   long hashCode(char *pszInput) {
   long hashCode = 0L;
   long part = 0L;
   long n = (long)strlen(pszInput);
   char *psz = new char[n + 4];
   memset(psz,0,(n + 4) * sizeof(char));
   strcpy(psz,pszInput);
   char *p = psz;
   for ( long k = 0; k < n; k += 4 ) {
      memcpy(&part,p,4 * sizeof(char));
      hashCode ^= part;
      p += 4;
   }
   delete [] psz;
   return hashCode;
   }


   void logEvent(LPTSTR szMessage) { 

   HANDLE hEventSource = RegisterEventSource(NULL,"CursiVision");

   if ( NULL == hEventSource ) 
      return;

   LPCTSTR lpszStrings[1];

   lpszStrings[0] = szMessage;

   DWORD dwErrorCode = SVC_INFORMATIONAL;

   ReportEvent(hEventSource,EVENTLOG_INFORMATION_TYPE,0,dwErrorCode,NULL,1,0,lpszStrings,NULL);

   DeregisterEventSource(hEventSource);

   return;
   }

   void ASCIIHexDecodeInPlace(char *pszInput) {

   long n = (long)strlen(pszInput);

   long j = 0;

   for ( long k = 0; k < n; j++, k += 2 ) {

      char c1 = pszInput[k];
      char c2 = pszInput[k + 1];

      BYTE v1 = 0x00;

      if ( '0' <= c1 && '9' >= c1 )
         v1 = c1 - '0';
      else if ( 'A' <= c1 && 'F' >= c1 )
         v1 = c1 - 'A' + 10;
      else if ( 'a' <= c1 && 'f' >= c1 )
         v1 = c1 - 'a' + 10;

      BYTE v2 = 0x00;

      if ( '0' <= c2 && '9' >= c2 )
         v2 = c2 - '0';
      else if ( 'A' <= c2 && 'F' >= c2 )
         v2 = c2 - 'A' + 10;
      else if ( 'a' <= c2 && 'f' >= c2 )
         v2 = c2 - 'a' + 10;

      pszInput[j] = (v1 << 4) + v2;

   }   

   pszInput[j] = '\0';

   return;
   }

   int pixelsToHiMetric(SIZEL *pPixels,SIZEL *phiMetric) {
   HDC hdc = GetDC(0);
   int pxlsX,pxlsY;
 
   pxlsX = GetDeviceCaps(hdc,LOGPIXELSX);
   pxlsY = GetDeviceCaps(hdc,LOGPIXELSY);
   ReleaseDC(0,hdc);
 
   phiMetric -> cx = PIXELS_TO_HIMETRIC(pPixels -> cx,pxlsX);
   phiMetric -> cy = PIXELS_TO_HIMETRIC(pPixels -> cy,pxlsY);
   return TRUE;
   }

   int hiMetricToPixel(SIZEL *phiMetric,SIZEL *pPixels) {
   HDC hdc = GetDC(0);
   int pxlsX,pxlsY;

   pxlsX = GetDeviceCaps(hdc,LOGPIXELSX);
   pxlsY = GetDeviceCaps(hdc,LOGPIXELSY);
   ReleaseDC(0,hdc);

   pPixels -> cx = HIMETRIC_TO_PIXELS(phiMetric -> cx,pxlsX);
   pPixels -> cy = HIMETRIC_TO_PIXELS(phiMetric -> cy,pxlsY);

   return TRUE;
   }

   void adjustPropertiesDialogSize(SIZEL *pSizelDesired,DLGTEMPLATEEX *pDialog,long cyReservedHeader) {

   if ( ! pSizelDesired -> cx )
      return;

   BYTE *pMenuInfo = (BYTE *)pDialog + sizeof(DLGTEMPLATEEX);

   BYTE *pWindowClass = NULL;

   if ( 0x00 == pMenuInfo[0] && 0x00 == pMenuInfo[1] ) 
      pWindowClass = pMenuInfo + 2;
   else if ( 0xFF == pMenuInfo[0] && 0xFF == pMenuInfo[1] ) 
      pWindowClass = pMenuInfo + 4;
   else  
      pWindowClass = pMenuInfo + (2 * (wcslen((WCHAR *)pMenuInfo) + 1));

   BYTE *pTitle = NULL;

   if ( 0x00 == pWindowClass[0] && 0x00 == pWindowClass[1] ) 
      pTitle = pWindowClass + 2;
   else if ( 0xFF == pWindowClass[0] && 0xFF == pWindowClass[1] ) 
      pTitle = pWindowClass + 4;
   else  
      pTitle = pWindowClass + (2 * (wcslen((WCHAR *)pWindowClass) + 1));

   BYTE *pPointSize = NULL;

   if ( 0x00 == pTitle[0] && 0x00 == pTitle[1] )
      pPointSize = pTitle + 2;
   else
      pPointSize = pTitle + (2 * (wcslen((WCHAR *)pTitle) + 1));

   WORD pointSize = *pPointSize;

   WORD *pWeight = (WORD *)pPointSize + 1;

   BYTE *pItalic = (BYTE *)(pWeight + 1);

   BYTE *pCharSet = pItalic + 1;

   WCHAR *pTypeFace = (WCHAR *)(pCharSet + 1);

   LOGFONTW theFont = {0};

   theFont.lfHeight = pointSize;

   theFont.lfCharSet = *pCharSet;

   wcscpy_s(theFont.lfFaceName,32,pTypeFace);

   HFONT hFont = CreateFontIndirectW(&theFont);

   HDC hdc = GetDC(NULL);

   HGDIOBJ oldFont = SelectObject(hdc,hFont);

   TEXTMETRIC textMetrics = {0};

   GetTextMetrics(hdc,&textMetrics);

   DeleteObject(SelectObject(hdc,oldFont));

   long xPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSX);
   long yPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSY);

   ReleaseDC(NULL,hdc);

   MONITORINFO monitorInfo = {0};

   monitorInfo.cbSize = sizeof(MONITORINFO);

   GetMonitorInfo(MonitorFromWindow(GetForegroundWindow(),MONITOR_DEFAULTTONEAREST),&monitorInfo);

   pDialog -> cy = (short)(pSizelDesired -> cy + cyReservedHeader);

   if ( pDialog -> cy > (monitorInfo.rcWork.bottom - monitorInfo.rcWork.top) )
      pDialog -> cy = (short)(0.95 * (double)(monitorInfo.rcWork.bottom - monitorInfo.rcWork.top));

   pDialog -> cx = (short)((double)pDialog -> cy * (double)pSizelDesired -> cx / (double)pSizelDesired -> cy);

   pDialog -> cx = MulDiv(pDialog -> cx,4,(int)((double)textMetrics.tmAveCharWidth * xPixelsPerInch / 72.0));
   pDialog -> cy = MulDiv(pDialog -> cy,8,(int)((double)textMetrics.tmHeight * yPixelsPerInch / 72.0));

   return;
   }