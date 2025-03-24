
#pragma once

#pragma warning(disable:4786)
#pragma warning(disable:4275)
#pragma warning(disable:4251)

#include <windows.h>

#include <map>
#include <list>

#define DEFLATOR_CHUNK_SIZE 65536
//#define DEFLATOR_CHUNK_SIZE 16386

#define CR_AFTER_OBJECT
#define HARD_RETURN_AFTER_OBJECT

#define DOUBLE_EMBED

//#define CR_BEFORE_DICTIONARY
//#define CR_AFTER_DICTIONARY

//#define CR_BEFORE_STREAM
//#define USE_INPUT_COMPRESSION

#define REFERENCE_TO_NONLOADED_OBJECT  "<notloaded>"

enum EntityDelimiter {
   edObject = 0,
   edDictionary = 1,
   edStream = 2,
   edElement = 3,
   edXReference = 4,
   edTrailer = 5,
   edArray = 6,
   edString = 7,
   edHexEncodedString = 8,
   edCount = 9
};

enum EntityScanDirection {
   esdScanUp = 0,
   esdScanDown = 1
};

enum EntityDelimiterEnd {
   edeStart = 0,
   edeEnd = 1
};

#include "delimiters.h"

class DLLEXPORT PdfUtility {

public:

   PdfUtility();

   BYTE *ScanObject(EntityDelimiter,BYTE *pFrom,BYTE *pEnd,long *lengthFound);

   BYTE *ScanDelimiter(EntityDelimiter,EntityScanDirection,EntityDelimiterEnd,BYTE *pFrom,BYTE *pEnd);
   long HashCode(char *pszInput);
   long IntegerValue(char *pszValue);
   long IntegerValueFromReferenceArray(char *pszValue,long oneBasedIndex);
   long IntegerValueFromArray(char *pszValue,long oneBasedIndex);
   char *StringValueFromArray(char *pszValue,long oneBasedIndex);
   long ArraySize(char *pszValue);
   void ASCIIHexDecodeInPlace(char *pszInput);
   void ASCIIHexEncode(char *pszInput,long valueSize,char **ppszResult);
   void UnescapeInPlace(BYTE *pInput,long *pCntBytes);
   bool IsArray(char *pszValue);
   bool IsIndirect(char *pszObjectId);

   long deflate(BYTE *pSource,long initialSize,BYTE **ppResult,long predictor = 1L,long columns = 1L,long bitsPerComponent = 8L,long componentsPerSample = 3L);
   long inflate(BYTE *pInitialSource,long initialSize,BYTE **ppResult,long predictor = 1L,long columns = 1L,long rows = 1L,long bitsPerComponent = 8L,long componentsPerSample = 3L);

   BYTE *addToArray(BYTE *,BYTE *);
   BYTE *addReferenceToArray(long objectId,BYTE *);
   BYTE *addValueToArray(long value,BYTE *pCurrentValue);

private:

   long PaethPredictor(long a,long b,long c);

}; 

   void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszBitmapFileName);
   BYTE *BitmapBits(HBITMAP hBitmap,long *pCount,long *pWidth,long *pHeight);

   extern PdfUtility pdfUtility;

#define ELEMENT_NAME_SIZE 64

extern BYTE eol;

#define REMOVE_LINEARIZATION

// 1-28-2010: The following 4 defines didn't help to fix writing and subsequent
// loading of an AcroForm
// 2-13-2010: But the combination of REMOVE_ACROFORM and REMOVE_PERMS seems to do this correctly

//#define REMOVE_ACROFORM
//#define REMOVE_PERMS

//#define REMOVE_STRUCT_TREE_ROOT

//#define REMOVE_NAMES
//#define REMOVE_METADATA

//#define REMOVE_ENCRYPTION

//#define REMOVE_COMPRESSION

//#define REMOVE_PREDICTOR

//#define DUMP_DICTIONARIES

//#define DUMP_STREAMS
//#define DUMP_TRAILERS
//#define DUMP_XREF

#define EXPAND_W_ARRAY

#ifdef DUMP_TRAILERS
   extern char szDumpTrailers[];
#endif
