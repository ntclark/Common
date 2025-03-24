
#pragma once

#include <windows.h>
#include <stdio.h>
#include <shlwapi.h>
#include <ShlObj.h>
#include <functional>

#pragma pack(push)

#pragma pack(1)

typedef struct DLGTEMPLATEEX {
   WORD dlgVer;
   WORD signature;
   DWORD helpID;
   DWORD exStyle;
   DWORD style;
   WORD cDlgItems;
   short x;
   short y;
   short cx;
   short cy;
#if 0
   BYTE menu[2];
   BYTE windowClass[2];
   BYTE title[2];
   short pointsize;
   short weight;
   short bItalic;
   WCHAR font[32];
#endif
#if 0
   sz_Or_Ord menu;
   sz_Or_Ord windowClass;
   WCHAR title[titleLen];
   WORD pointsize;
   WORD weight;
   BYTE italic;
   BYTE charset;
   WCHAR typeface[stringLen];
#endif
} DLGTEMPLATEEX, *LPDLGTEMPLATEEX;

typedef struct DLGTEMPLATEEX2 {
   WORD dlgVer;
   WORD signature;
   DWORD helpID;
   DWORD exStyle;
   DWORD style;
   WORD cDlgItems;
   short x;
   short y;
   short cx;
   short cy;

   BYTE menu[2];
   BYTE windowClass[2];
   BYTE title[2];
   short pointsize;
   short weight;
   short bItalic;
   WCHAR font[32];

} DLGTEMPLATEEX2, *LPDLGTEMPLATEEX2;


#pragma pack(pop)

extern "C" int GetCommonAppDataLocation(HWND hwnd,char *);
extern "C" int GetCommonAppDataLocationW(HWND hwnd,WCHAR *);
extern "C" int GetDocumentsLocation(HWND hwnd,char *);
extern "C" int GetDocumentsLocationW(HWND hwnd,WCHAR *);
int GetLocation(HWND hwnd,long key,char *szFolderLocation);

void SetFileReadOnly(char *szwFile,BOOL toReadOnly = TRUE);
void SetDirectoryReadOnly(char *szwDirectory,BOOL toReadOnly = TRUE);

HWND APIENTRY FindWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindWindowWithProcessId(HWND hwndP,long theProcessId);
HWND APIENTRY FindHorizontalWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithClassAndStyle(HWND hwndP,char* theClassName,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingInteger(HWND hwndP);
HWND APIENTRY FindWindowWithFunction(HWND hwndP,std::function<bool(HWND)> *pTestFunction);

void APIENTRY DoOnWindowDescendants(HWND hwndP,std::function<void(HWND)> *pTestFunction);

void disableAll(HWND hwnd,long *pExceptions);
void enableAll(HWND hwnd,long *pExceptions);
void moveUpAll(HWND hwnd,long *pExceptions);
void moveUpAllAmount(HWND hwnd,long amount,long *pExceptions);
void shiftUpAllAmount(HWND hwnd,long amount,long *pInclusions,BOOL resizeParent);

void hideAll(HWND hwnd,long *pExceptions);
void showAll(HWND hwnd,long *pExceptions);
void enableInside(HWND hwnd,RECT *pRect);
void disableInside(HWND hwnd,RECT *pRect);
void enableDisableSiblings(HWND hwnd,BOOL doEnable);

void sendSiblingsMessage(HWND hwndParent,HWND hwndChild,UINT msg);
void setSiblingsSize(HWND hwndParent,HWND hwndChild,SIZEL *pSize);

long HashCode(char *pszInput);
long HashCode(WCHAR *pszwInput);

long ASCIIHexDecodeInPlace(char *pszInput);
void ASCIIHexEncode(char *pszInput,long valueSize,char **ppszResult);
void ASCIIHexEncodeSpecial(char *pszInput,long valueSize,char **ppszResult);
void ASCIIHexEncodeToString(char *pszInput,long valueSize,char *pszString,long cbString);

int pixelsToHiMetric(SIZEL *pPixels,SIZEL *phiMetric);
int hiMetricToPixels(SIZEL *phiMetric,SIZEL *pPixels);

void adjustPropertiesDialogSize(SIZEL *pSizelDesired,DLGTEMPLATEEX *pDialog,long cyReservedHeader);

char *strFromGUID(GUID &theGuid);
WCHAR *wideStrFromGUID(GUID &theGuid);
GUID *guidFromString(char *pGuid);
GUID *guidFromStringW(WCHAR *pGuid);

long getActiveMonitorWorkingHeight(HWND hwnd);
long getActiveMonitorWorkingLeft(HWND hwnd);

char *getVersionString(char *pszModuleName);
long getVersionNumber(char *pszModuleName);
char *getLongDateString();
char *getShortDateString();

char *getLongTimeString();
char *getShortTimeString();

long countSafeArrayItems(SAFEARRAY* pSafeArray);

BOOL archiveFolder(char *pszSource,char *pszTarget);

long getActualTabsHeight(HWND hwndTabControl);
