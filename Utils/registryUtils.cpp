// Copyright 2018 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

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
