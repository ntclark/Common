// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

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
      }
      };

   signatureGraphic(RECT *pPdfRect) {
      memset(this,0,sizeof(signatureGraphic));
      padOriginPDFUnits.x = pPdfRect -> left;
      padOriginPDFUnits.y = pPdfRect -> top;
      padWidthPDFUnits = pPdfRect -> right - pPdfRect -> left;
      padHeightPDFUnits = pPdfRect -> top - pPdfRect -> bottom;
   };

   ~signatureGraphic() { 
      if ( pSignatureDataX ) delete [] pSignatureDataX; 
      if ( pSignatureDataY ) delete [] pSignatureDataY; 
      if ( pSignatureDataPage ) delete [] pSignatureDataPage;
   };

   void addPoint(long x,long y,long pageNumber) { 
      if ( PREALLOCATED_SIGNATURE_GRAPHIC_SIZE == totalPoints ) 
         return;
      pSignatureDataX[totalPoints] = x; 
      pSignatureDataY[totalPoints] = y; 
      pSignatureDataPage[totalPoints] = pageNumber;
      totalPoints++; 
   };

   long totalPoints;
   long offsetX,offsetY;
   POINT padOriginPDFUnits;
   long padWidthPDFUnits,padHeightPDFUnits;
   long pdfPageNumber;
   long pdfAdobePageNumber;
   bool isIndependentOfList;
   double scaleX,scaleY,interWindowScaleX,interWindowScaleY;
   double scaleToPDFX,scaleToPDFY;
   POINTL windowsOrigin;
   long windowsWidth,windowsHeight;
   long *pSignatureDataX;
   long *pSignatureDataY;
   long *pSignatureDataPage;
};

