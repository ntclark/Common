
#include <windows.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <tchar.h>

#include "general.h"

#include "utils.h"

#define STRCONVERT_MAXLEN      500

   int uppercase(char *s) {
   while ( *s ) { *s = (char)toupper( *s ); s++; }
   return 0;
   }
 
   int lowercase(char *s) {
   while ( *s ) { *s = (char)tolower( *s ); s++; }
   return 0;
   }
 
   char nextChar( char **expression )  {
   char c;
   if (**expression == '\0') return '\0';
 
   while ( **expression == ' ' ) *expression += 1;
   c = **expression;
   *expression += 1;
   return c;
   }
   
   int replaceChar(char c,char **expression) {
   *expression -= 1;
   **expression = c;
   return 0;
   }
 
   int trim(char *instring) {
   char *c = instring;
 
   while ( *c && (*c == ' ' || *c == ',') ) c += 1;
 
   if ( !*c ) return (int)(c - instring);
   if ( c != instring ) strcpy(instring,c);
   
   c = instring + (DWORD)strlen(instring) - 1;
   while ( *c && (*c == ' ' || *c == ',') ) {
      *c = '\0';
      c -= 1;
   }
 
   return (int)(c - instring);  
   }
 
 
   char *bstrcpy(char *destination,BSTR source) {
   int n = SysStringByteLen(source);
   for ( int k = 0; k < n; k++ )
      destination[k] = (char)*(source + k);
   destination[n] = '\0';
   return destination;
   }
 
 
   char *strFromBstr(BSTR source) {
   int n = SysStringByteLen(source);
   char *destination = new char[n + 1];
   memset(destination,0,(n + 1)*sizeof(char));
   return bstrcpy(destination,source);
   }
 
 
   void freeStrFromBstr(char *toFree) {
   delete [] toFree;
   return;
   }
 
 
   BSTR bstrFromStr(char *source) {
   int n = (DWORD)strlen(source);
   OLECHAR *szwWide = new OLECHAR[n + 1];
   memset(szwWide,0,(n + 1) * sizeof(OLECHAR));
   MultiByteToWideChar(CP_ACP, 0, source, -1, szwWide, n);
   BSTR result = SysAllocString(szwWide);
   delete [] szwWide;
   return result;
   }
 
 
   void freeBstrFromStr(BSTR toFree) {
   SysFreeString(toFree);
   return ;
   }
 
 
   OLECHAR *convertToUnicode(char *sz) {
   static OLECHAR achW[STRCONVERT_MAXLEN];
   memset(achW,0,sizeof(achW)); 
   MultiByteToWideChar(CP_ACP, 0, sz, -1, achW, STRCONVERT_MAXLEN);  
   return achW; 
   }
   
 
   char *convertToSZAscii(OLECHAR *sz) {
   static char achA[STRCONVERT_MAXLEN]; 
   BOOL usedDefaultChar;
   memset(achA,0,sizeof(achA));
   WideCharToMultiByte(CP_ACP, 0, sz, -1, achA, STRCONVERT_MAXLEN, NULL, &usedDefaultChar);  
   return achA; 
   }


   int subtractRect(RECT* rect,RECT* minusThis,RECT* equalsThis) {
   equalsThis -> left = rect -> left - minusThis -> left;
   equalsThis -> right = rect -> right - minusThis -> left;
   equalsThis -> top = rect -> top - minusThis -> top;
   equalsThis -> bottom = rect -> bottom - minusThis -> top;
   return 0;
   }

   int errorSound(void) {
   int k;
   for ( k = 100; k < 1000; k += 50 ) Beep(k,10);
   return 0;
   }


   int errorSound2(void) {
   int k;
   for ( k = 1000; k > 100; k -= 50 ) Beep(k,10);
   return 0;
   }


   int errorSound3(void) {
   int k;
   for ( k = 0; k < 5; k++ ) Beep(2000,100);
   return 0;
   }


   int errorBlip(void) {
   Beep(50,10);
   return 0;
   }

