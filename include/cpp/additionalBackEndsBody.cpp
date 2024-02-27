
   switch ( msg ) {

   case WM_INITDIALOG: {

      PROPSHEETPAGE *pPage = reinterpret_cast<PROPSHEETPAGE *>(lParam);

      p = (resultDisposition *)pPage -> lParam;

      SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)p);

      OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

      pObject -> PushProperties();
      pObject -> PushProperties();

      pObject -> hwndAdditionalBackEnds = hwnd;

      if ( 0 == strlen(PARENT_OBJECT_PREFERRED_SETTINGS_FILE_NAME) ) {
         SetWindowText(GetDlgItem(hwnd,IDDI_BACKENDS_TOP_LIST_LABEL),"Use these tools for documents not yet defined to the system.\rOperation is in top to bottom order.");
         SetWindowText(GetDlgItem(hwnd,IDDI_BACKENDS_BOTTOM_LIST_LABEL),"To change the default settings for each tool, click it's properties button.\rThis will not change settings for documents currently using the tool.");
      }

      hwndTopList = GetDlgItem(hwnd,IDDI_BACKENDS_TOP_LIST);
      SetWindowLongPtr(hwndTopList,GWLP_USERDATA,(ULONG_PTR)p);

      hwndBottomList = GetDlgItem(hwnd,IDDI_BACKENDS_BOTTOM_LIST);
      SetWindowLongPtr(hwndBottomList,GWLP_USERDATA,(ULONG_PTR)p);

      RECT rcThis;

      GetWindowRect(hwnd,&rcThis);

      RECT rcTopList;
      GetWindowRect(hwndTopList,&rcTopList);
      nativeTopListHeight = rcTopList.bottom - rcTopList.top;
      nativeTopListWidth = rcTopList.right - rcTopList.left;

      nativeHeight = rcThis.bottom - rcThis.top;
      nativeWidth = rcThis.right - rcThis.left;

      if ( NULL == nativeListViewHandler )
         nativeListViewHandler = (WNDPROC)SetWindowLongPtr(hwndBottomList,GWLP_WNDPROC,(ULONG_PTR)OBJECT_WITH_PROPERTIES::listViewHandler);
      else
         SetWindowLongPtr(hwndBottomList,GWLP_WNDPROC,(ULONG_PTR)OBJECT_WITH_PROPERTIES::listViewHandler);

      if ( hwndTopList )
         SetWindowLongPtr(hwndTopList,GWLP_WNDPROC,(ULONG_PTR)OBJECT_WITH_PROPERTIES::listViewHandler);

      HFONT hGUIFont = (HFONT)GetStockObject(DEFAULT_GUI_FONT);

      ICatInformation *pICatInformation = NULL;
      HRESULT rc = CoCreateInstance(CLSID_StdComponentCategoriesMgr,NULL,CLSCTX_ALL,IID_ICatInformation,reinterpret_cast<void **>(&pICatInformation));

      BSTR bstrDescription = NULL;
      pICatInformation -> GetCategoryDesc(IID_ICursiVisionBackEnd,0x0409,&bstrDescription);

      if ( bstrDescription ) {
         SetWindowTextW(GetDlgItem(hwnd,IDDI_BACKENDS_LIST_LABEL),bstrDescription);
         CoTaskMemFree(bstrDescription);
      }

      pICatInformation -> Release();

      long nextTopIndex = 0L;
      long nextBottomIndex = 0L;

      LVCOLUMN lvColumn = {0};

      lvColumn.mask = LVCF_TEXT;

      lvColumn.cx = 128 + 64;
      lvColumn.pszText = "Description";
      if ( hwndTopList )
         SendMessage(hwndTopList,LVM_INSERTCOLUMN,0,(LPARAM)&lvColumn);
#ifdef HIDE_BOTTOM_PROPS
      lvColumn.cx += 128;
#endif
      SendMessage(hwndBottomList,LVM_INSERTCOLUMN,0,(LPARAM)&lvColumn);

      lvColumn.cx = 48;
      lvColumn.pszText = "Props.";
      if ( hwndTopList )
         SendMessage(hwndTopList,LVM_INSERTCOLUMN,++nextTopIndex,(LPARAM)&lvColumn);
#ifndef HIDE_BOTTOM_PROPS
      SendMessage(hwndBottomList,LVM_INSERTCOLUMN,++nextBottomIndex,(LPARAM)&lvColumn);
#endif

      lvColumn.cx = 48;
      lvColumn.pszText = "Use ?";
      SendMessage(hwndTopList,LVM_INSERTCOLUMN,++nextTopIndex,(LPARAM)&lvColumn);
      SendMessage(hwndBottomList,LVM_INSERTCOLUMN,++nextBottomIndex,(LPARAM)&lvColumn);

      lvColumn.cx = 48;
      lvColumn.pszText = "Order";
      SendMessage(hwndTopList,LVM_INSERTCOLUMN,++nextTopIndex,(LPARAM)&lvColumn);

      SendMessage(hwndBottomList,LVM_SETCOLUMNWIDTH,(WPARAM)++nextBottomIndex,(LPARAM)LVSCW_AUTOSIZE_USEHEADER);

      long countRows = 0;
      countAvailableBackEnds = 0;

      for ( std::list<backEndPackage *>::iterator it = ALL_BACKENDS_LIST.begin(); it != ALL_BACKENDS_LIST.end(); it++ ) {

         LVITEM lvItem = {0};

         lvItem.pszText = (*it) -> szDescription;

         lvItem.mask = LVIF_TEXT | LVIF_PARAM;
         lvItem.iItem = countRows + 1;
         lvItem.cchTextMax = (DWORD)strlen(lvItem.pszText);

         lvItem.lParam = (LPARAM)&buttonPairs[countRows];

         lvItem.iItem = (int)SendMessage(hwndBottomList,LVM_INSERTITEM,0L,(LPARAM)&lvItem);
   
         memcpy(&buttonPairs[countRows].objectId,&( (*it) -> objectId ),sizeof(GUID));

         buttonPairs[countRows].hwndList = hwndBottomList;

#ifdef HIDE_BOTTOM_PROPS
         buttonPairs[countRows].hwndProperties = NULL;
#else
         buttonPairs[countRows].hwndProperties = CreateWindowEx(0L,"BUTTON","...", WS_CHILD | WS_VISIBLE,32,32,32,16,hwndBottomList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_PROPERTIES + countRows),hModule,0L);
         SetWindowLongPtr(buttonPairs[countRows].hwndProperties,GWLP_USERDATA,(ULONG_PTR)&buttonPairs[countRows]);
         SendMessage(buttonPairs[countRows].hwndProperties,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);
#endif

         buttonPairs[countRows].hwndUse = CreateWindowEx(0L,"BUTTON","Yes",WS_CHILD | WS_VISIBLE,32,32,32,16,hwndBottomList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_USE_BACKEND + countRows),hModule,0L);
         SetWindowLongPtr(buttonPairs[countRows].hwndUse,GWLP_USERDATA,(ULONG_PTR)&buttonPairs[countRows]);
         SendMessage(buttonPairs[countRows].hwndUse,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);

         if ( 0 < strlen(PARENT_OBJECT_PREFERRED_SETTINGS_FILE_NAME) ) {

            strcpy(buttonPairs[countRows].szSettingsFileName,PARENT_OBJECT_PREFERRED_SETTINGS_FILE_NAME);

            char *pc = strrchr(buttonPairs[countRows].szSettingsFileName,'.');
            if ( pc )
               *pc = '\0';

            sprintf(buttonPairs[countRows].szSettingsFileName + strlen(buttonPairs[countRows].szSettingsFileName),"_%s.settings","--unknown--");//(*it) -> szCodeName);

         } else {

            memset(buttonPairs[countRows].szSettingsFileName,0,sizeof(buttonPairs[countRows].szSettingsFileName));

         }

         countRows++;

      }

      countAvailableBackEnds = countRows;

      for ( long k = 0; k < p -> countBackEnds; k++ ) {

         LVITEM lvItem = {0};

         lvItem.mask = LVIF_TEXT | LVIF_PARAM;

         lvItem.pszText = p -> backEndDescriptions[k];
         lvItem.cchTextMax = 128;

         lvItem.iItem = 32768;

         struct buttonPair *pPair = new buttonPair;

         memset(pPair,0,sizeof(buttonPair));

         memcpy(&pPair -> objectId,&p -> backEndGUIDS[k],sizeof(GUID));

         memcpy(&pPair -> instanceId,&p -> backEndInstanceIds[k],sizeof(GUID));

         pPair -> pIUnknown_Object = NULL;

         for ( long j = 0; j < countAvailableBackEnds; j++ ) {

            if ( buttonPairs[j].objectId == pPair -> objectId ) {

               char szTemp[MAX_PATH],szGUID[64];
               OLECHAR bstrGUID[64];

               strcpy(szTemp,buttonPairs[j].szSettingsFileName);

               char *pc = strrchr(szTemp,'.');
               if ( pc )
                  *pc = '\0';

               StringFromGUID2(pPair -> instanceId,bstrGUID,64);

               WideCharToMultiByte(CP_ACP,0,bstrGUID,-1,szGUID,64,0,0);

               sprintf(pPair -> szSettingsFileName,"%s%s.settings",szTemp,szGUID);

               break;

            }

         }

         pPair -> hwndList = hwndTopList;
         pPair -> hwndUse = CreateWindowEx(0L,"BUTTON","No",WS_CHILD | WS_VISIBLE,32,32,32,16,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_USE_BACKEND + k),hModule,0L);
         pPair -> hwndProperties = CreateWindowEx(0L,"BUTTON","...", WS_CHILD | WS_VISIBLE,32,32,32,16,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_PROPERTIES + k),hModule,0L);
         pPair -> hwndOrder = CreateWindowEx(0,UPDOWN_CLASSA,"",WS_CHILD | WS_VISIBLE,32,32,24,18,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_ORDER + k),hModule,0L);

         SetWindowLongPtr(pPair -> hwndProperties,GWLP_USERDATA,(ULONG_PTR)pPair);
         SetWindowLongPtr(pPair -> hwndUse,GWLP_USERDATA,(ULONG_PTR)pPair);
         SetWindowLongPtr(pPair -> hwndOrder,GWLP_USERDATA,(ULONG_PTR)pPair);

         HFONT hGUIFont = (HFONT)GetStockObject(DEFAULT_GUI_FONT);

         SendMessage(pPair -> hwndUse,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);
         SendMessage(pPair -> hwndProperties,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);
         SendMessage(pPair -> hwndOrder,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);

         lvItem.lParam = (LPARAM)pPair;

         lvItem.iItem = (int)SendMessage(hwndTopList,LVM_INSERTITEM,0L,(LPARAM)&lvItem);

      }

#ifdef ADDITIONAL_INITIALIZATION
      ADDITIONAL_INITIALIZATION
#endif

      }
      return LRESULT(FALSE);


   case WM_COMMAND: {

      if ( IDDI_BACKENDS_USE_BACKEND <= LOWORD(wParam) && IDDI_BACKENDS_USE_BACKEND_MAX >= LOWORD(wParam) ) {

         HWND hwndButton = (HWND)lParam;

         LVITEM lvItem = {0};

         struct buttonPair *pSource = (buttonPair *)GetWindowLongPtr(hwndButton,GWLP_USERDATA);

         if ( ! pSource )
            break;

         HWND hwndTheList = pSource -> hwndList;

         if ( hwndTheList == hwndBottomList ) {

            long backEndIndex = LOWORD(wParam) - IDDI_BACKENDS_USE_BACKEND;

            char szDescription[128];

            lvItem.mask = LVIF_TEXT | LVIF_PARAM;
            lvItem.pszText = szDescription;
            lvItem.cchTextMax = 128;

            lvItem.iItem = backEndIndex;
            lvItem.iSubItem = 0;

            SendMessage(hwndBottomList,LVM_GETITEM,0L,(LPARAM)&lvItem);

            long useNoIndex = (long)SendMessage(hwndTopList,LVM_GETITEMCOUNT,0L,0L);

            struct buttonPair *pPair = new buttonPair;

            memset(pPair,0,sizeof(buttonPair));

            memcpy(&pPair -> objectId,&pSource -> objectId,sizeof(GUID));

            CoCreateGuid(&pPair -> instanceId);

            char szTemp[MAX_PATH];
            char szGUID[64];

            strcpy(szTemp,pSource -> szSettingsFileName);

            char *pc = strrchr(szTemp,'.');
            if ( pc )
               *pc = '\0';

            OLECHAR newIdBSTR[64];

            StringFromGUID2(pPair -> instanceId,newIdBSTR,64);

            WideCharToMultiByte(CP_ACP,0,newIdBSTR,-1,szGUID,64,0,0);

            sprintf(pPair -> szSettingsFileName,"%s%s.settings",szTemp,szGUID);

            CopyFile(pSource -> szSettingsFileName,pPair -> szSettingsFileName,TRUE);

            pPair -> hwndList = hwndTopList;
            pPair -> hwndUse = CreateWindowEx(0L,"BUTTON","No",WS_CHILD | WS_VISIBLE,32,32,32,16,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_USE_BACKEND + useNoIndex),hModule,0L);
            pPair -> hwndProperties = CreateWindowEx(0L,"BUTTON","...", WS_CHILD | WS_VISIBLE,32,32,32,16,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_PROPERTIES + useNoIndex),hModule,0L);
            pPair -> hwndOrder = CreateWindowEx(0L,UPDOWN_CLASSA,"",WS_CHILD | WS_VISIBLE,32,32,24,18,hwndTopList,(HMENU)(UINT_PTR)(IDDI_BACKENDS_ORDER + useNoIndex),hModule,0L);

            SetWindowLongPtr(pPair -> hwndUse,GWLP_USERDATA,(ULONG_PTR)pPair);
            SetWindowLongPtr(pPair -> hwndProperties,GWLP_USERDATA,(ULONG_PTR)pPair);
            SetWindowLongPtr(pPair -> hwndOrder,GWLP_USERDATA,(ULONG_PTR)pPair);

            lvItem.lParam = (LPARAM)pPair;
            lvItem.iItem = useNoIndex + 1;
            lvItem.iItem = (int)SendMessage(hwndTopList,LVM_INSERTITEM,0L,(LPARAM)&lvItem);

            HFONT hGUIFont = (HFONT)GetStockObject(DEFAULT_GUI_FONT);

            SendMessage(pPair -> hwndUse,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);
            SendMessage(pPair -> hwndProperties,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);
            SendMessage(pPair -> hwndOrder,WM_SETFONT,(WPARAM)hGUIFont,(LPARAM)TRUE);

         } else if ( pSource -> hwndList == hwndTopList ) {

            long rowIndex = (long)GetWindowLongPtr(hwndButton,GWL_ID) - IDDI_BACKENDS_USE_BACKEND;

            lvItem.iItem = rowIndex;
            lvItem.mask = LVIF_PARAM;

            SendMessage(hwndTopList,LVM_GETITEM,0,(LPARAM)&lvItem);

            DestroyWindow(pSource -> hwndUse);
            DestroyWindow(pSource -> hwndProperties);
            DestroyWindow(pSource -> hwndOrder);

            DeleteFile(pSource -> szSettingsFileName);
            delete pSource;

            pSource = NULL;

            SendMessage(hwndTopList,LVM_DELETEITEM,(WPARAM)rowIndex,0L);

            long rowCount = (long)SendMessage(hwndTopList,LVM_GETITEMCOUNT,0L,0L);

            for ( long k = 0; k < rowCount; k++ ) {
               lvItem.iItem = k;
               SendMessage(hwndTopList,LVM_GETITEM,0,(LPARAM)&lvItem);
               buttonPair *pPair = (buttonPair *)lvItem.lParam;
               SetWindowLongPtr(pPair -> hwndUse,GWL_ID,IDDI_BACKENDS_USE_BACKEND + k);
               SetWindowLongPtr(pPair -> hwndProperties,GWL_ID,IDDI_BACKENDS_PROPERTIES + k);
               SetWindowLongPtr(pPair -> hwndOrder,GWL_ID,IDDI_BACKENDS_ORDER + k);
            }

         }

         long countRows = (long)SendMessage(hwndTheList,LVM_GETITEMCOUNT,0L,0L);

         for ( long k = 0; k < countRows; k++ ) {

            LVITEM lvItem = {0};
            lvItem.mask = LVIF_PARAM;
            lvItem.iItem = k;

            SendMessage(hwndTheList,LVM_GETITEM,(WPARAM)0L,(LPARAM)&lvItem);

            struct buttonPair *pPair = (struct buttonPair *)lvItem.lParam;

            SendMessage(pPair -> hwndUse,BM_SETSTYLE,(WPARAM)(BS_PUSHBUTTON | BS_TEXT),(LPARAM)TRUE);

         }

         OBJECT_WITH_PROPERTIES::additionalBackEndsHandler(hwnd,WM_SIZE,0L,0L);

         InvalidateRect(hwnd,NULL,TRUE);

         break;

      }

      if ( IDDI_BACKENDS_PROPERTIES <= LOWORD(wParam) && IDDI_BACKENDS_PROPERTIES_MAX >= LOWORD(wParam) ) {

         HWND hwndButton = (HWND)lParam;

         struct buttonPair *pSource = (struct buttonPair *)GetWindowLongPtr(hwndButton,GWLP_USERDATA);

         if ( ! pSource )
            break;

         OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

         LVITEM lvItem = {0};

         char szDescription[128];

         lvItem.mask = LVIF_TEXT;
         lvItem.iItem = (int)GetWindowLongPtr(hwndButton,GWL_ID) - IDDI_BACKENDS_PROPERTIES;
         lvItem.cchTextMax = 128;
         lvItem.pszText = szDescription;

         SendMessage(pSource -> hwndList,LVM_GETITEM,(WPARAM)0L,(LPARAM)&lvItem);

         ICursiVisionBackEnd *pICursiVisionBackEnd = NULL;
   
         HRESULT rc = CoCreateInstance(pSource -> objectId,NULL,CLSCTX_INPROC_SERVER,IID_ICursiVisionBackEnd,reinterpret_cast<void **>(&pICursiVisionBackEnd));

         pICursiVisionBackEnd -> ServicesAdvise(CURSIVISION_SERVICES_INTERFACE);

         BSTR bstrSettingsFile = SysAllocStringLen(NULL,MAX_PATH);

         if ( ! ( 0 == (DWORD)strlen(PARENT_OBJECT_PREFERRED_SETTINGS_FILE_NAME) ) ) {

            char *pUnk = strstr(pSource -> szSettingsFileName,"--unknown--");
   
            if ( pUnk ) {

               *pUnk = '\0';

               char szWithCode[MAX_PATH];
               char szTemp[MAX_PATH];
               BSTR bstrCode;

               strcpy(szWithCode,pSource -> szSettingsFileName);

               pICursiVisionBackEnd -> get_CodeName(&bstrCode);

               WideCharToMultiByte(CP_ACP,0,bstrCode,-1,szTemp,MAX_PATH,0,0);

               strcat(szWithCode,szTemp);
   
               sprintf(szWithCode + strlen(szWithCode),"%s",pUnk + 11);

               strcpy(pSource -> szSettingsFileName,szWithCode);

            }

            MultiByteToWideChar(CP_ACP,0,pSource -> szSettingsFileName,-1,bstrSettingsFile,MAX_PATH);

         } else {

            SysFreeString(bstrSettingsFile);

            pICursiVisionBackEnd -> get_PropertiesFileName(&bstrSettingsFile);

         }

         pICursiVisionBackEnd -> put_PropertiesFileName(bstrSettingsFile);

         SysFreeString(bstrSettingsFile);

#if defined CURSIVISION_BUILD || defined CURSIVISION_CONTROL_BUILD

         if ( isSpecificDocument && pSource -> hwndList == hwndTopList )
            pICursiVisionBackEnd -> put_UserMayEdit(TRUE);

         pICursiVisionBackEnd -> put_PrintingSupportProfile(pCursiVision -> PrintingProfile());

#elif defined PRINTING_SUPPORT_BUILD

         pICursiVisionBackEnd -> put_PrintingSupportProfile(static_cast<IPrintingSupportProfile *>(pObject));

#endif

         pICursiVisionBackEnd -> put_ParentWindow(hwndMainFrame);

         IUnknown *pIUnknown = NULL;
         pICursiVisionBackEnd -> QueryInterface(IID_IUnknown,reinterpret_cast<void **>(&pIUnknown));
         pObject -> pIGProperties -> ShowProperties(hwnd,pIUnknown);
         pIUnknown -> Release();

         pICursiVisionBackEnd -> Release();

         long countRows = (long)SendMessage(pSource -> hwndList,LVM_GETITEMCOUNT,0L,0L);

         for ( long k = 0; k < countRows; k++ ) {

            LVITEM lvItem = {0};
            lvItem.mask = LVIF_PARAM;
            lvItem.iItem = k;

            SendMessage(pSource -> hwndList,LVM_GETITEM,(WPARAM)0L,(LPARAM)&lvItem);

            struct buttonPair *pPair = (struct buttonPair *)lvItem.lParam;

            SendMessage(pPair -> hwndProperties,BM_SETSTYLE,(WPARAM)(BS_PUSHBUTTON | BS_TEXT),(LPARAM)TRUE);

         }

      }

      }
      break;

   case WM_SIZE: {

      RECT rcParent,rcTopList,rcBottomList,rcText;

      GetWindowRect(hwnd,&rcParent);
      GetWindowRect(hwndBottomList,&rcBottomList);
      GetWindowRect(GetDlgItem(hwnd,IDDI_BACKENDS_BOTTOM_LIST_LABEL),&rcText);

      long bottomListYChanged = 0L;

      GetWindowRect(hwndTopList,&rcTopList);

      DWORD dwRect = (DWORD)SendMessage(hwndTopList,LVM_APPROXIMATEVIEWRECT,(WPARAM)-1,MAKELPARAM(-1,-1));

      long cyTopList = max(128,HIWORD(dwRect));

      long xList = rcTopList.left - rcParent.left;

      if ( cyTopList > nativeTopListHeight ) {
         if ( cyTopList < nativeHeight / 3 )
            SetWindowPos(hwndTopList,HWND_TOP,0,0,nativeTopListWidth,cyTopList,SWP_NOMOVE);
         else
            SetWindowPos(hwndTopList,HWND_TOP,0,0,nativeTopListWidth,nativeHeight / 3,SWP_NOMOVE);
         GetWindowRect(hwndTopList,&rcTopList);
      }

      long yBottom = rcTopList.bottom - rcParent.top + 48;
      long cyBottom = nativeHeight - yBottom - 8;

      dwRect = (DWORD)SendMessage(hwndBottomList,LVM_APPROXIMATEVIEWRECT,(WPARAM)-1,MAKELPARAM(-1,-1));

      cyBottom = min(cyBottom,HIWORD(dwRect));

      if ( ( yBottom + cyBottom ) > ( nativeHeight - 16 ) )
         cyBottom = nativeHeight - yBottom - 16;

      long keepBottomListY = rcBottomList.top;

      SetWindowPos(hwndBottomList,HWND_TOP,xList,yBottom,nativeTopListWidth,cyBottom,0L);

      GetWindowRect(hwndBottomList,&rcBottomList);

      SetWindowPos(GetDlgItem(hwnd,IDDI_BACKENDS_TOP_LIST_LABEL),HWND_TOP,xList,rcTopList.top - rcParent.top - (rcText.bottom - rcText.top),0,0,SWP_NOSIZE);
      SetWindowPos(GetDlgItem(hwnd,IDDI_BACKENDS_BOTTOM_LIST_LABEL),HWND_TOP,xList,rcBottomList.top - rcParent.top - (rcText.bottom - rcText.top),0,0,SWP_NOSIZE);

      SendMessage(hwndTopList,LVM_SETCOLUMNWIDTH,0,MAKELPARAM(nativeTopListWidth - 3 * 48 - 4,0));
      SendMessage(hwndTopList,LVM_SETCOLUMNWIDTH,1,MAKELPARAM(48,0));
      SendMessage(hwndTopList,LVM_SETCOLUMNWIDTH,2,MAKELPARAM(48,0));
      SendMessage(hwndTopList,LVM_SETCOLUMNWIDTH,3,MAKELPARAM(48,0));

      SendMessage(hwndBottomList,LVM_SETCOLUMNWIDTH,0,MAKELPARAM(nativeTopListWidth - 2 * 48 - 24,0));
      SendMessage(hwndBottomList,LVM_SETCOLUMNWIDTH,1,MAKELPARAM(48,0));
      SendMessage(hwndBottomList,LVM_SETCOLUMNWIDTH,2,MAKELPARAM(48,0));

      }
      break;

   case WM_DRAWITEM: {
      DRAWITEMSTRUCT *pDWI = (DRAWITEMSTRUCT *)lParam;
      return SendMessage(pDWI -> hwndItem,msg,wParam,lParam);
      }

   case WM_MEASUREITEM: {
      MEASUREITEMSTRUCT *pMIS = (MEASUREITEMSTRUCT *)lParam;
      pMIS -> itemHeight = 20;
      pMIS -> itemWidth = 0L;
      }
      return (LRESULT)1L;

   case WM_NOTIFY: {

      NMHDR *pNotifyHeader = (NMHDR *)lParam;

      switch ( pNotifyHeader -> code ) {

      case UDN_DELTAPOS: {

         NM_UPDOWN *pUD = reinterpret_cast<NM_UPDOWN *>(lParam);

         if ( IDDI_BACKENDS_ORDER <= pNotifyHeader -> idFrom && IDDI_BACKENDS_ORDER_MAX >= pNotifyHeader -> idFrom ) {

            long rowIndex = (long)GetWindowLongPtr(pNotifyHeader -> hwndFrom,GWL_ID) - IDDI_BACKENDS_ORDER;

            if ( 0 == rowIndex && pUD -> iDelta < 0) {
               MessageBeep(MB_ICONASTERISK);
               break;
            }

            long rowCount = (long)SendMessage(hwndTopList,LVM_GETITEMCOUNT,0L,0L);

            if ( rowIndex == rowCount - 1 && pUD -> iDelta > 0) {
               MessageBeep(MB_ICONASTERISK);
               break;
            }

            char szDescription[2][128];
            char szSettingsFileName[2][MAX_PATH];
            GUID guid[2];
            GUID guidInstanceId[2];
            IUnknown *pIUnknowns[2];

            buttonPair *pPair[] = {NULL,NULL};

            LVITEM lvItem = {0};

            long siblingIndex = rowIndex + 1;
            if ( pUD -> iDelta < 0 )
               siblingIndex = rowIndex - 1;

            lvItem.iItem = rowIndex;
            lvItem.mask = LVIF_PARAM | LVIF_TEXT;
            lvItem.pszText = &szDescription[0][0];
            lvItem.cchTextMax = 128;

            SendMessage(hwndTopList,LVM_GETITEM,0,(LPARAM)&lvItem);

            pPair[0] = (buttonPair *)lvItem.lParam;

            memcpy(&guid[0],&pPair[0] -> objectId,sizeof(GUID));
            memcpy(&guidInstanceId[0],&pPair[0] -> instanceId,sizeof(GUID));
            strcpy(&szSettingsFileName[0][0],pPair[0] -> szSettingsFileName);
            pIUnknowns[0] = pPair[0] -> pIUnknown_Object;

            lvItem.iItem = siblingIndex;

            lvItem.pszText = &szDescription[1][0];

            SendMessage(hwndTopList,LVM_GETITEM,0,(LPARAM)&lvItem);

            pPair[1] = (buttonPair *)lvItem.lParam;

            memcpy(&guid[1],&pPair[1] -> objectId,sizeof(GUID));
            memcpy(&guidInstanceId[1],&pPair[1] -> instanceId,sizeof(GUID));
            strcpy(&szSettingsFileName[1][0],pPair[1] -> szSettingsFileName);
            pIUnknowns[1] = pPair[1] -> pIUnknown_Object;

            memcpy(&pPair[1] -> objectId,&guid[0],sizeof(GUID));
            memcpy(&pPair[1] -> instanceId,&guidInstanceId[0],sizeof(GUID));
            strcpy(pPair[1] -> szSettingsFileName,szSettingsFileName[0]);
            pPair[1] -> pIUnknown_Object = pIUnknowns[0];

            memcpy(&pPair[0] -> objectId,&guid[1],sizeof(GUID));
            memcpy(&pPair[0] -> instanceId,&guidInstanceId[1],sizeof(GUID));
            strcpy(pPair[0] -> szSettingsFileName,szSettingsFileName[1]);
            pPair[0] -> pIUnknown_Object = pIUnknowns[1];

            lvItem.mask = LVIF_TEXT;

            lvItem.iItem = rowIndex;
            lvItem.pszText = &szDescription[1][0];

            SendMessage(hwndTopList,LVM_SETITEM,0,(LPARAM)&lvItem);

            lvItem.iItem = siblingIndex;
            lvItem.pszText = &szDescription[0][0];

            SendMessage(hwndTopList,LVM_SETITEM,0,(LPARAM)&lvItem);

         }

         }
         break;

      case PSN_SETACTIVE: {
         if ( needsAdmin )
            break;
         long exceptions[] = {0L};
         enableAll(hwnd,exceptions);
         }
         break;

      case PSN_KILLACTIVE: {
         SetWindowLongPtr(pNotifyHeader -> hwndFrom,DWLP_MSGRESULT,FALSE);
         }
         break;

      case PSN_APPLY: {

         PSHNOTIFY *pNotify = (PSHNOTIFY *)lParam;

         OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);

         if ( pNotify -> lParam && ! needsAdmin ) {

            p -> countBackEnds = (long)SendMessage(hwndTopList,LVM_GETITEMCOUNT,0L,0L);

            memset(p -> useBackEnds,0,sizeof(p -> useBackEnds));
            memset(p -> backEndGUIDS,0,sizeof(p -> backEndGUIDS));
            memset(p -> backEndDescriptions,0,sizeof(p -> backEndDescriptions));
            memset(p -> backEndSettingsFiles,0,sizeof(p -> backEndSettingsFiles));
            memset(p -> backEndInstanceIds,0,sizeof(p -> backEndInstanceIds));

            for ( long k = 0; k < p -> countBackEnds; k++ ) {

               LVITEM lvItem = {0};

               char szDescription[128];

               lvItem.mask = LVIF_TEXT | LVIF_PARAM;
               lvItem.iItem = k;
               lvItem.cchTextMax = 128;
               lvItem.pszText = szDescription;

               SendMessage(hwndTopList,LVM_GETITEM,0L,(LPARAM)&lvItem);

               buttonPair *pPair = (buttonPair *)lvItem.lParam;

               strcpy(p -> backEndDescriptions[k],szDescription);
               memcpy(&p -> backEndGUIDS[k],&pPair -> objectId,sizeof(GUID));
               strcpy(p -> backEndSettingsFiles[k],pPair -> szSettingsFileName);
               memcpy(&p -> backEndInstanceIds[k],&pPair -> instanceId,sizeof(GUID));

               p -> useBackEnds[k] = 1L;

            }

            pObject -> SaveProperties();
            pObject -> DiscardProperties();
            pObject -> DiscardProperties();

         } else {
            pObject -> DiscardProperties();
            pObject -> PushProperties();
         }

         SetWindowLongPtr(pNotifyHeader -> hwndFrom,DWLP_MSGRESULT,PSNRET_NOERROR);

         }
         return (LRESULT)TRUE;

      case PSN_RESET: {
         OBJECT_WITH_PROPERTIES *pObject = (OBJECT_WITH_PROPERTIES *)(p -> pParent);
         pObject -> PopProperties();
         pObject -> PopProperties();
         }
         break;
      }

      }
      break;

   default:
      break;

   }

