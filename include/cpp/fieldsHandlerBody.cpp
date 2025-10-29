
    resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

    OBJECT_WITH_PROPERTIES *pObject = NULL;

    if ( p ) 
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

    if ( WM_MOUSEFIRST <= msg && msg <= WM_MOUSELAST && ! ( NULL == pTemplateDocumentUI ) ) {
        POINTL ptlMouse{LOWORD(lParam),HIWORD(lParam)};
        if ( xHWNDPDFPane > ptlMouse.x || yHWNDPDFPane > ptlMouse.y || (xHWNDPDFPane + cxHWNDPDFPane) < ptlMouse.x || (yHWNDPDFPane + cyHWNDPDFPane) < ptlMouse.y ) 
            return (LRESULT)0L;
        if ( pObject && NULL == pObject -> pTemplateDocument )
            return (LRESULT)0L;
        lParam = MAKELPARAM(ptlMouse.x - xHWNDPDFPane,ptlMouse.y - yHWNDPDFPane);
    }

    switch ( msg ) {

    case WM_INITDIALOG: {

        PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);
        p = (resultDisposition *)pPage -> lParam;
        pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;
        SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);

        DOODLE_PROPERTIES_PTR

        hwndPDFPane = GetDlgItem(hwnd,IDD_DATA_FIELDS + 256);

        memcpy(keepFields,pDoodleOptionProps -> dataFieldRects,sizeof(keepFields));
        memcpy(keepFieldLabels,pDoodleOptionProps -> dataFieldLabels,sizeof(keepFieldLabels));
        memcpy(keepFieldRequired,pDoodleOptionProps -> dataFieldRequired,sizeof(keepFieldRequired));
        memcpy(keepPageNumbers,pDoodleOptionProps -> dataFieldPage,sizeof(keepPageNumbers));

        prcSelectedFields = pDoodleOptionProps -> dataFieldRects;
        pFieldLabels = &pDoodleOptionProps -> dataFieldLabels[0][0];
        pFieldRequired = pDoodleOptionProps -> dataFieldRequired;
        pPageNumbers = pDoodleOptionProps -> dataFieldPage;

        countSelectedFields = pDoodleOptionProps -> countDataFields;

        char szTemp[1024];
        LoadString(hModuleResources,IDDI_DATA_FIELDS_RESET,szTemp,1024);
        SetDlgItemText(hwnd,IDDI_DATA_FIELDS_RESET,szTemp);

        LoadString(hModuleResources,IDDI_DATA_FIELDS_INSTRUCTIONS,szTemp,1024);
        SetDlgItemText(hwnd,IDDI_DATA_FIELDS_INSTRUCTIONS,szTemp);

        LoadString(hModuleResources,IDDI_DATA_FIELDS_GENERATE_LABEL,szTemp,1024);
        SetDlgItemText(hwnd,IDDI_DATA_FIELDS_GENERATE_LABEL,szTemp);

        LoadString(hModuleResources,IDDI_NO_TEMPLATE_LABEL,szTemp,1024);
        SetWindowText(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL),szTemp);

        LoadString(hModuleResources,IDDI_NO_TEMPLATE_LABEL2,szTemp,1024);
        SetWindowText(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL2),szTemp);

        commitChanges = false;

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

        if ( NULL == pObject -> pTemplateDocument ) {
            ShowWindow(GetDlgItem(hwnd,IDDI_DATA_FIELDS_RESET),SW_HIDE);
            ShowWindow(GetDlgItem(hwnd,IDDI_DATA_FIELDS_INSTRUCTIONS),SW_HIDE);
            ShowWindow(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL2),SW_SHOW);
            ShowWindow(hwndPDFPane,SW_HIDE);
        }
        }
        return LRESULT(FALSE);

    case WM_CLEAR_TEMPLATE_DOC_VIEW: {

        if ( pTemplateDocumentUI ) {
            pTemplateDocumentUI -> releaseView();
            pTemplateDocumentUI = NULL;
        }

        for ( long k = 0; 1; k++ ) {
            if ( 0 == noTemplateFields[k] )
                break;
            ShowWindow(GetDlgItem(hwnd,noTemplateFields[k]),SW_HIDE);
        }

        ShowWindow(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL),SW_SHOW);
        ShowWindow(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL2),SW_SHOW);

        }
        return (LRESULT)FALSE;

    case WM_REFRESH_TEMPLATE_DOC: {

        if ( NULL == pObject -> pTemplateDocument ) 
            return (LRESULT)FALSE;

        ShowWindow(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL),SW_HIDE);
        ShowWindow(GetDlgItem(hwnd,IDDI_NO_TEMPLATE_LABEL2),SW_HIDE);

        if ( NULL == pTemplateDocumentUI ) {

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

            pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwndPDFPane,TEMPLATE_UI_TOP_MARGIN,TEMPLATE_UI_TOP_MARGIN,false,drawFields);

        }

        ShowWindow(GetDlgItem(hwnd,IDDI_DATA_FIELDS_RESET),SW_SHOW);
        ShowWindow(GetDlgItem(hwnd,IDDI_DATA_FIELDS_INSTRUCTIONS),SW_SHOW);

        ShowWindow(hwndPDFPane,SW_SHOW);

        }
        return (LRESULT)FALSE;

    case WM_RBUTTONUP: {

        if ( -1L == activeSelectedIndex )
            break;

        long currentMouseX = LOWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.left;
        long currentMouseY = HIWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.top;

        // The mouse is in MSHTML Visible View coordinates

        if ( currentMouseX < pTemplateDocumentUI -> rcPDFPagePixels.left || currentMouseX > pTemplateDocumentUI -> rcPDFPagePixels.right || 
                      currentMouseY < pTemplateDocumentUI -> rcPDFPagePixels.top || currentMouseY > pTemplateDocumentUI -> rcPDFPagePixels.bottom ) 
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

        menuItem.wID = IDDI_DATA_FIELDS_LABEL;
        menuItem.dwTypeData = "Label";
        menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
        menuItem.fState = MFS_ENABLED;

        InsertMenuItem(hOptionsMenu,0,MF_BYPOSITION,&menuItem);

        menuItem.wID = IDDI_DATA_FIELDS_DELETE;
        menuItem.dwTypeData = "Delete";
        menuItem.cch = (DWORD)strlen(menuItem.dwTypeData);
        menuItem.fState = MFS_ENABLED;

        InsertMenuItem(hOptionsMenu,1,MF_BYPOSITION,&menuItem);

        TrackPopupMenu(hOptionsMenu,TPM_LEFTALIGN,rcView.left + mouseMenuX + xHWNDPDFPane,rcView.top + mouseMenuY + yHWNDPDFPane,0,hwnd,NULL);

        }
        break;

    case WM_LBUTTONDOWN: {

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

      }
      break;

    case WM_LBUTTONUP: {

        long pageNumber = 0L;

        pTemplateDocumentUI -> PDFiumControl() -> get_PDFPageUnderMouse(&pageNumber);

        if ( didDrag ) {

            if ( abs(startMouseX - lastMouseX) < 8 ) {
                didDrag = false;
                break;
            }

            RECT r;

            r.left = startMouseX;
            r.top = startMouseY;
            r.right = lastMouseX;
            r.bottom = lastMouseY;

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

            if ( countSelectedFields < ( MAX_TEXT_RECT_COUNT - 1 ) ) {
                prcSelectedFields[countSelectedFields] = r;
                memset(&pFieldLabels[countSelectedFields * 32],0,32 * sizeof(char));
                pFieldRequired[countSelectedFields] = 0L;
                pPageNumbers[countSelectedFields] = pageNumber;
                countSelectedFields++;
                SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
            } else
                SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"Max");

            activeSelectedIndex = -1L;
            oldActiveSelectedIndex = -1L;

            activePotentialIndex = -1L;
            oldActivePotentialIndex = -1L;

            break;
        }

        if ( -1L < activeSelectedIndex ) {

            RECT rExisting = prcSelectedFields[activeSelectedIndex];

            pTemplateDocumentUI -> RemoveHilitedTextArea(&prcSelectedFields[activeSelectedIndex],pageNumber);

            removeField(activeSelectedIndex,pTemplateDocumentUI);

            RECT *pEntry = prcPotentialFields;
      
            activePotentialIndex = -1L;
            oldActivePotentialIndex = -1L;

            for ( long k = 0; k < countPotentialFields; k++, pEntry++ ) {
                if ( ! ( pageNumber == pTemplateDocumentUI -> textPage(k) ) )
                    continue;
                if ( rExisting.left != pEntry -> left || rExisting.right != pEntry -> right || rExisting.top != pEntry -> top || rExisting.bottom != pEntry -> bottom ) 
                    continue;
                activePotentialIndex = k;
                break;
            }

            if ( -1L < activePotentialIndex ) {
                if ( ! ( GUID_NULL == pTemplateDocumentUI -> hilitedPotentialField ) )
                    pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedPotentialField);
                pTemplateDocumentUI -> hilitedPotentialField = pTemplateDocumentUI -> HiliteArea(RGB(0,255,0),pageNumber,&prcPotentialFields[activePotentialIndex]);
                oldActivePotentialIndex = activePotentialIndex;
            }

            activeSelectedIndex = -1L;
            oldActiveSelectedIndex = -1L;

            break;

        }

        if ( -1L < activePotentialIndex ) {

            if ( countSelectedFields < ( MAX_TEXT_RECT_COUNT - 1 ) ) {

                activeSelectedIndex = countSelectedFields;
                oldActiveSelectedIndex = activeSelectedIndex;

                prcSelectedFields[activeSelectedIndex] = prcPotentialFields[activePotentialIndex];

                if ( ! ( GUID_NULL == pTemplateDocumentUI -> hilitedPotentialField ) )
                    pTemplateDocumentUI -> RemoveHilitedTextArea(&prcPotentialFields[activePotentialIndex],pageNumber);

                activePotentialIndex = -1L;
                oldActivePotentialIndex = -1L;
               
                pTemplateDocumentUI -> hilitedPotentialField = GUID_NULL;

                memset(&pFieldLabels[activeSelectedIndex * 32],0,32 * sizeof(char));
                pFieldRequired[activeSelectedIndex] = 0L;
                pPageNumbers[activeSelectedIndex] = pageNumber;

                pTemplateDocumentUI -> hilitedSelectedField = pTemplateDocumentUI -> AddSelectedTextArea(&prcSelectedFields[activeSelectedIndex],pageNumber);

                pTemplateDocumentUI -> hilitedSelectedField = pTemplateDocumentUI -> HiliteArea(RGB(0xFF,0x00,0x00),pageNumber,&prcSelectedFields[activeSelectedIndex]);

                countSelectedFields++;

                SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");

                break;

            } 

            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"Max");

        }

        activeSelectedIndex = -1L;
        oldActiveSelectedIndex = -1L;

        activePotentialIndex = -1L;
        oldActivePotentialIndex = -1L;

        }
        break;

    case WM_MOUSEMOVE: {

        if ( ! pObject )
            break;

        if ( ! pTemplateDocumentUI )
            break;

        long currentMouseX = LOWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.left;
        long currentMouseY = HIWORD(lParam) - pTemplateDocumentUI -> rcPageParentCoordinates.top;

        // The mouse is in MSHTML Visible View coordinates

        if ( currentMouseX < pTemplateDocumentUI -> rcPDFPagePixels.left || currentMouseX > pTemplateDocumentUI -> rcPDFPagePixels.right || 
                    currentMouseY < pTemplateDocumentUI -> rcPDFPagePixels.top || currentMouseY > pTemplateDocumentUI -> rcPDFPagePixels.bottom ) {
            // The mouse is in the gray area border
            activePotentialIndex = -1L;
            oldActivePotentialIndex = -1L;
            activeSelectedIndex = -1L;
            oldActiveSelectedIndex = -1L;
            break;
        }

        if ( wParam & MK_LBUTTON ) {

            if ( ! didDrag ) 
                SetCapture(hwnd);
            else 
                DRAW_COLORED_BOX_IN_PIXELS(pTemplateDocumentUI,PS_SOLID,DB_GREEN,(&rcGreenBox),BORDER_WEIGHT)

            didDrag = true;

            rcGreenBox.left = startMouseX;
            rcGreenBox.top = startMouseY;
            rcGreenBox.right = lastMouseX;
            rcGreenBox.bottom = lastMouseY;

            if ( rcGreenBox.right < rcGreenBox.left ) {
                long t = rcGreenBox.right;
                rcGreenBox.right = rcGreenBox.left;
                rcGreenBox.left = t;
            }

            if ( rcGreenBox.bottom < rcGreenBox.top ) {
                long t = rcGreenBox.bottom;
                rcGreenBox.bottom = rcGreenBox.top;
                rcGreenBox.top = t;
            }

            lastMouseX = currentMouseX;
            lastMouseY = currentMouseY;

            DRAW_COLORED_BOX_IN_PIXELS(pTemplateDocumentUI,PS_SOLID,DB_GREEN,(&rcGreenBox),BORDER_WEIGHT)

            break;

        }

        long pageNumber = 0L;

        pTemplateDocumentUI -> PDFiumControl() -> get_PDFPageUnderMouse(&pageNumber);

        prcPotentialFields = pTemplateDocumentUI -> pTextRects(&countPotentialFields,pageNumber);

        if ( ! prcPotentialFields )
            break;

        RECT rc;
        rc.left = currentMouseX;
        rc.top = currentMouseY;
        rc.right = rc.left;
        rc.bottom = rc.top;

        pTemplateDocumentUI -> convertToPoints(pageNumber,&rc);

        POINTL ptlMouse = {rc.left,rc.top};

        RECT *pEntry = prcSelectedFields;
        long *pPage = pPageNumbers;

        activeSelectedIndex = -1L;

        for ( long k = 0; k < countSelectedFields; k++, pEntry++, pPage++ ) {
            if ( ! ( *pPage == pageNumber ) )
                continue;
            if ( ptlMouse.x < pEntry -> left || ptlMouse.x > pEntry -> right || ptlMouse.y > pEntry -> top || ptlMouse.y < pEntry -> bottom ) 
                continue;
            activeSelectedIndex = k;
            break;
        }

        if ( -1L < activeSelectedIndex ) {

            // The mouse is in a selected field

            if ( activeSelectedIndex == oldActiveSelectedIndex ) 
                // The mouse is still in the same selected field
                break;

            // The mouse is in a different selected field

            if ( ! ( GUID_NULL == pTemplateDocumentUI -> hilitedSelectedField ) )
                // Is it possible that selected fields can touch ?
                pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedSelectedField);

            pTemplateDocumentUI -> hilitedSelectedField = pTemplateDocumentUI -> HiliteArea(RGB(255,0,0),pageNumber,&prcSelectedFields[activeSelectedIndex]);

            oldActiveSelectedIndex = activeSelectedIndex;

            break;

        }

        //The mouse is NOT in a selected field

        if ( -1L < oldActiveSelectedIndex ) 
            // The mouse has left the last selected field
            pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedSelectedField);

        pTemplateDocumentUI -> hilitedSelectedField = GUID_NULL;

        oldActiveSelectedIndex = -1L;

        pEntry = prcPotentialFields;
      
        activePotentialIndex = -1L;

        for ( long k = 0; k < countPotentialFields; k++, pEntry++ ) {
            if ( ! ( pageNumber == pTemplateDocumentUI -> textPage(k) ) )
                continue;
            if ( ptlMouse.x < pEntry -> left || ptlMouse.x > pEntry -> right || ptlMouse.y > pEntry -> top || ptlMouse.y < pEntry -> bottom ) 
                continue;
            activePotentialIndex = k;
            break;
        }

        if ( -1 < activePotentialIndex ) {

            // The mouse is in a potential field

            if ( activePotentialIndex == oldActivePotentialIndex ) 
                // The mouse is still in the same potential field
                break;

            // The mouse is in a different potential field

            if ( ! ( GUID_NULL == pTemplateDocumentUI -> hilitedPotentialField ) )
                // Is it possible that potential fields can touch ?
                pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedPotentialField);

            pTemplateDocumentUI -> hilitedPotentialField = pTemplateDocumentUI -> HiliteArea(RGB(0,255,0),pageNumber,&prcPotentialFields[activePotentialIndex]);

            oldActivePotentialIndex = activePotentialIndex;

            break;

        }

        //The mouse is NOT in a potential field

        if ( -1L < oldActivePotentialIndex ) 
            // The mouse has left the last potential field
            pTemplateDocumentUI -> UnHiliteArea(&pTemplateDocumentUI -> hilitedPotentialField);

        pTemplateDocumentUI -> hilitedPotentialField = GUID_NULL;

        oldActivePotentialIndex = -1L;

      }
      break;

    case WM_COMMAND: {

        switch ( LOWORD(wParam) ) {

        case IDDI_DATA_FIELDS_RESET: {
            countSelectedFields = 0;
            memset(prcSelectedFields,0,sizeof(keepFields));
            memset(pFieldLabels,0,sizeof(keepFieldLabels));
            memset(pFieldRequired,0,sizeof(keepFieldRequired));
            memset(pPageNumbers,0,sizeof(keepPageNumbers));
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
            pTemplateDocumentUI -> HiliteTextAreas(false);
         }
         break;

        case IDDI_DATA_FIELDS_LABEL: {
            if ( -1L == activeSelectedIndex ) 
                break;
            DLGTEMPLATE *dt = (DLGTEMPLATE *)LoadResource(hModule,FindResource(hModule,MAKEINTRESOURCE(IDD_DATA_FIELDS_LABEL),RT_DIALOG));
            DialogBoxIndirectParam(hModule,dt,hwnd,(DLGPROC)labelHandler,(LPARAM)activeSelectedIndex);
            activeSelectedIndex = -1L;
         }
         break;

        case IDDI_DATA_FIELDS_DELETE: {
            if ( -1L == activeSelectedIndex ) 
                break;
            pTemplateDocumentUI -> RemoveHilitedTextArea(&prcSelectedFields[activeSelectedIndex]);
            removeField(activeSelectedIndex,pTemplateDocumentUI);
            activeSelectedIndex = -1L;
            oldActiveSelectedIndex = -1L;
         }
         break;

        default:
         break;

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

#if 0
      case TTN_GETDISPINFO: {

         NMTTDISPINFO *pToolTipDispInfo;
         pToolTipDispInfo = (LPNMTTDISPINFO)pNotifyHeader;
         pToolTipDispInfo -> lpszText = szCurrentToolTipText;
         HFONT hFont = (HFONT)SendMessage(hwndToolTips,WM_GETFONT,0L,0L);
         LOGFONT fontInfo;
         GetObject(hFont,sizeof(LOGFONT),&fontInfo);

         LoadString(hModuleResources,pToolTipDispInfo -> lParam,szCurrentToolTipText,1024);

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

    case WM_DESTROY: {
        if ( ! ( NULL == hwndPDFPane ) ) {
            (WNDPROC)SetWindowLongPtr(hwndPDFPane,GWLP_WNDPROC,(ULONG_PTR)defaultStaticHandler);
            DestroyWindow(hwndPDFPane);
            hwndPDFPane = NULL;
        }
        if ( commitChanges ) {
            pDoodleOptionProps -> countDataFields = 0L;
            for ( long k = 0; k < MAX_TEXT_RECT_COUNT; k++ ) {
                if ( 0 == pDoodleOptionProps -> dataFieldRects[k].left && 0 == pDoodleOptionProps -> dataFieldRects[k].right )
                    break;
                pDoodleOptionProps -> countDataFields++;
            }
        } else {
            memcpy(prcSelectedFields,keepFields,sizeof(keepFields));
            memcpy(pFieldLabels,keepFieldLabels,sizeof(keepFieldLabels));
            memcpy(pPageNumbers,keepPageNumbers,sizeof(keepPageNumbers));
            memcpy(pFieldRequired,keepFieldRequired,sizeof(keepFieldRequired));
        }
        if ( pTemplateDocumentUI ) {
            pTemplateDocumentUI -> releaseView();
            pTemplateDocumentUI = NULL;
        }
        }
        break;

    default:
        break;
   }
