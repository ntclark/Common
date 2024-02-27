
#include "templateDocument.h"

/*

    Caution: Do NOT use stack for the char * parameters passed in here

*/
    templateDocument::templateDocument(ICursiVisionServices *ps,char *pszProfileOverride,char *pszDN,RECT *pszER,char *pszET) :
        pIPdfEnabler(NULL),
        pIPdfDocument(NULL),
        pszProfileFileName(pszProfileOverride),
        pszDocumentName(pszDN),
        pExpectedRects(pszER),
        pszExpectedText(pszET),
        pageCount(0L),
        pdfPageWidth(0),
        pdfPageHeight(0),
        pICursiVisionServices(ps)
    {

    CoCreateInstance(CLSID_PdfEnabler,NULL,CLSCTX_INPROC_SERVER,IID_IPdfEnabler,reinterpret_cast<void **>(&pIPdfEnabler));

    if ( pICursiVisionServices )
        pICursiVisionServices -> AddRef();

    return;
    }


    templateDocument::~templateDocument() {

    for ( createdView *pView : uiInstances ) {
        if ( pView -> pUI ) 
            delete pView -> pUI;
        delete pView;
    }

    uiInstances.clear();

    if ( pIPdfDocument )
        pIPdfDocument -> Release();

    pIPdfDocument = NULL;

    if ( pIPdfEnabler )
        pIPdfEnabler -> Release();

    pIPdfEnabler = NULL;

    if ( pICursiVisionServices )
        pICursiVisionServices -> Release();

    if ( pszDocumentName && selfAllocatedDocumentName )
        delete [] pszDocumentName;

    if ( pszProfileFileName && selfAllocatedProfileName )
        delete pszProfileFileName;

    return;
    }


    templateDocument::tdUI *templateDocument::createView(HWND hwndP,long x,long y,bool generateTextFields,void (*pcp)(HDC,templateDocument::tdUI *),void (*ppn)(long)) {

    tdUI *pUI = new tdUI(this);

    struct createdView *pView = new createdView();

    pView -> hwndParent = hwndP;
    pView -> pUI = pUI;

    uiInstances.insert(uiInstances.end(),pView);

    pUI -> createView(hwndP,x,y,generateTextFields,pcp,ppn);

    if ( ! pIPdfDocument )
        return pUI;

    long pageCount;

    pIPdfDocument -> get_PageCount(&pageCount);

    return pUI;
    }


    templateDocument::tdUI *templateDocument::getView(HWND hwndParent) {
    for ( createdView *pView : uiInstances ) {
        if ( hwndParent && ! ( hwndParent == pView -> hwndParent ) ) 
            continue;
        return pView -> pUI;
    }
    return NULL;
    }


    void templateDocument::releaseView(HWND hwndParent) {
    for ( createdView *pView : uiInstances ) {
        if ( hwndParent && ! ( hwndParent == pView -> hwndParent ) ) 
            continue;
        delete pView -> pUI;
        pView -> pUI = NULL;
        return;
    }
    return;
    }


    bool templateDocument::openDocument(char *pszName,char *pszOutlinesOverride) {

    if ( pszOutlinesOverride )
        pszProfileFileName = pszOutlinesOverride;
      
    if ( NULL == pszDocumentName ) {
        pszDocumentName = new char[MAX_PATH];
        selfAllocatedDocumentName = true;
    }

    if ( pszName && ! ( pszName == pszDocumentName ) )
        strcpy(pszDocumentName,pszName);

    if ( pszDocumentName[0] )
        openPDFDocument(pszDocumentName,pszProfileFileName);

    return true;
    }


    void templateDocument::closeDocument() {
    pszDocumentName[0] = '\0';
    if ( pIPdfDocument )
        pIPdfDocument -> Release();
    pIPdfDocument = NULL;
    return;
    }


    void templateDocument::openPDFDocument(char *pszFileName,char *pszOutlinesFile) {

    pageCount = 0;

    bool profileExists = true;

    if ( pszOutlinesFile && ! ( '\0' == pszOutlinesFile[0] ) ) {

        FILE *fProfile = fopen(pszOutlinesFile,"rb");

        if ( fProfile ) {

            long pn,cxPage,cyPage,nextPageOffset,countEntries;
            char bIgnore[5];
            char szProfileData[1024];

            long rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

            if ( rc < OUTLINES_PAGE_RECORD_SIZE ) {

                fclose(fProfile);
                DeleteFile(pszOutlinesFile);

            } else {

                rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&pdfPageWidth,&pdfPageHeight,&countEntries,&nextPageOffset);

                if ( 0 == countEntries ) {

                    fclose(fProfile);
                    DeleteFile(pszOutlinesFile);

                } else {

                    while ( 1 ) {

                        pageCount++;

                        fseek(fProfile,nextPageOffset,SEEK_SET);

                        rc = (long)fread(szProfileData,1,OUTLINES_PAGE_RECORD_SIZE + 1,fProfile);

                        if ( rc < OUTLINES_PAGE_RECORD_SIZE )
                            break;

                        rc = sscanf(szProfileData,OUTLINES_PAGE_RECORD_FORMAT,bIgnore,&pn,&cxPage,&cyPage,&countEntries,&nextPageOffset);
                        if ( rc < 6 ) 
                            break;

                        if ( 0 == nextPageOffset )
                            break;
                    }

                    fclose(fProfile);

                }

            }

        } else

            profileExists = false;

    } else

        profileExists = false;

    if ( pIPdfDocument )
        pIPdfDocument -> Release();

    pIPdfDocument = NULL;

    FILE *fX = fopen(pszFileName,"rb");

    if ( ! fX )
        return;

    fclose(fX);

    pIPdfEnabler -> Document(&pIPdfDocument);

    long n = (long)strlen(pszFileName);
    BSTR bstrName = SysAllocStringLen(NULL,n);
    MultiByteToWideChar(CP_ACP,0,pszFileName,-1,bstrName,n);

    pIPdfDocument -> Open(bstrName,NULL,NULL);

    SysFreeString(bstrName);

    if ( ! pszOutlinesFile || '\0' == pszOutlinesFile[0] || ! profileExists ) {
        pIPdfDocument -> get_PageCount(&pageCount);
        IPdfPage *pIPdfPage = NULL;
        pIPdfDocument -> Page(1,NULL,&pIPdfPage);
        if ( pIPdfPage ) {
            RECT rc;
            pIPdfPage -> DisplayedPageSize(&rc);
            pdfPageWidth = rc.right - rc.left;
            pdfPageHeight = rc.bottom - rc.top;
            pIPdfPage -> Release();
        }
    }

    for ( createdView *pView : uiInstances ) {
        if ( ! pView -> pUI )
            continue;
        pView -> pUI -> setupPDFiumControl();
        pView -> pUI -> setURL(pszFileName);
    }

    for ( createdView *pView : uiInstances ) {
        if ( ! pView -> pUI )
            continue;
        if ( pView -> pUI -> hwndPane )
            pView -> pUI -> size();
    }

    return;
    }


    void templateDocument::GetSinglePagePDFDisplaySize(SIZEL *pSizel) {

    HDC hdc = GetDC(NULL);
    UINT xPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSX);
    UINT yPixelsPerInch = GetDeviceCaps(hdc,LOGPIXELSY);
    ReleaseDC(NULL,hdc);

    pSizel -> cx = (long)((double)(PDFPageWidth()) * (double)xPixelsPerInch / 72.0);
    pSizel -> cy = (long)((double)(PDFPageHeight()) * (double)yPixelsPerInch / 72.0);

    if ( 0 == pSizel -> cx && 0 == pSizel -> cy )
        return;

    HWND hwndParent = NULL;

    pICursiVisionServices -> get_ParentWindow(&hwndParent);

    if ( NULL == hwndParent ) 
        return;

    WINDOWPLACEMENT windowPlacement = {0};

    windowPlacement.length = sizeof(WINDOWPLACEMENT);

    GetWindowPlacement(hwndParent,&windowPlacement);

    HMONITOR hMonitor = MonitorFromRect(&windowPlacement.rcNormalPosition,MONITOR_DEFAULTTOPRIMARY);

    MONITORINFO monitorInfo = {0};

    monitorInfo.cbSize = sizeof(MONITORINFO);

    GetMonitorInfo(hMonitor,&monitorInfo);

    double aspect = (double)pSizel -> cy / (double)pSizel -> cx;

    pSizel -> cy = (long)(10.0 * (double)( monitorInfo.rcWork.bottom - monitorInfo.rcWork.top) / 11.0);
    pSizel -> cx = (long)((double)pSizel -> cy / aspect);

    return;
    }