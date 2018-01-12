// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "utilities.h"

#define SVC_ERROR                        ((DWORD)0xC0020001L)
#define SVC_INFORMATIONAL                ((DWORD)0x40020002L)

#define PIXELS_TO_HIMETRIC(x,ppli)  ( (2540*(x) + ((ppli) >> 1)) / (ppli) )
#define HIMETRIC_TO_PIXELS(x,ppli)  ( ((ppli)*(x) + 1270) / 2540 )

   extern "C" int  __cdecl GetDocumentsLocation(HWND hwnd,char *szFolderLocation) {
   GetLocation(hwnd,CSIDL_PERSONAL,szFolderLocation);
   return 0;
   }

   extern "C" int __cdecl GetCommonAppDataLocation(HWND hwnd,char *szFolderLocation) {
   GetLocation(hwnd,CSIDL_COMMON_APPDATA,szFolderLocation);
   return 0;
   }
 
   int GetLocation(HWND hwnd,long key,char *szFolderLocation) {

   ITEMIDLIST *ppItemIDList;
   IShellFolder *pIShellFolder;
   LPCITEMIDLIST pcParentIDList;

   HRESULT wasInitialized = CoInitialize(NULL);

   szFolderLocation[0] = '\0';

   HRESULT rc = SHGetFolderLocation(hwnd,key,NULL,0,&ppItemIDList);

   if ( S_OK != rc ) {
      char szMessage[256];
      sprintf(szMessage,"SHGetFolderLocation returned %ld",rc);
      MessageBoxA(NULL,szMessage,"Error",MB_OK);
      szFolderLocation[0] = '\0';
      return 0;
   }

   rc = SHBindToParent(ppItemIDList, IID_IShellFolder, (void **) &pIShellFolder, &pcParentIDList);

   if ( S_OK == rc ) {

      STRRET strRet;
      rc = pIShellFolder -> GetDisplayNameOf(pcParentIDList,SHGDN_FORPARSING,&strRet);
      pIShellFolder -> Release();
      if ( S_OK == rc ) {
         WideCharToMultiByte(CP_ACP,0,strRet.pOleStr,-1,szFolderLocation,MAX_PATH,0,0);
      } else {
         char szMessage[256];
         sprintf(szMessage,"GetDisplayNameOf returned %ld",rc);
         MessageBoxA(NULL,szMessage,"Error",MB_OK);
         szFolderLocation[0] = '\0';
         return 0;
      }
   } else {
      char szMessage[256];
      sprintf(szMessage,"SHBindToParent returned %ld",rc);
      MessageBoxA(NULL,szMessage,"Error",MB_OK);
      szFolderLocation[0] = '\0';
      return 0;
   }

   if ( S_FALSE == wasInitialized )
      CoUninitialize();

   return 0;
   }

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

   HWND APIENTRY FindWindowWithFunction(HWND hwndParent,std::function<bool(HWND)> *pTestFunction) {
   hwndFoundChild = NULL;
   EnumChildWindows(hwndParent,findChildWindowWithFunction,(LPARAM)pTestFunction);
   return hwndFoundChild;
   }


   void APIENTRY DoOnWindowDescendants(HWND hwndParent,std::function<void(HWND)> *pTestFunction) {
   EnumChildWindows(hwndParent,doDescendantWindowsWithFunction,(LPARAM)pTestFunction);
   delete pTestFunction;
   return;
   }


   BOOL CALLBACK doDescendantWindowsWithFunction(HWND hwndChild,LPARAM lParam) {
   std::function<void(HWND)> *pTestFunction = (std::function<void(HWND)> *)lParam;
   (*pTestFunction)(hwndChild);   
   EnumChildWindows(hwndChild,doDescendantWindowsWithFunction,(LPARAM)pTestFunction);
   return TRUE;
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

   GetWindowTextA(hwndTest,szText,min(n,32));

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
   GetWindowTextA(hwndTest,szText,32);
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
   GetClassNameA(hwndTest,szClass,64);
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
   GetClassNameA(hwndTest,szClass,64);
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
   GetClassNameA(hwndTest,szClass,64);
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


   BOOL CALLBACK findChildWindowWithFunction(HWND hwndTest,LPARAM lParam) {
   std::function<bool(HWND)> *pF = (std::function<bool(HWND)> *)lParam;
   if ( (*pF)(hwndTest) ) {
      hwndFoundChild = hwndTest;
      return FALSE;
   }
   EnumChildWindows(hwndTest,findChildWindowWithFunction,lParam);
   if ( hwndFoundChild )
      return FALSE;
   return TRUE;
   }


   void logEvent(LPTSTR szMessage) { 

   HANDLE hEventSource = RegisterEventSourceA(NULL,"CursiVision");

   if ( NULL == hEventSource ) 
      return;

   LPCTSTR lpszStrings[1];

   lpszStrings[0] = szMessage;

   DWORD dwErrorCode = SVC_INFORMATIONAL;

   ReportEvent(hEventSource,EVENTLOG_INFORMATION_TYPE,0,dwErrorCode,NULL,1,0,lpszStrings,NULL);

   DeregisterEventSource(hEventSource);

   return;
   }

   long HashCode(char *pszInput) {
   long hashCode = 0L;
   long part = 0L;
   long n = (DWORD)strlen(pszInput);
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

   void ASCIIHexEncode(char *pszInput,long valueSize,char **ppszResult) {

   *ppszResult = new char[2 * valueSize + 1];
   memset(*ppszResult,0,(2 * valueSize + 1) * sizeof(char));

   char *p = pszInput;
   char *pEnd = p + valueSize;
   char *pTarget = *ppszResult;

   while ( p < pEnd ) {
  
      *pTarget = (*p & 0xF0) >> 4;
      *pTarget += (*pTarget > 9 ? 'a' - 10 : '0');

      pTarget++;

      *pTarget = (*p & 0x0F);
      *pTarget += (*pTarget > 9 ? 'a' - 10 : '0');
   
      pTarget++;

      p++;

   }

   return;
   }

   int pixelToHiMetric(SIZEL *pPixels,SIZEL *phiMetric) {
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