
    static LRESULT pdfPaneHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

    if ( msg < WM_MOUSEFIRST || msg > WM_MOUSELAST )
        return defaultStaticHandler(hwnd,msg,wParam,lParam);

    lParam = MAKELPARAM( LOWORD(lParam) + xHWNDPDFPane, HIWORD(lParam) + yHWNDPDFPane);

    return SendMessage(GetParent(hwnd),msg,wParam,lParam);
    }


    static void drawSelections(HDC hdc,templateDocument::tdUI *pDocument) {

    if ( ! pDocument -> isDocumentRendered() )
        return;

    bool wasSupplied = true;

    if ( NULL == hdc ) {
        wasSupplied = false;
        hdc = GetDC(pDocument -> hwndPane);
    }

    for ( long k = 0; k < countSelections; k++ ) {

        RECT r = selectionsRect[k];

        pDocument -> convertToPixels(selectionsPage[k],&r);


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
    memcpy(pKeep,&selectionsRect[foundIndex + 1],(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
    memset(&selectionsRect[foundIndex],0,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
    memcpy(&selectionsRect[foundIndex],pKeep,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(RECT));
    delete [] pKeep;

    char *pKeepText = new char[MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33];
    memcpy(pKeepText,&selectionsText[33 * foundIndex + 1],(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
    memset(&selectionsText[foundIndex * 33],0,(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
    memcpy(&selectionsText[foundIndex * 33],pKeepText,(MAX_TEXT_TEXT_SPACE - (foundIndex - 1) * 33) * sizeof(char));
    delete [] pKeepText;

    long *pKeepLong = new long[MAX_TEXT_RECT_COUNT - foundIndex - 1];
    memcpy(pKeepLong,&selectionsPage[foundIndex + 1],(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
    memset(&selectionsPage[foundIndex],0,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
    memcpy(&selectionsPage[foundIndex],pKeepLong,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));

    memcpy(pKeepLong,&selectionsIndex[foundIndex + 1],(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
    memset(&selectionsIndex[foundIndex],0,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));
    memcpy(&selectionsIndex[foundIndex],pKeepLong,(MAX_TEXT_RECT_COUNT - foundIndex - 1) * sizeof(long));

    delete [] pKeepLong;

    countSelections--;

    return;
    }
