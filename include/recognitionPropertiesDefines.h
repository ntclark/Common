
   static bool mouseButtonDown;
   static bool isAdding;
   static bool commitChanges;
   static bool didDrag;
   static HWND hwndVellum;
   static long activePotentialIndex = -1L;
   static long oldPotentialIndex = -1L;

   static long startMouseX = 0L, startMouseY = 0L;
   static long lastMouseX = 0L, lastMouseY = 0L;

   static HWND hwndToolTips = NULL;
   static char szCurrentToolTipText[1024];

   static RECT *pEntries = NULL;

   static RECT selections[MAX_TEXT_RECT_COUNT];
   static char textSelections[MAX_TEXT_TEXT_SPACE];
   static long pageSelections[MAX_TEXT_RECT_COUNT];

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

#define DRAW_BOX(pr)                                           \
   {                                                           \
   HDC hdc = GetDC(hwndVellum);                                \
   HPEN hPen = CreatePen(PS_SOLID,1,RGB(128,128,128));         \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);                 \
   SetROP2(hdc,R2_XORPEN);                                     \
   RECT rc;                                                    \
   memcpy(&rc,(pr),sizeof(RECT));                              \
   pTemplateDocumentUI -> convertToWindows(&rc);               \
   MoveToEx(hdc,rc.left,rc.top,NULL);                          \
   LineTo(hdc,rc.right,rc.top);                                \
   LineTo(hdc,rc.right,rc.bottom);                             \
   LineTo(hdc,rc.left,rc.bottom);                              \
   LineTo(hdc,rc.left,rc.top);                                 \
   DeleteObject(SelectObject(hdc,oldPen));                     \
   ReleaseDC(hwndVellum,hdc);                                  \
   }

#define DRAW_COLORED_BOX(color,pr,w)            \
{                                               \
   HDC hdc = GetDC(hwndVellum);                 \
   HPEN hRedPen = CreatePen(PS_SOLID,(w),color);\
   HGDIOBJ oldObj = SelectObject(hdc,hRedPen);  \
   MoveToEx(hdc,(pr) -> left,(pr) -> top,NULL); \
   LineTo(hdc,(pr) -> right,(pr) -> top);       \
   LineTo(hdc,(pr) -> right,(pr) -> bottom);    \
   LineTo(hdc,(pr) -> left,(pr) -> bottom);     \
   LineTo(hdc,(pr) -> left,(pr) -> top);        \
   DeleteObject(SelectObject(hdc,oldObj));      \
   ReleaseDC(hwndVellum,hdc);                   \
}

#define DRAW_GREEN_BOX(pr,w) DRAW_COLORED_BOX(RGB(0,255,0),pr,w)


   static void drawSelections(HDC,templateDocument::tdUI *);
   static void removeSelection(long atIndex);
