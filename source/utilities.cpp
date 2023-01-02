
#pragma warning(disable:6031)

#include "utilities.h"

#define SVC_ERROR                        ((DWORD)0xC0020001L)
#define SVC_INFORMATIONAL                ((DWORD)0x40020002L)

#define PIXELS_TO_HIMETRIC(x,ppli)  ( (2540*(x) + ((ppli) >> 1)) / (ppli) )
#define HIMETRIC_TO_PIXELS(x,ppli)  ( ((ppli)*(x) + 1270) / 2540 )

    extern "C" int  __cdecl GetDocumentsLocation(HWND hwnd,char *szFolderLocation) {
    GetLocation(hwnd,CSIDL_PERSONAL,szFolderLocation);
    return 0;
    }

    extern "C" int  __cdecl GetDocumentsLocationW(HWND hwnd,WCHAR *szwFolderLocation) {
    char szTemp[MAX_PATH];
    GetDocumentsLocation(hwnd,szTemp);
    MultiByteToWideChar(CP_ACP,0,szTemp,-1,szwFolderLocation,MAX_PATH);
    return 0;
    }

    extern "C" int __cdecl GetCommonAppDataLocation(HWND hwnd,char *szFolderLocation) {
    GetLocation(hwnd,CSIDL_COMMON_APPDATA,szFolderLocation);
    return 0;
    }
 
    extern "C" int __cdecl GetCommonAppDataLocationW(HWND hwnd,WCHAR *szwFolderLocation) {
    char szTemp[MAX_PATH];
    GetCommonAppDataLocation(hwnd,szTemp);
    MultiByteToWideChar(CP_ACP,0,szTemp,-1,szwFolderLocation,MAX_PATH);
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

    BOOL CALLBACK findChildWithClass(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWithStyle(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWithProcessId(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findHorizontalChildWithClass(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWithClassAndStyle(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChild(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildContainingText(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildContainingInteger(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK findChildWindowWithFunction(HWND hwndTest,LPARAM lParam);


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


    HWND APIENTRY FindWindowWithProcessId(HWND hwndParent,long theProcessID) {
    hwndFoundChild = NULL;
    EnumChildWindows(hwndParent,findChildWithProcessId,theProcessID);
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


    BOOL CALLBACK doDescendantWindowsWithFunction(HWND hwndTest,LPARAM lParam);

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


   BOOL CALLBACK findChildWithProcessId(HWND hwndTest,LPARAM lParam) {
   DWORD processId;
   GetWindowThreadProcessId(hwndTest, &processId);
   if ( processId == (long)lParam ) {
      if ( GetWindow(hwndTest, GW_OWNER) == HWND_DESKTOP && IsWindowVisible(hwndTest) ) {
         hwndFoundChild = hwndTest;
         return FALSE;
      }
   }
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


    static HWND hwndTheParent = NULL;
    static HWND hwndTheChild = NULL;
    static long moveUpAmount = 32;

    BOOL CALLBACK doDisable(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doEnableDisableSiblings(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doEnable(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doHide(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doShow(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doMoveUp(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doEnableInside(HWND hwndTest,LPARAM lParam);
    BOOL CALLBACK doDisableInside(HWND hwndTest,LPARAM lParam);

    void disableAll(HWND hwnd,long *pExceptions) {
    EnumChildWindows(hwnd,doDisable,(LPARAM)pExceptions);
    return;
    }


    void enableAll(HWND hwnd,long *pExceptions) {
    EnumChildWindows(hwnd,doEnable,(LPARAM)pExceptions);
    return;
    }


    void enableDisableSiblings(HWND hwnd,BOOL doEnable) {
    hwndTheParent = GetParent(hwnd);
    hwndTheChild = hwnd;
    EnumChildWindows(hwndTheParent,doEnableDisableSiblings,(LPARAM)doEnable);
    return;
    }


    void moveUpAll(HWND hwnd,long *pExceptions) {
    EnumChildWindows(hwnd,doMoveUp,(LPARAM)pExceptions);
    return;
    }


    void moveUpAllAmount(HWND hwnd,long amount,long *pExceptions) {
    long keepMoveUpAmount = moveUpAmount;
    moveUpAmount = amount;
    EnumChildWindows(hwnd,doMoveUp,(LPARAM)pExceptions);
    moveUpAmount = keepMoveUpAmount;
    return;
    }


    void hideAll(HWND hwnd,long *pExceptions) {
    EnumChildWindows(hwnd,doHide,(LPARAM)pExceptions);
    return;
    }


    void showAll(HWND hwnd,long *pExceptions) {
    EnumChildWindows(hwnd,doShow,(LPARAM)pExceptions);
    return;
    }


    void disableInside(HWND hwnd,RECT *pRect) {
    EnumChildWindows(hwnd,doDisableInside,(LPARAM)pRect);
    return;
    }


    void enableInside(HWND hwnd,RECT *pRect) {
    EnumChildWindows(hwnd,doEnableInside,(LPARAM)pRect);
    return;
    }

    BOOL CALLBACK doDisable(HWND hwndTest,LPARAM lParam) {
    long *pExceptions = (long *)lParam;
    long id = (long)GetWindowLongPtr(hwndTest,GWL_ID);
    for ( long k = 0; 1; k++ ) {
        if ( ! pExceptions[k] )
            break;
        if ( id == pExceptions[k] ) {
            EnableWindow(hwndTest,TRUE);
            return TRUE;
        }
    }
    EnableWindow(hwndTest,FALSE);
    return TRUE;
    }


    BOOL CALLBACK doEnable(HWND hwndTest,LPARAM lParam) {
    long *pExceptions = (long *)lParam;
    long id = (long)GetWindowLongPtr(hwndTest,GWL_ID);
    for ( long k = 0; 1; k++ ) {
        if ( ! pExceptions[k] )
            break;
        if ( id == pExceptions[k] ) {
            EnableWindow(hwndTest,FALSE);
            return TRUE;
        }
    }
    EnableWindow(hwndTest,TRUE);
    return TRUE;
    }


    BOOL CALLBACK doEnableDisableSiblings(HWND hwndTest,LPARAM lParam) {
    BOOL doEnable = (BOOL)lParam;
    if ( hwndTest == hwndTheChild )
       return TRUE;
    EnableWindow(hwndTest,doEnable);
    return TRUE;
    }

    BOOL CALLBACK doMoveUp(HWND hwndTest,LPARAM lParam) {
    long *pExceptions = (long *)lParam;
    if ( pExceptions ) {
        LONG_PTR id = (long)GetWindowLongPtr(hwndTest,GWL_ID);
        for ( long k = 0; 1; k++ ) {
            if ( ! pExceptions[k] )
                break;
            if ( id == pExceptions[k] ) {
                return TRUE;
            }
        }
    }
    HWND hwndParent = GetParent(hwndTest);
    RECT rcParent{0},rcCurrent{0},rcAdjust{0};
    GetWindowRect(hwndParent,&rcParent);
    GetWindowRect(hwndTest,&rcCurrent);
    AdjustWindowRectEx(&rcAdjust,(DWORD)GetWindowLongPtr(hwndParent,GWL_STYLE),FALSE,(DWORD)GetWindowLongPtr(hwndParent,GWL_EXSTYLE));
    SetWindowPos(hwndTest,HWND_TOP,rcCurrent.left - rcParent.left - rcAdjust.right,
                                rcCurrent.top - rcParent.top + rcAdjust.top - moveUpAmount,0,0,SWP_NOSIZE);
    return TRUE;
    }


    BOOL CALLBACK doHide(HWND hwndTest,LPARAM lParam) {
    long *pExceptions = (long *)lParam;
    LONG_PTR id = (long)GetWindowLongPtr(hwndTest,GWL_ID);
    for ( long k = 0; 1; k++ ) {
        if ( ! pExceptions[k] )
            break;
        if ( id == pExceptions[k] ) {
            return TRUE;
        }
    }
    ShowWindow(hwndTest,SW_HIDE);
    return TRUE;
    }

    BOOL CALLBACK doShow(HWND hwndTest,LPARAM lParam) {
    long *pExceptions = (long *)lParam;
    long id = (long)GetWindowLongPtr(hwndTest,GWL_ID);
    for ( long k = 0; 1; k++ ) {
        if ( ! pExceptions[k] )
            break;
        if ( id == pExceptions[k] ) {
            return TRUE;
        }
    }
    ShowWindow(hwndTest,SW_SHOW);
    return TRUE;
    }


    BOOL CALLBACK doDisableInside(HWND hwndTest,LPARAM lParam) {
    RECT rc;
    GetWindowRect(hwndTest,&rc);
    RECT *pRectTest = (RECT *)lParam;
    if ( rc.left < pRectTest -> left || rc.top < pRectTest -> top || rc.right > pRectTest -> right || rc.bottom > pRectTest -> bottom )
        return TRUE;
    EnableWindow(hwndTest,FALSE);
    return TRUE;
    }


    BOOL CALLBACK doEnableInside(HWND hwndTest,LPARAM lParam) {
    RECT rc;
    GetWindowRect(hwndTest,&rc);
    RECT *pRectTest = (RECT *)lParam;
    if ( rc.left < pRectTest -> left || rc.top < pRectTest -> top || rc.right > pRectTest -> right || rc.bottom > pRectTest -> bottom )
        return TRUE;
    EnableWindow(hwndTest,TRUE);
    return TRUE;
    }


   BOOL CALLBACK sibling(HWND hwnd,LPARAM lParam) {
   if ( hwnd == hwndTheChild )
      return TRUE;
   if ( ! ( hwndTheParent == GetParent(hwnd) ) )
      return TRUE;
   SendMessage(hwnd,(UINT)lParam,0L,0L);
   return TRUE;
   }

   BOOL CALLBACK siblingSize(HWND hwnd,LPARAM lParam) {
   if ( hwnd == hwndTheChild )
      return TRUE;
   if ( ! ( hwndTheParent == GetParent(hwnd) ) )
      return TRUE;
   SIZEL *pSize = (SIZEL *)lParam;
   SetWindowPos(hwnd,0L,0,0,pSize -> cx,pSize -> cy,SWP_NOMOVE | SWP_NOZORDER);
   return TRUE;
   }

   void sendSiblingsMessage(HWND hwndParent,HWND hwndChild,UINT uMsg) {
   hwndTheParent = hwndParent;
   hwndTheChild = hwndChild;
   EnumChildWindows(hwndParent,sibling,(LPARAM)uMsg);
   }


   void setSiblingsSize(HWND hwndParent,HWND hwndChild,SIZEL *pSize) {
   hwndTheParent = hwndParent;
   hwndTheChild = hwndChild;
   EnumChildWindows(hwndParent,siblingSize,(LPARAM)pSize);
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


   long HashCode(WCHAR *pszwInput) {
   long hashCode = 0L;
   long part = 0L;
   long n = (DWORD)wcslen(pszwInput);
   char *psz = new char[n + 4];
   memset(psz,0,(n + 4) * sizeof(char));
   WideCharToMultiByte(CP_ACP,0,pszwInput,-1,psz,n + 4,0,0);
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

    int hiMetricToPixels(SIZEL *phiMetric,SIZEL *pPixels) {
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

    LOGFONTW theFont{0};

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

    long desiredCY = (short)(pSizelDesired -> cy + cyReservedHeader); 

    if ( desiredCY > ( monitorInfo.rcWork.bottom - monitorInfo.rcWork.top - 128) )
        desiredCY = (short)(0.95 * (double)(monitorInfo.rcWork.bottom - monitorInfo.rcWork.top - 128));

    pDialog -> cy = (short)(desiredCY * 256.0 / 408);

    pDialog -> cx = (short)((double)pDialog -> cy * (double)pSizelDesired -> cx / (double)(pSizelDesired -> cy + cyReservedHeader));

    return;
    }


    char *strFromGUID(GUID &theGuid) {

    static long wheel = -1L;
    static long wheelMax = 31;
    static char szGuid[32][128];

    wheel++;
    if ( wheelMax == wheel )
        wheel = 0L;

    char szTemp[128];
    WCHAR szwTemp[128];

    StringFromGUID2(theGuid,szwTemp,128);
    WideCharToMultiByte(CP_ACP,0,szwTemp,-1,szTemp,128,NULL,NULL);

    strcpy(szGuid[wheel],szTemp + 1);
    szGuid[wheel][strlen(szGuid[wheel]) - 1] = '\0';

    return szGuid[wheel];
    }


#if UNICODE
#else
    char *getVersionString(char *pszModuleName) {

    static char szResult[64];
    char szItem[128];

    DWORD viSize;
    unsigned int cbVersionInfo;
    struct LANGANDCODEPAGE {
        WORD wLanguage;
        WORD wCodePage;
    } *pTranslate;

    viSize = GetFileVersionInfoSize(pszModuleName,0);

    BYTE *pvInfo = new BYTE[viSize];

    memset(pvInfo,0,viSize * sizeof(BYTE));

    GetFileVersionInfo(pszModuleName,0L,viSize,pvInfo);

    VerQueryValue(pvInfo,"\\VarFileInfo\\Translation",reinterpret_cast<void **>(&pTranslate),&cbVersionInfo);

    sprintf(szItem,"\\StringFileInfo\\%04x%04x\\ProductVersion",pTranslate -> wLanguage,pTranslate -> wCodePage);

    BYTE *pvPiece;

    VerQueryValue(pvInfo,szItem,reinterpret_cast<void **>(&pvPiece),&cbVersionInfo);

    strcpy(szResult,(char *)pvPiece);

    delete [] pvInfo;

    return szResult;
    }
#endif


    long getActiveMonitorWorkingHeight(HWND hwnd) {
    HMONITOR hMonitor = MonitorFromWindow(hwnd,MONITOR_DEFAULTTONEAREST);
    MONITORINFO monitorInfo{0};
    monitorInfo.cbSize = sizeof(MONITORINFO);
    GetMonitorInfo(hMonitor,&monitorInfo);
    return monitorInfo.rcWork.bottom - monitorInfo.rcWork.top;
    }


    long getActiveMonitorWorkingLeft(HWND hwnd) {
    HMONITOR hMonitor = MonitorFromWindow(hwnd,MONITOR_DEFAULTTONEAREST);
    MONITORINFO monitorInfo{0};
    monitorInfo.cbSize = sizeof(MONITORINFO);
    GetMonitorInfo(hMonitor,&monitorInfo);
    return monitorInfo.rcWork.left;
    }


    char *getLongDateString() {
    WCHAR szwResult[128];
    static char szResult[128];
    GetDateFormatEx(LOCALE_NAME_SYSTEM_DEFAULT,DATE_LONGDATE,NULL,NULL,szwResult,128,NULL);
    WideCharToMultiByte(CP_ACP,0,szwResult,-1,szResult,128,0,0);
    return szResult;
    }


    char *getShortDateString() {
    WCHAR szwResult[128];
    static char szResult[128];
    GetDateFormatEx(LOCALE_NAME_SYSTEM_DEFAULT,DATE_SHORTDATE,NULL,NULL,szwResult,128,NULL);
    WideCharToMultiByte(CP_ACP,0,szwResult,-1,szResult,128,0,0);
    return szResult;
    }


    char *getShortTimeString() {
    WCHAR szwResult[128];
    static char szResult[128];
    GetTimeFormatEx(LOCALE_NAME_SYSTEM_DEFAULT,TIME_NOSECONDS,NULL,NULL,szwResult,128);
    WideCharToMultiByte(CP_ACP,0,szwResult,-1,szResult,128,0,0);
    return szResult;
    }

    char *getLongTimeString() {
    WCHAR szwResult[128];
    static char szResult[128];
    GetTimeFormatEx(LOCALE_NAME_SYSTEM_DEFAULT,0L,NULL,NULL,szwResult,128);
    WideCharToMultiByte(CP_ACP,0,szwResult,-1,szResult,128,0,0);
    return szResult;
    }


    long countSafeArrayItems(SAFEARRAY* pSafeArray) {
    long cntTotalItems;
    long lBound,uBound;
    SafeArrayGetLBound(pSafeArray,1,&lBound);
    SafeArrayGetUBound(pSafeArray,1,&uBound);
    cntTotalItems = uBound - lBound + 1;
    for ( int k = 1; k < pSafeArray -> cDims; k++ ) {
        SafeArrayGetLBound(pSafeArray,k + 1,&lBound);
        SafeArrayGetUBound(pSafeArray,k + 1,&uBound);
        cntTotalItems *= uBound - lBound + 1;
    }
    return cntTotalItems;
    }


    BOOL archiveFolder(char *pszSource,char *pszTarget) {

    struct stat fileStat;

    char szFile[1024];
    char szTargetFile[1024];

    if ( stat(pszTarget,&fileStat) ) {
        BOOL rv = CreateDirectoryA(pszTarget,NULL);
    } else
        if ( ! ( fileStat.st_mode & S_IFDIR ) )
            return FALSE;

    WIN32_FIND_DATAA findFile;

    sprintf_s<1024>(szFile,"%s\\*.*",pszSource);

    HANDLE hFile = FindFirstFileA(szFile,&findFile);

    do {

        if ( findFile.cFileName[0] == '.' && '\0' == findFile.cFileName[1] )
            continue;

        if ( findFile.cFileName[0] == '.' && findFile.cFileName[1] == '.' && '\0' == findFile.cFileName[2] )
            continue;

        sprintf_s<1024>(szFile,"%s\\%s",pszSource,findFile.cFileName);

        if ( stat(szFile,&fileStat) ) 
            continue;

        if ( fileStat.st_mode & S_IFDIR ) {
            char szDir[1024];
            sprintf_s<1024>(szDir,"%s\\%s",pszTarget,findFile.cFileName);
            archiveFolder(szFile,szDir);
            RemoveDirectoryA(szFile);
            continue;
        }

        sprintf_s<1024>(szTargetFile,"%s\\%s",pszTarget,findFile.cFileName);

        CopyFileA(szFile,szTargetFile,FALSE);

        DeleteFileA(szFile);

    } while ( FindNextFileA(hFile,&findFile) );

    return TRUE;
    }