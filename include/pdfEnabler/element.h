
#pragma once

#include "Library.h"

#include "entity.h"

class PdfObject;
class PdfDictionary;

class DLLEXPORT PdfElement : public PdfEntity {
public:

    PdfElement(PdfObject *pParentObject,PdfDictionary *pParentDictionary,BYTE *pStart,BYTE *pLast);

    ~PdfElement();

    char *Name() { return szName; };
//
// 10-21-2011: I would like to remove the "/" from the returned value but a thorough check throughout the system
// will be necessary to do so successfully.
//
#if 0
    BYTE *Value() { if ( ! pValue ) return NULL; if ( pValue[0] == '/' ) return pValue + 1; return pValue; };
#else
    BYTE *Value() { return pValue; };
#endif
    long ValueSize() { return valueSize; };

    virtual long Write(FILE *,bool writeUncompressed = false);
    virtual long StringWrite(char *,bool sizeOnly);

    void Encrypt();
    void Decrypt();

    PdfDictionary * Dictionary() { return pDictionary; };

    enum valueType {
        vtUnspecified = 0,
        vtString = 1,
        vtHexEncodedString = 2,
        vtArray = 3,
        vtDictionary = 4
    };

    enum valueSubType {
        vstUnspecified = 0,
        vstUnicode = 1
    };

    enum valueType ValueType() { return vt; };

private:

    char szName[ELEMENT_NAME_SIZE];
    BYTE *pValue;
    long valueSize;
    valueType vt;
    valueSubType vst;

    PdfObject *pParentObject;
    PdfDictionary *pParentDictionary;
    PdfDictionary *pDictionary;

};
