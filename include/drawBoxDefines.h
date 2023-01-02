
#ifndef BORDER_RADIUS
#define BORDER_RADIUS 10
#endif

#ifndef BORDER_WEIGHT
#define BORDER_WEIGHT 2
#endif

#ifndef DB_MINDRAG
#define DB_MINDRAG 8
#endif

#define DB_WHITE    RGB(255,255,255)
#define DB_RED      RGB(255,0,0)
#define DB_GREEN    RGB(0,255,0)
#define DB_BLUE     RGB(0,0,255)
#define DB_BLACK    RGB(0,0,0)
#define DB_MAGENTA  RGB(255,0,255)
#define DB_CYAN     RGB(0,255,255)

#define DRAW_COLORED_BOX_IN_POINTS(ptdui,type,color,pr,w) \
{                                                   \
   RECT rcDB = *pr;                                 \
   long pn;                                         \
   ptdui -> PDFiumControl() -> get_PDFPageUnderMouse(&pn); \
   ptdui -> PDFiumControl() -> ConvertPointsToClippedVisiblePanePixels(pn,&rcDB); \
   if ( 0 < ( rcDB.bottom - rcDB.top ) ) {          \
      HDC hdc = GetDC(ptdui -> hwndPane);           \
      HPEN hPen = CreatePen(type,w,color);          \
      HPEN oldPen = (HPEN)SelectObject(hdc,hPen);   \
      HBRUSH hBrush = (HBRUSH)GetStockObject(HOLLOW_BRUSH); \
      HGDIOBJ oldBrush = SelectObject(hdc,hBrush);          \
      RoundRect(hdc,rcDB.left,rcDB.top,rcDB.right,rcDB.bottom,BORDER_RADIUS,BORDER_RADIUS); \
      DeleteObject(SelectObject(hdc,oldPen));               \
      SelectObject(hdc,oldBrush);                           \
      ReleaseDC(ptdui -> hwndPane,hdc);                     \
   }                                                        \
}

#define DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,type,color,pr,w) \
{                                               \
   LOGBRUSH logBrush{0};                        \
   logBrush.lbStyle = BS_SOLID;                 \
   logBrush.lbColor = color;                    \
   HPEN hPen = ExtCreatePen(PS_GEOMETRIC | PS_INSIDEFRAME | PS_ENDCAP_ROUND,w,&logBrush,0,NULL); \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);          \
   int oldRop = SetROP2(hdc,R2_COPYPEN);                \
   HBRUSH hBrush = (HBRUSH)GetStockObject(HOLLOW_BRUSH);\
   HGDIOBJ oldBrush = SelectObject(hdc,hBrush);         \
   RECT rcDB = *pr;                                     \
   RoundRect(hdc,rcDB.left,rcDB.top,rcDB.right,rcDB.bottom,BORDER_RADIUS,BORDER_RADIUS); \
   SetROP2(hdc,oldRop);                                 \
   SelectObject(hdc,oldBrush);                          \
   DeleteObject(SelectObject(hdc,oldPen));              \
}

#define DRAW_COLORED_BOX_IN_PIXELS_NOCLIP_NOHIDEABLE(ptdui,type,color,pr,w) \
{                                                                           \
   HDC hdc = GetDC(ptdui -> hwndPane);                                      \
   DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,type,color,pr,w)    \
   ReleaseDC(ptdui -> hwndPane,hdc);                                        \
}

#define DRAW_COLORED_BOX_IN_PIXELS_HDC(hdc,type,color,pr,w) \
{                                               \
   LOGBRUSH logBrush{0};                        \
   logBrush.lbStyle = BS_SOLID;                 \
   logBrush.lbColor = color;                    \
   HPEN hPen = ExtCreatePen(PS_GEOMETRIC | PS_INSIDEFRAME | PS_ENDCAP_ROUND,w,&logBrush,0,NULL); \
   HPEN oldPen = (HPEN)SelectObject(hdc,hPen);  \
   int oldRop = SetROP2(hdc, R2_NOTXORPEN);     \
   RECT rcDB = *pr;                             \
   if ( rcDB.right < rcDB.left ) {              \
      long t = rcDB.right;                      \
      rcDB.right = rcDB.left;                   \
      rcDB.left = t;                            \
   }                                            \
   if ( rcDB.bottom < rcDB.top ) {              \
      long t = rcDB.bottom;                     \
      rcDB.bottom = rcDB.top;                   \
      rcDB.top = t;                             \
   }                                            \
   HBRUSH hBrush = (HBRUSH)GetStockObject(HOLLOW_BRUSH);\
   HGDIOBJ oldBrush = SelectObject(hdc,hBrush); \
   RoundRect(hdc,rcDB.left,rcDB.top,rcDB.right,rcDB.bottom,BORDER_RADIUS,BORDER_RADIUS); \
   SetROP2(hdc,oldRop);                         \
   SelectObject(hdc,oldBrush);                  \
   DeleteObject(SelectObject(hdc,oldPen));      \
}

#define DRAW_COLORED_BOX_IN_PIXELS_HWND(hwndHDC,type,color,pr,w) \
{                                                       \
   HDC hdc = GetDC(hwndHDC);                            \
   DRAW_COLORED_BOX_IN_PIXELS_HDC(hdc,type,color,pr,w)  \
   ReleaseDC(hwndHDC,hdc);                              \
}

#define DRAW_COLORED_BOX_IN_PIXELS(ptdui,type,color,pr,w)               \
{                                                                       \
   DRAW_COLORED_BOX_IN_PIXELS_HWND(ptdui -> hwndPane,type,color,pr,w)   \
}