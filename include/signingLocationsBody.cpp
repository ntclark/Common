
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

      entryCountRects = pDoodleOptionProps -> countRects;

      entryDoRemember = pDoodleOptionProps -> processingDisposition.doRemember;
	  
      SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_SETCHECK,0 == entryCountRects ? BST_CHECKED : 0L,0L);
      if ( 0 == entryCountRects ) 
         doLearn = true;

      SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doContinuousDoodle ? BST_CHECKED : 0L,0L);
      SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doContinuousDoodle ? 0L : BST_CHECKED,0L);
      SendDlgItemMessage(hwnd,IDDI_DISPOSITION_REMEMBER,BM_SETCHECK,pDoodleOptionProps -> processingDisposition.doRemember ? BST_CHECKED : 0L,0L);

      commitChanges = false;

#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,16,128 + 24,drawSigningAreas);
#else
      pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,16,128,drawSigningAreas);
#endif

      HRESULT rc = CoCreateInstance(CLSID_CursiVisionSignaturePad,NULL,CLSCTX_ALL,IID_ISignaturePad,reinterpret_cast<void **>(&pSignaturePad));

      if ( ! pSignaturePad ) 
         MessageBox(hwnd,"There is no signature pad selected for CursiVision to use.\n\nTherefore, CursiVision does not know the size of the signature pad "
                           "and is not able to assist in defining signature locations.","Note",MB_ICONEXCLAMATION);

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);

   case WM_SIZE: 
      pTemplateDocumentUI -> size();
      break;

   case WM_REDRAW_THE_FUCKING_WINDOW:
      REDRAW_THE_FUCKING_WINDOW_2
      break;

   case WM_LBUTTONDOWN: {

      oldMouseX = LOWORD(lParam);
      oldMouseY = HIWORD(lParam);
      startMouseX = LOWORD(lParam);
      startMouseY = HIWORD(lParam);

      if ( -1L == candidateRectIndex ) 
         break;

      if ( ! pObject -> pTemplateDocument -> pszDocumentName[0] )
         break;

      memcpy(&rBase,&visibleRects[inverseVisibleRectIndexes[candidateRectIndex]],sizeof(RECT));

      rectShiftX = 0;
      rectShiftY = 0;

      rectIgnoreIndex = candidateRectIndex;

      drawSigningAreas(NULL,pTemplateDocumentUI);

      rectShiftX = 0L;
      rectShiftY = 0L;
      rectIgnoreIndex = -1L;

      }
      break;

   case WM_LBUTTONUP: {

      if ( -1L == candidateRectIndex ) 
         break;

      memcpy(&pCurrentLocations[candidateRectIndex].documentRect,&visibleRects[inverseVisibleRectIndexes[candidateRectIndex]],sizeof(RECT));

      candidateRectIndex = -1L;

      REDRAW_THE_FUCKING_WINDOW

      }
      break;

   case WM_RBUTTONUP: {

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

      if ( entryCountRects > 1 ) {

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

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,"");

      if ( ! ( -1L == candidateRectIndex ) && ( wParam & MK_LBUTTON ) ) {

         long deltaX = currentMouseX - startMouseX;
         long deltaY = currentMouseY - startMouseY;

         oldMouseX = currentMouseX;
         oldMouseY = currentMouseY;

         long sourceIndex = inverseVisibleRectIndexes[candidateRectIndex];

         RECT r;

         memcpy(&r,&pTemplateDocumentUI -> rcPDFPagePixels,sizeof(RECT));

         HDC hdc = GetDC(pTemplateDocumentUI -> hwndVellum);

         BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,pTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         rectIgnoreIndex = candidateRectIndex;

         drawSigningAreas(hdc,pTemplateDocumentUI);

         rectIgnoreIndex = -1L;

         ReleaseDC(pTemplateDocumentUI -> hwndVellum,hdc);

         char szMessage[128];

         if ( ! ( -1L == cornerGrabIndex ) ) {

            if ( 0 == deltaX || 0 == deltaY )
               break;

            deltaX = (long)((double)deltaX / pTemplateDocumentUI -> scaleToPixelsX);
            deltaY = (long)((double)deltaY / pTemplateDocumentUI -> scaleToPixelsY);

            double aspectRatio = pSignaturePad -> WidthInInches() / pSignaturePad -> HeightInInches();

            deltaY = (long)((double)deltaX / aspectRatio);

            switch ( cornerGrabIndex ) {

            case 0:
               visibleRects[sourceIndex].left = rBase.left + deltaX;
               visibleRects[sourceIndex].top = rBase.top - deltaY;
               visibleRects[sourceIndex].right = rBase.right;
               visibleRects[sourceIndex].bottom = rBase.bottom;
               break;

            case 1:
               visibleRects[sourceIndex].left = rBase.left;
               visibleRects[sourceIndex].right = rBase.right + deltaX;
               visibleRects[sourceIndex].top = rBase.top + deltaY;
               visibleRects[sourceIndex].bottom = rBase.bottom;
               break;

            case 2:
               visibleRects[sourceIndex].left = rBase.left;
               visibleRects[sourceIndex].top = rBase.top;
               visibleRects[sourceIndex].right = rBase.right + deltaX;
               visibleRects[sourceIndex].bottom = rBase.bottom - deltaY;
               break;

            case 3:
               visibleRects[sourceIndex].left = rBase.left + deltaX;
               visibleRects[sourceIndex].top = rBase.top;
               visibleRects[sourceIndex].right = rBase.right;
               visibleRects[sourceIndex].bottom = rBase.bottom + deltaY;
               break;

            }

            double cx = (double)(visibleRects[sourceIndex].right - visibleRects[sourceIndex].left) / 72.0;
            double cy = (double)(visibleRects[sourceIndex].top - visibleRects[sourceIndex].bottom) / 72.0;

            sprintf(szMessage,"The signature is %4.2lf inches wide and %4.2lf inches high",cx,cy);

         } else {

            visibleRects[sourceIndex].left = rBase.left + (long)((double)deltaX / pTemplateDocumentUI -> scaleToPixelsX);
            visibleRects[sourceIndex].right = rBase.right + (long)((double)deltaX / pTemplateDocumentUI -> scaleToPixelsX);

            visibleRects[sourceIndex].top = rBase.top - (long)((double)deltaY / pTemplateDocumentUI -> scaleToPixelsY);
            visibleRects[sourceIndex].bottom = rBase.bottom - (long)((double)deltaY / pTemplateDocumentUI -> scaleToPixelsY);

            double pdfWidth = (double)(pTemplateDocumentUI -> Parent() -> PDFPageWidth() ) / 72.0;
            double pdfHeight = (double)(pTemplateDocumentUI -> Parent() -> PDFPageHeight() ) / 72.0;

            double x = (double)visibleRects[sourceIndex].left / 72.0;
            double y = (double)(pTemplateDocumentUI -> Parent() -> PDFPageHeight() - visibleRects[sourceIndex].top) / 72.0;

            sprintf(szMessage,"The top left of the signature is at: %4.2lf inches across and %4.2lf inches down",x,y);

         }

         SetDlgItemText(hwnd,IDDI_CV_LOCATIONS_ADDITIONAL_INFO,szMessage);

         RECT rBox;

         memcpy(&rBox,&visibleRects[sourceIndex],sizeof(RECT));

         pTemplateDocumentUI -> convertToPixels(&rBox);

         DRAW_RED_BOX(pTemplateDocumentUI,PS_SOLID,&rBox)

         break;

      }

      if ( currentMouseX < pTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pTemplateDocumentUI -> rcPageParentCoordinates.bottom ) 
         break;

      bool noteEmitted = false;

      long vrIndex = -1L;

      candidateRectIndex = -1L;

      POINTL ptlMouse = {currentMouseX - pTemplateDocumentUI -> rcPageParentCoordinates.left,currentMouseY - pTemplateDocumentUI -> rcPageParentCoordinates.top};

      pTemplateDocumentUI -> convertToPoints(&ptlMouse);

      RECT *pr = &visibleRects[0];

      cornerGrabIndex = -1L;

      while ( pr -> left != pr -> right ) {

         vrIndex++;

         RECT r;

         memcpy(&r,pr,sizeof(RECT));

         pTemplateDocumentUI -> convertToPixels(&r);

         if ( ptlMouse.x < pr -> left || ptlMouse.x > pr -> right || ptlMouse.y > pr -> top || ptlMouse.y < pr -> bottom ) {

            DRAW_BLACK_BOX(pTemplateDocumentUI,PS_SOLID,&r)

            if ( ! noteEmitted )
               SetWindowText(hwndInstructions,"Right click for Options");

            if ( -1L == candidateRectIndex )
               SetCursor(LoadCursor(NULL,IDC_ARROW));

         } else {

            candidateRectIndex = visibleRectIndexes[vrIndex];

            DRAW_RED_BOX(pTemplateDocumentUI,PS_SOLID,&r)

            if ( ! noteEmitted )
               SetWindowText(hwndInstructions,"Right click for Options, Left click to move");

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

         }

         pr++;

      }

      }
      return (LRESULT)0;

   
   case WM_COMMAND: {

      switch ( LOWORD(wParam ) ) {

      case IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN:
         doLearn = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_GETCHECK,0L,0L);
         break;

      case IDDI_CV_LOCATIONS_RESET: 
         memset(pCurrentLocations,0,sizeof(pDoodleOptionProps -> theLocations));
         entryCountRects = 0L;
         REDRAW_THE_FUCKING_WINDOW
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

         long pnTemp = pCurrentLocations[oldCandidateRectIndex].zzpdfPageNumber;
         pCurrentLocations[oldCandidateRectIndex].zzpdfPageNumber = pCurrentLocations[candidateRectIndex].zzpdfPageNumber;
         pCurrentLocations[candidateRectIndex].zzpdfPageNumber = pnTemp;

         pnTemp = pCurrentLocations[oldCandidateRectIndex].pdfAdobePageNumber;
         pCurrentLocations[oldCandidateRectIndex].pdfAdobePageNumber = pCurrentLocations[candidateRectIndex].pdfAdobePageNumber;
         pCurrentLocations[candidateRectIndex].pdfAdobePageNumber = pnTemp;

         REDRAW_THE_FUCKING_WINDOW
         }
         break;

      case IDDI_SIGNING_LOCATIONS_NEW: {

         if ( ! pSignaturePad )
            break;

         copySourceRectIndex = 0L;

         if ( 0 < entryCountRects ) 
            return SendMessage(hwnd,WM_COMMAND,MAKEWPARAM(IDDI_SIGNING_LOCATIONS_PASTE,0),0L);

         pTemplateDocumentUI -> size();

         mouseMenuX -= pTemplateDocumentUI -> rcPageParentCoordinates.left;
         mouseMenuY -= pTemplateDocumentUI -> rcPageParentCoordinates.top;

         RECT *pTarget = &pCurrentLocations[0].documentRect;

         entryCountRects = 1;

         pCurrentLocations[0].zzpdfPageNumber = pTemplateDocumentUI -> currentPageNumber;

         double padWidth = pSignaturePad -> WidthInInches();
         double padHeight = pSignaturePad -> HeightInInches();
         double pdfWidth = (double)(pTemplateDocumentUI -> Parent() -> PDFPageWidth() ) / 72.0;
         double pdfHeight = (double)(pTemplateDocumentUI -> Parent() -> PDFPageHeight() ) / 72.0;

         pTarget -> left = (long)((double)mouseMenuX / pTemplateDocumentUI -> scaleToPixelsX);
         pTarget -> top = pTemplateDocumentUI -> Parent() -> PDFPageHeight() - (long)((double)mouseMenuY / pTemplateDocumentUI -> scaleToPixelsY);

         pTarget -> right = pTarget -> left + (long)((double)(pTemplateDocumentUI -> rcPDFPagePixels.right - pTemplateDocumentUI -> rcPDFPagePixels.left) * padWidth / pdfWidth / pTemplateDocumentUI -> scaleToPixelsX);
         pTarget -> bottom = pTarget -> top - (long)((double)(pTemplateDocumentUI -> rcPDFPagePixels.bottom - pTemplateDocumentUI -> rcPDFPagePixels.top) * padHeight / pdfHeight / pTemplateDocumentUI -> scaleToPixelsY );

         drawSigningAreas(NULL,pTemplateDocumentUI);

         }
         break;

      case IDDI_SIGNING_LOCATIONS_PASTE: {

         if ( -1L == copySourceRectIndex )
            break;

         mouseMenuX -= pTemplateDocumentUI -> rcPageParentCoordinates.left;
         mouseMenuY -= pTemplateDocumentUI -> rcPageParentCoordinates.top;

         RECT *pSource = &pCurrentLocations[copySourceRectIndex].documentRect;

         RECT *pTarget = &pCurrentLocations[entryCountRects].documentRect;

         pTarget -> left = (long)((double)mouseMenuX / pTemplateDocumentUI -> scaleToPixelsX);
         pTarget -> top = pTemplateDocumentUI -> Parent() -> PDFPageHeight() - (long)((double)mouseMenuY / pTemplateDocumentUI -> scaleToPixelsY);

         pTarget -> right = pTarget -> left + pSource -> right - pSource -> left;
         pTarget -> bottom = pTarget -> top - (pSource -> top - pSource -> bottom);

         pCurrentLocations[entryCountRects].zzpdfPageNumber = pTemplateDocumentUI -> currentPageNumber;

         entryCountRects++;

         if ( -1L == deleteSourceRectIndex ) {
            InvalidateRect(pTemplateDocumentUI -> hwndHTMLHost,NULL,TRUE);
            UpdateWindow(pTemplateDocumentUI -> hwndHTMLHost);
            //DRAW_RED_BOX(pTarget)
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
         RECT r;
         memcpy(&r,&visibleRects[copySourceRectIndex],sizeof(RECT));
         pTemplateDocumentUI -> convertToPixels(&r);
         DRAW_WHITE_BOX(pTemplateDocumentUI,PS_SOLID,&r)
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

         struct writingLocation *wl = &pCurrentLocations[candidateRectIndex];

         long lastIndex = candidateRectIndex;
         while ( wl[lastIndex - candidateRectIndex].documentRect.left != wl[lastIndex - candidateRectIndex].documentRect.right )
            lastIndex++;

         long n = (lastIndex - candidateRectIndex) * sizeof(struct writingLocation);
         BYTE *pX = new BYTE[n];

         memcpy(pX,&wl[candidateRectIndex + 1],n);
         memcpy(&wl[candidateRectIndex],pX,n);

         delete [] pX;         

         entryCountRects--;

         candidateRectIndex = -1L;

         REDRAW_THE_FUCKING_WINDOW

         }
         break;

#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      case IDDI_SIGNING_LOCATIONS_SKIP_SIGNING: {
         pObject -> skipSignatureCapture = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_SIGNING_LOCATIONS_SKIP_SIGNING,BM_GETCHECK,0L,0L);
         if ( pObject -> skipSignatureCapture ) {
            EnableWindow(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),FALSE);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN),FALSE);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON),FALSE);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF),FALSE);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER),FALSE);
         } else {
            EnableWindow(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),TRUE);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN),0 == entryCountRects);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON),doLearn && 0 == entryCountRects);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF),doLearn && 0 == entryCountRects);
            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER),0 == entryCountRects);
         }
         }
         break;
#endif

      default:
         break;

      }

      if ( 0 < entryCountRects ) {
         doLearn = false;
         SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_SETCHECK,0L,0L);
      }
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      if ( ! pObject -> skipSignatureCapture ) {
         EnableWindow(GetDlgItem(hwnd,IDDI_CV_LOCATIONS_RESET),pObject -> skipSignatureCapture ? FALSE : TRUE);
#endif
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN),0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON),doLearn && 0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF),doLearn && 0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER),0 == entryCountRects);
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      }
#endif

      break;
      }

   case WM_PAINT: {
      if ( 0 < entryCountRects ) {
         doLearn = false;
         SendDlgItemMessage(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN,BM_SETCHECK,0L,0L);
      }
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      if ( ! pObject -> skipSignatureCapture ) {
#endif
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LEARN),0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON),doLearn && 0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF),doLearn && 0 == entryCountRects);
      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER),0 == entryCountRects);
#ifdef IDDI_SIGNING_LOCATIONS_SKIP_SIGNING
      }
#endif
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
