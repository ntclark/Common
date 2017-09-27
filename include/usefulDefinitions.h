
#define REGISTER_TOOLTIP(hInst,id) {               \
   TOOLINFO toolInfo = {0};                        \
   toolInfo.cbSize = sizeof(TOOLINFO);             \
   toolInfo.uFlags = TTF_IDISHWND | TTF_SUBCLASS;  \
   toolInfo.uId = (UINT_PTR)GetDlgItem(hwnd,(id)); \
   toolInfo.hinst = (hInst);                       \
   toolInfo.lpszText = (char *)LPSTR_TEXTCALLBACK; \
   toolInfo.hwnd = hwnd;                           \
   toolInfo.lParam = (id);                         \
   if ( toolInfo.uId )                             \
      SendMessage(hwndToolTips,TTM_ADDTOOL,0L,(LPARAM)&toolInfo);  \
}

#define PUT_BOOL(v,id)  if ( IsWindow(GetDlgItem(hwnd,id)) ) SendDlgItemMessage(hwnd,id,BM_SETCHECK,v ? BST_CHECKED : BST_UNCHECKED,0L);
#define PUT_LONG(v,id)  { if ( IsWindow(GetDlgItem(hwnd,id)) ) { char szX[32]; sprintf(szX,"%ld",v); SetDlgItemText(hwnd,id,szX); } }
#define PUT_DOUBLE(v,id)  { if ( IsWindow(GetDlgItem(hwnd,id)) ) { char szX[32]; sprintf(szX,"%5.2f",v); SetDlgItemText(hwnd,id,szX); } }
#define PUT_STRING(v,id) if ( IsWindow(GetDlgItem(hwnd,id)) ) SetDlgItemText(hwnd,id,v);
#define DEFAULT_LONG(v,def) { if ( 0 == v ) v = def; };

#define GET_BOOL(v,id)  if ( IsWindow(GetDlgItem(hwnd,id)) ) v = (BST_CHECKED == SendDlgItemMessage(hwnd,id,BM_GETCHECK,0L,0L));
#define GET_LONG(v,id) { if ( IsWindow(GetDlgItem(hwnd,id)) ) { char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atol(szX); } }
#define GET_DOUBLE(v,id) { if ( IsWindow(GetDlgItem(hwnd,id)) ) { char szX[32]; GetDlgItemText(hwnd,id,szX,32); v = atof(szX); } }
#define GET_STRING(v,id) if ( IsWindow(GetDlgItem(hwnd,id)) ) GetDlgItemText(hwnd,id,v,MAX_PATH);
