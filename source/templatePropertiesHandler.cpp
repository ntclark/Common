// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

//
//NTC: 02-14-12. This is starting out as a property page for the control. In the future it
// may be implemented into the CursiVision executable. Therefore, it is stored in the parent 
// of the Control only's sources.
//
/*
                       Copyright (c) 2009,2010,2011,2012,2013,2014 Nathan T. Clark
*/

#include "CursiVision.h"

#include "dispositionSettingsDefines.h"

#include "templateDocument.h"

   static HWND hwndToolTips = NULL;
   static char szCurrentToolTipText[1024];
   static bool controlsLoaded = false;

   static templateDocument::tdUI *pTemplateDocumentUI = NULL;

   LRESULT CALLBACK CursiVision::_IOleObject::templateHandlerISpecifyPropertyPageImplementation(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {
   if ( WM_INITDIALOG == msg ) {
      PROPSHEETPAGE propSheetPage = {0};
      propSheetPage.lParam = lParam;
      return templateHandler(hwnd,msg,wParam,(long)&propSheetPage);
   }
   return templateHandler(hwnd,msg,wParam,lParam);
   }

   LRESULT CALLBACK CursiVision::_IOleObject::templateHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

   _IOleObject *pObject = NULL;
   if ( p )
      pObject = (_IOleObject *)p -> pParent;

   switch ( msg ) {

   case WM_INITDIALOG: {
      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);
      p = (resultDisposition *)pPage -> lParam;
      pObject = (_IOleObject *)p -> pParent;
      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);
      pTemplateDocumentUI = pObject -> pTemplateDocument -> createView(hwnd,32,64);
      SetWindowText(GetDlgItem(hwnd,IDDI_CV_CONTROL_TEMPLATE),pObject -> pTemplateDocument -> pszDocumentName);
      controlsLoaded = true;
      }

      return LRESULT(FALSE);

   case WM_DESTROY: {
      pTemplateDocumentUI -> releaseView();
      pTemplateDocumentUI = NULL;
      controlsLoaded = false;
      }
      break;

   case WM_COMMAND: {

      if ( ! controlsLoaded )
         break;

      switch ( LOWORD(wParam) ) {

      case IDDI_CV_CONTROL_TEMPLATE: {

         if (  ! ( EN_CHANGE == HIWORD(wParam) ) )
            break;

         char szTemp[MAX_PATH];
         GetDlgItemText(hwnd,IDDI_CV_CONTROL_TEMPLATE,szTemp,MAX_PATH);

         if ( ! szTemp[0] )
            pObject -> pTemplateDocument -> closeDocument();
         else {
            FILE *fX = fopen(szTemp,"rb");
            if ( ! fX )
               break;
            fclose(fX);
            pObject -> pTemplateDocument -> openDocument(szTemp);
         }

         }
         break;

      case IDDI_CV_CONTROL_TEMPLATE_GET: {

         if ( ! pObject )
            break;

         OPENFILENAME openFileName = {0};
                  
         char szFilter[MAX_PATH],szFile[MAX_PATH];
                     
         memset(szFilter,0,sizeof(szFilter));
         memset(szFile,0,sizeof(szFile));
                     
         sprintf(szFilter,"PDF Documents");
         long k = strlen(szFilter) + sprintf(szFilter + strlen(szFilter) + 1,"*.pdf");
         k = k + sprintf(szFilter + k + 2,"All Files");
         sprintf(szFilter + k + 3,"*.*");
                     
         openFileName.lStructSize = sizeof(OPENFILENAME);
         openFileName.hwndOwner = hwnd;
         openFileName.Flags = OFN_FILEMUSTEXIST | OFN_NOCHANGEDIR | OFN_PATHMUSTEXIST;
         openFileName.lpstrFilter = szFilter;
         openFileName.lpstrFile = szFile;
         openFileName.lpstrDefExt = "pdf";
         openFileName.nFilterIndex = 1;
         openFileName.nMaxFile = MAX_PATH;
         openFileName.lpstrTitle = "Select the existing pdf file";
                  
         if ( ! GetOpenFileName(&openFileName) ) 
            break;

         SetWindowText(GetDlgItem(hwnd,IDDI_CV_CONTROL_TEMPLATE),openFileName.lpstrFile);

         }
         break;

      }

      }
      break;

   case WM_SIZE: 
      if ( ! pObject )
         break;
      pTemplateDocumentUI -> size();
      break;

   case WM_NOTIFY: {

      NMHDR *pNotifyHeader = (NMHDR *)lParam;

      switch ( pNotifyHeader -> code ) {

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         if ( pNotify -> lParam )
            GetWindowText(GetDlgItem(hwnd,IDDI_CV_CONTROL_TEMPLATE),pObject -> pTemplateDocument -> pszDocumentName,MAX_PATH);

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

   return LRESULT(FALSE);
   }