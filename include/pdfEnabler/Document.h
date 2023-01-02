
#pragma once

#include "Library.h"

#include "PdfEnabler.h"

class PdfXReference;
class PdfEncryption;

#include "Encryption.h"
#include "Page.h"
#include "Object.h"
#include "XReference.h"
#include "NumberTree.h"

class DLLEXPORT PdfDocument : public IPdfDocument, public PdfEntity {

public:

   PdfDocument(PdfEnabler *pParent);

   PdfDocument(char *pszDocumentName);

   ~PdfDocument();

   // IUnknown

   STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

   STDMETHOD_ (ULONG, AddRef)();
   STDMETHOD_ (ULONG, Release)();

   // IDispatch

   STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
   STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
   STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
   STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);

   // IPdfDocument

   STDMETHOD(Open)(BSTR bstrFileName,BSTR bstrUserPassword,BSTR bstrOwnerPassword);
   STDMETHOD(Page)(long pageNumber,char *pszPageLabel = NULL,IPdfPage **ppPage = NULL);
   STDMETHOD(PageFromLabel)(char *pszPageLabel,long *pPageNumber);
   STDMETHOD(LabelFromPage)(long pageNumber,long stringSize,char *pszPageLabel);
   STDMETHOD(Write)(BSTR bstrOutputName);
   STDMETHOD(QueryInfoSize)(long *pSize);
   STDMETHOD(QueryInfo)(char *pszBuffer);
   STDMETHOD(WriteUncompressed)(BSTR bstrOutputName);
   STDMETHOD(get_PageCount)(long *);
   STDMETHOD(UpdateNamedCount)(BSTR name,long currentCount,long maxCount);
   STDMETHOD(get_NamedCount)(BSTR name,long *pCount);
   STDMETHOD(RemoveLastAddedStream)();
   STDMETHOD(RemoveIndexedAddedStream)(long index);
   STDMETHOD(EraseLastAddedStream)();
   STDMETHOD(EraseIndexedAddedStream)(long index);
   STDMETHOD(RemoveStreamByID)(long identifier);
   STDMETHOD(get_RemovableStreams)(long *pCount);
   STDMETHOD(Seal)();
   STDMETHOD(FirstPage)(IPdfPage **ppPage);
   STDMETHOD(LastPage)(IPdfPage **ppPage);
   STDMETHOD(AddPage)(long *pPageNumber,IPdfPage **pPage);
   STDMETHOD(ReplicateStream)(long streamNumber,long newPage,POINT *pSource,POINT *pOffset,double scaleX,double scaleY);
   STDMETHOD(ParseText)(long pageNumber,HDC hdc,RECT *prcWindowsClip,void *pvIPostScriptTakeText);
   STDMETHOD(GetLastError)(char **ppszError);
   STDMETHOD(ExtractFonts)(char *pszToDirectory,char **ppszRootNamesList);

   PdfPage *GetPage(long pageNumber,char *pszPageLabel = NULL);
   long GetPageCount();
   long PageFromLabel(char *pszPageLabel);
   char *LabelFromPage(long pageNumber);

   char *ID();

   long Write(char *pszFileName);
   long WriteUncompressed(char *pszFileName);

   std::map<long,PdfObject *> * ObjectMap() { return &objectMap; };
   std::list<PdfObject *> * ObjectList() { return &objectList; };

   long NewObjectId();
   long InitialMaxObjectId() { return initialMaxObjectId; };

   void AddObject(PdfObject *);

   PdfObject *FindObjectByType(char *pszType);
   PdfObject *FindObjectById(long id);
   PdfObject *FindObjectByDictionaryEntry(char *pszDictionaryEntry);
   PdfObject *FindObjectByNamedDictionaryEntry(char *pszKeyName,char *pszValue);
   PdfObject *IndirectObject(char *pszObjectReference);

   PdfObject *SearchByIdAndFileOffset(long id,long fileOffset);

   long counterValue(char *pszCounterName);
   long incrementCounter(char *pszCounterName);

   std::list<PdfObject *> *CreateObjectListByType(char *pszType);

#if defined REMOVE_ENCRYPTION || defined REMOVE_COMPRESSION
   void RemoveEncryption();
#endif

   PdfXReference *XReference() { return pXReference; };

   long Encrypt(PdfObject *pEnryptedObject,BYTE *pInputData,long dataSize);
   long Decrypt(PdfObject *pEnryptedObject,BYTE *pInputData,long dataSize);

   void DecryptAll();
   void DecompressAll();

   void EncryptAll();
   void CompressAll();

   PdfObject *EncryptionObject() { return pEncryptionObject; };

   void InsertIntoStreamList(char *pszStreamList,char *pszValue);

private:

   void parseDocument();
   HRESULT parseText(long pageNumber,HDC hdc,RECT *prcWindowsClip,void *pvIPostScriptTakeText);

   HRESULT removeLastAddedStream(bool doRemove);
   HRESULT removeIndexedAddedStream(long index,bool doRemove);
   HRESULT removeAddedStreamByObjectID(long objectID);

   static void resetEncryptionObject() { PdfDocument::pEncryptionObject = NULL; PdfDocument::pEncryptionUtility = NULL; };

   void unpackObjectStreams();
   void repackObjectStreams();

#ifdef DUMP_DICTIONARIES
   void dumpDictionaries(char *szFilePostAmble);
#endif
#ifdef DUMP_STREAMS
   void dumpStreams(char *szFilePostAmble);
#endif
#ifdef DUMP_TRAILERS
   void dumpTrailers(char *szSourceFileName,char *szProducedFileName,char *szFilePostAmble);
#endif
#ifdef DUMP_XREF
   void dumpXRef(char *szSourceFileName,char *szFilePostAmble);
#endif

   char szFileName[MAX_PATH];

   long preambleLength;
   long initialMaxObjectId;
   bool writeUncompressed;

   std::map<long,PdfPage *> pages;
   std::map<long,PdfObject *> objectMap;
   std::list<PdfObject *> objectList;
   std::list<PdfObject *> objectStreams;

   PdfXReference *pXReference;

   PdfObject *pCatalogObject;
   PdfObject *pPageTreeRootObject;
   long pageObjectCount;
   long pageCount;
   PdfNumberTree *pPageNumberTree;

   PdfEnabler *pParent;

   long refCount;

   long walkPageObjectTreeNode(long nodeNumber);

   static char szErrorMessage[1024];

   static PdfEncryption *pEncryptionUtility;

   static PdfObject *pEncryptionObject;

};