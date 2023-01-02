
    struct doodleOptionProperties {

        //Note: Keep processingDisposition the first entry in the properties. 
        // This allows other software to read these properties as if they were
        // only the result disposition.
        //
        struct resultDisposition processingDisposition;

        char szDocumentName[MAX_PATH];
        char szSettingsFileName[MAX_PATH];
        char szParentDocumentName[MAX_PATH];
        char szParentSettingsFileName[MAX_PATH];
        char szInheritingOptionsDocumentName[MAX_PATH];
        char szInheritingOptionsFileName[MAX_PATH];
        bool useGlobalDisposition;

        VARIANT_BOOL loadSuccess;

        writingLocation theLocations[MAX_DOODLE_RECT_COUNT];

        long countRects;

        RECT dataFieldRects[MAX_TEXT_RECT_COUNT];
        long dataFieldPage[MAX_TEXT_RECT_COUNT];
        char dataFieldLabels[MAX_TEXT_RECT_COUNT][32];
        long dataFieldRequired[MAX_TEXT_RECT_COUNT];
        long countDataFields;

        RECT autoDateRects[MAX_DOODLE_RECT_COUNT];
        long autoDatePage[MAX_DOODLE_RECT_COUNT];
        BOOL autoDateIsApplied[MAX_DOODLE_RECT_COUNT];
        long countAutoDateRects;
   
        bool isPrintingProfileDoodleOptions;

    };
