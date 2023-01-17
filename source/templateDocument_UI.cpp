
#include "templateDocument.h"

#include "drawBoxDefines.h"
#include "utilities.h"

    extern HMODULE hModule;
    static bool isRegistered = false;
    static long oldPageNumber = -1L;

    templateDocument::tdUI::tdUI(templateDocument *pp)  {
    pParent = pp;
    memset(szDocumentRectsPageNumbers,0,sizeof(szDocumentRectsPageNumbers));
    return;
    }


    templateDocument::tdUI::~tdUI() {

    for ( std::pair<long,HDC> p : pdfPageHDCs ) {
        HBITMAP hbm = CreateCompatibleBitmap(p.second,1,1);
        DeleteObject(SelectObject(p.second,hbm));
        pdfPageHBITMAPs.erase(p.first);
        DeleteDC(p.second);
        DeleteObject(hbm);
    }

    pdfPageHDCs.clear();
    pdfPageHBITMAPs.clear();

    std::list<pageArea *> toDelete;

    for ( pageArea *pArea : pdfPageAreaBitmaps ) {
        HBITMAP hbm = CreateCompatibleBitmap(pArea -> hdc,1,1);
        DeleteObject(SelectObject(pArea -> hdc,hbm));
        toDelete.push_back(pArea);
        DeleteObject(hbm);
        DeleteDC(pArea -> hdc);
        delete pArea;
    }

    for ( pageArea *pArea : toDelete )
        pdfPageAreaBitmaps.remove(pArea);

    toDelete.clear();
    pdfPageAreaBitmaps.clear();

    HiliteTextAreas(false);

    if ( pIPDFiumControl ) 
        releasePDFiumControl();

    if ( hwndPane )
        DestroyWindow(hwndPane);

    hwndPane = NULL;

    if ( pDocumentRects )
        HeapFree(GetProcessHeap(),0L,pDocumentRects);

    if ( pDocumentText )
        HeapFree(GetProcessHeap(),0L,pDocumentText);

    if ( pDocumentPages )
        HeapFree(GetProcessHeap(),0L,pDocumentPages);

    pDocumentRects = NULL;
    pDocumentText = NULL;
    pDocumentPages = NULL;

    if ( prcPDFSpecificPagePixels )
        delete [] prcPDFSpecificPagePixels;

    return;
    }


    void templateDocument::tdUI::createView(HWND hwndP,long x,long y,bool generateFields,void (*pcp)(HDC,templateDocument::tdUI *),void (*ppn)(long)) {

    parentOffsetX = x;
    parentOffsetY = y;

    pClientPaint = pcp;
    pClientPageChanged = ppn;

    generateTextFields = generateFields;

    if ( hwndPane ) 
        return;

    hwndParent = hwndP;

    if ( ! isRegistered ) {

        isRegistered = 1L;

        WNDCLASS gClass;
      
        memset(&gClass,0,sizeof(WNDCLASS));

        gClass.style = CS_BYTEALIGNCLIENT | CS_BYTEALIGNWINDOW | CS_OWNDC;
        gClass.lpfnWndProc = templateDocument::tdUI::noPaintHandler;
        gClass.cbClsExtra = 32;
        gClass.cbWndExtra = 32;
        gClass.hInstance = hModule;
        gClass.hIcon = NULL;
        gClass.hCursor = NULL;
        gClass.hbrBackground = 0;
        gClass.lpszMenuName = NULL;
        gClass.lpszClassName = "paneHandler";

        RegisterClass(&gClass);

    }

    hwndPane = CreateWindowEx(0,"paneHandler","",WS_CHILD | WS_VISIBLE,parentOffsetX,parentOffsetY,0,0,hwndParent,NULL,hModule,(void *)this);

    if ( ! pParent -> pszDocumentName ) 
        return;

    setupPDFiumControl();

    setURL(pParent -> pszDocumentName);

    prcPDFSpecificPagePixels = new RECT[PDFPageCount()];

    return;
    }


    void templateDocument::tdUI::setupPDFiumControl() {

    if ( pIOleInPlaceFrame_HTML_Host )
        return;

    pIOleInPlaceFrame_HTML_Host = new _IOleInPlaceFrame(this,hwndPane);
    pIOleInPlaceSite_HTML_Host = new _IOleInPlaceSite(this,pIOleInPlaceFrame_HTML_Host);
    pIOleClientSite_HTML_Host = new _IOleClientSite(this,pIOleInPlaceSite_HTML_Host,pIOleInPlaceFrame_HTML_Host);
    pIOleDocumentSite_HTML_Host = new _IOleDocumentSite(this,pIOleClientSite_HTML_Host);

    CoCreateInstance(CLSID_PDFiumControl,NULL,CLSCTX_ALL,IID_IPDFiumControl,reinterpret_cast<void **>(&pIPDFiumControl));

    pIPDFiumControl -> QueryInterface(IID_IOleObject,reinterpret_cast<void **>(&pIOleObject_HTML));

    HRESULT rc =  pIOleObject_HTML -> QueryInterface(IID_IOleInPlaceObject,reinterpret_cast<void **>(&pIOleInPlaceObject_HTML));

    pIOleObject_HTML -> SetClientSite(pIOleClientSite_HTML_Host);

    pDWebBrowserEvents_HTML = new _DWebBrowserEvents2(this);

    pIConnectionPointContainer_HTML = new _IConnectionPointContainer(this);

    IUnknown *pIUnknown = NULL;

    pDWebBrowserEvents_HTML -> QueryInterface(IID_IUnknown,reinterpret_cast<void **>(&pIUnknown));

    IConnectionPointContainer *pIConnectionPointContainer = NULL;

    pIPDFiumControl -> QueryInterface(IID_IConnectionPointContainer,reinterpret_cast<void**>(&pIConnectionPointContainer));

    if ( pIConnectionPointContainer ) {

        pIConnectionPointContainer -> FindConnectionPoint(DIID_DWebBrowserEvents2,&pIConnectionPoint_HTML);

        if ( pIConnectionPoint_HTML ) 
            pIConnectionPoint_HTML -> Advise(pIUnknown,&connectionCookie_HTML);

        pIPDFiumControlEvents = new _IPDFiumControlEvents(this);

        pIConnectionPointContainer -> FindConnectionPoint(IID_IPDFiumControlEvents,&pIConnectionPoint_PDFiumControlEvents);

        if ( pIConnectionPoint_PDFiumControlEvents ) 
            pIConnectionPoint_PDFiumControlEvents -> Advise(pIUnknown,&connectionCookie_PDFiumControlEvents);

        pIConnectionPointContainer -> Release();

    }

    pIUnknown -> Release();
   
    return;
    }


    void templateDocument::tdUI::setURL(char *pszDocument) {

    size();

    long n = (DWORD)strlen(pszDocument) + 1;

    BSTR bstrURL = SysAllocStringLen(NULL,n);

    MultiByteToWideChar(CP_ACP,0,pszDocument,-1,bstrURL,n);

    LOGBRUSH logBrush;

    GetObject(GetSysColorBrush(COLOR_WINDOW + 1),sizeof(LOGBRUSH),&logBrush);

    pIPDFiumControl -> DisplayDocument(logBrush.lbColor,bstrURL,0);

    SysFreeString(bstrURL);

    return;
    }


    void templateDocument::tdUI::releasePDFiumControl() {

    if ( pIConnectionPoint_HTML ) {
        pIConnectionPoint_HTML -> Unadvise(connectionCookie_HTML);
        pIConnectionPoint_HTML -> Release();
        pIConnectionPoint_HTML = NULL;
    }

    if ( pIConnectionPoint_PDFiumControlEvents ) {
        pIConnectionPoint_PDFiumControlEvents -> Unadvise(connectionCookie_PDFiumControlEvents);
        pIConnectionPoint_PDFiumControlEvents -> Release();
        pIConnectionPoint_PDFiumControlEvents = NULL;
    }

    pIOleObject_HTML -> Close(OLECLOSE_NOSAVE);

    pIOleObject_HTML -> SetClientSite(NULL);

    pIOleInPlaceObject_HTML -> Release();

    if ( pIOleInPlaceActiveObject_HTML )
        pIOleInPlaceActiveObject_HTML -> Release();

    pIOleInPlaceActiveObject_HTML = NULL;

    pIOleObject_HTML -> Release();
    pIOleObject_HTML = NULL;

    pIPDFiumControl -> Cleanup();
    pIPDFiumControl -> FinalRelease();
    pIPDFiumControl = NULL;

    return;
    }


    HDC templateDocument::tdUI::pdfDC(long atY) {
    return pdfPageDC(currentPageNumber(atY));
    }


    HDC templateDocument::tdUI::pdfPageDC(long pageNumber) {

    HDC hdcTest = pdfPageHDCs[pageNumber];

    if ( hdcTest )
        return hdcTest;

    hdcTest = CreateCompatibleDC(NULL);

    HBITMAP hbmPage;

    pIPDFiumControl -> get_PDFPageHBITMAP(pageNumber,&hbmPage);

    SelectObject(hdcTest,hbmPage);

    pdfPageHBITMAPs[pageNumber] = hbmPage;
    pdfPageHDCs[pageNumber] = hdcTest;

    return pdfPageHDCs[pageNumber];
    }


    void templateDocument::tdUI::pdfDCRelease(HDC hdc) {

    for ( std::pair<long,HDC> p : pdfPageHDCs ) {
        if ( p.second == hdc ) {
            HBITMAP hbm = CreateCompatibleBitmap(hdc,1,1);
            DeleteObject(SelectObject(hdc,hbm));
            pdfPageHBITMAPs.erase(p.first);
            DeleteObject(hbm);
            DeleteDC(hdc);
            return;
        }
    }

    for ( pageArea *pArea : pdfPageAreaBitmaps ) {
        if ( pArea -> hdc == hdc ) {
            HBITMAP hbm = CreateCompatibleBitmap(hdc,1,1);
            DeleteObject(SelectObject(hdc,hbm));
            pdfPageAreaBitmaps.remove(pArea);
            delete pArea;
            DeleteObject(hbm);
            DeleteDC(hdc);
            return;
        }
    }

    return;
    }


    HDC templateDocument::tdUI::pdfDCArea(long pageNumber,RECT *prcPixels) {

    for ( pageArea *pa : pdfPageAreaBitmaps ) {
        if ( memcmp(&pa -> rcArea,prcPixels,sizeof(RECT)) )
            continue;
        if ( ! ( pa -> pageNumber == pageNumber ) )
            continue;
        return pa -> hdc;
    }

    HDC hdc = CreateCompatibleDC(NULL);

    HBITMAP hbmPage;

    RECT rc = *prcPixels;

    rc.left -= prcPDFSpecificPagePixels[pageNumber - 1].left;
    rc.right -= prcPDFSpecificPagePixels[pageNumber - 1].left;
    rc.top -= prcPDFSpecificPagePixels[pageNumber - 1].top;
    rc.bottom -= prcPDFSpecificPagePixels[pageNumber - 1].top;

    pIPDFiumControl -> get_PDFPageHBITMAPFromAreaPixels(pageNumber,&rc,NULL,&hbmPage);

    SelectObject(hdc,hbmPage);

    pageArea *pa = new pageArea();
    pa -> hdc = hdc;
    pa -> hBitmap = hbmPage;
    pa -> rcArea = *prcPixels;
    pa -> pageNumber = pageNumber;
    pdfPageAreaBitmaps.push_back(pa);

    return pa -> hdc;
    }


    HBITMAP templateDocument::tdUI::pdfHBitmap(long pageNumber) {
    HBITMAP hbm;
    pIPDFiumControl -> get_PDFPageHBITMAP(pageNumber,&hbm);
    return hbm;
    }


    void templateDocument::tdUI::releaseView() {
    pParent -> releaseView(hwndParent);
    return;
    }


    void templateDocument::tdUI::size() {

    RECT rcParent{0};

    GetWindowRect(hwndParent,&rcParent);

    double aspectRatio = (double)pParent -> PDFPageWidth() / (double)pParent -> PDFPageHeight();

    cxHTML = rcParent.right - rcParent.left - 2 * parentOffsetX;
    cyHTML = (long)((double)cxHTML / aspectRatio);
    long cyMaxHTML = rcParent.bottom - rcParent.top - parentOffsetY - parentOffsetX;

    if ( cyHTML > cyMaxHTML ) {
        cyHTML = rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY;
        cxHTML = (long)((double)cyHTML * aspectRatio);
    }

    long x = ((rcParent.right - rcParent.left) - cxHTML ) / 2;
    long y = parentOffsetY + ((rcParent.bottom - rcParent.top - parentOffsetX - parentOffsetY) - cyHTML ) / 2;

    SetWindowPos(hwndPane,HWND_TOP,x,y,cxHTML,cyHTML,0L);

    RECT rcAdjust = {0};

    AdjustWindowRectEx(&rcAdjust,(DWORD)GetWindowLongPtr(hwndPane,GWL_STYLE),FALSE,(DWORD)GetWindowLongPtr(hwndPane,GWL_EXSTYLE));

    cxHTML -= (rcAdjust.right - rcAdjust.left);
    cyHTML -= (rcAdjust.bottom - rcAdjust.top);

    rcHTML.left = 0;
    rcHTML.top = 0;
    rcHTML.right = cxHTML;
    rcHTML.bottom = cyHTML;

    rcPageParentCoordinates.left = x;
    rcPageParentCoordinates.right = x + cxHTML;
    rcPageParentCoordinates.top = y;
    rcPageParentCoordinates.bottom = y + cyHTML;

    long pageNumber;

    if ( E_UNEXPECTED == pIPDFiumControl -> get_PDFPageInView(&pageNumber) ) {
        // The page is not resolved yet
        if ( pIOleInPlaceObject_HTML ) 
            pIOleInPlaceObject_HTML -> SetObjectRects(&rcHTML,&rcHTML);
        return;
    }

    pIPDFiumControl -> get_PDFPageXPixelsInView(pageNumber,&ptlPDFUpperLeft.x);

     long reportedY = 0L;

    pIPDFiumControl -> get_PDFPageYPixelsInView(pageNumber,&reportedY);

    ptlPDFUpperLeft.y = max(0,reportedY);

    long cx,cy;

    pIPDFiumControl -> get_PDFPageWidthPixels(pageNumber,&cx);
    pIPDFiumControl -> get_PDFPageHeightPixels(pageNumber,&cy);

    //
    //NTC: 10-09-2017: I am not sure what the "2" is, MSHTML seems to report that it's window is
    // 2 pixels in and down from the top of it's host window. I can find nothing related to 
    // window styles (WS_EX_CLIENTEDGE, for example), that is accounting for these 2 pixels.
    //

#if 1
    rcPDFPagePixels.left = ptlPDFUpperLeft.x + 2;
    rcPDFPagePixels.top = reportedY + 2;
#else
    rcPDFPagePixels.left = ptlPDFUpperLeft.x;
    rcPDFPagePixels.top = ptlPDFUpperLeft.y;
#endif
    rcPDFPagePixels.right = ptlPDFUpperLeft.x + cx;
    rcPDFPagePixels.bottom = reportedY + 2 + cy;

    //
    //NTC: 10-12-2017: The ..InView rect is that portion of the page that is visible in the current window.
    // use the ..InView rect to check whether the mouse is over the page.
    //
    // The PDFPagePixels rect may reflect that the top of the document is above the top of the view window
    // and therefore may have a negative "top" value.
    //

    rcPDFPagePixelsInView.left = rcPDFPagePixels.left;
    rcPDFPagePixelsInView.top = ptlPDFUpperLeft.y + 2;

    rcPDFPagePixelsInView.right = rcPDFPagePixels.right;
    rcPDFPagePixelsInView.bottom = rcPDFPagePixels.bottom;

    rcPDFPagePixelsInHost.left = rcPageParentCoordinates.left + rcPDFPagePixelsInView.left;
    rcPDFPagePixelsInHost.top = rcPageParentCoordinates.top + rcPDFPagePixelsInView.top;

    rcPDFPagePixelsInHost.right = rcPDFPagePixelsInHost.left + cx;
    rcPDFPagePixelsInHost.bottom = rcPDFPagePixelsInHost.top + cy;

    scaleToPixels = (double)cy / (double)(pParent -> PDFPageHeight());

    if ( 1 < pageNumber ) {

        POINTL ptlPriorPageUpperLeft{0L,0L};

        pIPDFiumControl -> get_PDFPageXPixelsInView(pageNumber - 1,&ptlPriorPageUpperLeft.x);
        long reportedYPriorPage = 0L;
        pIPDFiumControl -> get_PDFPageYPixelsInView(pageNumber - 1,&reportedYPriorPage);

        prcPDFSpecificPagePixels[pageNumber - 2].left = ptlPriorPageUpperLeft.x + 2;
        prcPDFSpecificPagePixels[pageNumber - 2].top = reportedYPriorPage + 2;
        prcPDFSpecificPagePixels[pageNumber - 2].right = ptlPriorPageUpperLeft.x + cx;
        prcPDFSpecificPagePixels[pageNumber - 2].bottom = reportedYPriorPage + 2 + cy;

    }

    prcPDFSpecificPagePixels[pageNumber - 1] = rcPDFPagePixels;

    if ( ! pParent -> pIPdfDocument && ! pParent -> pszProfileFileName )
        return;

    if ( pIOleInPlaceObject_HTML ) 
        pIOleInPlaceObject_HTML -> SetObjectRects(&rcHTML,&rcHTML);

    return;
    }


    LRESULT CALLBACK templateDocument::tdUI::noPaintHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam) {

    templateDocument::tdUI *pDocument = (templateDocument::tdUI *)GetWindowLongPtr(hwnd,GWLP_USERDATA);

    switch ( msg ) {

    case WM_CREATE: {
        CREATESTRUCT *pc = reinterpret_cast<CREATESTRUCT *>(lParam);
        pDocument = reinterpret_cast<templateDocument::tdUI *>(pc -> lpCreateParams);
        SetWindowLongPtr(hwnd,GWLP_USERDATA,(ULONG_PTR)pDocument);
        }
        return (LRESULT)0;

    case WM_PAINT: {
        PAINTSTRUCT ps;
        BeginPaint(hwnd,&ps);
        EndPaint(hwnd,&ps);
        }
        return (LRESULT)0L;

    case WM_SIZE: {
        if ( hwnd == pDocument -> hwndPane ) {
            SIZEL sizel{LOWORD(lParam),HIWORD(lParam)};
            SIZEL tempSizel;
            pixelsToHiMetric(&sizel,&tempSizel);
            pDocument -> pIOleObject_HTML -> SetExtent(DVASPECT_CONTENT,&tempSizel);
        }
        
        }
        return (LRESULT)0L;

    case WM_SHOWWINDOW:
        return (LRESULT)0L;

    }

    return DefWindowProc(hwnd,msg,wParam,lParam);
    }


    char *templateDocument::tdUI::pTextText(long index) {
    return &pDocumentText[index * 33];
    }


    long templateDocument::tdUI::textPage(long index) {
    return pDocumentPages[index];
    }


    RECT *templateDocument::tdUI::pTextRects(long *pCount,long **ppPageNumbers,char **ppszFieldText,long pnPassed) {

    if ( pCount )
        *pCount = countDocumentRects;

    long pageNumber = pnPassed;

    if ( -1 == pageNumber )
        pageNumber = currentPageNumber();

    if ( pCount )
        *pCount = 0L;

    char szTest[32];
    sprintf_s<32>(szTest,",%ld",pageNumber);

    if ( strstr(szDocumentRectsPageNumbers,szTest) ) {
        if ( pCount )
            *pCount = countDocumentRects;
        if ( ppPageNumbers )
            *ppPageNumbers = pDocumentPages;
        if ( ppszFieldText )
            *ppszFieldText = pDocumentText;
        return pDocumentRects;
    }

    char szEntryDocumentRectsPageNumbers[512];

    strcpy(szEntryDocumentRectsPageNumbers,szDocumentRectsPageNumbers);

    memset(szDocumentRectsPageNumbers,0,sizeof(szDocumentRectsPageNumbers));

    char szTempFile[MAX_PATH];

    long countEntries = 0L;
    boolean doGenerate = false;

    if ( pParent-> pszProfileFileName ) {
        strcpy(szTempFile,pParent-> pszProfileFileName);
        FILE *fProfile = fopen(szTempFile,"rb");
        if ( ! fProfile ) 
            doGenerate = true;
        else
            fclose(fProfile);
    } else {
        strcpy(szTempFile,_tempnam(NULL,NULL));
        doGenerate = true;
    }

    if ( doGenerate ) {
        pParent -> pICursiVisionServices -> GenerateOutlines(pParent -> pszDocumentName,szTempFile,1,1,&countEntries);
        if ( 0 == countEntries ) {
            if ( ! pParent-> pszProfileFileName )
                DeleteFile(szTempFile);
            return NULL;
        }
    }

    sprintf_s<512>(szDocumentRectsPageNumbers,",1,");

    FILE *fProfile = fopen(szTempFile,"rb");

    if ( ! fProfile )
        return NULL;

    long pn,cxPage,cyPage,nextPageOffset;
    char bIgnore[5];
    char szProfileData[OUTLINES_PAGE_RECORD_SIZE + 2];
   
    long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);
   
    if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {
        fclose(fProfile);
        if ( ! pParent-> pszProfileFileName )
            DeleteFile(szTempFile);
        return NULL;
    }

    rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);

    if ( ! ( rc == 6 ) || 0 == countEntries ) {
        fclose(fProfile);
        if ( ! pParent-> pszProfileFileName )
            DeleteFile(szTempFile);
        return NULL;
    }

    long totalCount = countEntries;
    long firstOffset = nextPageOffset;

    long dataOffsets[256];
    long entryCounts[256];
    long entryPageNumbers[256];

    memset(dataOffsets,0,sizeof(dataOffsets));
    memset(entryCounts,0,sizeof(entryCounts));
    memset(entryPageNumbers,0,sizeof(entryPageNumbers));

    entryCounts[0] = countEntries;
    entryPageNumbers[0] = pn;
    dataOffsets[0] = ftell(fProfile);

    while ( ! ( pn == pageNumber ) ) {

        fseek(fProfile,nextPageOffset,SEEK_SET);

        long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

        if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {

            fclose(fProfile);

            if ( E_FAIL == pParent -> pICursiVisionServices -> GenerateOutlines(pParent -> pszDocumentName,szTempFile,pn + 1,pn + 1,&countEntries) ) {
                if ( ! pParent-> pszProfileFileName )
                    DeleteFile(szTempFile);
                return NULL;
            }

            fProfile = fopen(szTempFile,"rb");

            fseek(fProfile,nextPageOffset,SEEK_SET);

            rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

            if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {
                if ( ! pParent-> pszProfileFileName )
                    DeleteFile(szTempFile);
                return NULL;
            }

        }

        long n = (DWORD)strlen(szDocumentRectsPageNumbers);
        sprintf_s(szDocumentRectsPageNumbers + n,512 - n,",%ld",pn + 1);

        rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);

        if ( rc < 6 || 0 == nextPageOffset ) {
            fclose(fProfile);
            if ( ! pParent-> pszProfileFileName )
                DeleteFile(szTempFile);
            return NULL;
        }

        dataOffsets[pn - 1] = ftell(fProfile);
        entryCounts[pn - 1] = countEntries;
        entryPageNumbers[pn - 1] = pn;

        totalCount += countEntries;

    }

    countDocumentRects = totalCount;

    if ( pCount )
        *pCount = countDocumentRects;

    if ( NULL == pDocumentRects ) {
        pDocumentRects = (RECT *)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(totalCount + 1) * sizeof(RECT));
        pDocumentText = (char *)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(totalCount + 1) * 33 * sizeof(char));
        pDocumentPages = (long *)HeapAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(totalCount + 1) * sizeof(long));
    } else {
        void *pWTF = pDocumentRects;
        pDocumentRects = (RECT *)HeapReAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(void *)pWTF,(totalCount + 1) * sizeof(RECT));
        pWTF = pDocumentText;
        pDocumentText = (char *)HeapReAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(void *)pWTF,(totalCount + 1) * 33 * sizeof(char));
        pWTF = pDocumentPages;
        pDocumentPages = (long *)HeapReAlloc(GetProcessHeap(),HEAP_ZERO_MEMORY,(void *)pWTF,(totalCount + 1) * sizeof(long));
    }

    countDocumentRects = totalCount;

    long n = (DWORD)strlen(szEntryDocumentRectsPageNumbers);

    char szTemp[2048];

    strcpy(szTemp,szDocumentRectsPageNumbers);

    char *pszNew = &szTemp[n];

    pszNew = strtok(pszNew,",");

    long addPages[32];

    memset(addPages,0,sizeof(addPages));

    long addIndex = -1L;

    while ( pszNew ) {
        addIndex++;
        addPages[addIndex] = atol(pszNew);
        pszNew = strtok(NULL,",");
    }

    char *pszOld = szEntryDocumentRectsPageNumbers;

    pszOld = strtok(pszOld,",");

    long existingEntries = 0;

    while ( pszOld ) {
        existingEntries += entryCounts[atol(pszOld) - 1];
        pszOld = strtok(NULL,",");
    }

    RECT *pRC = pDocumentRects + existingEntries;
    char *pText = pDocumentText + existingEntries * 33 * sizeof(char);
    long *pPage = pDocumentPages + existingEntries;
    long countBytes = 0L;

    for ( long k = 0; 1; k++ ) {

        if ( 0 == addPages[k] )
            break;

        long pageIndex = addPages[k] - 1;

        long pn = entryPageNumbers[pageIndex];

        fseek(fProfile,dataOffsets[pageIndex],SEEK_SET);

        for ( long j = 0; j < entryCounts[pageIndex]; j++, pRC++, pText += 33, pPage++ ) {

            memset(szProfileData,0,sizeof(szProfileData));
            fread(szProfileData,1,OUTLINES_ENTRY_RECORD_PREAMBLE_SIZE,fProfile);
            sscanf(szProfileData,OUTLINES_ENTRY_RECORD_PREAMBLE_FORMAT,&pRC -> left,&pRC -> bottom,&pRC -> right,&pRC -> top,&countBytes);
            fread(szTemp,1,countBytes + 1,fProfile);
            memcpy(pText,szTemp,min(countBytes,32));
            *pPage = pn;

        }

    }

    fclose(fProfile);

    if ( ! pParent-> pszProfileFileName )
        DeleteFile(szTempFile);

    if ( pCount )
        *pCount = countDocumentRects;

    if ( ppPageNumbers )
        *ppPageNumbers = pDocumentPages;

    if ( ppszFieldText )
        *ppszFieldText = pDocumentText;

    return pDocumentRects;
    }


    long templateDocument::tdUI::currentPageNumber(long atY) {
    long pageNumber;
    pIPDFiumControl -> get_PDFPageNumberAtY(atY,0,&pageNumber);
    return pageNumber;
    }


    bool templateDocument::tdUI::isDocumentRendered() {

    if ( 0 == rcVellumPixels.left && 0 == rcVellumPixels.right )
        return false;

    if ( 0 == ptlPDFUpperLeft.x && 0 == ptlPDFUpperLeft.y )
        return false;

    if ( ! IsWindowVisible(hwndPane) )
        return false;

    return true;
    }
