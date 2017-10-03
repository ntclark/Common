
   static HMENU hOptionsMenu = NULL;

   static bool didDrag = false;
   static bool commitChanges = false;

   static long mouseMenuX = 0L, mouseMenuY = 0L;
   static long startMouseX = -1L, startMouseY = -1L;
   static long lastMouseX = 0L, lastMouseY = 0L;
   
   static long activePotentialIndex = -1L;
   static long oldPotentialIndex = -1L;

   static long activeFieldIndex = -1L;
   static long oldActiveFieldIndex = -1L;

   static RECT *pEntries = NULL;
   static long countEntries = 0L;

   static RECT keepFields[MAX_TEXT_RECT_COUNT];
   static long keepPageNumbers[MAX_TEXT_RECT_COUNT];
   static char keepFieldLabels[MAX_TEXT_RECT_COUNT][32];
   static long keepFieldRequired[MAX_TEXT_RECT_COUNT];

   static RECT *prcFields = NULL;
   static long *pPageNumbers = NULL;
   static char *pFieldLabels;
   static long *pFieldRequired = NULL;

   static long countFields = 0L;

   static templateDocument::tdUI *pFieldsHandlerTemplateDocumentUI = NULL;

   static LRESULT CALLBACK labelHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
   static void drawFields(HDC,templateDocument::tdUI *);
   static void drawPotentialFields(HDC,RECT *pEntries,long countEntries,long pageNumber,templateDocument::tdUI *);
   static void removeField(long foundIndex,templateDocument::tdUI *);

#include "drawBoxDefines.h"

