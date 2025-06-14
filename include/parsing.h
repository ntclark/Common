#pragma once

#define PSZ_WHITE_SPACE_AND_EOL " \t\x0A\x0D\x0C"
#define PSZ_WHITE_SPACE " \t\x0C"

#define ADVANCE_THRU_END_OF_LINE(p,ptrLineNo)   \
{                                               \
while ( ! ( *p == 0x0A ) && ! ( *p == 0x0D ) )  \
   p++;                                         \
long count[]{0,0};                              \
while ( 0x0A == *p || 0x0D == *p ) {            \
   count[0x0A == *p ? 0 : 1]++;                 \
   p++;                                         \
}                                               \
*ptrLineNo += max(count[0],count[1]);           \
}

#define RETREAT_TO_BOL(p,pLimit)                      \
while ( p > (pLimit) && *p != 0x0A && *p != 0x0D )    \
   p--;                                               \
if ( p >= (pLimit) ) p++;                             \
if ( p >= (pLimit) && ( *p == 0x0A || *p == 0x0D ) )  \
   p++;

#define ADVANCE_THRU_SPACE(p) \
{\
while ( *p && ' ' == *p ) ) {\
   p++;\
} \
}

#define ADVANCE_THRU_WHITE_SPACE(p) \
{                                   \
while ( *p && strchr(PSZ_WHITE_SPACE,*p) ) { \
   p++;  \
}        \
}

#define ADVANCE_TO_WHITE_SPACE(p)         \
{                                         \
while ( *p && ! strchr(PSZ_WHITE_SPACE,*p) )\
   p++;                                   \
}

#define ADVANCE_TO_END(p)                    \
{                                            \
while ( *p && ! strchr(PSZ_WHITE_SPACE_AND_EOL,*p) ) { \
   char *pz = (char *)p;                     \
   for ( long k = 0; 1; k++ ) {              \
      if ( ! psCollectionDelimiters[k][0] )  \
         break;                              \
      if ( 0 == strncmp(pz,psCollectionDelimiters[k],psCollectionDelimiterLength[k]) ) {   \
         pz = NULL; \
         break;     \
      }             \
   }                \
   if ( ! pz )      \
      break;        \
   pz = strchr(pszDelimiters,*p);  \
   if ( pz ) {                     \
      for ( long k = 0; 1; k++ ) { \
         if ( ! psDelimiters[k][0] ) \
            break;                   \
         if ( 0 == strncmp(pz,psDelimiters[k],psDelimiterLength[k]) ) { \
            pz = NULL;                                                  \
            break;                                                      \
         }          \
      }             \
      if ( ! pz )   \
         break;     \
   }                \
   p++;             \
}                   \
}

#define COMMENT_DELIMITER           "%"
#define DSC_DELIMITER               "%%"
#define LITERAL_DELIMITER           "/"
#define PROC_DELIMITER_BEGIN        "{"
#define PROC_DELIMITER_END          "}"
#define STRING_DELIMITER_BEGIN      "("
#define STRING_DELIMITER_END        ")"
#define HEX_STRING_DELIMITER_BEGIN  "<"
#define HEX_STRING_DELIMITER_END    ">"
#define HEX85_DELIMITER_BEGIN       "<~"
#define HEX85_DELIMITER_END         "~>"
#define DICTIONARY_DELIMITER_BEGIN  "<<"
#define DICTIONARY_DELIMITER_END    ">>"
#define ARRAY_DELIMITER_BEGIN       "["
#define ARRAY_DELIMITER_END         "]"

#define ADVANCE_THRU_EOL(p)               \
{                                         \
while ( *p != 0x0A && *p != 0x0D )        \
   p++;                                   \
if ( *p == 0x0A || *p == 0x0D )           \
   p++;                                   \
if ( *p == 0x0A || *p == 0x0D )           \
   p++;                                   \
}