// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

struct backEndPackage {
   backEndPackage() { memset(this,0,sizeof(struct backEndPackage)); };
   char szDescription[MAX_PATH];
   GUID objectId;
   bool canRunFromTools;
};
