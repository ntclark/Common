
#define PUT_BOOL(v,id)  SendDlgItemMessage(hwnd,id,BM_SETCHECK,v ? BST_CHECKED : BST_UNCHECKED,0L);
#define PUT_LONG(v,id)  { char szX[32]; sprintf(szX,"%ld",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_DOUBLE(v,id)  { char szX[32]; sprintf(szX,"%5.3lf",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_STRING(v,id) SetDlgItemText(hwnd,id,v);

#define GET_BOOL(v,id)  v = (BST_CHECKED == SendDlgItemMessage(hwnd,id,BM_GETCHECK,0L,0L));
#define GET_LONG(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atol(szX); }
#define GET_DOUBLE(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atof(szX); }
#define GET_STRING(v,id) GetDlgItemText(hwnd,id,v,MAX_PATH);

#define LOAD_CONTROLS                                                         \
{                                                                             \
   PUT_DOUBLE(p -> signMotionRight,IDDI_DISPOSITION_MULTI_SIGN_RIGHT_MOTION)  \
   PUT_DOUBLE(p -> signMotionDown,IDDI_DISPOSITION_MULTI_SIGN_DOWN_MOTION)    \
   PUT_LONG(p -> maximumSignatures,IDDI_DISPOSITION_SAVE_AFTER_SIGN_COUNT)    \
}

#define UNLOAD_CONTROLS                                                       \
{                                                                             \
   GET_DOUBLE(p -> signMotionRight,IDDI_DISPOSITION_MULTI_SIGN_RIGHT_MOTION)  \
   GET_DOUBLE(p -> signMotionDown,IDDI_DISPOSITION_MULTI_SIGN_DOWN_MOTION)    \
   GET_LONG(p -> maximumSignatures,IDDI_DISPOSITION_SAVE_AFTER_SIGN_COUNT)    \
}

   LRESULT CALLBACK OBJECT_WITH_PROPERTIES::multiSignOptionsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_INITDIALOG: {

      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);

      p = (resultDisposition *)pPage -> lParam;

      SetWindowLongPtr(hwnd,GWLP_USERDATA,(long)p);

      HWND hwndSpinner = CreateWindowEx(0L,UPDOWN_CLASS,"",WS_CHILD | WS_VISIBLE | UDS_SETBUDDYINT,0,0,20,24,hwnd,(HMENU)IDDI_DISPOSITION_SAVE_AFTER_SIGN_COUNT_SPINNER,NULL,NULL);

      RECT rcOwner,rcParent;
      GetWindowRect(hwnd,&rcParent);
      GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_AFTER_SIGN_COUNT),&rcOwner);
      rcOwner.left -= rcParent.left;
      rcOwner.right -= rcParent.left;
      rcOwner.top -= rcParent.top;  
      rcOwner.bottom -= rcParent.top;
      SetWindowPos(hwndSpinner,HWND_TOP,rcOwner.left + rcOwner.right - rcOwner.left,rcOwner.top - 2,0,0,SWP_NOSIZE);

      SendMessage(hwndSpinner,UDM_SETBUDDY,(WPARAM)GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_AFTER_SIGN_COUNT),0L);
      SendMessage(hwndSpinner,UDM_SETRANGE,0L,MAKELONG((short)UD_MAXVAL,(short)1));

      LOAD_CONTROLS

      OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

#ifndef IS_CURSIVISION_CONTROL_HANDLER
      pObject -> PushProperties();
      pObject -> PushProperties();
#endif

      }
      return (LRESULT)FALSE;

   case WM_SIZE: {
      }
      break;

   case WM_NOTIFY: {

      OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

      NMHDR *pNotifyHeader = (NMHDR *)lParam;

      switch ( pNotifyHeader -> code ) {

      case PSN_SETACTIVE: {
         }
         break;

      case PSN_KILLACTIVE: {

#ifndef IS_CURSIVISION_CONTROL_HANDLER
         UNLOAD_CONTROLS
#endif

         SetWindowLongPtr(hwnd,DWLP_MSGRESULT,FALSE);

         }
         break;

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         if ( pNotify -> lParam ) {

            UNLOAD_CONTROLS

#ifndef IS_CURSIVISION_CONTROL_HANDLER
            pObject -> SaveProperties();
            pObject -> DiscardProperties();
            pObject -> DiscardProperties();
#endif
         } else {
#ifndef IS_CURSIVISION_CONTROL_HANDLER
            pObject -> DiscardProperties();
            pObject -> PushProperties();
#endif
         }

         SetWindowLongPtr(hwnd,DWLP_MSGRESULT,PSNRET_NOERROR);

         return (LRESULT)TRUE;
         }
         break;

      case PSN_RESET: {
#ifndef IS_CURSIVISION_CONTROL_HANDLER
         pObject -> PopProperties();
         pObject -> PopProperties();
#endif
         }
         break;

      }

      }
      break;

   default:
      break;
   }

   return LRESULT(FALSE);
   }
