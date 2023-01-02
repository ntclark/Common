

   LRESULT CALLBACK OBJECT_WITH_PROPERTIES::listViewHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   OBJECT_WITH_PROPERTIES *p = (OBJECT_WITH_PROPERTIES *)((resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA)) -> pParent;

   switch ( msg ) {

   case WM_PAINT: {

      long countRows = (long)SendMessage(hwnd,LVM_GETITEMCOUNT,0L,0L);

      RECT rcHeader;

      GetWindowRect((HWND)SendMessage(hwnd,LVM_GETHEADER,0L,0L),&rcHeader);

      for ( long k = 0; k < countRows; k++ ) {

         RECT rectItem;

         LVITEM lvItem = {0};
         lvItem.mask = LVIF_PARAM;
         lvItem.iItem = k;
         SendMessage(hwnd,LVM_GETITEM,(WPARAM)0L,(LPARAM)&lvItem);

         struct buttonPair *pPair = (struct buttonPair *)lvItem.lParam;

         rectItem.top = 1;
         rectItem.left = LVIR_BOUNDS;
         SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)k,(LPARAM)&rectItem);
         
         if ( rectItem.top < (rcHeader.bottom - rcHeader.top) ) {
            ShowWindow(pPair -> hwndUse,SW_HIDE);
            ShowWindow(pPair -> hwndProperties,SW_HIDE);
            ShowWindow(pPair -> hwndOrder,SW_HIDE);
            continue;
         }

         if ( pPair -> hwndProperties )
            SetWindowPos(pPair -> hwndProperties,HWND_TOP,(rectItem.left + rectItem.right)/2 - 16,(rectItem.top + rectItem.bottom)/2 - 10,0,0,SWP_NOSIZE | SWP_SHOWWINDOW);         

         rectItem.top = 2;
         rectItem.left = LVIR_BOUNDS;

         SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)k,(LPARAM)&rectItem);
         SetWindowPos(pPair -> hwndUse,HWND_TOP,(rectItem.left + rectItem.right)/2 - 16,(rectItem.top + rectItem.bottom)/2 - 10,0,0,SWP_NOSIZE | SWP_SHOWWINDOW);

         if ( ! ( hwnd == hwndTopList ) )
            continue;

         rectItem.top = 3;
         rectItem.left = LVIR_BOUNDS;
         SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)k,(LPARAM)&rectItem);

         SetWindowPos(pPair -> hwndOrder,HWND_TOP,(rectItem.left + rectItem.right)/2 - 16,(rectItem.top + rectItem.bottom)/2 - 10,0,0,SWP_NOSIZE | SWP_SHOWWINDOW);

      }

      }
      break;

   case WM_DRAWITEM: {

      DRAWITEMSTRUCT *pDWI = (DRAWITEMSTRUCT *)lParam;

      if ( ! ( ODA_DRAWENTIRE == pDWI -> itemAction ) )
         return (LRESULT)1L;

      char szDescription[256];

      memset(szDescription,0,sizeof(szDescription));

      szDescription[0] = ' ';

      HBRUSH white = CreateSolidBrush(RGB(255,255,255));

      LVITEM lvItem = {0};

      lvItem.mask = LVIF_PARAM | LVIF_TEXT;
      lvItem.iItem = pDWI -> itemID;
      lvItem.pszText = &szDescription[1];
      lvItem.cchTextMax = 255;

      SendMessage(hwnd,LVM_GETITEM,(WPARAM)0L,(LPARAM)&lvItem);
     
      buttonPair *pPair = (buttonPair *)lvItem.lParam;

      RECT rectItem[4];

      memset(rectItem,0,4 * sizeof(RECT));

      rectItem[0].top = 0;
      rectItem[0].left = LVIR_BOUNDS;
      SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)lvItem.iItem,(LPARAM)&rectItem[0]);

      rectItem[1].top = 1;
      rectItem[1].left = LVIR_BOUNDS;
      SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)lvItem.iItem,(LPARAM)&rectItem[1]);

      rectItem[2].top = 2;
      rectItem[2].left = LVIR_BOUNDS;
      SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)lvItem.iItem,(LPARAM)&rectItem[2]);
      
      if ( hwndTopList == hwnd ) {
         rectItem[3].top = 3;
         rectItem[3].left = LVIR_BOUNDS;
         SendMessage(hwnd,LVM_GETSUBITEMRECT,(WPARAM)lvItem.iItem,(LPARAM)&rectItem[3]);
      } else 
         memset(&rectItem[3],0,sizeof(RECT));

      FillRect(pDWI -> hDC,&rectItem[0],white);

      rectItem[0].right -= (rectItem[1].right - rectItem[1].left) + (rectItem[2].right - rectItem[2].left) + (rectItem[3].right - rectItem[3].left);

      DrawText(pDWI -> hDC,szDescription,(DWORD)strlen(szDescription),&rectItem[0],DT_VCENTER | DT_SINGLELINE);

      DeleteObject(white);

      }
      return (LRESULT)1L;

   case WM_NOTIFY:
      return SendMessage(p -> hwndAdditionalBackEnds,msg,wParam,lParam);

   case WM_COMMAND:
      return SendMessage(p -> hwndAdditionalBackEnds,msg,wParam,lParam);

   case WM_VSCROLL:
      InvalidateRect(hwnd,NULL,TRUE);
      break;

   default:
      break;
   }

   if ( nativeListViewHandler)                      
      return CallWindowProc(nativeListViewHandler,hwnd,msg,wParam,lParam);

   return DefWindowProc(hwnd,msg,wParam,lParam);
   }
