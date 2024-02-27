
#include <Windows.h>

    extern "C" int main(int argcount,char *argv[]) {

    HMODULE hGS = LoadLibraryA(argv[1]);

    HRESULT (__stdcall *dllRegisterServer)();

    dllRegisterServer = (HRESULT (__stdcall *)())GetProcAddress(hGS,"DllUnregisterServer");

    dllRegisterServer();

    return 0;    
    }