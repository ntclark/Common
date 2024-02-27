

#define LOAD_CONTROLS                                             \
{                                                                 \
   PUT_BOOL(p -> saveInMonthYear,IDDI_DISPOSITION_SAVE_MONTHYEAR) \
   PUT_BOOL(p -> saveInDayMonth,IDDI_DISPOSITION_SAVE_DAYMONTH)   \
}

#define UNLOAD_CONTROLS                                          \
{                                                                \
   GET_BOOL(p -> saveInMonthYear,IDDI_DISPOSITION_SAVE_MONTHYEAR)\
   GET_BOOL(p -> saveInDayMonth,IDDI_DISPOSITION_SAVE_DAYMONTH)  \
}

   LRESULT CALLBACK OBJECT_WITH_PROPERTIES::additionalSaveOptionsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   switch ( msg ) {

   case WM_INITDIALOG: {

      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);

      p = (resultDisposition *)pPage -> lParam;

      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);

      OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

      pObject -> PushProperties();
      pObject -> PushProperties();

      LOAD_CONTROLS

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);

   case WM_COMMAND: {
      }
      break;


   case WM_NOTIFY: {

      NMHDR *pNotifyHeader = (NMHDR *)lParam;

      switch ( pNotifyHeader -> code ) {

      case PSN_SETACTIVE: {
         }
         break;

      case PSN_KILLACTIVE: {
         SetWindowLongPtr(pNotifyHeader -> hwndFrom,DWLP_MSGRESULT,FALSE);
         }
         break;

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

         if ( pNotify -> lParam ) {
            UNLOAD_CONTROLS
         }

         SetWindowLongPtr(pNotifyHeader -> hwndFrom,DWLP_MSGRESULT,PSNRET_NOERROR);
         }
         break;

      case PSN_RESET: {
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
