
#pragma once

struct backEndPackage {
   backEndPackage() { memset(this,0,sizeof(struct backEndPackage)); };
   char szDescription[MAX_PATH];
   GUID objectId;
   bool canRunFromTools;
};
