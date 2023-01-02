
#include "CursiVision.h"

#if 0
   void CursiVision::windowToPDFPageCoordinates(RECT *pRect) {

   pRect -> left -= pdfDocumentUpperLeft.x;
   pRect -> right -= pdfDocumentUpperLeft.x;
   pRect -> top -= pdfDocumentUpperLeft.y;
   pRect -> bottom -= pdfDocumentUpperLeft.y;

   long cxPixels = pRect -> right - pRect -> left;

   pRect -> left = documentUnitsOffLeft() + (long)((double)pRect -> left / xPixelsPerPageUnit);
   pRect -> right = pRect -> left + (long)((double)cxPixels / xPixelsPerPageUnit);

   long cyPixels = pRect -> bottom - pRect -> top;

   pRect -> top = (long)((double)pdfPageHeight * ( 1.0 - percentPDFOffScreenTop ) - (double)pRect -> top / yPixelsPerPageUnit);
   pRect -> bottom = pRect -> top - (long)((double)cyPixels / yPixelsPerPageUnit);

   return;
   }


   void CursiVision::windowToPDFDocumentCoordinates(RECT *pRect,long currentPageNumber) {

   pRect -> left -= pdfDocumentUpperLeft.x;
   pRect -> right -= pdfDocumentUpperLeft.x;
   pRect -> top -= pdfDocumentUpperLeft.y;
   pRect -> bottom -= pdfDocumentUpperLeft.y;

   long cxPixels = pRect -> right - pRect -> left;

   pRect -> left = documentUnitsOffLeft() + (long)((double)pRect -> left / xPixelsPerPageUnit);

   pRect -> right = pRect -> left + (long)((double)cxPixels / xPixelsPerPageUnit);

   long cyPixels = pRect -> bottom - pRect -> top;

   long pdfDocumentHeight = pdfPageHeight * pCursiVision -> pdfPageCount;

   long pdfUnitsAbove = pdfPageHeight * ( currentPageNumber - 1 );

   pRect -> top = pdfDocumentHeight - pdfUnitsAbove + (long)((double)pRect -> top / yPixelsPerPageUnit);
   pRect -> top = pRect -> top - (long)((double)pdfPageHeight * percentPDFOffScreenTop);
   pRect -> bottom = pRect -> top - (long)((double)cyPixels / yPixelsPerPageUnit);

   return;
   }

   void CursiVision::windowToPDFPageCoordinates(RECT *pInput,RECT *pOutput) {
   memcpy(pOutput,pInput,sizeof(RECT));
   windowToPDFPageCoordinates(pOutput);
   return;
   }


   void CursiVision::windowToPDFPageCoordinates(POINTL *pPtl) {

   pPtl -> x -= pdfDocumentUpperLeft.x;
   pPtl -> y -= pdfDocumentUpperLeft.y;

   pPtl -> x = documentUnitsOffLeft() + (long)((double)pPtl -> x / xPixelsPerPageUnit);
   pPtl -> y = (long)((double)pdfPageHeight * ( 1.0 - percentPDFOffScreenTop ) ) - (long)((double)pPtl -> y / yPixelsPerPageUnit);

   return;
   }
#endif

#if 0
   void CursiVision::pdfPageToWindowCoordinates(RECT *pRect) {

   long yTop = pRect -> top;
   long yBottom = pRect -> bottom;

   if ( yBottom < yTop ) {
      yTop = pdfPageHeight - yTop;
      yBottom = yTop + (pRect -> top - pRect -> bottom);
   }

   double cxWindow = (double)(pRect -> right - pRect -> left) * xPixelsPerPageUnit;
   double cyWindow = (double)(yBottom - yTop) * yPixelsPerPageUnit;

   double xWindow = (double)pRect -> left * xPixelsPerPageUnit - (double)pixelsOffLeft();
   double yWindow = (double)yTop * yPixelsPerPageUnit - (double)pixelsOffTop();

   pRect -> left = (long)(xWindow + 0.5);
   pRect -> right = (long)(xWindow + cxWindow + 0.5);

   pRect -> top = (long)(yWindow + 0.5);
   pRect -> bottom = (long)(yWindow + cyWindow + 0.5);

   pRect -> left += pdfDocumentUpperLeft.x;
   pRect -> right += pdfDocumentUpperLeft.x;
   pRect -> top += pdfDocumentUpperLeft.y;
   pRect -> bottom += pdfDocumentUpperLeft.y;

   return;
   }


   void CursiVision::pdfDocumentToWindowCoordinates(RECT *pRect,long currentPageNumber) {
   pRect -> top -= (pdfPageCount - currentPageNumber) * pdfPageHeight;
   pRect -> bottom -= (pdfPageCount - currentPageNumber) * pdfPageHeight;
   pdfPageToWindowCoordinates(pRect);
   return;
   }


   void CursiVision::pdfPageToWindowCoordinates(RECT *pInput,RECT *pOutput) {
   memcpy(pOutput,pInput,sizeof(RECT));
   pdfPageToWindowCoordinates(pOutput);
   return;
   }


   void CursiVision::pdfPageToWindowCoordinates(POINTL *pPtl) {
   pPtl -> x = (long)((double)pPtl -> x * xPixelsPerPageUnit);
   pPtl -> y = (long)((double)pPtl -> y * yPixelsPerPageUnit);
   pPtl -> x += pdfDocumentUpperLeft.y;
   pPtl -> y += pdfDocumentUpperLeft.y;
   return;
   }


   void CursiVision::resolveDocumentCorners() {

   FindDocumentUpperLeftCorner(hwndHTMLHost,hwndPDFHorizontalScrollBar,hwndPDFToolBar,&pdfDocumentUpperLeft);
   FindDocumentLowerLeftCorner(hwndHTMLHost,hwndPDFHorizontalScrollBar,&pdfDocumentLowerLeft);
   FindDocumentUpperRightCorner(hwndHTMLHost,hwndPDFVerticalScrollBar,hwndPDFHorizontalScrollBar,hwndPDFToolBar,&pdfDocumentUpperRight);
   FindDocumentLowerRightCorner(hwndHTMLHost,hwndPDFHorizontalScrollBar,hwndPDFVerticalScrollBar,&pdfDocumentLowerRight);

   long leftX = min(pdfDocumentUpperLeft.x,pdfDocumentLowerLeft.x);
   long topY = min(pdfDocumentUpperLeft.y,pdfDocumentUpperRight.y);
   long rightX = max(pdfDocumentUpperRight.x,pdfDocumentLowerRight.x);
   long bottomY = max(pdfDocumentLowerLeft.y,pdfDocumentLowerRight.y);

   pdfDocumentUpperLeft.x = leftX;
   pdfDocumentUpperLeft.y = topY;
   pdfDocumentUpperRight.x = rightX;
   pdfDocumentUpperRight.y = topY;
   pdfDocumentLowerLeft.x = leftX;
   pdfDocumentLowerLeft.y = bottomY;
   pdfDocumentLowerRight.x = rightX;
   pdfDocumentLowerRight.y = bottomY;

   return;
   }

   long CursiVision::pixelsOffLeft() {
   return (long)((double)pdfPageWidth * percentPDFOffScreenLeft * xPixelsPerPageUnit);
   }

   long CursiVision::pixelsOffTop() {
   return (long)((double)pdfPageHeight * percentPDFOffScreenTop * yPixelsPerPageUnit);
   }

   long CursiVision::documentUnitsOffLeft() {
   return (long)((double)pdfPageWidth * percentPDFOffScreenLeft);
   }

   long CursiVision::documentUnitsOffTop() {
   return (long)((double)pdfPageHeight * percentPDFOffScreenTop);
   }
#endif