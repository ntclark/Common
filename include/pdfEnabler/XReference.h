
#pragma once

#include "Document.h"

struct xrefEntry {
   xrefEntry(PdfObject *po) { memset(this,0,sizeof(xrefEntry)); status = 'u'; fileOffset = -1L; pObject = po; };
   long type;
   long fileOffset;
   long objectId,generationNumber;
   long objectStreamId,objectStreamIndex;
   char status;
   PdfObject *pObject;
};

struct xrefEntrySection {
   xrefEntrySection() : firstObjectId(0) {};
   xrefEntrySection(long oid) : firstObjectId(oid) {};
   ~xrefEntrySection() { for ( std::list<xrefEntry *>::iterator it = entries.begin(); it != entries.end(); it++ ) { delete (*it); } entries.clear(); };
   long firstObjectId;
   std::list<xrefEntry *> entries;
};

struct xrefEntrySubSection {
   xrefEntrySubSection() : firstObjectId(0),objectCount(0) {};
   xrefEntrySubSection(long oid,long oc) : firstObjectId(oid), objectCount(oc) {};
   long firstObjectId;
   long objectCount;
};

class PdfTrailer : public PdfEntity {

public:

   PdfTrailer(PdfDocument *pParent,BYTE *pDocumentStart);
   PdfTrailer(PdfTrailer &);

   ~PdfTrailer();

   BYTE *Value(char *pszName);
   long SetValue(char *pszKeyName,BYTE *pNewValue);

   PdfDictionary * Dictionary() { return pDictionary; };

private:

   PdfDocument *pDocument;
   PdfDictionary *pDictionary;

   std::list<xrefEntrySection *> entrySections;

   long fileOffset;
   long initialObjectCount,initialSizeValue;

   PdfTrailer *pPreviousTrailer, *pNextTrailer;

   long crossReferenceStreamObjectId;

   friend class PdfXReference;

};


class PdfCrossReferenceStream  {
private:

   PdfCrossReferenceStream(PdfObject *p);

   ~PdfCrossReferenceStream();

   PdfObject *pObject;

   std::list<xrefEntry *> entries;

   std::list<xrefEntrySubSection *> entrySubSections;

   PdfCrossReferenceStream *pPreviousXRefStream,*pNextXRefStream;

   long initialSizeValue,initialEntriesCount;
   char szInitialWArray[32];

   long maxObjectId();
   long addEntry(xrefEntry *);

   friend class PdfXReference;

};


class PdfXReference : public PdfEntity {

public:

   PdfXReference(PdfDocument *pParent,BYTE *pDocumentStart,BYTE *pDocumentEnd);
   ~PdfXReference();

   long FindEncryptionObject();

   long UnWind();
   long ReWind();

   virtual long Write(FILE *,bool writeUncompressed = false);

   long WriteObjectTable(FILE *,bool writeUncompressed = false);

   BYTE *Value(char *pszName);

   PdfObject * RootXRefObject();

   void AddObject(PdfObject *);

   long MaxObjectId();

   PdfObject *InfoObject();

#if defined REMOVE_ENCRYPTION || defined REMOVE_COMPRESSION
   void RemoveEncryption();
#endif

   void SetPostAmble(FILE *fOutput);

#ifdef DUMP_TRAILERS
   void dumpTrailers(char *pszSourceFileName,char *pszProducedFileName,FILE *fOutput);
#endif

#ifdef DUMP_XREF
   void dumpInitialXRef(BYTE *bDocument,char *szDocumentName,char *szFilePostAmble);
   void dumpXRef(BYTE *bDocument,char *szDocumentName,char *szFilePostAmble);
#endif

private:

   PdfTrailer *pTrailerForNewObjects;
   PdfCrossReferenceStream *pXRefStreamForNewObjects;

   BYTE *parseEntries(PdfTrailer *pTrailer,BYTE *pStart,BYTE *pEnd);//long *pFirstObjectId,long *pObjectCount);

   PdfDocument *pDocument;

   std::list<PdfCrossReferenceStream *> xRefObjects;

   std::list<PdfTrailer *> trailerObjects;

};
