

   resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   OBJECT_WITH_PROPERTIES *pObject = NULL;
   if ( p )
      pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;

   switch ( msg ) {

   case WM_INITDIALOG: {
      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);
      p = (resultDisposition *)pPage -> lParam;
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);
      pObject = (OBJECT_WITH_PROPERTIES *)p -> pParent;
      pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,16,70,drawSelections);
      hwndVellum = pTemplateDocumentUI -> hwndVellum;
      oldPotentialIndex = -1L;
      activePotentialIndex = -1L;
      char szTemp[256];
      LoadString(hModule,IDDI_CV_RECOGNITION_INSTRUCTIONS,szTemp,256);
      SetDlgItemText(hwnd,IDDI_CV_RECOGNITION_INSTRUCTIONS,szTemp);
      memcpy(selections,pObject -> expectedRects,sizeof(pObject -> expectedRects));
      memcpy(textSelections,pObject -> expectedText,sizeof(pObject -> expectedText));
      memcpy(pageSelections,pObject -> expectedPage,sizeof(pObject -> expectedPage));
      COUNT_SELECTIONS(selections,&countSelections)
      commitChanges = false;

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);

   case WM_SIZE: {
      if ( ! pTemplateDocumentUI )
         break;
      pTemplateDocumentUI -> size();
      RECT rcView = {0},rcNote = {0},rcParent = {0};
      GetWindowRect(hwnd,&rcParent);
      GetWindowRect(hwndVellum,&rcView);
      GetWindowRect(GetDlgItem(hwnd,IDDI_CV_MORE_INFORMATION),&rcNote);
      SetWindowPos(GetDlgItem(hwnd,IDDI_CV_MORE_INFORMATION),HWND_TOP,rcView.left - rcParent.left,rcView.top - (rcNote.bottom - rcNote.top) - rcParent.top - 4,0,0,SWP_NOSIZE);
      }
      break;

   case WM_LBUTTONDOWN: {

      mouseButtonDown = true;

      didDrag = false;

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      if ( currentMouseX < pTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pTemplateDocumentUI -> rcPageParentCoordinates.bottom ) 
         break;

      startMouseX = currentMouseX - pTemplateDocumentUI -> rcPageParentCoordinates.left;
      startMouseY = currentMouseY - pTemplateDocumentUI -> rcPageParentCoordinates.top;

      lastMouseX = startMouseX;
      lastMouseY = startMouseY;

      if ( wParam & MK_CONTROL ) {

         isAdding = true;

      } else {

         if ( countSelections ) {
            RECT r = {0};
            GetWindowRect(hwndVellum,&r);
            HDC hdc = GetDC(hwndVellum);
            BitBlt(hdc,0,0,r.right - r.left,r.bottom - r.top,pTemplateDocumentUI -> pdfDC(),0,0,SRCCOPY);
            ReleaseDC(hwndVellum,hdc);
         }

         countSelections = 0;
         memset(selections,0,sizeof(selections));
         memset(textSelections,0,sizeof(textSelections));
         memset(pageSelections,0,sizeof(pageSelections));
         SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
         isAdding = false;

      }

      }
      break;

   case WM_LBUTTONUP: {

      mouseButtonDown = false;

      if ( didDrag ) {

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

         r.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
         r.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
         r.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
         r.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

         HDC hdcTarget = GetDC(hwndVellum);

         BitBlt(hdcTarget,r.left,r.top,r.right - r.left,r.bottom - r.top,pTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         ReleaseDC(hwndVellum,hdcTarget);

         countSelections = 0;
         memset(selections,0,sizeof(selections));
         memset(pageSelections,0,sizeof(pageSelections));
         memset(textSelections,0,sizeof(textSelections));
         SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");

         for ( long k = 0; k < countEntries; k++ ) {
            if ( -1L == pEncounteredInDrag[k] ) 
               continue;
            strcpy(textSelections + strlen(textSelections),pTemplateDocumentUI -> pTextText(k));
            countSelections++;
         }

         pTemplateDocumentUI -> convertToPoints(&r);

         memcpy(&selections[0],&r,sizeof(RECT));

         pageSelections[0] = pTemplateDocumentUI -> currentPageNumber;

         countSelections = 1;

      } else if ( ! ( -1L == activePotentialIndex ) ) {

         RECT *pEntry = &pEntries[activePotentialIndex];

         if ( wParam & MK_CONTROL ) {

            long foundIndex = -1L;

            for ( long j = 0; j < countSelections; j++ ) {
               if ( 0 == memcmp(&selections[j],pEntry,sizeof(RECT)) ) {
                  foundIndex = j;
                  break;
               }
            }

            if ( -1L == foundIndex ) {
               memcpy(&selections[countSelections],pEntry,sizeof(RECT));
               memcpy(&textSelections[countSelections * 33],pTemplateDocumentUI -> pTextText(activePotentialIndex),32);
               pageSelections[countSelections] = pTemplateDocumentUI -> textPage(activePotentialIndex);
               countSelections++;
            } else
               removeSelection(foundIndex);

         } else {

            countSelections = 0;
            memset(selections,0,sizeof(selections));
            memset(textSelections,0,sizeof(textSelections));
            SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
            memcpy(&selections[countSelections],pEntry,sizeof(RECT));
            memcpy(&textSelections,pTemplateDocumentUI -> pTextText(activePotentialIndex),32);
            pageSelections[countSelections] = pTemplateDocumentUI -> textPage(activePotentialIndex);

#if 1
            double pdfWidth = (double)(pObject -> pTemplateDocument -> PDFPageWidth() ) / 72.0;
            double pdfHeight = (double)(pObject -> pTemplateDocument -> PDFPageHeight() ) / 72.0;

            double x = (double)pEntry -> left/ 72.0;
            double y = (double)(pObject -> pTemplateDocument -> PDFPageHeight() - pEntry -> top) / 72.0;

            char szLocation[128];
            sprintf(szLocation,"That location is: %4.2lf inches from the left and %4.2lf inches from the top",x,y);
            SetDlgItemText(hwnd,IDDI_CV_MORE_INFORMATION,szLocation);
#endif
            countSelections = 1;

         }

         activePotentialIndex = -1L;
         oldPotentialIndex = -1L;

      }

      if ( pEncounteredInDrag ) {
         delete [] pEncounteredInDrag;
         pEncounteredInDrag = NULL;
      }

      drawSelections(NULL,pTemplateDocumentUI);

      activePotentialIndex = -1L;

      }
      break;

   case WM_MOUSEMOVE: {

      if ( ! pObject )
         break;

      if ( ! pTemplateDocumentUI )
         break;

      pEntries = pTemplateDocumentUI -> pTextRects(&countEntries);

      if ( ! pEntries )
         break;

      long currentMouseX = LOWORD(lParam);
      long currentMouseY = HIWORD(lParam);

      if ( currentMouseX < pTemplateDocumentUI -> rcPageParentCoordinates.left || currentMouseX > pTemplateDocumentUI -> rcPageParentCoordinates.right || 
                  currentMouseY < pTemplateDocumentUI -> rcPageParentCoordinates.top || currentMouseY > pTemplateDocumentUI -> rcPageParentCoordinates.bottom ) {
         oldPotentialIndex = -1L;
         activePotentialIndex = -1L;
         break;
      }

      if ( wParam & MK_LBUTTON ) {

         didDrag = true;

         if ( ! pEncounteredInDrag ) {
            pEncounteredInDrag = new long[countEntries];
            for ( long k = 0; k < countEntries; k++ )
               pEncounteredInDrag[k] = -1L;
            if ( ! isAdding ) {
               countSelections = 0;
               memset(selections,0,sizeof(selections));
               memset(textSelections,0,sizeof(textSelections));
               memset(pageSelections,0,sizeof(pageSelections));
               SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
            }
         }

         HDC hdc = GetDC(hwndVellum);

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

         r.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,r.left);
         r.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,r.right);
         r.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,r.top);
         r.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,r.bottom);

         BitBlt(hdc,r.left,r.top,r.right - r.left,r.bottom - r.top,pTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);

         ReleaseDC(hwndVellum,hdc);

         lastMouseX = currentMouseX - pTemplateDocumentUI -> rcPageParentCoordinates.left;

         lastMouseY = currentMouseY - pTemplateDocumentUI -> rcPageParentCoordinates.top;

         r.left = max(pTemplateDocumentUI -> rcPDFPagePixels.left,startMouseX);
         r.top = max(pTemplateDocumentUI -> rcPDFPagePixels.top,startMouseY);
         r.right = min(pTemplateDocumentUI -> rcPDFPagePixels.right,lastMouseX);
         r.bottom = min(pTemplateDocumentUI -> rcPDFPagePixels.bottom,lastMouseY);

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

         DRAW_GREEN_BOX(&r,2);

         RECT *pEntry = pEntries;

         pTemplateDocumentUI -> convertToPoints(&r);

         for ( long k = 0; k < countEntries; k++, pEntry++ ) {
            if ( pEntry -> left < r.left || pEntry -> right > r.right || pEntry -> top > r.top || pEntry -> bottom < r.bottom ) 
               continue;
            if ( ! ( -1L == pEncounteredInDrag[k] ) )
               continue;
            pEncounteredInDrag[k] = k;
         }

         drawSelections(NULL,pTemplateDocumentUI);

         break;

      }

      activePotentialIndex = -1L;

      RECT rcMouse = {0};

      rcMouse.left = currentMouseX - pTemplateDocumentUI -> rcPageParentCoordinates.left;
      rcMouse.top = currentMouseY - pTemplateDocumentUI -> rcPageParentCoordinates.top;

      pTemplateDocumentUI -> convertToPoints(&rcMouse);

      RECT *pEntry = pEntries;

      for ( long k = 0; k < countEntries; k++ ) {

         if ( rcMouse.left < pEntry -> left || rcMouse.left > pEntry -> right ||
                  rcMouse.top > pEntry -> top || rcMouse.top < pEntry -> bottom ) {
            pEntry++;
            continue;
         }

         activePotentialIndex = k;

         break;

      }

      if ( activePotentialIndex != oldPotentialIndex && ! ( -1L == oldPotentialIndex ) ) {
         DRAW_BOX(&pEntries[oldPotentialIndex])
         oldPotentialIndex = -1L;
      }

      if ( activePotentialIndex == oldPotentialIndex )
         break;
#if 0
RECT r;
r.left = 2;
r.bottom = 2;
r.right = 612 - 2;
r.top = 792 - 2;
DRAW_BOX(&r);
#else
      DRAW_BOX(&pEntries[activePotentialIndex])
#endif

      oldPotentialIndex = activePotentialIndex;

      }
      break;

   case WM_COMMAND: {

      switch ( LOWORD(wParam) ) {
      case IDDI_CV_LOCATIONS_RESET: 
         countSelections = 0;
         memset(selections,0,sizeof(selections));
         memset(textSelections,0,sizeof(textSelections));
         memset(pageSelections,0,sizeof(pageSelections));
         SetDlgItemText(hwnd,IDDI_CV_LIMIT_REACHED,"");
         SetDlgItemText(hwnd,IDDI_CV_MORE_INFORMATION,"");
         HDC hdcTarget = GetDC(hwndVellum);
         RECT r;
         GetClientRect(hwndVellum,&r);
         BitBlt(hdcTarget,r.left,r.top,r.right - r.left,r.bottom - r.top,pTemplateDocumentUI -> pdfDC(),r.left,r.top,SRCCOPY);
         ReleaseDC(hwndVellum,hdcTarget);
         break;
      }
      break;
   }

   case WM_DESTROY: {
      pTemplateDocumentUI -> releaseView();
      pTemplateDocumentUI = NULL;
      if ( commitChanges ) {
         memcpy(pObject -> expectedRects,selections,sizeof(pObject -> expectedRects));
         memcpy(pObject -> expectedText,textSelections,sizeof(textSelections));
         memcpy(pObject -> expectedPage,pageSelections,sizeof(pageSelections));
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

      }

      }
      break;

   default:
      break;
   }
