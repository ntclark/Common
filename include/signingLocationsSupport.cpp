// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

   static void drawSigningAreas(HDC hdc,templateDocument::tdUI *pDocument) {

   if ( ! pDocument -> isDocumentRendered() )
      return;

   bool wasSupplied = true;

   if ( NULL == hdc ) {
      wasSupplied = false;
      hdc = GetDC(pDocument -> hwndPane);
   }

   HPEN hPen = CreatePen(PS_SOLID,1,RGB(0,0,0));
   HGDIOBJ oldPen = SelectObject(hdc,hPen);

   HFONT hGUIFont = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
   HGDIOBJ oldFont = SelectObject(hdc,hGUIFont);

   struct writingLocation *pLocation = pCurrentLocations;
   
   if ( 0 == rectShiftX && 0 == rectShiftY ) {
      memset(visibleRects,0,sizeof(visibleRects));
      memset(visibleRectIndexes,0,sizeof(visibleRectIndexes));
      memset(inverseVisibleRectIndexes,0,sizeof(inverseVisibleRectIndexes));
   }

   long vrIndex = 0L;
   long allRectIndex = -1L;

   for ( long k = 0; k < entryCountRects; k++, pLocation++ ) {

      allRectIndex++;

      if ( k == rectIgnoreIndex || pDocument -> currentPageNumber != pLocation -> zzpdfPageNumber ) 
         continue;

      RECT r;

      memcpy(&r,&pLocation -> documentRect,sizeof(RECT));

      pDocument -> convertToPanePixels(pDocument -> currentPageNumber,&r);

      RECT rcText;

      if ( rectShiftX || rectShiftY ) {

         r.left += rectShiftX;
         r.right += rectShiftX;
         r.top += rectShiftY;
         r.bottom += rectShiftY;

         DRAW_BOX_NOCLIP(pDocument,PS_SOLID,&pLocation -> documentRect,2)

         memcpy(&rcText,&r,sizeof(RECT));

      } else {

         DRAW_BOX(pDocument,PS_SOLID,&pLocation -> documentRect,2)

         rcText.left = max(pDocument -> rcPDFPagePixels.left,r.left);
         rcText.right = min(pDocument -> rcPDFPagePixels.right,r.right);
         rcText.top = max(pDocument -> rcPDFPagePixels.top,r.top);
         rcText.bottom = min(pDocument -> rcPDFPagePixels.bottom,r.bottom);

         memcpy(&visibleRects[vrIndex],&pLocation -> documentRect,sizeof(RECT));
         visibleRectIndexes[vrIndex] = allRectIndex;
         inverseVisibleRectIndexes[allRectIndex] = vrIndex;

         vrIndex++;

      }

      char szIndex[64];

      sprintf(szIndex,"Page %ld - %ld",pDocument -> currentPageNumber,allRectIndex + 1);

      DrawTextEx(hdc,szIndex,(int)strlen(szIndex),&rcText,DT_CENTER | DT_VCENTER | DT_SINGLELINE,NULL);

   }

   DeleteObject(SelectObject(hdc,oldPen));
   SelectObject(hdc,oldFont);

   if ( ! wasSupplied )
      ReleaseDC(pDocument -> hwndVellum,hdc);

   return;
   }


   static LRESULT CALLBACK signingLocationsOrderHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   switch ( msg ) {

   case WM_INITDIALOG: {

      RECT rcEntry,rcParent;

      GetWindowRect(hwnd,&rcParent);

      GetWindowRect(GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_ORDER),&rcEntry);

      HWND hwndSpinner = CreateWindowEx(0L,UPDOWN_CLASS,"",WS_CHILD | WS_VISIBLE | UDS_SETBUDDYINT,rcEntry.right - rcParent.left - 2,rcEntry.top - rcParent.top - 4 - GetSystemMetrics(SM_CYCAPTION),20,rcEntry.bottom - rcEntry.top,hwnd,(HMENU)IDDI_SIGNING_LOCATIONS_ORDER_SPIN,NULL,NULL);

      SendMessage(hwndSpinner,UDM_SETBUDDY,(WPARAM)GetDlgItem(hwnd,IDDI_SIGNING_LOCATIONS_ORDER),0L);
      SendMessage(hwndSpinner,UDM_SETRANGE,0L,MAKELONG((short)entryCountRects,(short)1));

      char szTemp[MAX_PATH];
      sprintf(szTemp,"The current order of this signature is: %ld",candidateRectIndex + 1);

      SetDlgItemText(hwnd,IDDI_SIGNING_LOCATIONS_ORDER_LABEL,szTemp);

      sprintf(szTemp,"%ld",candidateRectIndex + 1);
      SetDlgItemText(hwnd,IDDI_SIGNING_LOCATIONS_ORDER,szTemp);

      POINT ptl;
      GetCursorPos(&ptl);
   
      SetWindowPos(hwnd,HWND_TOP,ptl.x + 32,ptl.y - 32,0,0,SWP_NOSIZE);

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
