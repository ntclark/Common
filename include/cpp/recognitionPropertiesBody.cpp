
    resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

    if ( WM_MOUSEFIRST <= msg && msg <= WM_MOUSELAST && ! ( NULL == pTemplateDocumentUI ) ) {
        POINTL ptlMouse{LOWORD(lParam),HIWORD(lParam)};
        if ( xHWNDPDFPane > ptlMouse.x || yHWNDPDFPane > ptlMouse.y || (xHWNDPDFPane + cxHWNDPDFPane) < ptlMouse.x || (yHWNDPDFPane + cyHWNDPDFPane) < ptlMouse.y ) 
            return (LRESULT)0L;
        lParam = MAKELPARAM(ptlMouse.x - xHWNDPDFPane,ptlMouse.y - yHWNDPDFPane);
    }

    OBJECT_WITH_PROPERTIES *pObject = NULL;

    if ( p )
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

    switch ( msg ) {

    case WM_INITDIALOG: {

        PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);
        p = (resultDisposition *)pPage -> lParam;
        SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

        oldPotentialIndex = -1L;
        activePotentialIndex = -1L;

        char szTemp[1024];
        SendDlgItemMessage(hwnd,IDDI_CV_RECOGNITION_BYNAME,BM_SETCHECK,pObject -> recognizeByName ? BST_CHECKED : BST_UNCHECKED,0L);
        EnableWindow(GetDlgItem(hwnd,IDDI_CV_RECOGNITION_INSTRUCTIONS),pObject -> recognizeByName ? FALSE : TRUE);
        EnableWindow(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),pObject -> recognizeByName ? FALSE : TRUE);

        LoadString(hModuleResources,IDDI_CV_RECOGNITION_INSTRUCTIONS,szTemp,1024);
        SetDlgItemText(hwnd,IDDI_CV_RECOGNITION_INSTRUCTIONS,szTemp);

        LoadString(hModuleResources,IDDI_CV_LIMIT_REACHED,szMaxSelectionsReached,128);

        memcpy(selectionsRect,pObject -> expectedRects,sizeof(pObject -> expectedRects));
        memcpy(selectionsText,pObject -> expectedText,sizeof(pObject -> expectedText));
        memcpy(selectionsPage,pObject -> expectedPage,sizeof(pObject -> expectedPage));
        memset(selectionsIndex,0,sizeof(selectionsIndex));

        COUNT_SELECTIONS(selectionsRect,&countSelections)

        commitChanges = false;

#ifdef ADDITIONAL_INITIALIZATION
        ADDITIONAL_INITIALIZATION
#endif
        ShowWindow(GetDlgItem(hwnd,IDDI_CV_LIMIT_REACHED),SW_HIDE);

        }
        return LRESULT(FALSE);

    case WM_REFRESH_TEMPLATE_DOC: {

        if ( NULL == pObject -> pTemplateDocument )
            return (LRESULT)FALSE;

        if ( NULL == pTemplateDocumentUI ) {

            hwndPDFPane = GetDlgItem(hwnd,IDD_CURSIVISION_RECOGNITION + 256);

            if ( NULL == defaultStaticHandler )
                defaultStaticHandler = (WNDPROC)SetWindowLongPtr(hwndPDFPane,GWLP_WNDPROC,(ULONG_PTR)pdfPaneHandler);
            else
                SetWindowLongPtr(hwndPDFPane,GWLP_WNDPROC,(ULONG_PTR)pdfPaneHandler);

            RECT rcDialog,rcPane;

            GetWindowRect(hwnd,&rcDialog);
            GetWindowRect(hwndPDFPane,&rcPane);

            xHWNDPDFPane = rcPane.left - rcDialog.left;
            yHWNDPDFPane = rcPane.top - rcDialog.top;

            cxHWNDPDFPane = rcDialog.right - rcPane.left - 8;
            cyHWNDPDFPane = rcDialog.bottom - rcDialog.top - 2 * TEMPLATE_UI_TOP_MARGIN;

            SetWindowPos(hwndPDFPane,HWND_TOP,0,0,cxHWNDPDFPane,cyHWNDPDFPane,SWP_NOMOVE);

            pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwndPDFPane,TEMPLATE_UI_TOP_MARGIN,TEMPLATE_UI_TOP_MARGIN,false,drawSelections);

            prcPotentialFields = pTemplateDocumentUI -> pTextRects(&countPotentialFields,1);

        }

        }
        return (LRESULT)FALSE;

    case WM_LBUTTONDOWN: {

        mouseButtonDown = true;

        didDrag = false;

        long currentMouseX = LOWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.left;
        long currentMouseY = HIWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.top;

        // The mouse is in MSHTML Visible View coordinates

        if ( currentMouseX < pTemplateDocumentUI -> rcPDFPagePixels.left || currentMouseX > pTemplateDocumentUI -> rcPDFPagePixels.right || 
                    currentMouseY < pTemplateDocumentUI -> rcPDFPagePixels.top || currentMouseY > pTemplateDocumentUI -> rcPDFPagePixels.bottom )
            break;

        startMouseX = currentMouseX;
        startMouseY = currentMouseY;
        lastMouseX = startMouseX;
        lastMouseY = startMouseY;

        if ( wParam & MK_CONTROL ) {
            isAdding = true;
            break;
        }

        if ( -1L == activePotentialIndex )
            break;

        RESET_SELECTIONS

        pTemplateDocumentUI -> Repaint();

        isAdding = false;
        }
        break;

    case WM_LBUTTONUP: {

        mouseButtonDown = false;

        long pageNumber = pTemplateDocumentUI -> pageUnderMouse();

        if ( didDrag ) {

            RESET_SELECTIONS

            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");

            for ( long k = 0; k < countPotentialFields; k++ ) {
                if ( -1L == pEncounteredInDrag[k] ) 
                    continue;
                strcat(&selectionsText[0],pTemplateDocumentUI -> pTextText(k));
            }

            RECT r{startMouseX,startMouseY,lastMouseX,lastMouseY};

            if ( r.right < r.left ) {
                long t = r.right;
                r.right = r.left;
                r.left = t;
            }

            if ( r.bottom < r.top ) {
                long t = r.bottom;
                r.bottom = r.top;
                r.top = t;
            }

            r.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
            r.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
            r.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
            r.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

            pTemplateDocumentUI -> convertToPoints(pageNumber,&r);

            selectionsRect[0] = r;
            selectionsPage[0] = pageNumber;
            selectionsIndex[0] = -1L;

            countSelections = 1;

            if ( pEncounteredInDrag ) {
                delete [] pEncounteredInDrag;
                pEncounteredInDrag = NULL;
            }

            pTemplateDocumentUI -> Repaint();

            break;

        }

        if ( -1L == activePotentialIndex )
            break;

        lastSelectedIndex = activePotentialIndex; 

        RECT *pEntry = &prcPotentialFields[activePotentialIndex];

        if ( wParam & MK_CONTROL ) {

            long foundIndex = -1L;

            for ( long j = 0; j < countSelections; j++ ) {
                if ( 0 == memcmp(&selectionsRect[j],pEntry,sizeof(RECT)) ) {
                    foundIndex = j;
                    break;
                }
            }

            if ( -1L == foundIndex ) {
                if ( countSelections == MAX_TEXT_RECT_COUNT - 1 ) {
                    SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,szMaxSelectionsReached);
                } else {
                    selectionsRect[countSelections] = *pEntry;
                    strcat(selectionsText,pTemplateDocumentUI -> pTextText(activePotentialIndex));
                    selectionsPage[countSelections] = pageNumber;
                    selectionsIndex[countSelections] = activePotentialIndex;
                    countSelections++;
                }
            } else
                removeSelection(foundIndex);

        } else {

            RESET_SELECTIONS

            selectionsRect[0] = *pEntry;
            strcpy(selectionsText,pTemplateDocumentUI -> pTextText(activePotentialIndex));
            selectionsPage[0] = pageNumber;
            selectionsIndex[0] = activePotentialIndex;

            POINTFLOAT ptfLocation;
            pTemplateDocumentUI -> GetPDFLocation(pEntry,&ptfLocation,NULL);
            char szFormat[256],szLocation[256];
            LoadString(hModuleResources,IDDI_CV_MORE_INFORMATION,szFormat,256);
            sprintf_s<256>(szLocation,szFormat,ptfLocation.x,ptfLocation.y);

            SetDlgItemText(hwnd,IDDI_CV_MORE_INFORMATION,szLocation);

            countSelections = 1;

        }

        activePotentialIndex = -1L;
        oldPotentialIndex = -1L;

        pTemplateDocumentUI -> Repaint();

        }
        break;

    case WM_MOUSEMOVE: {

        if ( NULL == pObject )
            break;

        if ( NULL == pTemplateDocumentUI )
            break;

        long currentMouseX = LOWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.left;
        long currentMouseY = HIWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.top;

        // The mouse is in MSHTML Visible View coordinates

        if ( currentMouseX < pTemplateDocumentUI -> rcPDFPagePixels.left || currentMouseX > pTemplateDocumentUI -> rcPDFPagePixels.right || 
                    currentMouseY < pTemplateDocumentUI -> rcPDFPagePixels.top || currentMouseY > pTemplateDocumentUI -> rcPDFPagePixels.bottom ) {
            // The mouse is in the gray area border
            oldPotentialIndex = -1L;
            activePotentialIndex = -1L;
            break;
        }

        long pageNumber = pTemplateDocumentUI -> pageUnderMouse();

        if ( wParam & MK_LBUTTON ) {

            didDrag = true;

            if ( NULL == pEncounteredInDrag ) {
                pEncounteredInDrag = new long[countPotentialFields];
                for ( long k = 0; k < countPotentialFields; k++ )
                    pEncounteredInDrag[k] = -1L;
                if ( ! isAdding ) {
                    RESET_SELECTIONS
                }
            }

            HDC hdc = GetDC(pTemplateDocumentUI -> hwndPane);

            RECT rcTarget{startMouseX - 4,startMouseY - 4,lastMouseX + 4,lastMouseY + 4};

            if ( rcTarget.right < rcTarget.left ) {
                long t = rcTarget.right - 8;
                rcTarget.right = rcTarget.left + 8;
                rcTarget.left = t;
            }

            if ( rcTarget.bottom < rcTarget.top ) {
                long t = rcTarget.bottom - 8;
                rcTarget.bottom = rcTarget.top + 8;
                rcTarget.top = t;
            }

            rcTarget.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,rcTarget.left);
            rcTarget.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,rcTarget.right);
            rcTarget.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,rcTarget.top);
            rcTarget.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,rcTarget.bottom);

            BitBlt(hdc,rcTarget.left,rcTarget.top,rcTarget.right - rcTarget.left,rcTarget.bottom - rcTarget.top,
                pTemplateDocumentUI -> pdfDCArea(pageNumber,&rcTarget),0,0,SRCCOPY);

            rcTarget.left += 4;
            rcTarget.right -= 4;
            rcTarget.top += 4;
            rcTarget.bottom -= 4;

            DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,PS_SOLID,DB_GREEN,(&rcTarget),BORDER_WEIGHT)

            ReleaseDC(pTemplateDocumentUI -> hwndPane,hdc);

            lastMouseX = currentMouseX;
            lastMouseY = currentMouseY;

            rcTarget.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,startMouseX);
            rcTarget.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,startMouseY);
            rcTarget.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,lastMouseX);
            rcTarget.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,lastMouseY);

            if ( rcTarget.right < rcTarget.left ) {
                long t = rcTarget.right;
                rcTarget.right = rcTarget.left;
                rcTarget.left = t;
            }

            if ( rcTarget.bottom < rcTarget.top ) {
                long t = rcTarget.bottom;
                rcTarget.bottom = rcTarget.top;
                rcTarget.top = t;
            }

            pTemplateDocumentUI -> convertToPoints(pageNumber,&rcTarget);

            RECT *pEntry = prcPotentialFields;

            for ( long k = 0; k < countPotentialFields; k++, pEntry++ ) {
                if ( pEntry -> left < rcTarget.left || pEntry -> right > rcTarget.right || pEntry -> top > rcTarget.top || pEntry -> bottom < rcTarget.bottom ) 
                    continue;
                if ( ! ( -1L == pEncounteredInDrag[k] ) )
                    continue;
                pEncounteredInDrag[k] = k;
            }

            break;

        }

        prcPotentialFields = pTemplateDocumentUI -> pTextRects(&countPotentialFields,pageNumber);

        if ( NULL == prcPotentialFields )
            break;

        activePotentialIndex = -1L;

        RECT rc{currentMouseX,currentMouseY,currentMouseX,currentMouseY};

        pTemplateDocumentUI -> convertToPoints(pageNumber,&rc);

        RECT *pEntry = prcPotentialFields;

        boolean isSelected = false;

        for ( long k = 0; k < countPotentialFields; k++, pEntry++ ) {

            if ( ! ( pTemplateDocumentUI -> textPage(k) == pageNumber ) )
                continue;

            if ( rc.left < pEntry -> left || rc.left > pEntry -> right ||
                    rc.top > pEntry -> top || rc.top < pEntry -> bottom ) 
                continue;

            for ( long j = 0; j < countSelections; j++ ) {
                if ( selectionsIndex[j] == k ) {
                    isSelected = true;
                    break;
                }
            }

            if ( isSelected )
                break;

            activePotentialIndex = k;

            break;

        }

        if ( -1L < activePotentialIndex ) {

            // The mouse is in a potential field

            if ( activePotentialIndex == oldPotentialIndex ) 
                // The mouse is still in the same potential field
                break;

            // The mouse is in a different potential field

            if ( ! ( GUID_NULL == pTemplateDocumentUI -> hilitedSelectedField ) )
                pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedSelectedField);

            pTemplateDocumentUI -> hilitedSelectedField = pTemplateDocumentUI -> HiliteArea(RGB(0,255,0),pTemplateDocumentUI -> textPage(activePotentialIndex),&prcPotentialFields[activePotentialIndex]);

            oldPotentialIndex = activePotentialIndex;

            break;

        } 

        //The mouse is NOT in a potential field

        if ( -1L < oldPotentialIndex ) 
            // The mouse has left the last potential field
            pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedSelectedField);

        pTemplateDocumentUI -> hilitedSelectedField = GUID_NULL;

        oldPotentialIndex = -1L;

        }
        break;

    case WM_COMMAND: {

        switch ( LOWORD(wParam) ) {
        case IDDI_CV_RECOGNITION_BYNAME: {
            BOOL isChecked = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_CV_RECOGNITION_BYNAME,BM_GETCHECK,0L,0L);
            EnableWindow(GetDlgItem(hwnd,IDDI_CV_RECOGNITION_INSTRUCTIONS),isChecked ? FALSE : TRUE);
            EnableWindow(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),isChecked ? FALSE : TRUE);
            }
            break;

        case IDDI_CV_LOCATIONS_RESET: 
            RESET_SELECTIONS
            pTemplateDocumentUI -> Repaint();
            break;

        }
        break;
    }

    case WM_DESTROY: {
        if ( ! ( NULL == hwndPDFPane ) )
            (WNDPROC)SetWindowLongPtr(hwndPDFPane,GWLP_WNDPROC,(ULONG_PTR)defaultStaticHandler);
        if ( ! ( NULL == pTemplateDocumentUI ) ) {
            pTemplateDocumentUI -> releaseView();
            pTemplateDocumentUI = NULL;
        }
        if ( commitChanges ) {
            memcpy(pObject -> expectedRects,selectionsRect,sizeof(pObject -> expectedRects));
            memcpy(pObject -> expectedText,selectionsText,sizeof(selectionsText));
            memcpy(pObject -> expectedPage,selectionsPage,sizeof(selectionsPage));
            pObject -> recognizeByName = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_CV_RECOGNITION_BYNAME,BM_GETCHECK,0L,0L);
        }
        }
        break;

    case WM_NOTIFY: {

        NMHDR *pNotifyHeader = (NMHDR *)lParam;

        switch ( pNotifyHeader -> code ) {

        case PSN_APPLY: {

            PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

            if ( pNotify -> lParam )
                commitChanges = true;

            SetWindowLongPtr(hwnd,DWLP_MSGRESULT,PSNRET_NOERROR);
            }
            return (LRESULT)TRUE;

#ifdef REGISTER_TOOLTIP
        case TTN_GETDISPINFO: {
            NMTTDISPINFO *pToolTipDispInfo;
            pToolTipDispInfo = (LPNMTTDISPINFO)pNotifyHeader;
            pToolTipDispInfo -> lpszText = szCurrentToolTipText;
            HFONT hFont = (HFONT)SendMessage(hwndToolTips,WM_GETFONT,0L,0L);
            LOGFONT fontInfo;
            GetObject(hFont,sizeof(LOGFONT),&fontInfo);

            LoadString(hModuleResources,(UINT)pToolTipDispInfo -> lParam,szCurrentToolTipText,1024);

            if ( fontInfo.lfHeight )
                SendMessage(pNotifyHeader -> hwndFrom,TTM_SETMAXTIPWIDTH,0,strlen(szCurrentToolTipText) * abs(fontInfo.lfHeight) / 4);
            else
                SendMessage(pNotifyHeader -> hwndFrom,TTM_SETMAXTIPWIDTH,0,256);
            }
            return 0;
#endif

        }

        }
        break;

    default:
        break;
    }
