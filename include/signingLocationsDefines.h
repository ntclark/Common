
   static HDC hdcCurrent = NULL;
   static HBITMAP hBitmapCurrent = NULL;

   static ISignaturePad *pSignaturePad = NULL;

   static long countEntries = 0L;

   static long mouseMenuX = 0L, mouseMenuY = 0L;
   static long oldMouseX = -1L,oldMouseY = -1L;
   static long startMouseX = -1L, startMouseY = -1L;
   static RECT rBase;
   static long candidateRectIndex = -1L;
   static long copySourceRectIndex = -1L;
   static long deleteSourceRectIndex = -1L;

   static HMENU hOptionsMenu;

   static bool commitChanges = false;

   static long rectIgnoreIndex = -1L;

   static RECT visibleRects[32];
   static long visibleRectIndexes[32];
   static long inverseVisibleRectIndexes[32];
   static long countCurrentVisibleRects;
   
   char szMessage[256];
   char szInstructions[1024];

   static writingLocation keepLocations[MAX_DOODLE_RECT_COUNT];
   static writingLocation *pCurrentLocations = NULL;

   static long countLocations = 0L;
   static bool entryDoRemember = false;
   static bool doLearn = false;
   static bool didDrag = false;

   static bool needsAdmin = false;

   static long cornerGrabIndex = -1L;

   static HWND hwndPDFPane = NULL;
   static LONG xHWNDPDFPane = 0L;
   static LONG yHWNDPDFPane = 0L;
   static LONG cxHWNDPDFPane = 0L;
   static LONG cyHWNDPDFPane = 0L;

   static WNDPROC defaultStaticHandler = NULL;
   static LRESULT pdfPaneHandler(HWND,UINT,WPARAM,LPARAM);

   static LRESULT CALLBACK signingLocationsOrderHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

   static void setLearnControls(OBJECT_WITH_PROPERTIES *pObject,HWND hwnd);
   static void drawSigningAreas(HDC,templateDocument::tdUI *);

   static HWND hwndInstructions;

   static templateDocument::tdUI *pTemplateDocumentUI = NULL;