// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

   static void drawSelections(HDC hdc,templateDocument::tdUI *pDocument) {

   RECT *pRect = selections;
   
   for ( long k = 0; k < countSelections; k++ ) {
      if ( pageSelections[k] != pDocument -> currentPageNumber ) {
         pRect++;
         continue;
      }
      DRAW_BLUE_BOX(pRect,2)
      pRect++;
   }

   return;
   }

   void removeSelection(long foundIndex) {

   RECT *pKeep = new RECT[MAX_TEXT_RECT_COUNT - foundIndex - 1];
   memcpy(pKeep,&selections[foundIndex + 1],(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
   memset(&selections[foundIndex],0,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
   memcpy(&selections[foundIndex],pKeep,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
   delete [] pKeep;

   char *pKeepText = new char[MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33];
   memcpy(pKeepText,&textSelections[33 * foundIndex + 1],(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
   memset(&textSelections[foundIndex * 33],0,(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
   memcpy(&textSelections[foundIndex * 33],pKeepText,(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
   delete [] pKeepText;

   long *pKeepLong = new long[MAX_TEXT_RECT_COUNT - foundIndex - 1];
   memcpy(pKeepLong,&pageSelections[foundIndex + 1],(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
   memset(&pageSelections[foundIndex],0,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
   memcpy(&pageSelections[foundIndex],pKeepLong,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
   delete [] pKeepLong;

   countSelections--;

   return;
   }
