
#pragma once

#include "Library.h"

#include "entity.h"
#include "element.h"

class DLLEXPORT PdfDictionary : public PdfEntity {
public:

   PdfDictionary(PdfObject *pParentObject,BYTE *pStart,long dataSize);
   PdfDictionary(PdfObject *pParentObject,BYTE *pStart,BYTE *pEnd);
   PdfDictionary(PdfDictionary &);

   ~PdfDictionary();

   PdfElement *Element(char *pszKeyName);

   BYTE *Value(char *pszKeyName);
   BYTE *DeReferencedValue(char *pszKeyName);
   PdfObject *Object(char *pszKeyName);
   long ValueSize(char *pszKeyName);
   long SetValue(char *pszKeyName,BYTE *pszValue,bool autoAdd = false);
   long SetValue(char *pszKeyName,long value,bool autoAdd = false);

   long AddValue(char *pszValue);
   long RemoveValue(char *pszKeyName);

   void SetLength(long newValue);

   PdfDictionary *GetDictionary(char *pszKeyName);

   PdfObject *Object() { return pParentObject; };

   virtual long Write(FILE *,bool writeUncompressed = false);
   virtual long StringWrite(char *,bool sizeOnly);

   void Encrypt();
   void Decrypt();

private:

   long createElements();

   bool modified;

   PdfObject *pParentObject;

   std::map<long,PdfElement *> elementMap;
   std::list<PdfElement *> elementList;

};
