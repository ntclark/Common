
    resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

    OBJECT_WITH_PROPERTIES *pObject = NULL;

    if ( p ) 
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

    switch ( msg ) {

    case WM_INITDIALOG: {

        PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);
        p = (resultDisposition *)pPage -> lParam;
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

        SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);

        hwndInstructions = GetDlgItem(hwnd,IDDI_CV_LOCATIONS_INSTRUCTIONS);

        char szInstructions[MAX_PATH];
        LoadString(hModule,IDDI_CV_LOCATIONS_INSTRUCTIONS,szInstructions,MAX_PATH);
        SetWindowText(hwndInstructions,szInstructions);

        DOODLE_PROPERTIES_PTR

        memcpy(keepLocations,pDoodleOptionProps -> theLocations,sizeof(pDoodleOptionProps -> theLocations));

        pCurrentLocations = pDoodleOptionProps -> theLocations;
        countLocations = pDoodleOptionProps -> countRects;
        entryDoRemember = pDoodleOptionProps -> processingDisposition.doRemember;

        SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_SETCHECK,0 == countLocations ? BST_CHECKED : BST_UNCHECKED,0L);

        if ( 0 == countLocations ) 
            doLearn = true;

        SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doContinuousDoodle ? BST_CHECKED : BST_UNCHECKED,0L);
        SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doContinuousDoodle ? BST_UNCHECKED : BST_CHECKED,0L);
        SendDlgItemMessage(hwnd,IDDI_DISPOSITION_REMEMBER,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doRemember ? BST_CHECKED : BST_UNCHECKED,0L);

        commitChanges = false;

        HRESULT rc = CoCreateInstance(CLSID_CursiVisionSignaturePad,NULL,CLSCTX_ALL,IID_ISignaturePad,reinterpret_cast<void **>(&pSignaturePad));

        if ( ! pSignaturePad ) 
            MessageBox(hwnd,"There is no signature pad selected for CursiVision to use.\n\nTherefore, CursiVision does not know the size of the signature pad "
                                "and is not able to assist in defining signature locations.","Note",MB_ICONEXCLAMATION);
        else
            pSignaturePad -> Load(NULL,NULL,NULL);

#ifdef ADDITIONAL_INITIALIZATION
        ADDITIONAL_INITIALIZATION
#endif

        setLearnControls(pObject,hwnd);

        }
        return LRESULT(FALSE);

    case WM_REFRESH_TEMPLATE_DOC: {

        if ( NULL == pObject -> pTemplateDocument )
            return (LRESULT)FALSE;

        if ( NULL == pTemplateDocumentUI ) {

            RECT rcParent,rcReset,rcInfo,rcDialog;

            HWND hwndParent = GetParent(hwnd);

            GetWindowRect(hwnd,&rcDialog);
            GetWindowRect(hwndParent,&rcParent);
            GetWindowRect(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),&rcReset);
            GetWindowRect(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO),&rcInfo);

            SIZEL sizelDisplay{0L,0L};

            pObject -> pTemplateDocument -> GetSinglePagePDFDisplaySize(&sizelDisplay);

            double aspectRatio = (double)sizelDisplay.cx / (double)sizelDisplay.cy;

            long cxMargin = rcReset.left - rcDialog.left;

            long cxTotal = rcParent.right  - rcDialog.left - cxMargin;
            long cyTotal = (long)((double)cxTotal / aspectRatio);

            SetWindowPos(hwnd,HWND_TOP,0,0,cxTotal,cyTotal,SWP_NOMOVE);

            pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,cxMargin,rcInfo.bottom - rcDialog.top + 16,false,drawSigningAreas);
        }

        }
        return (LRESULT)FALSE;

    case WM_LBUTTONDOWN: {

        if ( needsAdmin )
            break;

        oldMouseX = LOWORD(lParam);
        oldMouseY = HIWORD(lParam);
        startMouseX = LOWORD(lParam);
        startMouseY = HIWORD(lParam);

        if ( -1L == candidateRectIndex ) 
            break;

        if ( ! pObject -> pTemplateDocument -> pszDocumentName[0] )
            break;

        memcpy(&rBase,&visibleRects[inverseVisibleRectIndexes[candidateRectIndex]],sizeof(RECT));

        rectIgnoreIndex = candidateRectIndex;

        rectIgnoreIndex = -1L;

        didDrag = false;

        }
        break;

    case WM_LBUTTONUP: {

        if ( needsAdmin )
            break;

        if ( -1L == candidateRectIndex ) 
            break;

        RECT rTemp= visibleRects[inverseVisibleRectIndexes[candidateRectIndex]];

        pCurrentLocations[candidateRectIndex].documentRect = rTemp;

        long pageNumber;
        pTemplateDocumentUI -> PDFiumControl() -> get_PDFPageUnderPoint((POINTL *)&rTemp,&pageNumber);

        pTemplateDocumentUI -> convertToPoints(pageNumber,&pCurrentLocations[candidateRectIndex].documentRect);

        candidateRectIndex = -1L;

        }
        break;

    case WM_RBUTTONUP: {

        if ( needsAdmin )
            break;

        long currentMouseX = LOWORD(lParam);
        long currentMouseY = HIWORD(lParam);

        if ( currentMouseX < pTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pTemplateDocumentUI -> rcPageParentCoordinates.right || 
                    currentMouseY < pTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pTemplateDocumentUI -> rcPageParentCoordinates.bottom ) 
            break;

        mouseMenuX = currentMouseX;
        mouseMenuY = currentMouseY;

        if ( hOptionsMenu )
            DestroyMenu(hOptionsMenu);

        hOptionsMenu = CreatePopupMenu();

        RECT rcView;
        GetWindowRect(hwnd,&rcView);

        MENUITEMINFO menuItem = {0};

        menuItem.cbSize = sizeof(MENUITEMINFO);
        menuItem.fMask = MIIM_ID | MIIM_TYPE | MIIM_STATE;
        menuItem.fType = MFT_STRING;
        menuItem.fState = MFS_ENABLED;

        if ( -1L == candidateRectIndex ) {

            menuItem.wID = IDDI_SIGNING_LOCATIONS_NEW;
            menuItem.dwTypeData = "Add";
            menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
            menuItem.fState = MFS_ENABLED;

            InsertMenuItem(hOptionsMenu,1,MF_BYPOSITION,&menuItem);

            if ( ! ( -1L == copySourceRectIndex ) ) {

                menuItem.wID = IDDI_SIGNING_LOCATIONS_PASTE;
                menuItem.dwTypeData = "Paste";
                menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
                menuItem.fState = MFS_ENABLED;

                InsertMenuItem(hOptionsMenu,2,MF_BYPOSITION,&menuItem);

            }

            TrackPopupMenu(hOptionsMenu,TPM_LEFTALIGN,rcView.left + mouseMenuX,rcView.top + mouseMenuY,0,hwnd,NULL);

            break;
        }

        long nextIndex = 1;

        if ( countLocations > 1 ) {

            menuItem.wID = IDDI_SIGNING_LOCATIONS_ORDER;
            menuItem.dwTypeData = "Set order";
            menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
            menuItem.fState = MFS_ENABLED;

            InsertMenuItem(hOptionsMenu,1,MF_BYPOSITION,&menuItem);

            menuItem.wID = 0L;
            menuItem.dwTypeData = "";
            menuItem.cch = 0L;
            menuItem.fState = MFS_ENABLED;
            menuItem.fType = MFT_SEPARATOR;

            menuItem.fMask = MIIM_TYPE;

            InsertMenuItem(hOptionsMenu,2,MF_BYPOSITION,&menuItem);

            menuItem.fMask = MIIM_ID | MIIM_TYPE | MIIM_STATE;
            menuItem.fType = MFT_STRING;

            nextIndex = 3;

        }

        menuItem.wID = IDDI_SIGNING_LOCATIONS_DELETE;
        menuItem.dwTypeData = "Delete";
        menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
        menuItem.fState = MFS_ENABLED;

        InsertMenuItem(hOptionsMenu,nextIndex++,MF_BYPOSITION,&menuItem);

        menuItem.wID = IDDI_SIGNING_LOCATIONS_CUT;
        menuItem.dwTypeData = "Cut";
        menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
        menuItem.fState = MFS_ENABLED;

        InsertMenuItem(hOptionsMenu,nextIndex++,MF_BYPOSITION,&menuItem);

        menuItem.wID = IDDI_SIGNING_LOCATIONS_COPY;
        menuItem.dwTypeData = "Copy";
        menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
        menuItem.fState = MFS_ENABLED;

        InsertMenuItem(hOptionsMenu,nextIndex++,MF_BYPOSITION,&menuItem);

        TrackPopupMenu(hOptionsMenu,TPM_LEFTALIGN,rcView.left + mouseMenuX,rcView.top + mouseMenuY,0,hwnd,NULL);

        }
        break;

    case WM_MOUSEMOVE: {

        if ( needsAdmin )
            break;

        long currentMouseX = LOWORD(lParam);
        long currentMouseY = HIWORD(lParam);

        SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,"");

        if ( ! ( -1L == candidateRectIndex ) && ( wParam & MK_LBUTTON ) ) {

            // Dragging

            long deltaX = currentMouseX - startMouseX;
            long deltaY = currentMouseY - startMouseY;

            if ( 0 == deltaX || 0 == deltaY )
                break;

            oldMouseX = currentMouseX;
            oldMouseY = currentMouseY;

            long sourceIndex = inverseVisibleRectIndexes[candidateRectIndex];

            if ( didDrag )

                DRAW_COLORED_BOX_IN_PIXELS(pTemplateDocumentUI,PS_SOLID,DB_GREEN,(&visibleRects[sourceIndex]),BORDER_WEIGHT)

            else {

                RECT r = visibleRects[sourceIndex];

                r.left -= 8;
                r.top -= 8;
                r.right += 8;
                r.bottom += 8;

                HDC hdc = GetDC(pTemplateDocumentUI -> hwndPane);

                HDC hdcDoc = pTemplateDocumentUI -> pdfDCArea(pTemplateDocumentUI -> currentPageNumber(r.top),&r);

                BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,hdcDoc,0,0,SRCCOPY);
                ReleaseDC(pTemplateDocumentUI -> hwndPane,hdc);

            }

            didDrag = true;

            if (-1L < cornerGrabIndex ) {

                // Dragging resize

                double aspectRatio = pSignaturePad -> WidthInInches() / pSignaturePad -> HeightInInches();

                deltaY = (long)((double)deltaX / aspectRatio);

                switch ( cornerGrabIndex ) {

                case 0:
                    visibleRects[sourceIndex].left = rBase.left + deltaX;
                    visibleRects[sourceIndex].top = rBase.top + deltaY;
                    visibleRects[sourceIndex].right = rBase.right;
                    visibleRects[sourceIndex].bottom = rBase.bottom;
                    break;

                case 1:
                    visibleRects[sourceIndex].left = rBase.left;
                    visibleRects[sourceIndex].right = rBase.right + deltaX;
                    visibleRects[sourceIndex].top = rBase.top - deltaY;
                    visibleRects[sourceIndex].bottom = rBase.bottom;
                    break;

                case 2:
                    visibleRects[sourceIndex].left = rBase.left;
                    visibleRects[sourceIndex].top = rBase.top;
                    visibleRects[sourceIndex].right = rBase.right + deltaX;
                    visibleRects[sourceIndex].bottom = rBase.bottom + deltaY;
                    break;

                case 3:
                    visibleRects[sourceIndex].left = rBase.left + deltaX;
                    visibleRects[sourceIndex].top = rBase.top;
                    visibleRects[sourceIndex].right = rBase.right;
                    visibleRects[sourceIndex].bottom = rBase.bottom - deltaY;
                    break;

                }

                POINTFLOAT sizeLocation;
                pTemplateDocumentUI -> GetPDFLocation(&visibleRects[sourceIndex],NULL,&sizeLocation);

                sprintf_s<256>(szMessage,"The signature is %4.2lf inches wide and %4.2lf inches high",sizeLocation.x,sizeLocation.y);

            } else {

                // Dragging Move

                visibleRects[sourceIndex].left = rBase.left + (long)((double)deltaX);
                visibleRects[sourceIndex].right = rBase.right + (long)((double)deltaX);

                visibleRects[sourceIndex].top = rBase.top + (long)((double)deltaY);
                visibleRects[sourceIndex].bottom = rBase.bottom + (long)((double)deltaY);

                POINTFLOAT ptfLocation;
                pTemplateDocumentUI -> GetPDFLocation(&visibleRects[sourceIndex],&ptfLocation,NULL);

                sprintf_s<256>(szMessage,"The top left of the signature is at: %4.2lf inches across and %4.2lf inches down",ptfLocation.x,ptfLocation.y);

            }

            SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,szMessage);

            DRAW_COLORED_BOX_IN_PIXELS(pTemplateDocumentUI,PS_SOLID,DB_GREEN,(&visibleRects[sourceIndex]),BORDER_WEIGHT)

            break;

        }

        cornerGrabIndex = -2L;

        if ( currentMouseX < pTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pTemplateDocumentUI -> rcPageParentCoordinates.right || 
                    currentMouseY < pTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pTemplateDocumentUI -> rcPageParentCoordinates.bottom ) {
            candidateRectIndex = -1L;
            break;
        }

        bool noteEmitted = false;

        long vrIndex = -1L;

        POINTL ptlMouse = {currentMouseX - pTemplateDocumentUI -> rcPageParentCoordinates.left,currentMouseY - pTemplateDocumentUI -> rcPageParentCoordinates.top};

        RECT *pr = &visibleRects[0];

        cornerGrabIndex = -1L;

        long newCandidateRectIndex = -1L;

        while ( ! ( pr -> left == pr -> right ) ) {

            vrIndex++;

            if ( ptlMouse.x < pr -> left || ptlMouse.x > pr -> right || ptlMouse.y < pr -> top || ptlMouse.y > pr -> bottom ) {
                pr++;
                continue;
            } 

            if ( ! ( candidateRectIndex == visibleRectIndexes[vrIndex] ) ) 
                DRAW_COLORED_BOX_IN_PIXELS_NOCLIP_NOHIDEABLE(pTemplateDocumentUI,PS_SOLID,DB_RED,pr,BORDER_WEIGHT)

            newCandidateRectIndex = visibleRectIndexes[vrIndex];

            candidateRectIndex = visibleRectIndexes[vrIndex];

            POINTFLOAT ptlLocation;
            pTemplateDocumentUI -> GetPDFLocation(&visibleRects[visibleRectIndexes[candidateRectIndex]],&ptlLocation,NULL);
            sprintf_s<256>(szMessage,"The top left of the signature is at: %4.2lf inches across and %4.2lf inches down",ptlLocation.x,ptlLocation.y);

            SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,szMessage);

            SetWindowText(hwndInstructions,"Right click for Options, Left click to move\rResize by dragging corners.");

            noteEmitted = true;

            if ( abs(ptlMouse.x - pr -> left) < CORNER_PROXIMITY && abs(ptlMouse.y - pr -> top) < CORNER_PROXIMITY ) {
                SetCursor(LoadCursor(NULL,IDC_SIZENWSE));
                cornerGrabIndex = 0;
            } else if ( abs(ptlMouse.x - pr -> left) < CORNER_PROXIMITY && abs(ptlMouse.y - pr -> bottom) < CORNER_PROXIMITY ) {
                SetCursor(LoadCursor(NULL,IDC_SIZENESW));
                cornerGrabIndex = 3;
            } else if ( abs(ptlMouse.x - pr -> right) < CORNER_PROXIMITY && abs(ptlMouse.y - pr -> top) < CORNER_PROXIMITY ) {
                SetCursor(LoadCursor(NULL,IDC_SIZENESW));
                cornerGrabIndex = 1;
            } else if ( abs(ptlMouse.x - pr -> right) < CORNER_PROXIMITY && abs(ptlMouse.y - pr -> bottom) < CORNER_PROXIMITY ) {
                SetCursor(LoadCursor(NULL,IDC_SIZENWSE));
                cornerGrabIndex = 2;
            } else {
                SetCursor(LoadCursor(NULL,IDC_HAND));
                cornerGrabIndex = -1L;
            }

            break;

        }

        if ( -1L == newCandidateRectIndex ) {
            if ( -1L < candidateRectIndex )
                DRAW_COLORED_BOX_IN_PIXELS_NOCLIP_NOHIDEABLE(pTemplateDocumentUI,PS_SOLID,DB_BLACK,(&visibleRects[visibleRectIndexes[candidateRectIndex]]),BORDER_WEIGHT)
            SetWindowText(hwndInstructions,"Right click for Options");
            SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,"");
            candidateRectIndex = -1L;
        }
        }
        return (LRESULT)0;

    case WM_SETCURSOR:
        switch ( cornerGrabIndex ) {
        case 0:
            SetCursor(LoadCursor(NULL,IDC_SIZENWSE));
            break;
        case 3:
            SetCursor(LoadCursor(NULL,IDC_SIZENESW));
            break;
        case 1:
            SetCursor(LoadCursor(NULL,IDC_SIZENESW));
            break;
        case 2:
            SetCursor(LoadCursor(NULL,IDC_SIZENWSE));
            break;
        case -1:
            SetCursor(LoadCursor(NULL,IDC_HAND));
            break;
        default:
            SetCursor(LoadCursor(NULL,IDC_ARROW));
            break;
        }
        return TRUE;
   
    case WM_COMMAND: {

        switch ( LOWORD(wParam ) ) {

        case IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN: {
            doLearn = (BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_GETCHECK,0L,0L));
            }
            break;

        case IDDI_CV_LOCATIONS_RESET: {
            memset(pCurrentLocations,0,sizeof(pDoodleOptionProps -> theLocations));
            countLocations = 0L;
            pTemplateDocumentUI -> Repaint();
            }
            break;

        case IDDI_SIGNING_LOCATIONS_ORDER: {

            long oldCandidateRectIndex = candidateRectIndex;

            DLGTEMPLATE *dt = (DLGTEMPLATE *)LoadResource(hModule,FindResource(hModule,MAKEINTRESOURCE(IDD_SIGNING_LOCATIONS_ORDER),RT_DIALOG));

            if ( 0L == DialogBoxIndirectParam(hModule,dt,hwnd,(DLGPROC)signingLocationsOrderHandler,(LPARAM)p) )
                break;

            if ( oldCandidateRectIndex == candidateRectIndex )
                break;

            RECT *pOld = &pCurrentLocations[oldCandidateRectIndex].documentRect;
            RECT *pNew = &pCurrentLocations[candidateRectIndex].documentRect;

            RECT temp;
            memcpy(&temp,pOld,sizeof(RECT));
            memcpy(pOld,pNew,sizeof(RECT));
            memcpy(pNew,&temp,sizeof(RECT));

            long pnTemp = pCurrentLocations[oldCandidateRectIndex].pdfPageNumber;
            pCurrentLocations[oldCandidateRectIndex].pdfPageNumber = pCurrentLocations[candidateRectIndex].pdfPageNumber;
            pCurrentLocations[candidateRectIndex].pdfPageNumber = pnTemp;

            }
            break;

        case IDDI_SIGNING_LOCATIONS_NEW: {

            if ( ! pSignaturePad )
                break;

            copySourceRectIndex = 0L;

            if ( 0 < countLocations ) 
                return SendMessage(hwnd,WM_COMMAND,MAKEWPARAM(IDDI_SIGNING_LOCATIONS_PASTE,0),0L);

            mouseMenuX -= pTemplateDocumentUI -> rcPageParentCoordinates.left;
            mouseMenuY -= pTemplateDocumentUI -> rcPageParentCoordinates.top;

            POINTL ptlMouse{mouseMenuX,mouseMenuY};

            mouseMenuX -= pTemplateDocumentUI -> rcPDFPagePixelsInView.left;
            mouseMenuY -= pTemplateDocumentUI -> rcPDFPagePixelsInView.top;

            RECT *pTarget = &pCurrentLocations[0].documentRect;

            countLocations = 1;

            pTemplateDocumentUI -> PDFiumControl() -> get_PDFPageUnderMouse(&pCurrentLocations[0].pdfPageNumber);

            double padWidth = pSignaturePad -> WidthInInches();
            double padHeight = pSignaturePad -> HeightInInches();
            double pdfWidth = (double)(pTemplateDocumentUI -> PDFPageWidth() ) / 72.0;
            double pdfHeight = (double)(pTemplateDocumentUI -> PDFPageHeight() ) / 72.0;

            pTarget -> left = (long)((double)mouseMenuX / pTemplateDocumentUI -> scaleToPixels);
            pTarget -> top = pTemplateDocumentUI -> PDFPageHeight() - (long)((double)mouseMenuY / pTemplateDocumentUI -> scaleToPixels);

            pTarget -> right = pTarget -> left + (long)((double)(pTemplateDocumentUI -> rcPDFPagePixels.right - pTemplateDocumentUI -> rcPDFPagePixels.left) * padWidth / pdfWidth / pTemplateDocumentUI -> scaleToPixels);
            pTarget -> bottom = pTarget -> top - (long)((double)(pTemplateDocumentUI -> rcPDFPagePixels.bottom - pTemplateDocumentUI -> rcPDFPagePixels.top) * padHeight / pdfHeight / pTemplateDocumentUI -> scaleToPixels );

            pTemplateDocumentUI -> Repaint();
            }
            break;

        case IDDI_SIGNING_LOCATIONS_PASTE: {

            if ( -1L == copySourceRectIndex )
                break;

            mouseMenuX -= pTemplateDocumentUI -> rcPageParentCoordinates.left;
            mouseMenuY -= pTemplateDocumentUI -> rcPageParentCoordinates.top;
            mouseMenuX -= pTemplateDocumentUI -> rcPDFPagePixelsInView.left;
            mouseMenuY -= pTemplateDocumentUI -> rcPDFPagePixelsInView.top;

            RECT *pSource = &pCurrentLocations[copySourceRectIndex].documentRect;

            RECT *pTarget = &pCurrentLocations[countLocations].documentRect;

            pTarget -> left = (long)((double)mouseMenuX / pTemplateDocumentUI -> scaleToPixels);
            pTarget -> top = pTemplateDocumentUI -> Parent() -> PDFPageHeight() - (long)((double)mouseMenuY / pTemplateDocumentUI -> scaleToPixels);

            pTarget -> right = pTarget -> left + pSource -> right - pSource -> left;
            pTarget -> bottom = pTarget -> top - (pSource -> top - pSource -> bottom);

            pTemplateDocumentUI -> PDFiumControl() -> get_PDFPageUnderMouse(&pCurrentLocations[countLocations].pdfPageNumber);

            countLocations++;

            if ( -1L == deleteSourceRectIndex ) {
                pTemplateDocumentUI -> Repaint();
                break;
            }

            candidateRectIndex = deleteSourceRectIndex;

            SendMessage(hwnd,WM_COMMAND,MAKEWPARAM(IDDI_SIGNING_LOCATIONS_DELETE,0L),0L);

            deleteSourceRectIndex = -1L;

            }
            break;

        case IDDI_SIGNING_LOCATIONS_CUT: {
            copySourceRectIndex = candidateRectIndex;
            deleteSourceRectIndex = candidateRectIndex;
            candidateRectIndex = -1L;
            DRAW_COLORED_BOX_IN_POINTS(pTemplateDocumentUI,PS_SOLID,DB_WHITE,&visibleRects[copySourceRectIndex],BORDER_WEIGHT)
            SetWindowText(hwndInstructions,"Move to the destination, right click and choose Paste");
            }
            break;

        case IDDI_SIGNING_LOCATIONS_COPY: {
            copySourceRectIndex = candidateRectIndex;
            candidateRectIndex = -1L;
            SetWindowText(hwndInstructions,"Move to the destination, right click and choose Paste");
            }
            break;

        case IDDI_SIGNING_LOCATIONS_DELETE: {

            if ( -1L == candidateRectIndex )
                break;

            struct writingLocation *pWL = &pCurrentLocations[candidateRectIndex];

            long lastIndex = candidateRectIndex + 1;
            while ( pWL[lastIndex - candidateRectIndex].documentRect.left != pWL[lastIndex - candidateRectIndex].documentRect.right )
                lastIndex++;

            long n = (lastIndex - candidateRectIndex) * sizeof(struct writingLocation);
            BYTE *pX = new BYTE[n];

            memcpy(pX,&pCurrentLocations[candidateRectIndex + 1],n);
            memcpy(pWL,pX,n);

            delete [] pX;

            countLocations--;

            candidateRectIndex = -1L;

            pTemplateDocumentUI -> Repaint();

            }
            break;

#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
        case IDDI_SIGNING_LOCATIONS_SKIP_SIGNING: {
            pObject -> skipSignatureCapture = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_SIGNING_LOCATIONS_SKIP_SIGNING,BM_GETCHECK,0L,0L);
            enableDisableSiblings(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_SKIP_SIGNING),pObject -> skipSignatureCapture ? FALSE : (needsAdmin ? FALSE : TRUE)); \
            EnableWindow(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_SKIP_SIGNING),needsAdmin ? FALSE : TRUE);
            }
            break;
#endif

        default:
            break;

        }

        setLearnControls(pObject,hwnd);

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

        }

        }
        break;

    case WM_DESTROY: {

        if ( ! commitChanges )
            memcpy(pDoodleOptionProps -> theLocations,keepLocations,sizeof(pDoodleOptionProps -> theLocations));

        pDoodleOptionProps -> countRects = 0L;
        for ( long k = 0; k < MAX_DOODLE_RECT_COUNT; k++ ) {
            if ( 0 == pDoodleOptionProps -> theLocations[k].documentRect.left && 0 == pDoodleOptionProps -> theLocations[k].documentRect.right )
                break;
            pDoodleOptionProps -> countRects++;
        }

        if ( doLearn ) {

            pDoodleOptionProps -> processingDisposition.doContinuousDoodle = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,BM_GETCHECK,0L,0L);
            pDoodleOptionProps -> processingDisposition.doRemember = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_REMEMBER,BM_GETCHECK,0L,0L);;

        } else {

            pDoodleOptionProps -> processingDisposition.doContinuousDoodle = false;
            if ( 1 < pDoodleOptionProps -> countRects )
                pDoodleOptionProps -> processingDisposition.doContinuousDoodle = true;

            if ( 0 < pDoodleOptionProps -> countRects )
                pDoodleOptionProps -> processingDisposition.doRemember = true;

        }

        if ( ! ( NULL == pTemplateDocumentUI ) )
            pTemplateDocumentUI -> releaseView();

        pTemplateDocumentUI = NULL;

        if ( pSignaturePad )
            pSignaturePad -> Release();

        pSignaturePad = NULL;

        }
        break;

    default:
        break;
    }
