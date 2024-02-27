
#pragma once

#ifdef MIDL
   typedef struct oleWritingLocation {
#else
    struct writingLocation {
        void initialize() { memset(this,0,sizeof(writingLocation)); };
#endif
        long pdfPageNumber;
        RECT documentRect;
        bool isWrittenTo;
        bool isRequestedViewSet;
        char szDescription[128];
        char szOtherInformation[32];
        UINT_PTR packageCookie;
        UINT_PTR pImageField;
   };
