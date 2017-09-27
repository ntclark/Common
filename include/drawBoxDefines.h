
#define DRAW_BOX_NOCLIP(ptdui,pr)            \
 MoveToEx(hdc,(pr) -> left,(pr) -> top,NULL);\
 LineTo(hdc,(pr) -> right,(pr) -> top);      \
 LineTo(hdc,(pr) -> right,(pr) -> bottom);   \
 LineTo(hdc,(pr) -> left,(pr) -> bottom);    \
 LineTo(hdc,(pr) -> left,(pr) -> top);

#define DRAW_BOX(ptdui,type,pr)                                                                                      \
 {                                                                                                                   \
 HDC hdc = GetDC(ptdui -> hwndHTMLHost);                                                                             \
 HPEN hRedPen = CreatePen(type,1,RGB(0,0,0));                                                                        \
 HGDIOBJ oldObj = SelectObject(hdc,hRedPen);                                                                         \
 SetROP2(hdc,R2_XORPEN);                                                                                             \
 MoveToEx(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top),NULL);   \
 LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));        \
 LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));  \
 LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));    \
 LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));          \
 DeleteObject(SelectObject(hdc,oldObj));                                                                             \
 ReleaseDC(ptdui -> hwndHTMLHost,hdc);                                                                               \
 }

#define DRAW_COLORED_BOX(ptdui,type,color,pr)      \
{                                                  \
HDC hdc = GetDC(ptdui -> hwndHTMLHost);            \
HPEN hRedPen = CreatePen(type,1,color);            \
HGDIOBJ oldObj = SelectObject(hdc,hRedPen);        \
MoveToEx(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top),NULL);   \
LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));        \
LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));  \
LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));    \
LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));          \
DeleteObject(SelectObject(hdc,oldObj));            \
ReleaseDC(ptdui -> hwndHTMLHost,hdc);              \
}

#define DRAW_COLORED_BOX_HDC(hdc,ptdui,type,color,pr)    \
{                                                        \
HPEN hRedPen = CreatePen(type,1,color);                  \
HGDIOBJ oldObj = SelectObject(hdc,hRedPen);              \
MoveToEx(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top),NULL);   \
LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));        \
LineTo(hdc,min(ptdui -> rcPDFPagePixels.right,(pr) -> right),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));  \
LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),min(ptdui -> rcPDFPagePixels.bottom,(pr) -> bottom));    \
LineTo(hdc,max(ptdui -> rcPDFPagePixels.left,(pr) -> left),max(ptdui -> rcPDFPagePixels.top,(pr) -> top));          \
DeleteObject(SelectObject(hdc,oldObj));                  \
}

#define DRAW_RED_BOX(ptdui,type,pr) DRAW_COLORED_BOX(ptdui,type,RGB(255,0,0),pr)
#define DRAW_WHITE_BOX(ptdui,type,pr) DRAW_COLORED_BOX(ptdui,type,RGB(255,255,255),pr)
#define DRAW_BLACK_BOX(ptdui,type,pr) DRAW_COLORED_BOX(ptdui,type,RGB(0,0,0),pr)

#define DRAW_GREEN_BOX(ptdui,type,pr,w) DRAW_COLORED_BOX(ptdui,type,RGB(0,255,0),pr)
#define DRAW_GREEN_BOX_HDC(hdc,ptdui,type,pr,w) DRAW_COLORED_BOX_HDC(hdc,ptdui,type,RGB(0,255,0),pr)

