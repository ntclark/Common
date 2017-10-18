// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

   static HDC hdcCurrent = NULL;
   static HBITMAP hBitmapCurrent = NULL;

   static ISignaturePad *pSignaturePad = NULL;

   static long countEntries = 0L;

   static long mouseMenuX = 0L, mouseMenuY = 0L;
   static long oldMouseX = -1L,oldMouseY = -1L;
   static long startMouseX = -1L, startMouseY = -1L;
   static RECT rBase;
   static long candidateRectIndex = -1L;
   static long copySourceRectIndex = -1L;
   static long deleteSourceRectIndex = -1L;

   static HMENU hOptionsMenu;

   static bool commitChanges = false;

   static long rectShiftX = 0L;
   static long rectShiftY = 0L;
   static long rectIgnoreIndex = -1L;

   static RECT visibleRects[32];
   static long visibleRectIndexes[32];
   static long inverseVisibleRectIndexes[32];
   
   static writingLocation keepLocations[MAX_DOODLE_RECT_COUNT];

   static writingLocation *pCurrentLocations = NULL;

   static long entryCountRects = 0L;

   static bool entryDoRemember = false;

   static bool doLearn = false;

   static long cornerGrabIndex = -1L;

   static LRESULT CALLBACK signingLocationsOrderHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

   static void drawSigningAreas(HDC,templateDocument::tdUI *);

   static HWND hwndInstructions;

   static templateDocument::tdUI *pTemplateDocumentUI = NULL;

#include "drawBoxDefines.h"

#define CORNER_PROXIMITY 8

#define WM_REDRAW_THE_FUCKING_WINDOW         (WM_USER + 1)

#define REDRAW_THE_FUCKING_WINDOW                                                                           \
InvalidateRect(pTemplateDocumentUI -> hwndVellum,NULL,TRUE);                                                \
UpdateWindow(pTemplateDocumentUI -> hwndVellum);                                                            \
RedrawWindow(pTemplateDocumentUI -> hwndVellum,NULL,NULL,RDW_ERASE | RDW_INVALIDATE | RDW_INTERNALPAINT);   \
ShowWindow(pTemplateDocumentUI -> hwndVellum,SW_HIDE);                                                      \
ShowWindow(pTemplateDocumentUI -> hwndVellum,SW_SHOW);                                                      \
PostMessage(hwnd,WM_REDRAW_THE_FUCKING_WINDOW,0L,0L);

#define REDRAW_THE_FUCKING_WINDOW_2                                                                         \
InvalidateRect(pTemplateDocumentUI -> hwndVellum,NULL,TRUE);                                                \
UpdateWindow(pTemplateDocumentUI -> hwndVellum);                                                            \
RedrawWindow(pTemplateDocumentUI -> hwndVellum,NULL,NULL,RDW_ERASE | RDW_INVALIDATE | RDW_INTERNALPAINT);   \
ShowWindow(pTemplateDocumentUI -> hwndVellum,SW_HIDE);                                                      \
ShowWindow(pTemplateDocumentUI -> hwndVellum,SW_SHOW);
