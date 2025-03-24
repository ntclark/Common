
   static long controlsLoaded = 0L;
   static HWND hwndToolTips = NULL;
   static char szCurrentToolTipText[1024];

   OBJECT_WITH_PROPERTIES *pObject = NULL;
   if ( p )
      pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

   switch ( msg ) {

   case WM_INITDIALOG: {

      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);

      p = (resultDisposition *)pPage -> lParam;

      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);

      pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

      pObject -> PushProperties();
      pObject -> PushProperties();

      long currentStyle = (long)GetWindowLongPtr(hwnd,GWL_STYLE);
      currentStyle &= ~ DS_CONTEXTHELP ;
      SetWindowLongPtr(hwnd,GWL_STYLE,currentStyle);

      controlsLoaded = 0L;

      char szLocalMyDocumentsDirectory[MAX_PATH];
      char szTemp[1024];

      memset(szLocalMyDocumentsDirectory,0,sizeof(szLocalMyDocumentsDirectory));

      GetDocumentsLocation(NULL,szLocalMyDocumentsDirectory);

      sprintf(szTemp,"%s\\%s",szLocalMyDocumentsDirectory,"My Signed Documents");

      strcpy(szLocalMyDocumentsDirectory,szTemp);

      if ( p -> szFileStorageDirectory[0] && 0 == strncmp(szLocalMyDocumentsDirectory,p -> szFileStorageDirectory,min(strlen(szLocalMyDocumentsDirectory),strlen(p -> szFileStorageDirectory))) ) {
         p -> saveMyDocuments = true;
         p -> saveIn = false;
      }

      if ( NULL == hwndToolTips )
         hwndToolTips = CreateWindowEx(NULL, TOOLTIPS_CLASS, NULL,WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP | TTS_BALLOON,CW_USEDEFAULT, CW_USEDEFAULT,
                                                   CW_USEDEFAULT,CW_USEDEFAULT,hwnd,NULL,hModule,NULL);

      long idToolTips[] = {
            IDDI_DISPOSITION_APPEND,IDDI_DISPOSITION_SAVE,IDDI_DISPOSITION_REPLACE,IDDI_DISPOSITION_SEQUENCE,
            IDDI_DISPOSITION_SAVE_MY_DOCUMENTS,IDDI_DISPOSITION_SAVE_BY_ORIGINAL,IDDI_DISPOSITION_SAVE_IN,
            IDDI_DISPOSITION_STAGE_DEFAULTS,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES,IDDI_DISPOSITION_OPEN_LAST_DOCUMENT,
            IDDI_DISPLAY_WAITING_SHOW,IDDI_DISPOSITION_RETAIN_SIGNED,IDDI_DISPOSITION_REOPEN_ORIGINAL,IDDI_DISPOSITION_CLOSE_DOCUMENT,
            IDDI_DISPOSITION_KEEP_RUNNING_AND_AWAIT_JOB,IDDI_DISPOSITION_EXIT,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF,
            IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,IDDI_DISPOSITION_REMEMBER,IDDI_DISPOSITION_MORE,IDDI_DISPOSITION_POST_PROCESSING_LABEL,
            IDDI_DISPOSITION_RESET_LABEL,IDDI_DISPOSITION_RESET_LABEL_SPECIFIC_DOC,IDDI_DISPOSITION_SUFFIX,
            IDDI_DISPOSITION_APPEND_DATE,IDDI_DISPOSITION_APPEND_TIME,IDDI_DISPOSITION_SHOW_PROPERTIES,
            IDDI_DISPOSITION_AWAIT_JOB_MINIMIZE,IDDI_DISPOSITION_SAVE_LOCATION};

      for ( long k = 0; k < sizeof(idToolTips) / sizeof(long); k++ ) 
         REGISTER_TOOLTIP(hwnd,hModuleResources,GetDlgItem(hwnd,idToolTips[k]))

      if ( ! p -> isGlobalDisposition ) {

         LoadString(hModuleResources,IDDI_HEADER_TEXT_A,szTemp,128);
         SetDlgItemText(hwnd,IDDI_HEADER_TEXT,szTemp);

#ifdef CURSIVISION_SERVICES_INTERFACE
         RECT rcText,rcDialog,rcLast;
         GetWindowRect(hwnd,&rcDialog);
         LoadString(hModuleResources,IDDI_DISPOSITION_RESET_LABEL,szTemp,1024);
         SetWindowText(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET_LABEL),szTemp);
         if ( FALSE == CURSIVISION_SERVICES_INTERFACE -> MayShowDispositionSettings() ) {
            LoadString(hModuleResources,IDDI_DISPOSITION_POST_PROCESSING_LABEL,szTemp,1024);
            SetWindowText(GetDlgItem(hwnd,IDDI_DISPOSITION_POST_PROCESSING_LABEL),szTemp);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_POST_PROCESSING_LABEL),HWND_TOP,rcText.left - rcDialog.left,rcText.bottom - rcDialog.top + 20,rcDialog.right - rcDialog.left - 64,48,0L);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_POST_PROCESSING_LABEL),&rcText);
         } else {
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_AWAIT_JOB_MINIMIZE),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_EXIT),HWND_TOP,rcText.left - rcDialog.left,rcText.top - rcDialog.top,0,0,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_POST_PROCESSING_LABEL),HWND_TOP,rcText.left - rcDialog.left,rcText.top - rcDialog.top + 4,0L,0L,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_POST_PROCESSING_LABEL),&rcLast);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_RETAIN_SIGNED),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_RETAIN_SIGNED),HWND_TOP,rcText.left - rcDialog.left,rcLast.bottom - rcDialog.top + 2,0,0,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_RETAIN_SIGNED),&rcLast);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_REOPEN_ORIGINAL),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_REOPEN_ORIGINAL),HWND_TOP,rcText.left - rcDialog.left,rcLast.bottom - rcDialog.top + 2,0,0,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_REOPEN_ORIGINAL),&rcLast);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_CLOSE_DOCUMENT),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_CLOSE_DOCUMENT),HWND_TOP,rcText.left - rcDialog.left,rcLast.bottom - rcDialog.top + 2,0,0,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_CLOSE_DOCUMENT),&rcLast);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_EXIT),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_EXIT),HWND_TOP,rcText.left - rcDialog.left,rcLast.bottom - rcDialog.top + 2,0,0,SWP_NOSIZE);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_EXIT),&rcLast);
            GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET),&rcText);
            SetWindowPos(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET),HWND_TOP,rcText.left - rcDialog.left,rcLast.bottom - rcDialog.top + 8,0,0,SWP_NOSIZE);
         }
#else
         LoadString(hModuleResources,IDDI_DISPOSITION_RESET_LABEL_SPECIFIC_DOC,szTemp,1024);
         SetWindowText(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET_LABEL),szTemp);
#endif

         long otherIDs[] = {IDDI_DISPOSITION_POST_PROCESSING_LABEL,IDDI_DISPOSITION_RETAIN_SIGNED,IDDI_DISPOSITION_REOPEN_ORIGINAL,
                             IDDI_DISPOSITION_CLOSE_DOCUMENT,IDDI_DISPOSITION_KEEP_RUNNING_AND_AWAIT_JOB,IDDI_DISPOSITION_AWAIT_JOB_CLOSE,IDDI_DISPOSITION_AWAIT_JOB_MINIMIZE,IDDI_DISPOSITION_EXIT};

         for ( long k = 0; k < sizeof(otherIDs) / sizeof(long); k++ ) 
            if ( ! ( NULL == GetDlgItem(hwnd,otherIDs[k]) ) )
                DestroyWindow(GetDlgItem(hwnd,otherIDs[k]));

         long moreOtherIDs[] = {IDDI_DISPOSITION_CONTINUOUS_DOODLE_LABEL,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,
                                    IDDI_DISPOSITION_REMEMBER,IDDI_DISPLAY_WAITING_SHOW,IDDI_SIGNATURE_REPLICATION_LABEL,IDDI_SIGNATURE_REPLICATION_ALLOW,
                                    IDDI_SIGNATURE_REPLICATION_DISALLOW,IDDI_SIGNATURE_REPLICATION_DEFAULT_YES,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES_LABEL,
                                    IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES,IDDI_DISPOSITION_OPEN_LAST_DOCUMENT,IDDI_DISPOSITION_USE_LARGEST_VERTICAL_RES};

         for ( long k = 0; k < sizeof(moreOtherIDs) / sizeof(long); k++ ) 
            if ( ! ( NULL == GetDlgItem(hwnd,moreOtherIDs[k]) ) )
                DestroyWindow(GetDlgItem(hwnd,moreOtherIDs[k]));


#ifndef DEFAULT_RESULT_DISPOSITION_PTR
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET));
#endif

      } else {
         LoadString(hModuleResources,IDDI_HEADER_TEXT_B,szTemp,128);
         SetDlgItemText(hwnd,IDDI_HEADER_TEXT,szTemp);

         LoadString(hModuleResources,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES_LABEL,szTemp,256);
         SetDlgItemText(hwnd,IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES_LABEL,szTemp);

         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_RESET));

         LoadString(hModuleResources,IDDI_DISPLAY_WAITING_SHOW_LABEL,szTemp,256);
         SetDlgItemText(hwnd,IDDI_DISPLAY_WAITING_SHOW,szTemp);
      }

      LOAD_CONTROLS

#ifdef LOAD_ADDITIONAL
      LOAD_ADDITIONAL
#endif

      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS),p -> doSave ? TRUE : FALSE);

      RECT rcBottom;

      GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_SHOW_PROPERTIES),&rcBottom);

      ShowWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_STAGE_DEFAULTS),SW_HIDE);

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      long resourceIds[] = {
            IDDI_DISPOSITION_APPEND,
            IDDI_DISPOSITION_SUFFIX_LABEL,
            IDDI_DISPOSITION_APPEND_DATE,
            IDDI_DISPOSITION_APPEND_TIME,
            IDDI_DISPOSITION_SAVE,
            IDDI_DISPOSITION_REPLACE,
            IDDI_DISPOSITION_SEQUENCE,
            IDDI_DISPOSITION_MORE,
            IDDI_DISPOSITION_SAVE_IN_LABEL,
            IDDI_DISPOSITION_SAVE_MY_DOCUMENTS,
            IDDI_DISPOSITION_SAVE_BY_ORIGINAL,
            IDDI_DISPOSITION_SAVE_IN,
            IDDI_DISPOSITION_RESET ,
            IDDI_DISPOSITION_RESET_LABEL,
            IDDI_DISPOSITION_POST_PROCESSING_LABEL,
            IDDI_DISPOSITION_RETAIN_SIGNED,
            IDDI_DISPOSITION_REOPEN_ORIGINAL,
            IDDI_DISPOSITION_CLOSE_DOCUMENT,
            IDDI_DISPOSITION_KEEP_RUNNING_AND_AWAIT_JOB,
            IDDI_DISPOSITION_AWAIT_JOB_CLOSE,
            IDDI_DISPOSITION_AWAIT_JOB_MINIMIZE,
            IDDI_DISPOSITION_EXIT,
            IDDI_DISPOSITION_CONTINUOUS_DOODLE_LABEL,
            IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF,
            IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON,
            IDDI_DISPOSITION_REMEMBER,
            IDDI_DISPLAY_WAITING_SHOW,
            IDDI_SIGNATURE_REPLICATION_LABEL,
            IDDI_SIGNATURE_REPLICATION_ALLOW,
            IDDI_SIGNATURE_REPLICATION_DISALLOW,
            IDDI_SIGNATURE_REPLICATION_DEFAULT_YES,
            IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES_LABEL,
            IDDI_DISPOSITION_SHOW_STARTUP_PROPERTIES,
            IDDI_DISPOSITION_OPEN_LAST_DOCUMENT,
            IDDI_DISPOSITION_USE_LARGEST_VERTICAL_RES,
            IDDI_DISPOSITION_STAGE_DEFAULTS
      };

      char szString[256];
      for ( long k = 0; k < sizeof(resourceIds) / sizeof(long); k++ ) {
         LoadString(hModuleResources,resourceIds[k],szString,256);
         SetDlgItemText(hwnd,resourceIds[k],szString);
      }

      }
      return LRESULT(FALSE);

#ifdef OBJECT_WITH_PROPERTIES
   case WM_DESTROY: {
#ifdef ADDITIONAL_DESTROY  
       ADDITIONAL_DESTROY
#endif
      }
      break;
#endif

   case WM_COMMAND: {

      switch ( LOWORD(wParam) ) {

#ifdef ADDITIONAL_COMMAND
      ADDITIONAL_COMMAND
#endif

#include "dispositionSettingsSaveOptionsWMCommand.cpp"

#include "dispositionSettingsSaveMoreOptionWMCommand.cpp"

      case IDDI_DISPOSITION_PRINT:
         p -> doPrint = BST_CHECKED == SendDlgItemMessage(hwnd,IDDI_DISPOSITION_PRINT,BM_GETCHECK,0L,0L);
         EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_PRINTER),p -> doPrint ? TRUE : FALSE);
         break;

      default:
         break;
      }

      }
      break;

   case WM_USER + 1: {
      controlsLoaded = 1L;
      }
      break;

   case WM_NOTIFY: {

      NMHDR *pNotifyHeader = (NMHDR *)lParam;

      switch ( pNotifyHeader -> code ) {

      case PSN_SETACTIVE: {
         PostMessage(hwnd,WM_USER + 1,0L,0L);
         }
         break;

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         if ( pNotify -> lParam && ! needsAdmin ) {

            UNLOAD_CONTROLS

#ifdef UNLOAD_ADDITIONAL
            UNLOAD_ADDITIONAL
#endif

            pObject -> SaveProperties();
            pObject -> DiscardProperties();
            pObject -> DiscardProperties();

         } else {
            pObject -> DiscardProperties();
            pObject -> PushProperties();
         }

         SetWindowLongPtr(hwnd,DWLP_MSGRESULT,PSNRET_NOERROR);

         return (LRESULT)TRUE;
         }
         break;

      case PSN_RESET: {
         pObject -> PopProperties();
         pObject -> PopProperties();
         }
         break;

      case TTN_GETDISPINFO: {

         NMTTDISPINFO *pInfo = (NMTTDISPINFO *)lParam;

         if ( ( (HWND)pInfo -> lParam == hwnd ) ) 
            return (LRESULT)FALSE;

         long controlId = (long)GetWindowLongPtr((HWND)pInfo -> lParam,GWLP_ID);
         LoadString(hModuleResources,controlId + 8192,szCurrentToolTipText,1024);
         pInfo -> lpszText = szCurrentToolTipText;

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
