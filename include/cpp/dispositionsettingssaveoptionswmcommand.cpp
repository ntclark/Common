
      case IDDI_DISPOSITION_CHOOSE_SAVE_LOCATION: {

         BROWSEINFO bi;
         char file[1024];
         memset(file,0,sizeof(file));
         memset(&bi,0,sizeof(BROWSEINFO));
         bi.hwndOwner = hwnd;
         bi.pszDisplayName = file;
         bi.lpszTitle = "Open destination directory";
         bi.ulFlags = BIF_NEWDIALOGSTYLE;
         ITEMIDLIST *pPIDL = (ITEMIDLIST *)SHBrowseForFolder(&bi);

         if ( file[0] ) {

            SHGetPathFromIDList(pPIDL,file);

            SetDlgItemText(hwnd,IDDI_DISPOSITION_SAVE_LOCATION,file);

            SendMessage(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS),BM_SETCHECK, BST_UNCHECKED,0L);
            SendMessage(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_BY_ORIGINAL),BM_SETCHECK, BST_UNCHECKED,0L);
            SendMessage(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_IN),BM_SETCHECK, BST_CHECKED,0L);

            EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_LOCATION),TRUE);

         }
         }
         break;

      case IDDI_DISPOSITION_APPEND:
      case IDDI_DISPOSITION_APPEND_DATE:
      case IDDI_DISPOSITION_APPEND_TIME:
      case IDDI_DISPOSITION_SAVE:
      case IDDI_DISPOSITION_REPLACE:
      case IDDI_DISPOSITION_SEQUENCE:
      case IDDI_DISPOSITION_SAVE_MY_DOCUMENTS:
      case IDDI_DISPOSITION_SAVE_BY_ORIGINAL:
      case IDDI_DISPOSITION_SAVE_IN: {

         bool doAppend = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_APPEND,BM_GETCHECK,0L,0L);

         bool doSave = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_SAVE,BM_GETCHECK,0L,0L);

         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SUFFIX),doAppend && doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SUFFIX_LABEL),doAppend && doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND_DATE),doAppend && doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_APPEND_TIME),doAppend && doSave ? TRUE : FALSE);

         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REPLACE),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SEQUENCE),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_IN_LABEL),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_BY_ORIGINAL),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_IN),doSave ? TRUE : FALSE);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_MORE),doSave ? TRUE : FALSE);

         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_LOCATION),
                              doSave && SendDlgItemMessage(hwnd,IDDI_DISPOSITION_SAVE_IN,BM_GETCHECK,0L,0L) ? TRUE : FALSE);

         bool doShowPadImage = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_WHILE_SIGNING_SHOW_PAD,BM_GETCHECK,0L,0L);

         if ( LOWORD(wParam) == IDDI_DISPOSITION_SEQUENCE ) {

            if ( BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_SEQUENCE,BM_GETCHECK,0L,0L) ) 
               SendDlgItemMessage(hwnd,IDDI_DISPOSITION_REPLACE,BM_SETCHECK,BST_UNCHECKED,0L);

         } else if ( LOWORD(wParam) == IDDI_DISPOSITION_REPLACE ) {

            if ( BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_REPLACE,BM_GETCHECK,0L,0L) )
               SendDlgItemMessage(hwnd,IDDI_DISPOSITION_SEQUENCE,BM_SETCHECK,BST_UNCHECKED,0L);

         }

         }
         break;
