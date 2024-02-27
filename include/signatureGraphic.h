#pragma once

#define PREALLOCATED_SIGNATURE_GRAPHIC_SIZE  32768

struct signatureGraphic {

   signatureGraphic(bool isPreallocated = false) { 
      memset(this,0,sizeof(signatureGraphic));
      if ( isPreallocated ) {
         isIndependentOfList = true;
         pSignatureDataX = new long[PREALLOCATED_SIGNATURE_GRAPHIC_SIZE];
         pSignatureDataY = new long[PREALLOCATED_SIGNATURE_GRAPHIC_SIZE];
         pSignatureDataPage = new long[PREALLOCATED_SIGNATURE_GRAPHIC_SIZE];
         pInkWeight = new float[PREALLOCATED_SIGNATURE_GRAPHIC_SIZE];
      }
      };

   signatureGraphic(RECT *pPdfRect) {
      memset(this,0,sizeof(signatureGraphic));
      padOriginPDFUnits.x = pPdfRect -> left;
      padOriginPDFUnits.y = pPdfRect -> top;
      padWidthPDFUnits = pPdfRect -> right - pPdfRect -> left;
      padHeightPDFUnits = pPdfRect -> top - pPdfRect -> bottom;
   };

   static signatureGraphic *duplicate(signatureGraphic *pRHS) {
      signatureGraphic *pThis = new signatureGraphic();
      memcpy(pThis,pRHS,sizeof(signatureGraphic));
      pThis -> pSignatureDataX = new long[pThis -> totalPoints];
      pThis -> pSignatureDataY = new long[pThis -> totalPoints];
      pThis -> pSignatureDataPage = new long[pThis -> totalPoints];
      pThis -> pInkWeight = new float[pThis -> totalPoints];
      memcpy(pThis -> pSignatureDataX,pRHS -> pSignatureDataX,pThis -> totalPoints * sizeof(long));
      memcpy(pThis -> pSignatureDataY,pRHS -> pSignatureDataY,pThis -> totalPoints * sizeof(long));
      memcpy(pThis -> pSignatureDataPage,pRHS -> pSignatureDataPage,pThis -> totalPoints * sizeof(long));
      memcpy(pThis -> pInkWeight,pRHS -> pInkWeight,pThis -> totalPoints * sizeof(float));
      return pThis;
   }


   ~signatureGraphic() { 
      if ( pSignatureDataX ) delete [] pSignatureDataX; 
      if ( pSignatureDataY ) delete [] pSignatureDataY; 
      if ( pSignatureDataPage ) delete [] pSignatureDataPage;
      if ( pInkWeight ) delete [] pInkWeight;
   };

   void addPoint(long x,long y,long pageNumber,float inkWeight) { 
      if ( PREALLOCATED_SIGNATURE_GRAPHIC_SIZE == totalPoints ) 
         return;
      pSignatureDataX[totalPoints] = x; 
      pSignatureDataY[totalPoints] = y; 
      pSignatureDataPage[totalPoints] = pageNumber;
      pInkWeight[totalPoints] = inkWeight;
      totalPoints++; 
   };

   long totalPoints;
   long offsetX,offsetY;
   POINT padOriginPDFUnits;
   long padWidthPDFUnits,padHeightPDFUnits;
   long pdfPageNumber;
   long pdfAdobePageNumber;
   bool isIndependentOfList;
   double padScaleX,padScaleY,scaleX,scaleY,interWindowScaleX,interWindowScaleY;
   double scaleToPDFX,scaleToPDFY;
   double lcdWidth,lcdHeight;
   POINTL windowsOrigin;
   long windowsWidth,windowsHeight;
   long *pSignatureDataX;
   long *pSignatureDataY;
   long *pSignatureDataPage;
   float *pInkWeight;
};

