// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

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

   BYTE menu[2];
   BYTE windowClass[2];
   BYTE title[2];
   short pointsize;
   short weight;
   short bItalic;
   WCHAR font[32];
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

extern "C" int GetCommonAppDataLocation(HWND hwnd,char *);
extern "C" int GetDocumentsLocation(HWND hwnd,char *);
int GetLocation(HWND hwnd,long key,char *szFolderLocation);

HWND APIENTRY FindWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR theStyle);
HWND APIENTRY FindHorizontalWindowWithClass(HWND hwndP,char* theClassName);
HWND APIENTRY FindWindowWithExStyle(HWND hwndP,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithClassAndStyle(HWND hwndP,char* theClassName,LONG_PTR exStyle);
HWND APIENTRY FindWindowWithText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingText(HWND hwndP,char* theText);
HWND APIENTRY FindWindowContainingInteger(HWND hwndP);
HWND APIENTRY FindWindowWithFunction(HWND hwndP,std::function<bool(HWND)> *pTestFunction);

void APIENTRY DoOnWindowDescendants(HWND hwndP,std::function<void(HWND)> *pTestFunction);

BOOL CALLBACK findChildWithClass(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findHorizontalChildWithClass(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithExStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWithClassAndStyle(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChild(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildContainingText(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildContainingInteger(HWND hwndTest,LPARAM lParam);
BOOL CALLBACK findChildWindowWithFunction(HWND hwndTest,LPARAM lParam);

BOOL CALLBACK doDescendantWindowsWithFunction(HWND hwndTest,LPARAM lParam);

long HashCode(char *pszInput);
long HashCode(WCHAR *pszwInput);

void ASCIIHexDecodeInPlace(char *pszInput);
void ASCIIHexEncode(char *pszInput,long valueSize,char **ppszResult);

int pixelsToHiMetric(SIZEL *pPixels,SIZEL *phiMetric);
int hiMetricToPixels(SIZEL *phiMetric,SIZEL *pPixels);

void adjustPropertiesDialogSize(SIZEL *pSizelDesired,DLGTEMPLATEEX *pDialog,long cyReservedHeader);

