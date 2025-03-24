
      case IDDI_DISPOSITION_MORE: {

         static char szSaveOptionsAdditional[256];
         static char szStoreInSubDirectories[256];

         LoadString(hModuleResources,IDD_DISPOSITION_MORE + 16384,szSaveOptionsAdditional,256);
         LoadString(hModuleResources,IDD_DISPOSITION_MORE + 16385,szStoreInSubDirectories,256);

         PROPSHEETPAGE pPropSheetPage = {0};

         pPropSheetPage.dwFlags = PSP_USETITLE;
         pPropSheetPage.dwSize = sizeof(PROPSHEETPAGE);
         pPropSheetPage.hInstance = hModule;
         pPropSheetPage.pszTemplate = MAKEINTRESOURCE(IDD_DISPOSITION_MORE);
         pPropSheetPage.pfnDlgProc = (DLGPROC)OBJECT_WITH_PROPERTIES::additionalSaveOptionsHandler;
         pPropSheetPage.pszTitle = szSaveOptionsAdditional;
         pPropSheetPage.lParam = (ULONG_PTR)p;
         pPropSheetPage.pfnCallback = NULL;

         PROPSHEETHEADER propSheetHeader = {0};

         propSheetHeader.dwSize = sizeof(PROPSHEETHEADER);
         propSheetHeader.pszCaption = szStoreInSubDirectories;
         propSheetHeader.dwFlags = PSH_PROPSHEETPAGE | PSH_NOCONTEXTHELP | PSH_NOAPPLYNOW;
         propSheetHeader.hwndParent = (HWND)hwnd;
         propSheetHeader.ppsp = &pPropSheetPage;
         propSheetHeader.nPages = 1;
         propSheetHeader.nStartPage = 0;

         UNLOAD_CONTROLS

         PropertySheet(&propSheetHeader);

         LOAD_CONTROLS

         }
         break;

