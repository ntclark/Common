
#include "CursiVision.h"

void convertToPDF(char *pszInputFileName) {

   int gsArgCount = 10;
   int gsArgInputFileIndex = 9;
   int gsArgOutputFileIndex = 5;
   char *gsArg[10];
   void *gsInstance;

   int (__stdcall *pgsapi_new_instance)(void **ppInstance, void *caller_handle);
   void (__stdcall *pgsapi_delete_instance)(void *instance);
   int (__stdcall *pgsapi_exit)(void *instance);
   int (__stdcall *pgsapi_init_with_args)(void *instance, int argc, char **argv);

   HMODULE hGS;

   char szInstallationDirectory[MAX_PATH];

   strcpy(szInstallationDirectory,szApplicationName);

   char *p = strrchr(szInstallationDirectory,'\\');
   if ( ! p )
      p = strrchr(szInstallationDirectory,'/');
   
   *p = '\0';

   sprintf(szInstallationDirectory + strlen(szInstallationDirectory),"\\psSupport.dll");

   hGS = LoadLibrary(szInstallationDirectory);

   pgsapi_new_instance = (int (__stdcall *)(void **,void *))GetProcAddress(hGS,"newInterpreter");
   pgsapi_delete_instance = (void (__stdcall *)(void *))GetProcAddress(hGS,"deleteInterpreter");
   pgsapi_exit = (int (__stdcall *)(void *))GetProcAddress(hGS,"exitInterpreter");
   pgsapi_init_with_args = (int (__stdcall *)(void *,int,char **))GetProcAddress(hGS,"initialize");

   memset(gsArg,0,sizeof(gsArg));

   gsArg[0] = "ps2pdf14";
   gsArg[1] = "-dNOPAUSE";
   gsArg[2] = "-dBATCH";
   gsArg[3] = "-dSAFER";
   gsArg[4] = "-sDEVICE=pdfwrite";

   gsArg[6] = "-c";
   gsArg[7] = ".setpdfwrite";
   gsArg[8] = "-f";

   char szInput[MAX_PATH],szOutput[MAX_PATH],szArgOutput[MAX_PATH];

   memset(szInput,0,sizeof(szInput));
   memset(szOutput,0,sizeof(szOutput));
   memset(szArgOutput,0,sizeof(szArgOutput));

   strcpy(szInput,pszInputFileName);

   gsArg[gsArgInputFileIndex] = szInput;

   p = strrchr(szInput,'.');
   if ( p )
       *p = '\0';

   sprintf_s(szOutput,MAX_PATH,"\"%s.pdf\"",szInput);

   sprintf_s(szArgOutput,MAX_PATH,"-sOutputFile=%s.pdf%c",szInput,'\"' == szInput[0] ? '\"' : ' ');

   if ( p )
       *p = '.';

   gsInstance = NULL;

   long code = (*pgsapi_new_instance)(&gsInstance, NULL);

   gsArg[gsArgOutputFileIndex] = szArgOutput;

   code = (*pgsapi_init_with_args)(gsInstance, gsArgCount, &gsArg[0]);

   (*pgsapi_exit)(gsInstance);

   (*pgsapi_delete_instance)(gsInstance);

   FreeLibrary(hGS);

   return;
   }
