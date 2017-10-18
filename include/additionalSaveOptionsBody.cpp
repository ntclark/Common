// Copyright 2017 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#define PUT_BOOL(v,id)  SendDlgItemMessage(hwnd,id,BM_SETCHECK,v ? BST_CHECKED : BST_UNCHECKED,0L);
#define PUT_LONG(v,id)  { char szX[32]; sprintf(szX,"%ld",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_DOUBLE(v,id)  { char szX[32]; sprintf(szX,"%5.3lf",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_STRING(v,id) SetDlgItemText(hwnd,id,v);

#define GET_BOOL(v,id)  v = (BST_CHECKED == SendDlgItemMessage(hwnd,id,BM_GETCHECK,0L,0L));
#define GET_LONG(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atol(szX); }
#define GET_DOUBLE(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atof(szX); }
#define GET_STRING(v,id) GetDlgItemText(hwnd,id,v,MAX_PATH);

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

#ifndef IS_CURSIVISION_CONTROL_HANDLER
#ifndef CURSIVISION_CONTROL_BUILD
      pObject -> PushProperties();
      pObject -> PushProperties();
#endif
#endif

      LOAD_CONTROLS

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
