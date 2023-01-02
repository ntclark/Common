
#pragma once

#include "Library.h"

#include "entity.h"
#include "Object.h"
#include "Dictionary.h"

//#include "natezlib\zlib.h"

class PdfObject;

class DLLEXPORT PdfStream : public PdfEntity {
public:

   PdfStream(PdfObject *,PdfDictionary *,BYTE *pStart,BYTE *pLast);

   ~PdfStream();

   PdfDictionary *Dictionary() { return pDictionary; };
   PdfObject *Object() { return pObject; };

   void Encrypt();
   void Decrypt();

   void Compress();
   void Decompress();

   void Compress(BYTE *pNewData,long dataSize);

   void SetUncompressed() { isUncompressed = true; };
   void SetCompressed() { isUncompressed = false; };
   void SetDecrypted() { isDecrypted = true; };

   virtual BYTE *ReallocateStorage(BYTE *pFrom,long newSize,long newOffset);

   virtual BYTE *DecompressedStorage() { Decompress(); return Storage(); };

   virtual long Write(FILE *,bool writeUncompressed = false);
   virtual long StringWrite(char *pString,bool sizeOnly);

   long WriteHex(FILE *);

   bool IsUncompressed() { return isUncompressed; };

private:

   long deflate();
   long inflate();

   PdfObject *pObject;
   PdfDictionary *pDictionary;

   bool isUncompressed;
   bool isDecrypted;

   BYTE *rawInput;
   long rawInputLength;

};

