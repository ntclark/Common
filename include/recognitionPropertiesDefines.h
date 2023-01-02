
   static bool mouseButtonDown;
   static bool isAdding;
   static bool commitChanges;
   static bool didDrag;

   static long activePotentialIndex = -1L;
   static long oldPotentialIndex = -1L;
   static long lastSelectedIndex = -1L;

   static long startMouseX = 0L, startMouseY = 0L;
   static long lastMouseX = 0L, lastMouseY = 0L;

   static HWND hwndToolTips = NULL;
   static char szCurrentToolTipText[1024];

   static RECT selections[MAX_TEXT_RECT_COUNT];
   static char textSelections[MAX_TEXT_TEXT_SPACE];
   static long pageSelections[MAX_TEXT_RECT_COUNT];
   static long countSelections = 0L;

   static RECT *prcSelectedFields = NULL;
   static long *pPageNumbers = NULL;
   static char *pPageFieldText = NULL;
   static long pageNumberOfRects{0L};

   static char szMaxSelectionsReached[128];

   static long *pEncounteredInDrag = NULL;

   static RECT *prcPotentialFields = NULL;
   static long countPotentialFields = 0L;

   static templateDocument::tdUI *pTemplateDocumentUI = NULL;

#define COUNT_SELECTIONS(pr,result)                   \
{                                                     \
   *(result) = 0;                                     \
   for ( long k = 0; k < MAX_TEXT_RECT_COUNT; k++ ) { \
      if ( 0 == pr[k].left && 0 == pr[k].right )      \
         break;                                       \
      *(result) = *(result) + 1;                      \
   }                                                  \
}

   static void drawSelections(HDC,templateDocument::tdUI *);
   static void removeSelection(long atIndex);
