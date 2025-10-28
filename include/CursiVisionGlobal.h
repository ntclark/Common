
#pragma once

#include "directories.h"
#include "utilities.h"

#include "registrationServer.h"

#ifndef REGISTRATION_SERVER
#define REGISTRATION_SERVER "localhost"
#define REGISTRATION_SERVERW L"localhost"
#endif

#ifndef REGISTRATION_PORT
#define REGISTRATION_PORT 8080
#endif

#define UNREG_GRACE_PERIOD 14

//#define USE_GLOBAL_TEMPLATE_FOLDER

#define MAX_TEXT_RECT_COUNT   256
#define MAX_TEXT_TEXT_SPACE   8192
#define MAX_SIGS_IN_GLOBAL_TEMPLATE_IMAGE 8
#define MAX_GT_IMAGES         512

#define MAX_TOTAL_PROFILES      1024
#define MAX_PROFILES_IN_PACKAGE   32

#define MAX_IMAGE_FIELD_ALTERNATES  8

#define MAX_BACK_END_PROCESSORS   32

#define MAX_GLOBAL_TEMPLATE_PACKAGES        128
#define MAX_GLOBAL_TEMPLATE_DOCUMENTS       64

#define ROOT_GT_PACKAGE 0

#define GLOBAL_TEMPLATE_DOCUMENT_PRINT_PROFILE_NAME "Global Template Default"
#define GLOBAL_TEMPLATE_DOCUMENT_PRINT_NEW_PROFILE_NAME "<image recognition profile>"

#define MAX_DOODLE_RECT_COUNT  32

#define PROFILE_FIELD_STRINGS_SIZE 20480

#define OPENCV_MATCH_THRESH     0.9995
#define OPENCV_MATCH_MINIMUM    0.99

#define CORNER_PROXIMITY 12

#define TEMPLATE_UI_TOP_MARGIN 16

#define PDF_VIEW_MARGIN_LEFT 200

//#define SAVE_SIGNATURE_GRAPHICS 1

#define OUTLINES_PAGE_RECORD_SIZE 34
#define OUTLINES_PAGE_RECORD_FORMAT  "%05s%04ld:%04ld-%04ld%06ld-%08ld"

#define OUTLINES_ENTRY_RECORD_PREAMBLE_SIZE  24
#define OUTLINES_ENTRY_RECORD_PREAMBLE_FORMAT "%04ld,%04ld,%04ld,%04ld:%04ld"

#ifndef JENKINS_BUILD
#define MAKE_IMAGE_COMPARISONS
#endif

#ifdef BUILD_SPONSOR
#define ENGLISH_DLL "enTU.dll"
#define SPANISH_DLL "spTU.dll"
#else
#define ENGLISH_DLL "en.dll"
#define SPANISH_DLL "sp.dll"
#endif

#define IMAGE_FRAME_SIZE_PIXELS 128

#define USE_DIB_BITMAPS TRUE
//#define USE_DIB_BITMAPS FALSE

//#define DELETE_PDFIUM_BITMAPS(hbm) DeleteObject(hbm)
#define DELETE_PDFIUM_BITMAPS(hbm) 

//#define MATCH_STRATEGY_INDEX -1
#define MATCH_STRATEGY_INDEX 0

#define ENCODED_STRING_VERSION  "V_1.0.0"


    struct guidHash {
        bool operator()(const GUID &lhs) const {
            return strFromGUID((GUID &)lhs);
        }
    };

#define REGISTER_TOOLTIP(theWindow,hInst,id) {     \
   TOOLINFO toolInfo = {0};                        \
   toolInfo.cbSize = sizeof(TOOLINFO);             \
   toolInfo.uFlags = TTF_IDISHWND | TTF_SUBCLASS;  \
   toolInfo.uId = (UINT_PTR)id;                    \
   toolInfo.hinst = (hInst);                       \
   toolInfo.lpszText = (char *)LPSTR_TEXTCALLBACK; \
   toolInfo.hwnd = theWindow;                      \
   toolInfo.lParam = (LPARAM)(id);                 \
   SendMessage(hwndToolTips,TTM_ADDTOOL,0L,(LPARAM)&toolInfo);  \
   SendMessage(hwndToolTips,TTM_ACTIVATE,(WPARAM)TRUE,0L);      \
}

#define PUT_BOOL(v,id)  SendDlgItemMessage(hwnd,id,BM_SETCHECK,v ? BST_CHECKED : BST_UNCHECKED,0L);
#define PUT_LONG(v,id)  { char szX[32]; sprintf(szX,"%ld",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_DOUBLE(v,id)  { char szX[32]; sprintf(szX,"%5.3lf",v); SetDlgItemText(hwnd,id,szX); }
#define PUT_STRING(v,id) SetDlgItemText(hwnd,id,v);
#define DEFAULT_LONG(v,def) { if ( 0 == v ) v = def; };

#define GET_BOOL(v,id)  v = (BST_CHECKED == SendDlgItemMessage(hwnd,id,BM_GETCHECK,0L,0L));
#define GET_LONG(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atol(szX); }
#define GET_DOUBLE(v,id) {char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atof(szX); }
#define GET_STRING(v,id) GetDlgItemText(hwnd,id,v,MAX_PATH);
