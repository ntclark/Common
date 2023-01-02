
#pragma once

#include "Library.h"

class DLLEXPORT PdfObject;
class DLLEXPORT PdfStream;
class DLLEXPORT PdfNumberTree;

#include "entity.h"
#include "Dictionary.h"
#include "Stream.h"
#include "element.h"

class DLLEXPORT PdfDocument;

class DLLEXPORT PdfObject : public PdfEntity {

public:

   PdfObject(PdfDocument *,BYTE *pData,long dataSize);
   PdfObject(PdfDocument *,BYTE *p,BYTE *pTop);
   PdfObject(PdfDocument *,long idNumber,long generationNumber,BYTE *pData,long dataSize);

   ~PdfObject();

   long Id() { return id; };
   long Generation() { return generation; };
   char Status() { return status; };
   long FileOffset(long sfo = -1L) { if ( -1L == sfo ) return fileOffset; fileOffset = sfo; return fileOffset; };
   long InObjectStream(long ostid = -1L) { if ( -1L != ostid ) inObjectStream = ostid; return inObjectStream; };

   virtual long Write(FILE *,bool writeUncompressed = false);
   virtual long StringWrite(char *pString,bool sizeOnly);

   PdfDocument *Document() { return pDocument; };
   PdfDictionary *Dictionary() { return pDictionary; };
   PdfStream *Stream() { return pStream; };
   PdfDictionary *Dictionary(char *pszDictionaryName);
   PdfObject *DeReferencedObject(char *pszKeyName);

   void RemoveDictionary(); 
   void RemoveStream();

   BYTE *Value(char *pszKeyName);
   BYTE *DeReferencedValue(char *pszKeyName);
   long SetValue(char *pszKeyName,BYTE *pNewValue);

   void SetPostAmble(BYTE *pData,long dataSize);
   long GetReservedPrintSize() { return reservedPrintSize; };
   void SetReservedPrintSize(long rps) { reservedPrintSize = rps; };

   long Encrypt(BYTE *pInputData = NULL,long dataSize = -1L);
   long Decrypt(BYTE *pInputData = NULL,long dataSize = -1L);

private:

   long findDictionary();
   long findStream();

   long id,generation;
   char status;
   long fileOffset;
   long inObjectStream;

   PdfDocument *pDocument;
   PdfDictionary *pDictionary;
   PdfStream *pStream;

   BYTE *postAmble;
   long postAmbleSize;
   long reservedPrintSize;

   std::list<PdfDictionary *> additionalDictionaries;

};

