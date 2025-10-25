
   static HMENU hOptionsMenu = NULL;

   static bool didDrag = false;
   static bool commitChanges = false;

   static long mouseMenuX = 0L, mouseMenuY = 0L;
   static long startMouseX = -1L, startMouseY = -1L;
   static long lastMouseX = 0L, lastMouseY = 0L;
   
   static long activePotentialIndex = -1L;
   static long oldActivePotentialIndex = -1L;

   static long activeSelectedIndex = -1L;
   static long oldActiveSelectedIndex = -1L;

   static RECT *prcPotentialFields = NULL;
   static long *pPotentialPageNumbers = NULL;
   static long countPotentialFields = 0L;
   static long *pPotentialTextStart = NULL;

   static RECT keepFields[MAX_TEXT_RECT_COUNT];
   static long keepPageNumbers[MAX_TEXT_RECT_COUNT];
   static char keepFieldLabels[MAX_TEXT_RECT_COUNT][32];
   static long keepFieldRequired[MAX_TEXT_RECT_COUNT];

   static RECT *prcSelectedFields = NULL;
   static long *pPageNumbers = NULL;
   static char *pFieldLabels;
   static long *pFieldRequired = NULL;

   static long countSelectedFields = 0L;

   static HWND hwndPDFPane = NULL;
   static LONG xHWNDPDFPane = 0L;
   static LONG yHWNDPDFPane = 0L;
   static LONG cxHWNDPDFPane = 0L;
   static LONG cyHWNDPDFPane = 0L;

   static WNDPROC defaultStaticHandler = NULL;
   static LRESULT pdfPaneHandler(HWND,UINT,WPARAM,LPARAM);

   static templateDocument::tdUI *pTemplateDocumentUI = NULL;

   static RECT rcGreenBox;

   static long noTemplateFields[] = {IDDI_DATA_FIELDS_RESET,IDDI_DATA_FIELDS_INSTRUCTIONS,0};

   static LRESULT CALLBACK labelHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
   static void removeField(long foundIndex,templateDocument::tdUI *);
   static void drawFields(HDC hdc,templateDocument::tdUI *pDocument);

#include "drawBoxDefines.h"

