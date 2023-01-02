

   static void drawSelections(HDC hdc,templateDocument::tdUI *pDocument) {

    if ( ! pDocument -> isDocumentRendered() )
        return;

    bool wasSupplied = true;

    if ( NULL == hdc ) {
        wasSupplied = false;
        hdc = GetDC(pDocument -> hwndPane);
    }

   for ( long k = 0; k < countSelections; k++ ) {

        RECT r = selections[k];

        pDocument -> convertToPixels(pageSelections[k],&r);


        if ( r.bottom < pDocument -> rcPDFPagePixels.top )
            continue;

        if ( r.top > pDocument -> rcPDFPagePixels.bottom )
            continue;

        RECT rcText = r;

        rcText.left = max(pDocument -> rcPDFPagePixels.left,r.left);
        rcText.right = min(pDocument -> rcPDFPagePixels.right,r.right);
        rcText.top = max(pDocument -> rcPDFPagePixels.top,r.top);
        rcText.bottom = min(pDocument -> rcPDFPagePixels.bottom,r.bottom);

        DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,PS_SOLID,DB_BLUE,(&rcText),BORDER_WEIGHT)

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
