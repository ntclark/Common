
#include <windows.h>
#include <shlwapi.h>
#include <list>

#include "list.h"
#include "utils.h"

   int deleteSubKey(HKEY parentKeyHandle,HKEY thisKeyHandle,char *thisKeyName) {
   int rc = 0;
   if ( thisKeyHandle )
      rc = SHDeleteKey(thisKeyHandle,thisKeyName);
   return rc;
   }
