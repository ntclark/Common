// Copyright 2018 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <windows.h>
#include <list>

#include "list.h"
#include "utils.h"


   int deleteSubKey(HKEY parentKeyHandle,HKEY thisKeyHandle,char *thisKeyName) {

   HKEY childKeyHandle;
   DWORD dwIndex = 0;
   char szChildKeyName[MAX_PATH];
   DWORD cbChildKeyName = MAX_PATH;
   char *p;
   long n;

   std::list<char *> childKeyNames;

   memset(szChildKeyName,0,sizeof(szChildKeyName));
   while ( ERROR_SUCCESS == RegEnumKeyEx(thisKeyHandle,dwIndex++,szChildKeyName,&cbChildKeyName,NULL,NULL,NULL,NULL) ) {
      p = new char[n = (long)strlen(szChildKeyName) + 1];
      memset(p,0,n);
      strcpy(p,szChildKeyName);
      childKeyNames.insert(childKeyNames.end(),p);
      cbChildKeyName = MAX_PATH;
   }

   p = (char *)NULL;
   std::list<char *>::iterator ih;
   for ( ih = childKeyNames.begin(); ih != childKeyNames.end(); ih++ ) {
      p = (*ih);
      RegOpenKey(thisKeyHandle,p,&childKeyHandle);
      deleteSubKey(thisKeyHandle,childKeyHandle,p);
      delete [] p;
   }

   RegDeleteKey(parentKeyHandle,thisKeyName);

   return 0;
   };


