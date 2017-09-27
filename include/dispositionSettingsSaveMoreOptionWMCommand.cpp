
      case IDDI_DISPOSITION_MORE: {

         static char szCaption[512] = {""};

         PROPSHEETPAGE pPropSheetPage = {0};

         pPropSheetPage.dwFlags = PSP_USETITLE;
         pPropSheetPage.dwSize = sizeof(PROPSHEETPAGE);
         pPropSheetPage.hInstance = hModule;
         pPropSheetPage.pszTemplate = MAKEINTRESOURCE(IDD_DISPOSITION_MORE);
         pPropSheetPage.pfnDlgProc = (DLGPROC)OBJECT_WITH_PROPERTIES::additionalSaveOptionsHandler;
         pPropSheetPage.pszTitle = "Additional Storage Options";
         pPropSheetPage.lParam = (ULONG_PTR)p;
         pPropSheetPage.pfnCallback = NULL;

         PROPSHEETHEADER propSheetHeader = {0};

#ifdef CURSIVISION_BUILD
         sprintf(szCaption,"Settings for: %s",pCursiVision -> szActiveDocument);
#endif

         propSheetHeader.dwSize = sizeof(PROPSHEETHEADER);
         propSheetHeader.pszCaption = szCaption;
         propSheetHeader.dwFlags = PSH_PROPSHEETPAGE | PSH_NOCONTEXTHELP | PSH_NOAPPLYNOW;
         propSheetHeader.hwndParent = (HWND)hwnd;
         propSheetHeader.ppsp = &pPropSheetPage;
         propSheetHeader.nPages = 1;
         propSheetHeader.nStartPage = 0;

#ifndef CURSIVISION_CONTROL_BUILD
         UNLOAD_CONTROLS
#endif
         PropertySheet(&propSheetHeader);

#ifndef CURSIVISION_CONTROL_BUILD
         LOAD_CONTROLS
#endif

         }
         break;

