
#include <io.h>

#include "PostScript_i.h"
#include "utilities.h"

    struct recieveText : IPostScriptTakeText {

    recieveText(char *pszTargetFile,long pageNumber,long cxPage,long cyPage) : countFound(0) {

    memset(szOutput,0,sizeof(szOutput));

    fProfile = fopen(pszTargetFile,"rb+");
    if ( ! fProfile )
        fProfile = fopen(pszTargetFile,"wb+");

    BYTE bIgnore[5];
    long currentPageNumber = -1L,currentCxPage,currentCyPage,cntEntries,pageOffset = 0L;

    fseek(fProfile,0,SEEK_SET);

    while ( ! ( currentPageNumber == pageNumber ) ) {

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

    static char encodedGlyphs[]  = "00 01 02 03 04 05 06 07 08 09 0a 0b 0c 0d 0e 0f 10 11 12 13 14 15 16 17 18 19 1a 1b 1c 1d 1e 1f";
    static char glyphTranslate[] = "~0 ~1 ~2 ~3 ~4 ~5 ~6 ~7 ~8 ~9 ~a ~b ~c ~d ~e ~f `0 `1 `2 `3 `4 `5 `6 `7 `8 `9 `a `b `c `d `e `f";

    char *px = pszText;
    char *py = NULL;
    char *pz = NULL;

    for ( long k = 0; 1; k += 2, px += 2 ) {
        if ( '\0' == *px )
            break;
        char c = *(px + 2);
        *(px + 2) = '\0';
        char *py = strstr(encodedGlyphs,px);
        if ( ! ( NULL == py ) ) {
            pz = glyphTranslate + (py - encodedGlyphs);
            *px = *pz;
            *(px + 1) = *(pz + 1);
        }
        *(px + 2) = c;
    }

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

    long countFound{0};
    long entriesCountLocation{0};
    FILE *fProfile{NULL};

    char szOutput[1024];

    };