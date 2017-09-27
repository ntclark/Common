
#pragma once

#define MAX_DOODLE_RECT_COUNT  32

#ifdef MIDL

   typedef struct oleWritingLocation {
   long zzpdfPageNumber;
   long pdfAdobePageNumber;
   RECT documentRect;
   bool isWrittenTo;
   bool isRequestedViewSet;
   };

#else

   struct writingLocation {
//   writingLocation() { initialize(); };
   void initialize() { memset(this,0,sizeof(writingLocation)); };
   long zzpdfPageNumber;
   long pdfAdobePageNumber;
   RECT documentRect;
   bool isWrittenTo;
   bool isRequestedViewSet;
   };

#endif