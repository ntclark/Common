/*
                       Copyright (c) 2009,2010,2011,2012,2013,2014 Nathan T. Clark
*/

#include "CursiVision.h"

extern "C" void disableAll(HWND hwnd,long *pExceptions);
extern "C" void enableAll(HWND hwnd,long *pExceptions);

#define OBJECT_WITH_PROPERTIES CursiVision
#define CURSIVISION_SERVICES_INTERFACE pCursiVision -> pICursiVisionServices

#define ALL_BACKENDS_LIST pCursiVision -> allBackEnds

#define PARENT_OBJECT_PREFERRED_SETTINGS_FILE_NAME ""

#define ADDITIONAL_INITIALIZATION         \
   ShowWindow(GetDlgItem(hwnd,IDDI_DISPOSITION_NEED_ADMIN_PRIVILEGES),SW_HIDE);

   struct buttonPair {
      HWND hwndList,hwndUse,hwndProperties,hwndOrder;
      GUID objectId;
      char szSettingsFileName[MAX_PATH];
      GUID instanceId;
      IUnknown *pIUnknown_Object;
   };

   static buttonPair buttonPairs[32];

   static HWND hwndTopList = NULL;
   static HWND hwndBottomList = NULL;

   static long nativeTopListHeight = 0;
   static long nativeTopListWidth = 0;
   static long nativeWidth = 0;
   static long nativeHeight = 0;
   static long countAvailableBackEnds = 0;

   LRESULT CALLBACK CursiVision::additionalBackEndsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

   resultDisposition *p = (resultDisposition *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

#include "additionalBackEndsBody.cpp"

   return LRESULT(FALSE);
   }

#include "additionalBackEnds_ListViewHandler.cpp"
