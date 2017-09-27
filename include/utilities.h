
#pragma once

#include <windows.h>
#include <ShlObj.h>

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

#pragma pack(pop)


#define PIXELS_TO_HIMETRIC(x,ppli)  ( (2540*(x) + ((ppli) >> 1)) / (ppli) )
#define HIMETRIC_TO_PIXELS(x,ppli)  ( ((ppli)*(x) + 1270) / 2540 )

#if 0
long IsTopBandPresent(HWND hwndHTMLHost,HWND hwndPDFToolBar);
long IsBottomBandPresent(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar);

long FindDocumentUpperLeftCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFToolBar,POINTL *pCorner);
long FindDocumentUpperRightCorner(HWND hwndHTMLHost,HWND hwndPDFVerticalScrollBar,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFToolBar,POINTL *pResult);
long FindDocumentLowerLeftCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,POINTL *pResult);
long FindDocumentLowerRightCorner(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar,HWND hwndPDFVerticalScrollBar,POINTL *pResult);

long MeasureDocumentLeftBand(HWND hwndHTMLHost);
long MeasureDocumentTopBand(HWND hwndHTMLHost);
long MeasureDocumentRightBand(HWND hwndHTMLHost,HWND hwndPDFVerticalScrollBar);
long MeasureDocumentBottomBand(HWND hwndHTMLHost,HWND hwndPDFHorizontalScrollBar);
#endif

HWND APIENTRY FindWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindHorizontalWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithClassAndStyle(HWND hwndP,char* theClassName,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingInteger(HWND hwndP);

BOOL CALLBACK findChildWithClass(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findHorizontalChildWithClass(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithClassAndStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChild(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildContainingText(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildContainingInteger(HWND hwndTest,LPARAM lParam);

void ASCIIHexDecodeInPlace(char *pszInput);

void adjustPropertiesDialogSize(SIZEL *pSizelDesired,DLGTEMPLATEEX *pDialog,long cyReservedHeader);

