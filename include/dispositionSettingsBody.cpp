// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

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

      if ( ! p -> isGlobalDisposition ) {
         SetDlgItemText(hwnd,IDDI_HEADER_TEXT,"When CursiVision saves this document it should:");
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPLAY_WAITING_SHOW));
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_LABEL));
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_OFF));
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_CONTINUOUS_DOODLE_ON));
         DestroyWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_REMEMBER));
      } else
         SetDlgItemText(hwnd,IDDI_HEADER_TEXT,"When CursiVision processes a document it should:");

      LOAD_CONTROLS

#ifdef LOAD_ADDITIONAL
      LOAD_ADDITIONAL
#endif

      EnableWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_SAVE_MY_DOCUMENTS),p -> doSave ? TRUE : FALSE);

      RECT rcBottom;

      GetWindowRect(GetDlgItem(hwnd,IDDI_DISPOSITION_SHOW_PROPERTIES),&rcBottom);

#ifdef REGISTER_TOOLTIPS

      hwndToolTips = CreateWindowEx(NULL, TOOLTIPS_CLASS, NULL,WS_POPUP | TTS_NOPREFIX | TTS_ALWAYSTIP | TTS_BALLOON,CW_USEDEFAULT, CW_USEDEFAULT,
                                          CW_USEDEFAULT,CW_USEDEFAULT,hwnd,NULL,hModule,NULL);

#ifndef _DEBUG
      SetWindowPos(hwndToolTips, HWND_TOPMOST,0, 0, 100, 100,SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
#endif

      SendMessage(hwndToolTips,TTM_ACTIVATE,(WPARAM)TRUE,0L);

      SendMessage(hwndToolTips,TTM_SETDELAYTIME,(WPARAM)TTDT_AUTOPOP,MAKELONG(5000,0));

      REGISTER_TOOLTIPS(hModule)

#ifdef REGISTER_TOOLTIPS_ADDITIONAL
      REGISTER_TOOLTIPS_ADDITIONAL(hModule)
#endif

#endif

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);

#ifdef OBJECT_WITH_PROPERTIES

   case WM_DESTROY: {

#ifdef IS_CURSIVISION_CONTROL_HANDLER

      if ( pKeep ) {
         memcpy(pObject -> pOleObjectProperties,pKeep,pObject -> oleObjectPropertiesSize);
         delete [] pKeep;
      }

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

      case PSN_KILLACTIVE: {

#ifdef IS_CURSIVISION_CONTROL_HANDLER
#else
         UNLOAD_CONTROLS
#endif

         SetWindowLongPtr(hwnd,DWLP_MSGRESULT,FALSE);
         }
         break;

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         if ( pNotify -> lParam ) {

#ifdef IS_CURSIVISION_CONTROL_HANDLER
            if ( pKeep )
               delete [] pKeep;
            pKeep = NULL;
#endif

            UNLOAD_CONTROLS

#ifdef UNLOAD_ADDITIONAL
            UNLOAD_ADDITIONAL
#endif

#ifdef IS_CURSIVISION_CONTROL_HANDLER
#else

            pObject -> SaveProperties();
            pObject -> DiscardProperties();
            pObject -> DiscardProperties();

#endif

         } else {

#ifdef IS_CURSIVISION_CONTROL_HANDLER
#else
            pObject -> DiscardProperties();
            pObject -> PushProperties();
#endif

         }

         SetWindowLongPtr(hwnd,DWLP_MSGRESULT,PSNRET_NOERROR);

         return (LRESULT)TRUE;
         }
         break;

#ifndef IS_CURSIVISION_CONTROL_HANDLER
      case PSN_RESET: {
         pObject -> PopProperties();
         pObject -> PopProperties();
         }
         break;
#endif

#ifdef REGISTER_TOOLTIPS
      case TTN_GETDISPINFO: {
         NMTTDISPINFO *pToolTipDispInfo;
         pToolTipDispInfo = (LPNMTTDISPINFO)pNotifyHeader;
         pToolTipDispInfo -> lpszText = szCurrentToolTipText;
         HFONT hFont = (HFONT)SendMessage(hwndToolTips,WM_GETFONT,0L,0L);
         LOGFONT fontInfo;
         GetObject(hFont,sizeof(LOGFONT),&fontInfo);
         LoadString(hModule,(UINT)pToolTipDispInfo -> lParam,szCurrentToolTipText,1024);
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
