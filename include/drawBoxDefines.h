
#define DRAW_BOX_NOCLIP(ptdui,type,pr,w)        \
{                                               \
   HDC hdc = GetDC(ptdui -> hwndPane);          \
   HPEN hRedPen = CreatePen(type,w,RGB(0,0,0)); \
   HGDIOBJ oldObj = SelectObject(hdc,hRedPen);  \
   SetROP2(hdc,R2_XORPEN);                      \
   RECT rc;                                     \
   memcpy(&rc,(pr),sizeof(RECT));               \
   ptdui -> convertToPanePixels(0,&rc);         \
   MoveToEx(hdc,(pr) -> left,(pr) -> top,NULL); \
   LineTo(hdc,(pr) -> right,(pr) -> top);       \
   LineTo(hdc,(pr) -> right,(pr) -> bottom);    \
   LineTo(hdc,(pr) -> left,(pr) -> bottom);     \
   LineTo(hdc,(pr) -> left,(pr) -> top);        \
   DeleteObject(SelectObject(hdc,oldObj));      \
   ReleaseDC(ptdui -> hwndPane,hdc);            \
}

#define DRAW_BOX(ptdui,type,pr,w)               \
{                                               \
   HDC hdc = GetDC(ptdui -> hwndPane);          \
   HPEN hRedPen = CreatePen(type,w,RGB(0,0,0)); \
   HGDIOBJ oldObj = SelectObject(hdc,hRedPen);  \
   RECT rc;                                     \
   memcpy(&rc,(pr),sizeof(RECT));               \
   ptdui -> convertToClippedPanePixels(0,&rc);  \
   MoveToEx(hdc,rc.left,rc.top,NULL);           \
   LineTo(hdc,rc.right,rc.top);                 \
   LineTo(hdc,rc.right,rc.bottom);              \
   LineTo(hdc,rc.left,rc.bottom);               \
   LineTo(hdc,rc.left,rc.top);                  \
   DeleteObject(SelectObject(hdc,oldObj));      \
   ReleaseDC(ptdui -> hwndPane,hdc);            \
 }

#if 1

// From recognition properties...

#define DRAW_COLORED_BOX(ptdui,type,color,pr,w) \
{                                               \
   HDC hdc = GetDC(ptdui -> hwndPane);          \
   HPEN hPen = CreatePen(type,w,color);         \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);  \
   RECT rc;                                     \
   memcpy(&rc,(pr),sizeof(RECT));               \
   ptdui -> convertToClippedPanePixels(0,&rc);  \
   MoveToEx(hdc,rc.left,rc.top,NULL);           \
   LineTo(hdc,rc.right,rc.top);                 \
   LineTo(hdc,rc.right,rc.bottom);              \
   LineTo(hdc,rc.left,rc.bottom);               \
   LineTo(hdc,rc.left,rc.top);                  \
   DeleteObject(SelectObject(hdc,oldPen));      \
   ReleaseDC(ptdui -> hwndPane,hdc);            \
}

#define HIDE_COLORED_BOX(ptdui,type,color,pr,w) \
{                                               \
   HDC hdc = GetDC(ptdui -> hwndPane);          \
   HPEN hPen = CreatePen(type,w,color);         \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);  \
   SetROP2(hdc,R2_XORPEN);                      \
   RECT rc;                                     \
   memcpy(&rc,(pr),sizeof(RECT));               \
   ptdui -> convertToClippedPanePixels(0,&rc);  \
   MoveToEx(hdc,rc.left,rc.top,NULL);           \
   LineTo(hdc,rc.right,rc.top);                 \
   LineTo(hdc,rc.right,rc.bottom);              \
   LineTo(hdc,rc.left,rc.bottom);               \
   LineTo(hdc,rc.left,rc.top);                  \
   DeleteObject(SelectObject(hdc,oldPen));      \
   ReleaseDC(ptdui -> hwndPane,hdc);            \
}

#define DRAW_COLORED_BOX_HDC(hdc,ptdui,type,color,pr,w)  \
{                                                        \
   HDC hdc = GetDC(ptdui -> hwndPane);          \
   HPEN hPen = CreatePen(type,w,color);         \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);  \
   RECT rc;                                     \
   memcpy(&rc,(pr),sizeof(RECT));               \
   ptdui -> convertToClippedPanePixels(0,&rc);  \
   MoveToEx(hdc,rc.left,rc.top,NULL);           \
   LineTo(hdc,rc.right,rc.top);                 \
   LineTo(hdc,rc.right,rc.bottom);              \
   LineTo(hdc,rc.left,rc.bottom);               \
   LineTo(hdc,rc.left,rc.top);                  \
   DeleteObject(SelectObject(hdc,oldPen));      \
   ReleaseDC(ptdui -> hwndPane,hdc);            \
}

#define DRAW_GREEN_BOX_HDC(hdc,ptdui,type,pr,w) DRAW_COLORED_BOX_HDC(hdc,ptdui,type,RGB(0,255,0),pr,w)
#define DRAW_BLUE_BOX_HDC(hdc,ptdui,type,pr,w) DRAW_COLORED_BOX_HDC(hdc,ptdui,type,RGB(0,0,255),pr,w)

#else

#define DRAW_COLORED_BOX(ptdui,type,color,pr)      \
{                                                  \
HDC hdc = GetDC(ptdui -> hwndPane);                \
HPEN hRedPen = CreatePen(type,1,color);            \
HGDIOBJ oldObj = SelectObject(hdc,hRedPen);        \
MoveToEx(hdc,(pr) -> left,(pr) -> top,NULL);       \
LineTo(hdc,(pr) -> right,(pr) -> top);             \
LineTo(hdc,(pr) -> right,(pr) -> bottom);          \
LineTo(hdc,(pr) -> left,(pr) -> bottom);           \
LineTo(hdc,(pr) -> left,(pr) -> top);              \
DeleteObject(SelectObject(hdc,oldObj));            \
ReleaseDC(ptdui -> hwndPane,hdc);                  \
}

#define DRAW_COLORED_BOX_HDC(hdc,ptdui,type,color,pr)    \
{                                                        \
HPEN hRedPen = CreatePen(type,1,color);                  \
HGDIOBJ oldObj = SelectObject(hdc,hRedPen);              \
MoveToEx(hdc,(pr) -> left,(pr) -> top,NULL);             \
LineTo(hdc,(pr) -> right,(pr) -> top);                   \
LineTo(hdc,(pr) -> right,(pr) -> bottom);                \
LineTo(hdc,(pr) -> left,(pr) -> bottom);                 \
LineTo(hdc,(pr) -> left,(pr) -> top);                    \
DeleteObject(SelectObject(hdc,oldObj));                  \
}

#define DRAW_GREEN_BOX_HDC(hdc,ptdui,type,pr,w) DRAW_COLORED_BOX_HDC(hdc,ptdui,type,RGB(0,255,0),pr)

#endif

#define DRAW_RED_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(255,0,0),pr,w)
#define DRAW_WHITE_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(255,255,255),pr,w)
#define DRAW_BLACK_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(0,0,0),pr,w)

#define DRAW_GREEN_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(0,255,0),pr,w)
#define DRAW_BLUE_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(0,0,255),pr,w)

