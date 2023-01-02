
#include <windows.h>
#include <conio.h>
#include <stdio.h>

#include <list>

long count = 0L;
long countFiles = 0L;
char szInput[4096];
//"D:\CursiVision,D:\Common\include,D:\Common\source,D:\CursiVision Toolbox;D:\CursiVision-Signature-Capture-Devices,D:\Properties;D:\PdfEnabler;D:\Postscript" "cs;cpp;h;rc"
//"D:\Senteon\Interceptor,D:\Senteon\Windows,-D:\Senteon\Interceptor\SMIntercept\SenteonVHD\imdisk"

extern "C" long countLines(char *pszDirectory,char *pszExtension);

extern "C" int main(int argc,char *argv[]) {

   if ( argc < 3 ) {
      printf("\nUsage: count <initial directories,',' separated> \"<extensions, ',' separated>\"");
      getch();
      return 0;
   }

   char szDirectory[MAX_PATH];

   std::list<char *> rootDirectories;
   std::list<char *> extensions;

   strcpy(szDirectory,argv[2]);

   char *p = strtok(szDirectory,",;");

   while ( p ) {
      char *px = new char[16];
      memset(px,0,16 * sizeof(char));
      strcpy(px,p);
      extensions.insert(extensions.end(),px);
      p = strtok(NULL,",;");
   }

   strcpy(szDirectory,argv[1]);

   p = strtok(szDirectory,",;");

   while ( p ) {
      char *px = new char[256];
      memset(px,0,256 * sizeof(char));
      strcpy(px,p);
      rootDirectories.push_back(px);
      p = strtok(NULL,",;");
   }

   long totalFiles = 0L;

   for ( char *pszRoot : rootDirectories ) {

      printf("\nDir: %s\n",pszRoot);

      long multiplier = 1;
      long startIndex = 0;
      if ( pszRoot[0] == '-' ) {
         multiplier = -1;
         startIndex = 1;
      }
      for ( std::list<char *>::iterator it = extensions.begin(); it != extensions.end(); it++ ) {
         long interimCount = countLines(&pszRoot[startIndex],(*it));
         printf("%s: %ld in %ld files\n",(*it),interimCount,countFiles);
         totalFiles += multiplier * countFiles;
         countFiles = 0L;
         count += multiplier * interimCount;
      }

   }

   printf("\nCount: %ld in %ld files",count,totalFiles);

   getch();

   return 0;
   }

   extern "C" long countLines(char *pszDirectory,char *pszExtension) {

   WIN32_FIND_DATA findFileData = {0};

   char szFilePattern[4096];

   sprintf(szFilePattern,"%s\\*.*",pszDirectory);

   HANDLE filesHandle = FindFirstFile(szFilePattern,&findFileData);
   
   long count = 0L;

   while ( ! ( INVALID_HANDLE_VALUE == filesHandle ) ) {

      if ( findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY ) {
         if ( ! ( '.' == findFileData.cFileName[0] ) ) {
            sprintf(szFilePattern,"%s\\%s",pszDirectory,findFileData.cFileName);
            count += countLines(szFilePattern,pszExtension);
         }
         if ( ! FindNextFile(filesHandle,&findFileData) )
            break;
         continue;
      }

      char *p = strrchr(findFileData.cFileName,'.');
      
      if ( p && 0 == stricmp(p + 1,pszExtension) ) {

         countFiles++;

         sprintf(szFilePattern,"%s\\%s",pszDirectory,findFileData.cFileName);

         FILE *fX = fopen(szFilePattern,"rt");

         while ( fgets(szInput,4096,fX) )
            count++;

         fclose(fX);

      }

      if ( ! FindNextFile(filesHandle,&findFileData) )
         break;

   }

   return count;
   }