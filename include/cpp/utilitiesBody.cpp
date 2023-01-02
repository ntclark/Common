
#include <htmlHelp.h>

#include "utilities.h"

#define SVC_ERROR                        ((DWORD)0xC0020001L)
#define SVC_INFORMATIONAL                ((DWORD)0x40020002L)

#define NEAR_WHITE_RED     192
#define NEAR_WHITE_GREEN   192
#define NEAR_WHITE_BLUE    192

   static COLORREF nearWhite = RGB(NEAR_WHITE_RED,NEAR_WHITE_GREEN,NEAR_WHITE_BLUE);

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
   } else if ( ! hwndPDFToolBar ) {
      hwndPDFToolBar = (HWND)FindWindowWithText((long)hwndHTMLHost,"AVUICommandWidget");
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
   while ( col && GetPixel(hdc,col,row) == foundColor )
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

   long startRow = 0;

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

      col = cx - 32;

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

   static HWND hwndFoundChild;
   static long findExStyle;
   static long findStyle;

   LONG APIENTRY FindWindowWithStyle(HWND hwndParent,long theStyle) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithStyle,theStyle);
   return (long)hwndFoundChild;
   }

   LONG APIENTRY FindWindowWithText(long hwndP,char* theText) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChild,(LPARAM)theText);
   return (long)hwndFoundChild;
   }
 
   LONG APIENTRY FindWindowContainingText(long hwndP,char* theText) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildContainingText,(LPARAM)theText);
   return (long)hwndFoundChild;
   }
 

   LONG APIENTRY FindWindowContainingInteger(long hwndP) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildContainingInteger,0L);
   return (long)hwndFoundChild;
   }


   LONG APIENTRY FindWindowWithClass(long hwndP,char* theClass) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithClass,(LPARAM)theClass);
   return (long)hwndFoundChild;
   }



   LONG APIENTRY FindHorizontalWindowWithClass(long hwndP,char* theClass) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findHorizontalChildWithClass,(LPARAM)theClass);
   return (long)hwndFoundChild;
   }


   LONG APIENTRY FindWindowWithClassAndExStyle(long hwndP,char* theClass,long es) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   findExStyle = es;
   EnumChildWindows(hwndParent,findChildWithClassAndExStyle,(LPARAM)theClass);
   return (long)hwndFoundChild;
   }

   LONG APIENTRY FindWindowWithExStyle(long hwndP,long lParam) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWithExStyle,(LPARAM)lParam);
   return (long)hwndFoundChild;
   }


   LONG APIENTRY FindWindowWithClassAndStyle(long hwndP,char* theClass,long es) {
   HWND hwndParent = (HWND)hwndP;
   hwndFoundChild = NULL;
   findStyle = es;
   EnumChildWindows(hwndParent,findChildWithClassAndStyle,(LPARAM)theClass);
   return (long)hwndFoundChild;
   }


   BOOL CALLBACK findChild(HWND hwndTest,LPARAM lParam) {

   char *pszTest = (char *)lParam;

   long n = SendMessage(hwndTest,WM_GETTEXTLENGTH,0L,0L);

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

   long n = SendMessage(hwndTest,WM_GETTEXTLENGTH,0L,0L);

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
   long style = GetWindowLongPtr(hwndTest,GWL_STYLE);
   if ( style == lParam) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWithStyle,lParam);
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


   BOOL CALLBACK findChildWithClassAndExStyle(HWND hwndTest,LPARAM lParam) {
   char *pszClass = (char *)lParam;
   char szClass[64];
   GetClassName(hwndTest,szClass,64);
   if ( strlen(szClass) < 1 ) return TRUE;
   if ( 0 == _strnicmp(pszClass,szClass,min(strlen(pszClass),strlen(szClass))) ) {
      long style = GetWindowLongPtr(hwndTest,GWL_EXSTYLE);
      if ( findExStyle & style ) {
         hwndFoundChild = hwndTest;
         return FALSE;
      }
   }
   EnumChildWindows(hwndTest,findChildWithClassAndExStyle,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }

   BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam) {
   long esGoal = (long)lParam;
   long style = GetWindowLongPtr(hwndTest,GWL_EXSTYLE);
   if ( esGoal & style ) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWithExStyle,lParam);
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
      long style = GetWindowLongPtr(hwndTest,GWL_STYLE);
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
   long n = strlen(pszInput);
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