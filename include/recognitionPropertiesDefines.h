
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

   static RECT *pEntries = NULL;

   static RECT selections[MAX_TEXT_RECT_COUNT];
   static char textSelections[MAX_TEXT_TEXT_SPACE];
   static long pageSelections[MAX_TEXT_RECT_COUNT];

   static char szMaxSelectionsReached[128];

   static long *pEncounteredInDrag = NULL;

   static long countEntries = 0L;
   static long countSelections = 0L;

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

#define HIDE_GREEN_BOX(pr,w)                                     \
   {                                                           \
   HDC hdc = GetDC(pTemplateDocumentUI -> hwndPane);           \
   HPEN hPen = CreatePen(PS_SOLID,w,RGB(0,255,0));         \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);                 \
   SetROP2(hdc,R2_XORPEN);                                     \
   RECT rc;                                                    \
   memcpy(&rc,(pr),sizeof(RECT));                              \
   pTemplateDocumentUI -> convertToClippedPanePixels(0,&rc);   \
   MoveToEx(hdc,rc.left,rc.top,NULL);                          \
   LineTo(hdc,rc.right,rc.top);                                \
   LineTo(hdc,rc.right,rc.bottom);                             \
   LineTo(hdc,rc.left,rc.bottom);                              \
   LineTo(hdc,rc.left,rc.top);                                 \
   DeleteObject(SelectObject(hdc,oldPen));                     \
   ReleaseDC(pTemplateDocumentUI -> hwndPane,hdc);             \
   }

#define DRAW_COLORED_BOX(color,pr,w)                     \
{                                                        \
   HDC hdc = GetDC(pTemplateDocumentUI -> hwndPane);     \
   HPEN hRedPen = CreatePen(PS_SOLID,(w),color);         \
   HGDIOBJ oldObj = SelectObject(hdc,hRedPen);           \
   RECT rc;                                                    \
   memcpy(&rc,(pr),sizeof(RECT));                              \
   pTemplateDocumentUI -> convertToClippedPanePixels(0,&rc);   \
   MoveToEx(hdc,rc.left,rc.top,NULL);                          \
   LineTo(hdc,rc.right,rc.top);                                \
   LineTo(hdc,rc.right,rc.bottom);                             \
   LineTo(hdc,rc.left,rc.bottom);                              \
   LineTo(hdc,rc.left,rc.top);                                 \
   DeleteObject(SelectObject(hdc,oldObj));                     \
   ReleaseDC(pTemplateDocumentUI -> hwndPane,hdc);             \
}

#define DRAW_COLORED_BOX_PIXELS(color,pr,w)              \
{                                                        \
   HDC hdc = GetDC(pTemplateDocumentUI -> hwndPane);     \
   HPEN hRedPen = CreatePen(PS_SOLID,(w),color);         \
   HGDIOBJ oldObj = SelectObject(hdc,hRedPen);           \
   RECT rc;                                                    \
   memcpy(&rc,(pr),sizeof(RECT));                              \
   MoveToEx(hdc,rc.left,rc.top,NULL);                          \
   LineTo(hdc,rc.right,rc.top);                                \
   LineTo(hdc,rc.right,rc.bottom);                             \
   LineTo(hdc,rc.left,rc.bottom);                              \
   LineTo(hdc,rc.left,rc.top);                                 \
   DeleteObject(SelectObject(hdc,oldObj));                     \
   ReleaseDC(pTemplateDocumentUI -> hwndPane,hdc);             \
}

#define DRAW_GREEN_BOX(pr,w) DRAW_COLORED_BOX(RGB(0,255,0),pr,w)
#define DRAW_BLUE_BOX(pr,w) DRAW_COLORED_BOX(RGB(0,0,255),pr,w)
#define DRAW_GREEN_BOX_PIXELS(pr,w) DRAW_COLORED_BOX_PIXELS(RGB(0,255,0),pr,w)

   static void drawSelections(HDC,templateDocument::tdUI *);
   static void removeSelection(long atIndex);
