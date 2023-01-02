
#include <io.h>

#include "PostScript_i.h"

   struct recieveText : IPostScriptTakeText {

   recieveText(char *pszTargetFile,long pageNumber,long cxPage,long cyPage) : countFound(0) {

   fProfile = fopen(pszTargetFile,"rb+");
   if ( ! fProfile )
      fProfile = fopen(pszTargetFile,"wb+");

   BYTE bIgnore[5];
   long currentPageNumber = -1L,currentCxPage,currentCyPage,cntEntries,pageOffset = 0L;

   fseek(fProfile,0,SEEK_SET);

   while ( currentPageNumber != pageNumber ) {

      long keepPosition = ftell(fProfile);

      long rc = fscanf(fProfile,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&currentPageNumber,&currentCxPage,&currentCyPage,&cntEntries,&pageOffset);

      if ( rc < 6 ) {
         fseek(fProfile,keepPosition,SEEK_SET);
         fprintf(fProfile,"AUTO %04ld:%04ld-%04ld",pageNumber,cxPage,cyPage);
         entriesCountLocation = ftell(fProfile);
         fprintf(fProfile,"%06ld-%08ld%c",0,0,0x0A);
         break;
      }

      if ( currentPageNumber == pageNumber ) {
         fseek(fProfile,keepPosition,SEEK_SET);
         fprintf(fProfile,"AUTO %04ld:%04ld-%04ld",pageNumber,cxPage,cyPage);
         entriesCountLocation = ftell(fProfile);
         fprintf(fProfile,"%06ld-%08ld%c",0,0,0x0A);
         break;
      }

      if ( currentPageNumber > pageNumber ) {
         fseek(fProfile,keepPosition,SEEK_SET);
         fprintf(fProfile,"AUTO %04ld:%04ld-%04ld",pageNumber,cxPage,cyPage);
         entriesCountLocation = ftell(fProfile);
         fprintf(fProfile,"%06ld-%08ld%c",0,0,0x0A);
         break;
      }

      fseek(fProfile,pageOffset,SEEK_SET);

   }
   return;
   };
      
   HRESULT __stdcall TakeText(RECT *pRectPDF,char *pszText) {
//
//NTC: TODO: 09-16-2014. It would be better to send the length of the text along with the text.
// Binary characters can be sent in here, and whether a '\0' character might be recieved is unknown.
//
   long cb = sprintf(szOutput,"%04ld,%04ld,%04ld,%04ld:%04ld%s%c",
                        pRectPDF -> left,pRectPDF -> bottom,pRectPDF -> right,pRectPDF -> top,(long)strlen(pszText),pszText,0x0A);
   fwrite(szOutput,cb,1,fProfile);
   countFound++;
   return S_OK;
   }

   void close() { 
   long nextPageOffset = ftell(fProfile);
   fseek(fProfile,entriesCountLocation,SEEK_SET);
   fprintf(fProfile,"%06ld-%08ld%c",countFound,nextPageOffset,0x0A);
   _chsize(_fileno(fProfile),nextPageOffset + 1);
   fclose(fProfile); 
   return;
   };

   long countFound;
   long entriesCountLocation;
   FILE *fProfile;
   char szOutput[1024];
   };