
#pragma once

class DLLEXPORT PdfEntity {
public:

   PdfEntity(BYTE *pData,long dataSize);
   PdfEntity(EntityDelimiter,EntityScanDirection,BYTE *pStart,BYTE *pEnd);
   PdfEntity(FILE *fInput);
   PdfEntity();

   ~PdfEntity();

   BYTE *Storage() { return pData; };

   virtual BYTE *ReallocateStorage(BYTE *pFrom,long newSize,long newOffset); // !! Do not pass the Entity's storage back to this method

   virtual BYTE *DecompressedStorage() { return Storage(); };

   long Offset() { return offset; };
   long BinaryDataSize() { return dataSize; };
   char *Type();

   virtual long Write(FILE *,bool writeUncompressed = false);
   virtual long StringWrite(char *,bool sizeOnly);

   void takeFile(FILE *);

private:

   BYTE *pData;
   long offset;
   long dataSize;

   bool isDecoded;

};
