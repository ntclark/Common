
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

      DOODLE_PROPERTIES_PTR

      memcpy(keepFields,pDoodleOptionProps -> dataFields,sizeof(keepFields));
      memcpy(keepFieldLabels,pDoodleOptionProps -> dataFieldLabels,sizeof(keepFieldLabels));
      memcpy(keepFieldRequired,pDoodleOptionProps -> dataFieldRequired,sizeof(keepFieldRequired));
      memcpy(keepPageNumbers,pDoodleOptionProps -> dataFieldPage,sizeof(keepPageNumbers));

      prcFields = pDoodleOptionProps -> dataFields;
      pFieldLabels = &pDoodleOptionProps -> dataFieldLabels[0][0];
      pFieldRequired = pDoodleOptionProps -> dataFieldRequired;
      pPageNumbers = pDoodleOptionProps -> dataFieldPage;

      countFields = pDoodleOptionProps -> countDataFields;

      pFieldsHandlerTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,16,52,drawFields);

      char szInstructions[MAX_PATH];
      LoadString(hModule,IDDI_DATA_FIELDS_INSTRUCTIONS,szInstructions,MAX_PATH);
      SetDlgItemText(hwnd,IDDI_DATA_FIELDS_INSTRUCTIONS,szInstructions);
      commitChanges = false;

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);

   case WM_DESTROY: {
      if ( commitChanges ) {
         pDoodleOptionProps -> countDataFields = 0L;
         for ( long k = 0; k < MAX_TEXT_RECT_COUNT; k++ ) {
            if ( 0 == pDoodleOptionProps -> dataFields[k].left && 0 == pDoodleOptionProps -> dataFields[k].right )
               break;
            pDoodleOptionProps -> countDataFields++;
         }
      } else {
         memcpy(prcFields,keepFields,sizeof(keepFields));
         memcpy(pFieldLabels,keepFieldLabels,sizeof(keepFieldLabels));
         memcpy(pPageNumbers,keepPageNumbers,sizeof(keepPageNumbers));
         memcpy(pFieldRequired,keepFieldRequired,sizeof(keepFieldRequired));
      }
      pFieldsHandlerTemplateDocumentUI -> releaseView();
      pFieldsHandlerTemplateDocumentUI = NULL;
      }
      break;

   case WM_RBUTTONUP: {

      if ( -1L == activeFieldIndex )
         break;

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      if ( currentMouseX < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.bottom ) 
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

      TrackPopupMenu(hOptionsMenu,TPM_LEFTALIGN,rcView.left + mouseMenuX,rcView.top + mouseMenuY,0,hwnd,NULL);

      }
      break;

   case WM_LBUTTONDOWN: {

      didDrag = false;

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      if ( currentMouseX < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.bottom ) 
         break;

      startMouseX = currentMouseX - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left;
      startMouseY = currentMouseY - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top;

      lastMouseX = startMouseX;
      lastMouseY = startMouseY;

      }
      break;

   case WM_LBUTTONUP: {

      if ( didDrag ) {

         if ( abs(startMouseX - lastMouseX) < 8 ) {
            didDrag = false;
            break;
         }

         RECT r;

         r.left = startMouseX - 4;
         r.top = startMouseY - 4;
         r.right = lastMouseX + 4;
         r.bottom = lastMouseY + 4;

         if ( r.right < r.left ) {
            long t = r.right - 8;
            r.right = r.left + 8;
            r.left = t;
         }

         if ( r.bottom < r.top ) {
            long t = r.bottom - 8;
            r.bottom = r.top + 8;
            r.top = t;
         }

         r.left = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
         r.right = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
         r.top = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
         r.bottom = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

         HDC hdc = GetDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum);

         BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,pFieldsHandlerTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         ReleaseDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum,hdc);

         pFieldsHandlerTemplateDocumentUI -> convertToPoints(&r);

         if ( countFields < ( MAX_TEXT_RECT_COUNT - 1 ) ) {
            memcpy(&prcFields[countFields],&r,sizeof(RECT));
            memset(&pFieldLabels[countFields * 32],0,32 * sizeof(char));
            pFieldRequired[countFields] = 0L;
            pPageNumbers[countFields] = pFieldsHandlerTemplateDocumentUI -> currentPageNumber;
            countFields++;
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
         } else
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"Max");

      } else if ( ! ( -1L == activeFieldIndex ) ) {

         removeField(activeFieldIndex,pFieldsHandlerTemplateDocumentUI);

      } else if ( ! ( -1L == activePotentialIndex ) ) {

         if ( countFields < ( MAX_TEXT_RECT_COUNT - 1 ) ) {
            memcpy(&prcFields[countFields],&pEntries[activePotentialIndex],sizeof(RECT));
            memset(&pFieldLabels[countFields * 32],0,32 * sizeof(char));
            pFieldRequired[countFields] = 0L;
            pPageNumbers[countFields] = pFieldsHandlerTemplateDocumentUI -> textPage(activePotentialIndex);
            countFields++;
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
         } else
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"Max");

      }

      drawFields(NULL,pFieldsHandlerTemplateDocumentUI);

      activePotentialIndex = -1L;
      activeFieldIndex = -1L;
      oldPotentialIndex = -1L;

      }
      break;

   case WM_MOUSEMOVE: {

      if ( ! pObject )
         break;

      if ( ! pFieldsHandlerTemplateDocumentUI )
         break;

      pEntries = pFieldsHandlerTemplateDocumentUI -> pTextRects(&countEntries);

      if ( ! pEntries )
         break;

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      if ( currentMouseX < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.bottom ) {

         oldPotentialIndex = -1L;
         activePotentialIndex = -1L;
         activeFieldIndex = -1L;
         oldActiveFieldIndex = -1L;

         drawFields(NULL,pFieldsHandlerTemplateDocumentUI);

         break;

      }

      if ( wParam & MK_LBUTTON ) {

         didDrag = true;

         RECT r;

         r.left = startMouseX - 4;
         r.top = startMouseY - 4;
         r.right = lastMouseX + 4;
         r.bottom = lastMouseY + 4;

         if ( r.right < r.left ) {
            long t = r.right - 8;
            r.right = r.left + 8;
            r.left = t;
         }

         if ( r.bottom < r.top ) {
            long t = r.bottom - 8;
            r.bottom = r.top + 8;
            r.top = t;
         }

         r.left = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
         r.right = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
         r.top = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
         r.bottom = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

         HDC hdc = GetDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum);

         BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,pFieldsHandlerTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         ReleaseDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum,hdc);

         lastMouseX = currentMouseX - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left;
         lastMouseY = currentMouseY - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top;

         r.left = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.left,startMouseX);
         r.top = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.top,startMouseY);
         r.right = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.right,lastMouseX);
         r.bottom = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.bottom,lastMouseY);

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

         DRAW_GREEN_BOX(pFieldsHandlerTemplateDocumentUI,PS_DOT,&r,2);

         drawFields(NULL,pFieldsHandlerTemplateDocumentUI);

         break;

      }

      activePotentialIndex = -1L;

      activeFieldIndex = -1L;

      POINTL ptlMouse = {currentMouseX - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.left,currentMouseY - pFieldsHandlerTemplateDocumentUI -> rcPageParentCoordinates.top};

      pFieldsHandlerTemplateDocumentUI -> convertToPoints(&ptlMouse);

      RECT *pEntry = prcFields;

      for ( long k = 0; k < countFields; k++, pEntry++ ) {
         if ( ptlMouse.x < pEntry -> left || ptlMouse.x > pEntry -> right || ptlMouse.y > pEntry -> top || ptlMouse.y < pEntry -> bottom ) 
            continue;
         activeFieldIndex = k;
         break;
      }

      if ( ! ( activeFieldIndex == oldActiveFieldIndex ) && ! ( -1L == oldActiveFieldIndex ) ) {
         RECT r;
         memcpy(&r,&prcFields[oldActiveFieldIndex],sizeof(RECT));
         pFieldsHandlerTemplateDocumentUI -> convertToPixels(&r);
         DRAW_GREEN_BOX(pFieldsHandlerTemplateDocumentUI,PS_SOLID,&r,1)
         oldActiveFieldIndex = -1L;
      }

      if ( ! ( -1L == activeFieldIndex ) ) {
         RECT r;
         memcpy(&r,&prcFields[activeFieldIndex],sizeof(RECT));
         pFieldsHandlerTemplateDocumentUI -> convertToPixels(&r);
         DRAW_RED_BOX(pFieldsHandlerTemplateDocumentUI,PS_SOLID,&r)
         break;
      }

      pEntry = pEntries;

      for ( long k = 0; k < countEntries; k++, pEntry++ ) {
         if ( ptlMouse.x < pEntry -> left || ptlMouse.x > pEntry -> right || ptlMouse.y > pEntry -> top || ptlMouse.y < pEntry -> bottom ) 
            continue;
         activePotentialIndex = k;
         break;
      }

      if ( activePotentialIndex != oldPotentialIndex && ! ( -1L == oldPotentialIndex ) ) {

         RECT r;

         memcpy(&r,&pEntries[oldPotentialIndex],sizeof(RECT));

         pFieldsHandlerTemplateDocumentUI -> convertToPixels(&r);

         r.left -= 4;
         r.right += 4;

         if ( r.bottom > r.top ) {
            r.top -= 4;
            r.bottom += 4;
         } else {
            r.top += 4;
            r.bottom -= 4;
         }

         r.left = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
         r.right = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
         r.top = max(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
         r.bottom = min(pFieldsHandlerTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

         if ( r.right < r.left ) {
            long t = r.right - 8;
            r.right = r.left + 8;
            r.left = t;
         }

         if ( r.bottom < r.top ) {
            long t = r.bottom - 8;
            r.bottom = r.top + 8;
            r.top = t;
         }

         HDC hdc = GetDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum);

         BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,pFieldsHandlerTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         drawFields(hdc,pFieldsHandlerTemplateDocumentUI);

         ReleaseDC(pFieldsHandlerTemplateDocumentUI -> hwndVellum,hdc);

         oldPotentialIndex = -1L;

      }

      if ( activePotentialIndex == oldPotentialIndex )
         break;

      RECT r;
      memcpy(&r,&pEntries[activePotentialIndex],sizeof(RECT));
      pFieldsHandlerTemplateDocumentUI -> convertToPixels(&r);
      DRAW_GREEN_BOX(pFieldsHandlerTemplateDocumentUI,PS_DOT,&r,1)

      oldPotentialIndex = activePotentialIndex;

      }
      break;


   case WM_COMMAND: {

      switch ( LOWORD(wParam) ) {

      case IDDI_DATA_FIELDS_RESET: {
         countFields = 0;
         memset(prcFields,0,sizeof(keepFields));
         memset(pFieldLabels,0,sizeof(keepFieldLabels));
         memset(pFieldRequired,0,sizeof(keepFieldRequired));
         memset(pPageNumbers,0,sizeof(keepPageNumbers));
         SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_HIDE);
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_SHOW);
         }
         break;

      case IDDI_DATA_FIELDS_LABEL: {
         if ( -1L == activeFieldIndex ) 
            break;
         DLGTEMPLATE *dt = (DLGTEMPLATE *)LoadResource(hModule,FindResource(hModule,MAKEINTRESOURCE(IDD_DATA_FIELDS_LABEL),RT_DIALOG));
         DialogBoxIndirectParam(hModule,dt,hwnd,(DLGPROC)labelHandler,(LPARAM)activeFieldIndex);
         activeFieldIndex = -1L;
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_HIDE);
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_SHOW);
         }
         break;

      case IDDI_DATA_FIELDS_DELETE: {
         if ( -1L == activeFieldIndex ) 
            break;
         removeField(activeFieldIndex,pFieldsHandlerTemplateDocumentUI);
         activeFieldIndex = -1L;
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_HIDE);
         ShowWindow(pFieldsHandlerTemplateDocumentUI -> hwndVellum,SW_SHOW);
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
#ifdef REGISTER_TOOLTIPS
      case TTN_GETDISPINFO: {
         NMTTDISPINFO *pToolTipDispInfo;
         pToolTipDispInfo = (LPNMTTDISPINFO)pNotifyHeader;
         pToolTipDispInfo -> lpszText = szCurrentToolTipText;
         HFONT hFont = (HFONT)SendMessage(hwndToolTips,WM_GETFONT,0L,0L);
         LOGFONT fontInfo;
         GetObject(hFont,sizeof(LOGFONT),&fontInfo);

         LoadString(hModule,pToolTipDispInfo -> lParam,szCurrentToolTipText,1024);

         if ( fontInfo.lfHeight )
            SendMessage(pNotifyHeader -> hwndFrom,TTM_SETMAXTIPWIDTH,0,strlen(szCurrentToolTipText) * abs(fontInfo.lfHeight) / 4);
         else
            SendMessage(pNotifyHeader -> hwndFrom,TTM_SETMAXTIPWIDTH,0,256);
         }
         return 0;
#endif
#endif

      }

      }
      break;

   case WM_SIZE: 
      if ( ! pObject )
         break;
      pFieldsHandlerTemplateDocumentUI -> size();
      break;

   default:
      break;
   }