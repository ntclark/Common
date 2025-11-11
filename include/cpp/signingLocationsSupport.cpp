
    static LRESULT pdfPaneHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

    if ( msg < WM_MOUSEFIRST || msg > WM_MOUSELAST )
        return defaultStaticHandler(hwnd,msg,wParam,lParam);

    lParam = MAKELPARAM( LOWORD(lParam) + xHWNDPDFPane, HIWORD(lParam) + yHWNDPDFPane);

    return SendMessage(GetParent(hwnd),msg,wParam,lParam);
    }


    static void setLearnControls(OBJECT_WITH_PROPERTIES *pObject,HWND hwnd) {

    //doLearn = (0 == countLocations);
    //SendDlgItemMessage(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN,BM_SETCHECK,(WPARAM)(doLearn ? BST_CHECKED : BST_UNCHECKED),0L);
#ifndef CURSIVISION_BUILD
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
    if ( ! pObject -> SkipSignatureCapture() ) {
#endif
#endif
    EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN),0 == countLocations);
    EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_LEARN_2),0 == countLocations);
    EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_ON),doLearn && 0 == countLocations);
    EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_OFF),doLearn && 0 == countLocations);
    EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_CONTINUOUS_DOODLE_REMEMBER),doLearn && 0 == countLocations);
#ifndef CURSIVISION_BUILD
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
    }
#endif
#endif

    }


    static void drawSigningAreas(HDC hdc,templateDocument::tdUI *pDocument) {

    if ( ! pDocument -> isDocumentRendered() )
        return;

    bool wasSupplied = true;

    if ( NULL == hdc ) {
        wasSupplied = false;
        hdc = GetDC(pDocument -> hwndPane);
    }

    HFONT hGUIFont = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
    HGDIOBJ oldFont = SelectObject(hdc,hGUIFont);

    struct writingLocation *pLocation = pCurrentLocations;
   
    memset(visibleRects,0,sizeof(visibleRects));
    memset(visibleRectIndexes,0,sizeof(visibleRectIndexes));
    memset(inverseVisibleRectIndexes,0,sizeof(inverseVisibleRectIndexes));
    countCurrentVisibleRects = 0L;

    long vrIndex = 0L;
    long allRectIndex = -1L;

    for ( long k = 0; k < countLocations; k++, pLocation++ ) {

        allRectIndex++;

        if ( k == rectIgnoreIndex )
            continue;

        RECT r = pLocation -> documentRect;

        pDocument -> convertToPixels(pLocation -> pdfPageNumber,&r);

        if ( r.bottom < pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].top )
            continue;

        if ( r.top > pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].bottom )
            continue;

        RECT rcText = r;

        rcText.left = max(pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].left,r.left);
        rcText.right = min(pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].right,r.right);
        rcText.top = max(pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].top,r.top);
        rcText.bottom = min(pDocument -> prcPDFSpecificPagePixels[pLocation -> pdfPageNumber - 1].bottom,r.bottom);

        if ( /*! ( -1L == candidateRectIndex ) && */candidateRectIndex == allRectIndex ) 
            DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,PS_SOLID,DB_GREEN,(&rcText),BORDER_WEIGHT)
        else
            DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,PS_SOLID,DB_BLACK,(&rcText),BORDER_WEIGHT)

        visibleRects[vrIndex] = r;

        visibleRectIndexes[vrIndex] = allRectIndex;

        inverseVisibleRectIndexes[allRectIndex] = vrIndex;

        vrIndex++;

        char szIndex[64];

        sprintf(szIndex,"Page %ld - %ld",pLocation -> pdfPageNumber,allRectIndex + 1);

        DrawTextEx(hdc,szIndex,(int)strlen(szIndex),&rcText,DT_CENTER | DT_VCENTER | DT_SINGLELINE,NULL);

    }

    countCurrentVisibleRects = vrIndex;

    SelectObject(hdc,oldFont);

    if ( ! wasSupplied )
        ReleaseDC(pDocument -> hwndPane,hdc);

    return;
    }


    static LRESULT CALLBACK signingLocationsOrderHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

    switch ( msg ) {

    case WM_INITDIALOG: {

        RECT rcEntry,rcParent;
        char szString[256];

        GetWindowRect(hwnd,&rcParent);

        GetWindowRect(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_ORDER),&rcEntry);

        HWND hwndSpinner = CreateWindowEx(0L,UPDOWN_CLASS,"",WS_CHILD | WS_VISIBLE | UDS_SETBUDDYINT,rcEntry.right - rcParent.left - 2,rcEntry.top - rcParent.top - 4 - GetSystemMetrics(SM_CYCAPTION),20,rcEntry.bottom - rcEntry.top,hwnd,(HMENU)IDDI_SIGNING_LOCATIONS_ORDER_SPIN,NULL,NULL);

        SendMessage(hwndSpinner,UDM_SETBUDDY,(WPARAM)GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_ORDER),0L);
        SendMessage(hwndSpinner,UDM_SETRANGE,0L,MAKELONG((short)countLocations,(short)1));

        char szTemp[MAX_PATH];

        LoadString(hModuleResources,IDD_SIGNING_LOCATIONS_ORDER + 16385,szString,256);

        sprintf(szTemp,szString,candidateRectIndex + 1);

        SetDlgItemText(hwnd,IDDI_SIGNING_LOCATIONS_ORDER_LABEL,szTemp);

        sprintf(szTemp,"%ld",candidateRectIndex + 1);
        SetDlgItemText(hwnd,IDDI_SIGNING_LOCATIONS_ORDER,szTemp);

        POINT ptl;
        GetCursorPos(&ptl);
   
        SetWindowPos(hwnd,HWND_TOP,ptl.x + 32,ptl.y - 32,0,0,SWP_NOSIZE);

        long resourceIds[] = {IDDI_SIGNING_LOCATIONS_ORDER_LABEL,IDD_SIGNING_LOCATIONS_ORDER + 16384,IDDI_SIGNING_LOCATIONS_ORDER_OK,IDDI_SIGNING_LOCATIONS_ORDER_CANCEL};

        for ( long k = 0; k < sizeof(resourceIds) / sizeof(long); k++ ) {
            LoadString(hModuleResources,resourceIds[k],szString,256);
            SetDlgItemText(hwnd,resourceIds[k],szString);
        }

        return (LRESULT)0;
        }
        break;

    case WM_COMMAND: {

        switch ( LOWORD(wParam) ) {

        case IDDI_SIGNING_LOCATIONS_ORDER_OK:
            char szTemp[32];
            GetDlgItemText(hwnd,IDDI_SIGNING_LOCATIONS_ORDER,szTemp,32);
            candidateRectIndex = atol(szTemp) - 1;
            EndDialog(hwnd,1L);
            break;

        case IDDI_SIGNING_LOCATIONS_ORDER_CANCEL:
            EndDialog(hwnd,0L);
            break;

        default:
            break;
        }
   
        }
        break;

    default:
        break;

    }
    return 0L;
    }
