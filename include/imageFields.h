#pragma once

#include <olectl.h>

#include "CursiVisionGlobal.h"

#include <unordered_map>

class globalTemplateDoodleOptions;

    enum imageFieldType {
        imageFieldFinder = 0,               // Simple finder, used to help select the appropriate profile.
        imageFieldCompanionSelector = 1,    // for non-default profiles. When all fields of this and imageFieldSelector are found, the profile is selected
                                            // Contains 1 signature field offset from the image and 1 optional date field also offset
        imageFieldCompanionOptional = 2,    // for the default profile, OR, optional for non-default profiles. Any time the field is found, a signature field is created at an offset 
        imageFieldPageFinder = 3,           // After a profile is selected, then each page in the document is searched for all of these fields defined. For each "found" page, all "root" fields are then searched and applied
        imageFieldAny = 99                  // Any type
    };

    struct imageFieldCore {
        imageFieldCore() {
            memset(this,0,sizeof(imageFieldCore));
            page = -1L;
        }
        RECT pdfRect{0,0,0,0};
        RECT foundPdfRect{0,0,0,0};
        long page{-1L};
        long foundPage;
        char fileName[MAX_PATH]{0};
        SIZEL sourceDocumentPixels{0,0};
        char sourceDocumentFileName[MAX_PATH]{0};
        RECT rcText{0,0,0,0};

        char szText[256 - 2 * sizeof(POINT) - sizeof(BOOL)];

        POINT sigOffset{0,0};
        POINT dateOffset{0,0};
        BOOL forceImageMatch{FALSE};
    };

    struct imageField {

        imageField(globalTemplateDoodleOptions *p,GUID id = GUID_NULL) : pParent(p) {

            if ( GUID_NULL == id )
                CoCreateGuid(&ID);
            else 
                ID = id;

            searchQuadrants[0] = true;
            searchQuadrants[1] = true;
            searchQuadrants[2] = true;
            searchQuadrants[3] = true;

            memset(foundPages,0,64 * sizeof(long));
            memset(szFailedSearchPages,0,128 * sizeof(char));

            memset(siblingImageIdOrderString,0,(MAX_TEXT_RECT_COUNT * 40) * sizeof(char));
            memset(siblingImageIDs,0,MAX_TEXT_RECT_COUNT * sizeof(GUID));
            memset(ignoreProfileIDs,0,MAX_PROFILES_IN_PACKAGE * sizeof(GUID));

            imageFieldList[pParent].push_back(this);
        }

        ~imageField();

        inline boolean IsFinder() { return type == imageFieldFinder || type == imageFieldCompanionSelector; }
        inline boolean IsCompanion() { return type == imageFieldCompanionSelector || type == imageFieldCompanionOptional; }
        inline boolean IsForRootProfile() { return type = imageFieldCompanionOptional; }
        inline long FrameSizePixels() { if ( ! isPositional ) return 0; return IMAGE_FRAME_SIZE_PIXELS; }

        static imageField *GetImageField(globalTemplateDoodleOptions *pGTDO,GUID *pId) {
            for ( imageField *pField : imageFieldList[pGTDO] ) {
                if ( pField -> ID == *pId) {
                    return pField;
                }
            }
            return NULL;
        }

        void initializeFind(boolean wipeLastPage = true) {
            wasFound = false;
            foundCount = 0;
            if ( wipeLastPage ) {
                pageLastFound = 0;
                score = 0.0;
            }
            selectedAlternateIndex = -1L;
            memset(foundPages,0,64 * sizeof(long));
            memset(szFailedSearchPages,0,128 * sizeof(char));
        }

        POINTL companionSignatureOffset{0,0};                       // <- Start of file based storage (inclusive)
        SIZEL companionSignatureSize{0,0};
        POINTL companionDateOffset{0,0};
        SIZEL companionDateSize{0,0};
        imageFieldType type{imageFieldType::imageFieldFinder};
        boolean searchQuadrants[4];
        boolean widenSearchOnFindFailure{false};
        char szCompanionDescription[127]{""};
        char label[32]{0};

        imageFieldCore mainCore;
        imageFieldCore alternateCores[MAX_IMAGE_FIELD_ALTERNATES];

        char imageDataFile[MAX_PATH]{0};

        long pageLastFound{0};

        double score{0.0};
        boolean isPositional{false};
        char szTextIndexes[256];

        GUID siblingImageIDs[MAX_TEXT_RECT_COUNT]{GUID_NULL};
        char siblingImageIdOrderString[MAX_TEXT_RECT_COUNT * 40]{'\0'};
        GUID ignoreProfileIDs[MAX_PROFILES_IN_PACKAGE]{GUID_NULL};

#define INNER_EXPANSION_SPACE   10240

        GUID signerTypeId{GUID_NULL};
        boolean useDefaultSignatureAreaSize{true};

#define EXPANSION_SPACE 32768 - INNER_EXPANSION_SPACE

        BYTE spaceForExpansion[EXPANSION_SPACE];                      // <- End of file based storage (inclusive)

        GUID ID{GUID_NULL};
        globalTemplateDoodleOptions *pParent{NULL};

        boolean wasFound{false};
        long foundCount{0};
        long foundPages[64];
        long selectedAlternateIndex{-1L};
        char szFailedSearchPages[128];

        static void clearFields(globalTemplateDoodleOptions *pp) {
            while ( 0 < imageFieldList[pp].size() )
                delete *imageFieldList[pp].begin();
            imageFieldList[pp].clear();
        }

        void saveToFile(FILE *fData) {
            fwrite((BYTE *)&ID,1,sizeof(GUID),fData);
            memset((BYTE *)spaceForExpansion,0,EXPANSION_SPACE);
            long bytesWritten = (long)fwrite((BYTE *)&companionSignatureOffset,1,(offsetof(imageField,spaceForExpansion) - offsetof(imageField,companionSignatureOffset)) + EXPANSION_SPACE,fData);
            return;
        }

        static imageField *restoreFromFile(globalTemplateDoodleOptions *pp,FILE *fData) {
            GUID theGuid{GUID_NULL};
            long bytesRead = (long)fread((BYTE *)&theGuid,1,sizeof(GUID),fData);
            imageField *pImageField = new imageField(pp,theGuid);
            bytesRead = (long)fread((BYTE *)&pImageField -> companionSignatureOffset,1,(offsetof(imageField,spaceForExpansion) - offsetof(imageField,companionSignatureOffset)) + EXPANSION_SPACE,fData);
            if ( 0 == bytesRead ) {
                delete pImageField;
                return NULL;
            }
            return pImageField;
        }

        static std::map<globalTemplateDoodleOptions *,std::list<imageField *>> imageFieldList;

        struct listRowControls {
            listRowControls() { memset(szText,0,sizeof(szText)); }
            HWND hwndCheck{NULL};
            HWND hwndOrder{NULL};
            HWND hwndProps{NULL};
            GUID *pID{NULL};
            char szText[64];
            boolean isUsed{false};
            long rowIndex{-1L};
            long useColumn{-1L};
            long nameColumn{-1L};
            long propsColumn{-1L};
            long orderColumn{-1L};
            long pageColumn{-1L};
            long scoreColumn{-1L};
            void *pObject{NULL};
        } buttonPairs[64];

        static std::list<HWND> propertyWindows;

        static HWND hwndProperties() { if ( 0 == propertyWindows.size() ) return NULL; return propertyWindows.back(); }

        HWND hwndSelectorFieldList{NULL};
        HWND hwndProfileFilterList{NULL};
    
        void replaceImage(HWND);

        static LRESULT CALLBACK propertiesHandler(HWND,UINT,WPARAM,LPARAM);
        static LRESULT CALLBACK alternativesHandler(HWND,UINT,WPARAM,LPARAM);
        static LRESULT CALLBACK inspectionHandler(HWND,UINT,WPARAM,LPARAM);

    };