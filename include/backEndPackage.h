
#pragma once

struct backEndPackage {
   backEndPackage() { memset(this,0,sizeof(struct backEndPackage)); };
   char szDescription[MAX_PATH];
   char szCodeName[32];
   GUID objectId;
   bool canRunFromTools;
};
