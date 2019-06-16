
#include <aclapi.h>
#include <sddl.h>

   extern "C" int RegisterDLL(char *pszDLL) {

   HMODULE hModule = LoadLibraryA(pszDLL);

   if ( ! hModule ) 
      return 2;

   long (__stdcall *r)() = (long (__stdcall *)())GetProcAddress(hModule,"DllRegisterServer");

   if ( ! r )
      return 87;

   (r)();

   FreeLibrary(hModule);

   return 0;
   }
