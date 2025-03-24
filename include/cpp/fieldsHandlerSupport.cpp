
   void removeField(long foundIndex,templateDocument::tdUI *pTemplateDocumentUI) {

   static RECT keepRect[(MAX_TEXT_RECT_COUNT + 1)];
   static char keepText[32 * (MAX_TEXT_RECT_COUNT + 1)];
   static long keepLong[(MAX_TEXT_RECT_COUNT + 1)];

   long leftOver = MAX_TEXT_RECT_COUNT - foundIndex - 1;

   memcpy(keepRect,&prcSelectedFields[foundIndex + 1],   leftOver * sizeof(RECT));
   memset(&prcSelectedFields[foundIndex],0,              leftOver * sizeof(RECT));
   memcpy(&prcSelectedFields[foundIndex],keepRect,       leftOver * sizeof(RECT));

   memcpy(keepText,&pFieldLabels[(foundIndex + 1) * 32],32 * leftOver * sizeof(char));
   memset(&pFieldLabels[foundIndex * 32],0,           32 * leftOver * sizeof(char));
   memcpy(&pFieldLabels[foundIndex * 32],keepText,    32 * leftOver * sizeof(char));

   memcpy(keepLong,&pPageNumbers[foundIndex + 1],leftOver * sizeof(long));
   memset(&pPageNumbers[foundIndex],0,           leftOver * sizeof(long));
   memcpy(&pPageNumbers[foundIndex],keepLong,    leftOver * sizeof(long));

   memcpy(keepLong,&pFieldRequired[foundIndex + 1],leftOver * sizeof(long));
   memset(&pFieldRequired[foundIndex],0,           leftOver * sizeof(long));
   memcpy(&pFieldRequired[foundIndex],keepLong,    leftOver * sizeof(long));

   countSelectedFields--;

   return;
   }


   LRESULT CALLBACK labelHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   long fieldIndex = (long)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_INITDIALOG: {
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(long)lParam);
      fieldIndex = (long)lParam;

      char szTranslation[64];

      LoadString(hModuleResources,IDD_DATA_FIELDS_LABEL + 16384,szTranslation,64);
      SetDlgItemText(hwnd,IDD_DATA_FIELDS_LABEL + 16384,szTranslation);

      LoadString(hModuleResources,IDDI_FIELDS_VALUE_REQUIRED,szTranslation,64);
      SetDlgItemText(hwnd,IDDI_FIELDS_VALUE_REQUIRED,szTranslation);

      LoadString(hModuleResources,IDDI_FIELDS_LABEL_OK,szTranslation,64);
      SetDlgItemText(hwnd,IDDI_FIELDS_LABEL_OK,szTranslation);

      LoadString(hModuleResources,IDDI_FIELDS_LABEL_CANCEL,szTranslation,64);
      SetDlgItemText(hwnd,IDDI_FIELDS_LABEL_CANCEL,szTranslation);

      POINT ptlMouse;
      GetCursorPos(&ptlMouse);
      SetWindowPos(hwnd,HWND_TOP,ptlMouse.x - 64,ptlMouse.y - 32,0,0,SWP_NOSIZE);
      if ( ! ( -1L == fieldIndex ) ) {
         SetWindowText(GetDlgItem(hwnd,IDDI_FIELDS_LABEL_LABEL),&pFieldLabels[fieldIndex * 32]);
         SendMessage(GetDlgItem(hwnd,IDDI_FIELDS_VALUE_REQUIRED),BM_SETCHECK, pFieldRequired[fieldIndex] ? BST_CHECKED : BST_UNCHECKED,0L);
      }
      }
      return (LRESULT)IDDI_FIELDS_LABEL_LABEL;


   case WM_DESTROY:
      break;


   case WM_COMMAND: {

      switch ( LOWORD(wParam) ) {
      case IDDI_FIELDS_LABEL_OK: {
         GetWindowText(GetDlgItem(hwnd,IDDI_FIELDS_LABEL_LABEL),&pFieldLabels[fieldIndex * 32],32);
         pFieldRequired[fieldIndex] = (BST_CHECKED == SendMessage(GetDlgItem(hwnd,IDDI_FIELDS_VALUE_REQUIRED),BM_GETCHECK,0L,0L));
         EndDialog(hwnd,1L);
         }
         break;

      case IDDI_FIELDS_LABEL_CANCEL: {
         EndDialog(hwnd,0L);
         }
         break;

      default:
         break;

      }
      }
      break;


   default:
      break;
   }

   return LRESULT(FALSE);
   }