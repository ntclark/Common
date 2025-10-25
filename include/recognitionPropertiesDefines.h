
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

   static RECT selectionsRect[MAX_TEXT_RECT_COUNT];
   static char selectionsText[MAX_TEXT_TEXT_SPACE];
   static long selectionsPage[MAX_TEXT_RECT_COUNT];
   static long selectionsIndex[MAX_TEXT_RECT_COUNT];
   static long countSelections = 0L;

   static RECT *prcSelectedFields = NULL;

   static char szMaxSelectionsReached[128];

   static long *pEncounteredInDrag = NULL;

   static RECT *prcPotentialFields = NULL;
   static long countPotentialFields = 0L;

   static HWND hwndPDFPane = NULL;
   static LONG xHWNDPDFPane = 0L;
   static LONG yHWNDPDFPane = 0L;
   static LONG cxHWNDPDFPane = 0L;
   static LONG cyHWNDPDFPane = 0L;

   static WNDPROC defaultStaticHandler = NULL;
   static LRESULT pdfPaneHandler(HWND,UINT,WPARAM,LPARAM);

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

#define RESET_SELECTIONS \
    countSelections = 0;                                \
    memset(selectionsRect,0,sizeof(selectionsRect));    \
    memset(selectionsPage,0,sizeof(selectionsPage));    \
    memset(selectionsText,0,sizeof(selectionsText));    \
    memset(selectionsIndex,0,sizeof(selectionsIndex));  \
    SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");      \
    SetDlgItemText(hwnd,IDDI_CV_MORE_INFORMATION,"");



   static void drawSelections(HDC,templateDocument::tdUI *);
   static void removeSelection(long atIndex);
