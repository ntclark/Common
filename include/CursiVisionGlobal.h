
#pragma once

#include "directories.h"
#include "utilities.h"

#define MAX_TEXT_RECT_COUNT   128
#define MAX_TEXT_TEXT_SPACE   8192
#define MAX_SIGS_IN_GLOBAL_TEMPLATE_IMAGE 8

#define MAX_BACK_END_PROCESSORS   32

#define GLOBAL_TEMPLATE_DOCUMENT_PRINT_PROFILE_NAME "Global Template Default"
#define GLOBAL_TEMPLATE_DOCUMENT_PRINT_NEW_PROFILE_NAME "<image recognition profile>"

#define MAX_DOODLE_RECT_COUNT  32

//#define OPENCV_MATCH_THRESHOLD 0.99999
//#define OPENCV_MATCH_THRESHOLD 0.9999
#define OPENCV_MATCH_THRESHOLD 0.999
//#define OPENCV_MATCH_THRESHOLD 0.99

#define CORNER_PROXIMITY 12

#define OUTLINES_PAGE_RECORD_SIZE 34
#define OUTLINES_PAGE_RECORD_FORMAT  "%05s%04ld:%04ld-%04ld%06ld-%08ld"

#define OUTLINES_ENTRY_RECORD_PREAMBLE_SIZE  24
#define OUTLINES_ENTRY_RECORD_PREAMBLE_FORMAT "%04ld,%04ld,%04ld,%04ld:%04ld"

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