/*

                       Copyright (c) 1996,1997,1998,1999,2000,2001,2002 Nathan T. Clark

*/

#include <windows.h>
#include <shlwapi.h>
#include <list>

#include "list.h"
#include "utils.h"

#if 0
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
      p = new char[n = strlen(szChildKeyName) + 1];
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
#endif


   int deleteSubKey(HKEY parentKeyHandle,HKEY thisKeyHandle,char *thisKeyName) {
   int rc = 0;
   if ( thisKeyHandle )
      rc = SHDeleteKey(thisKeyHandle,thisKeyName);
   return rc;
   }