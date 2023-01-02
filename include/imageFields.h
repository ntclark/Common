#pragma once

#include <olectl.h>

#include "CursiVisionGlobal.h"

#include <unordered_map>

    struct dateArea;
    struct signatureArea;

    enum imageFieldType {
        imageFieldLocator = 0, // for non-default profiles, uses "when field found - then a particular signature field activate"
        imageFieldCompanionLocator = 1 // for the default profile. Any time the field is found, a signature field is created a given distance away
    };

    struct imageField {

        imageField(GUID id = GUID_NULL) {

            if ( GUID_NULL == id )
                CoCreateGuid(&ID);
            else 
                ID = id;

            imageFieldList.push_back(this);

        }

        ~imageField();

        void addSignatureArea(signatureArea *psa);
        void addDateArea(dateArea *pda);

        signatureArea *SignatureArea(GUID id) {
            return signatureAreas[id];
        }

        dateArea *DateArea(GUID id) {
            return dateAreas[id];
        }

        RECT pdfRect{0,0,0,0};
        POINTL companionSignatureOffset{0,0};
        SIZEL companionSignatureSize{0,0};
        POINTL companionDateOffset{0,0};
        SIZEL companionDateSize{0,0};
        imageFieldType type{imageFieldType::imageFieldLocator};
        char szCompanionDescription[128]{""};
        long page{-1L};
        char label[32]{0};
        char fileName[MAX_PATH]{0};
        SIZEL sourceDocumentPixels{0,0};
        char sourceDocumentFileName[MAX_PATH]{0};
        char signatureAreaDataFile[MAX_PATH]{0};

        GUID ID{GUID_NULL};
        bool wasFound{false};
        long foundCount{0};
        long foundPage[64]{-1L};
        RECT rcFound[64]{0,0,0,0};
        HBITMAP hBitmapFound{NULL};

        std::unordered_map<GUID,dateArea *,guidHash> dateAreas;
        std::unordered_map<GUID,signatureArea *,guidHash> signatureAreas;

        static void clearData() {

            while ( 0 < imageFieldList.size() )
                delete *imageFieldList.begin();

            imageFieldList.clear();
        }

        void saveToFile(FILE *fData) {
            fwrite((BYTE *)&ID,sizeof(GUID),1,fData);
            fwrite((BYTE *)&pdfRect,1,(offsetof(imageField,signatureAreaDataFile) - offsetof(imageField,pdfRect)) + sizeof(signatureAreaDataFile),fData);
            return;
        }

        static imageField *restoreFromFile(FILE *fData) {
            GUID theGuid{GUID_NULL};
            fread((BYTE *)&theGuid,sizeof(GUID),1,fData);
            imageField *pImageField = new imageField(theGuid);
            fread((BYTE *)&pImageField -> pdfRect,1,(offsetof(imageField,signatureAreaDataFile) - offsetof(imageField,pdfRect)) + sizeof(signatureAreaDataFile),fData);
            return pImageField;
        }

        static std::list<imageField *> imageFieldList;

    };

    struct gtRegion {
        gtRegion(imageField *pif,GUID id = GUID_NULL) : pImageField(pif) {
            if ( GUID_NULL == id )
                CoCreateGuid(&ID);
            else
                ID = id;
        }
        RECT rect{0,0,0,0};
        RECT pdfRect{0,0,0,0};
        char label[32]{0};
        virtual void saveToFile(FILE *fData) {
            fwrite((BYTE *)&ID,sizeof(GUID),1,fData);
            fwrite((BYTE *)&rect,sizeof(RECT),1,fData);
            fwrite((BYTE *)&pdfRect,sizeof(RECT),1,fData);
            fwrite((BYTE *)label,sizeof(label),1,fData);
        }
        virtual void loadFromFile(FILE *fData) {
            fread((BYTE *)&rect,sizeof(RECT),1,fData);
            fread((BYTE *)&pdfRect,sizeof(RECT),1,fData);
            fread((BYTE *)label,sizeof(label),1,fData);
        }
        GUID ID{GUID_NULL};
        imageField *pImageField{NULL};
    };

    struct signatureArea : gtRegion {
        signatureArea(imageField *pImageField,GUID id = GUID_NULL) : gtRegion(pImageField,id) {
            pImageField -> addSignatureArea(this);
        }
        void saveToFile(FILE *fData) {
            gtRegion::saveToFile(fData);
            fwrite((BYTE *)szDescription,sizeof(szDescription),1,fData);
        }
        static signatureArea *restoreFromFile(imageField *pImageField,FILE *fData) {
            GUID theID{GUID_NULL};
            fread((BYTE *)&theID,sizeof(GUID),1,fData);
            signatureArea *pArea = new signatureArea(pImageField,theID);
            pArea -> loadFromFile(fData);
            return pArea;
        }
        void loadFromFile(FILE *fData) {
            gtRegion::loadFromFile(fData);
            fread((BYTE *)szDescription,sizeof(szDescription),1,fData);
        }
        char szDescription[128]{""};
    };

    struct dateArea : gtRegion {
        dateArea(imageField *pImageField,GUID id = GUID_NULL) :gtRegion(pImageField,id) {
            pImageField -> addDateArea(this);
        }
        void saveToFile(FILE *fData) {
            gtRegion::saveToFile(fData);
            fwrite((BYTE *)&requiredSignatureAreaID,sizeof(GUID),1,fData);
        }
        static dateArea *restoreFromFile(imageField *pImageField,FILE *fData) {
            GUID theID{GUID_NULL};
            fread((BYTE *)&theID,sizeof(GUID),1,fData);
            dateArea *pArea = new dateArea(pImageField,theID);
            pArea -> loadFromFile(fData);
            return pArea;
        }
        void loadFromFile(FILE *fData) {
            gtRegion::loadFromFile(fData);
            fread((BYTE *)&requiredSignatureAreaID,sizeof(GUID),1,fData);
        }
        GUID requiredSignatureAreaID{GUID_NULL};
    };

