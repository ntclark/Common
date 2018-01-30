// Copyright 2018 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <windows.h>
#include <comcat.h>
#include <olectl.h>
#include <stdio.h>
#include <string.h>

#include "general.h"

#include "utils.h"


   HRESULT utilsDllRegisterTypeLib(OLECHAR* wstrModuleName) {
   ITypeLib* ptLib;
   HRESULT rc = S_OK;

   if ( S_OK != LoadTypeLib(wstrModuleName,&ptLib) )
      rc = ResultFromScode(SELFREG_E_TYPELIB);
   else
      if ( S_OK != RegisterTypeLib(ptLib,wstrModuleName,NULL) )
         rc = ResultFromScode(SELFREG_E_TYPELIB);

   return rc;
   }


   HRESULT utilsDllUnregisterTypeLib(OLECHAR* wstrModuleName,const CLSID libID,unsigned short wVersionMajor,unsigned short wVersionMinor) {
   ITypeLib* ptLib;
   HRESULT rc;

   if ( S_OK == (rc = LoadTypeLib(wstrModuleName,&ptLib)) )
      rc = UnRegisterTypeLib(libID,wVersionMajor,wVersionMinor,LOCALE_NEUTRAL,SYS_WIN32);

   return rc;
   }

   HRESULT utilsDllRegisterObject(const CLSID classID,const CLSID libID,HMODULE hModule,
                                  char *szModuleName,
                                  char *objectName,
                                  char *versionIndependentName,
                                  char *versionDependentName,
                                  CATID* pCategoryIDs,
                                  long bitmapIndex,
                                  long oleMisc,
                                  boolean isControl,
                                  boolean isInsertable,
                                  boolean isProgrammable) {

   utilsDllUnregisterObject(classID,versionIndependentName,versionDependentName);

   HKEY keyHandle,clsidHandle,keyHandleTemp;
   DWORD disposition;
   char szTemp[256],szCLSID[256];
   LPOLESTR oleString;
 
   StringFromCLSID(classID,&oleString);
   WideCharToMultiByte(CP_ACP,0,oleString,-1,szCLSID,256,0,0);
   CoTaskMemFree(oleString);
 
   RegOpenKeyEx(HKEY_CLASSES_ROOT,"CLSID",0,KEY_CREATE_SUB_KEY,&keyHandle);
 
      RegCreateKeyEx(keyHandle,szCLSID,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&clsidHandle,&disposition);
      sprintf(szTemp,objectName);
      RegSetValueEx(clsidHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
      if ( isControl ) {
         sprintf(szTemp,"Control");
         RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      }

      if ( isInsertable ) {
         sprintf(szTemp,"Insertable");
         RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      }

      if ( isProgrammable ) {
         sprintf(szTemp,"Programmable");
         RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      }

      sprintf(szTemp,"ProgID");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,versionDependentName);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));

      sprintf(szTemp,"VersionIndependentProgID");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,versionIndependentName);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
      sprintf(szTemp,"InprocServer32");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szModuleName,(DWORD)strlen(szModuleName));

//      RegSetValueEx(keyHandle,"ThreadingModel",0,REG_SZ,(BYTE *)"Apartment",strlen("Apartment"));
//      RegSetValueEx(keyHandle,"ThreadingModel",0,REG_SZ,(BYTE *)"Neutral",strlen("Neutral"));
//      RegSetValueEx(keyHandle,"ThreadingModel",0,REG_SZ,(BYTE *)"Free",strlen("Free"));
      RegSetValueEx(keyHandle,"ThreadingModel",0,REG_SZ,(BYTE *)"Both",(DWORD)strlen("Both"));

#if 0
      sprintf(szTemp,"InprocHandler32");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)"ole32.dll",strlen("ole32.dll"));
      RegSetValueEx(keyHandle,"ThreadingModel",0,REG_SZ,(BYTE *)"Both",strlen("Both"));
#endif

      sprintf(szTemp,"TypeLib");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
    
      StringFromCLSID(libID,&oleString);
      WideCharToMultiByte(CP_ACP,0,oleString,-1,szTemp,256,0,0);
      CoTaskMemFree(oleString);

      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
        
      sprintf(szTemp,"ToolboxBitmap32");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      if ( bitmapIndex != 0 )
         sprintf(szTemp,"%s, %ld",szModuleName,bitmapIndex);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
      sprintf(szTemp,"Version");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,"1.0");
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
      sprintf(szTemp,"MiscStatus");
      RegCreateKeyEx(clsidHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,"0");
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
      sprintf(szTemp,"1");
      RegCreateKeyEx(keyHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,"%ld", oleMisc);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
 
   RegCreateKeyEx(HKEY_CLASSES_ROOT,versionIndependentName,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      keyHandleTemp = keyHandle;
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)objectName,(DWORD)strlen(objectName));
      RegCreateKeyEx(keyHandle,"CurVer",0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      sprintf(szTemp,versionDependentName);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szTemp,(DWORD)strlen(szTemp));
      RegCreateKeyEx(keyHandleTemp,"CLSID",0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)szCLSID,(DWORD)strlen(szCLSID));
 
   RegCreateKeyEx(HKEY_CLASSES_ROOT,versionDependentName,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      RegSetValueEx(keyHandle,NULL,0,REG_SZ,(BYTE *)objectName,(DWORD)strlen(objectName));
      RegCreateKeyEx(keyHandle,"CLSID",0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandleTemp,&disposition);
      RegSetValueEx(keyHandleTemp,NULL,0,REG_SZ,(BYTE *)szCLSID,(DWORD)strlen(szCLSID));
      RegCreateKeyEx(keyHandle,"Insertable",0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);

   if ( pCategoryIDs ) {
      BSTR bstrCategoryID;
      RegCreateKeyEx(clsidHandle,"Implemented Categories",0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandle,&disposition);
      while ( *pCategoryIDs != CATID_NULL ) {
         StringFromCLSID(*pCategoryIDs,&bstrCategoryID);
         WideCharToMultiByte(CP_ACP,0,bstrCategoryID,-1,szTemp,sizeof(szTemp),0,0);
         RegCreateKeyEx(keyHandle,szTemp,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&keyHandleTemp,&disposition);
         CoTaskMemFree(bstrCategoryID);
         pCategoryIDs++;
      }
   }

   return S_OK;
   }

   HRESULT utilsDllUnregisterObject(const CLSID classID,char *versionIndependentName,char *versionDependentName ) {
 
   HRESULT rc = S_OK;
   HKEY parentKeyHandle,clsidHandle;
   char szGUID[256];
   LPOLESTR oleString;
   
   StringFromCLSID(classID,&oleString);
   memset(szGUID,0,sizeof(szGUID));
   WideCharToMultiByte(CP_ACP,0,oleString,-1,szGUID,256,0,0);

   CoTaskMemFree(oleString);

   RegOpenKeyEx(HKEY_CLASSES_ROOT,"CLSID",0,KEY_ALL_ACCESS,&parentKeyHandle);
   if ( parentKeyHandle ) {
      RegOpenKeyEx(parentKeyHandle,szGUID,0,KEY_ALL_ACCESS,&clsidHandle);
      if ( clsidHandle ) deleteSubKey(parentKeyHandle,clsidHandle,szGUID);
   }

   RegOpenKeyEx(HKEY_CLASSES_ROOT,versionIndependentName,0,KEY_ALL_ACCESS,&parentKeyHandle);

   if ( parentKeyHandle ) 
      deleteSubKey(HKEY_CLASSES_ROOT,parentKeyHandle,versionIndependentName);

   RegOpenKeyEx(HKEY_CLASSES_ROOT,versionDependentName,0,KEY_ALL_ACCESS,&parentKeyHandle);

   if ( parentKeyHandle ) 
      deleteSubKey(HKEY_CLASSES_ROOT,parentKeyHandle,versionDependentName);

   return rc;
   }
