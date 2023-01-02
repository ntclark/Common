
#include "templateDocument.h"
#include "drawBoxDefines.h"

    templateDocument::tdUI::hilitedArea::hilitedArea(tdUI *pp,long pn,RECT *pRect,COLORREF theColor) : 
        pParent(pp), pageNumber(pn),pdfRect(*pRect),hiliteColor(theColor) { 

    CoCreateGuid(&cookie);

    pParent -> hilitedAreas[cookie] = this;

    if ( -1 == pageNumber )
        pParent -> pIPDFiumControl -> get_PDFPageUnderMouse(&pageNumber);

    BOOL isRendered = false;

    pParent -> PDFiumControl() -> get_IsDocumentRendered(&isRendered);

    if ( ! isRendered )
        return;

    configure();

    return;
    }


    void templateDocument::tdUI::hilitedArea::configure() {

    if ( NULL == pParent -> pageDC ) 
        pParent -> pageDC = GetDC(pParent -> hwndPane);

    pixelsRect = pdfRect;

    pParent -> pIPDFiumControl -> ConvertPointsToVisiblePanePixels(pageNumber,&pixelsRect);

    width = pixelsRect.right - pixelsRect.left;
    height = pixelsRect.bottom - pixelsRect.top;

    hdcPocket = CreateCompatibleDC(pParent -> pageDC);
    hbmRecover = CreateCompatibleBitmap(pParent -> pageDC,width + 8,height + 8);
    SelectObject(hdcPocket,hbmRecover);

    HDC hdcSource = CreateCompatibleDC(pParent -> pageDC);
    HGDIOBJ oldObj = SelectObject(hdcSource,pParent -> pdfHBitmap(pageNumber));

    BitBlt(hdcPocket,0,0,width + 8,height + 8,hdcSource,
            pixelsRect.left - pParent -> rcPDFPagePixels.left - 4,pixelsRect.top - pParent -> rcPDFPagePixels.top - 4,SRCCOPY);

    SelectObject(hdcSource,oldObj);
    DeleteDC(hdcSource);

    paint(pageNumber);
    
    }


    templateDocument::tdUI::hilitedArea::~hilitedArea() { 
    unpaint();
    DeleteObject(hbmRecover);
    DeleteDC(hdcPocket);
    pParent -> hilitedAreas.erase(cookie);
    }


    void templateDocument::tdUI::hilitedArea::paint(long pn) { 

    if ( -1L == pn ) {
        long currentPageNumber;
        pParent -> pIPDFiumControl -> get_PDFPageUnderMouse(&currentPageNumber);
        if ( ! ( currentPageNumber == pageNumber ) )
            return;
    }

    HDC hdc = pParent -> pageDC;

    DRAW_COLORED_BOX_IN_PIXELS_HDC_NOCLIP_NOHIDEABLE(hdc,PS_SOLID,hiliteColor,(&pixelsRect),BORDER_WEIGHT)

    return;
    }


    void templateDocument::tdUI::hilitedArea::unpaint() { 
    BitBlt(pParent -> pageDC,pixelsRect.left - 4,pixelsRect.top - 4,width + 8,height + 8,hdcPocket,0,0,SRCCOPY);
    return;
    }


    GUID templateDocument::tdUI::HiliteArea(COLORREF color,long pageNumber,RECT *pPDFRect) {
    hilitedArea *pArea = new hilitedArea(this,pageNumber,pPDFRect,color);
    pArea -> paint(pageNumber);
    return pArea -> cookie;
    }


    void templateDocument::tdUI::UnHiliteArea(GUID *pCookie) {

    hilitedArea *pArea = hilitedAreas[*pCookie];

    if ( NULL == pArea )
        return;

    RECT rcCheck = pArea -> pdfRect;
    long pageNumberCheck = pArea -> pageNumber;

    delete pArea;

    GUID pUnder = findHilitedArea(&rcCheck,pageNumberCheck);

    if ( GUID_NULL == pUnder ) 
        return;

    pArea = hilitedAreas[pUnder];

    pArea -> paint(pageNumberCheck);

    return;
    }


    GUID templateDocument::tdUI::findHilitedArea(RECT *pRect,long pageNumber,COLORREF theColor) {
    for ( std::pair<GUID,hilitedArea *> pair : hilitedAreas ) {
        hilitedArea *pArea = pair.second;
        if ( ! ( pArea -> pdfRect.left == pRect -> left ) || ! ( pArea -> pdfRect.top == pRect -> top ) || 
                ! ( pArea -> pdfRect.right == pRect -> right ) || ! ( pArea -> pdfRect.bottom == pRect -> bottom ) )
            continue;
        if ( -1L < pageNumber && pArea -> pageNumber != pageNumber )
            continue;
        if ( ! ( theColor == RGB(0xFF,0xFF,0xFF) ) ) {
            if ( ! ( pArea -> hiliteColor == theColor ) )
                continue;
        }
        return pArea -> cookie;
    }
    return GUID_NULL;
    }


    void templateDocument::tdUI::HiliteTextAreas(bool doHilite,COLORREF normalColor,RECT *pRects,long *pPageNumbers,long countRects) {

    hiliteTextAreas = doHilite;

    if ( ! doHilite ) {
        std::list<hilitedArea *> toDelete;
        for ( std::pair<GUID,hilitedArea *> p : hilitedAreas ) 
            toDelete.push_back(p.second);
        while ( 0 < toDelete.size() ) {
            hilitedArea *pArea = toDelete.front();
            delete pArea;
            toDelete.pop_front();
        }
        return;
    }

    textAreaNormalColor = normalColor;

    RECT *pr = pRects;

    for ( long k = 0; k < countRects; k++, pr++ ) {
        if ( ! ( GUID_NULL == findHilitedArea(pr) ) ) 
            continue;
        new hilitedArea(this,pPageNumbers[k],pr,normalColor);
    }

    BOOL isRendered;
    pIPDFiumControl -> get_IsDocumentRendered(&isRendered);
    if ( ! isRendered )
        postRenderAction = [this]() { ConfigureHilitedTextAreas(); };
    else
        ConfigureHilitedTextAreas();

    return;
    }


    void templateDocument::tdUI::ConfigureHilitedTextAreas() {
    for ( std::pair<GUID,hilitedArea *> p : hilitedAreas ) {
        p.second -> configure();
        p.second -> paint(p.second -> pageNumber);
    }
    postRenderAction = NULL;
    return;
    }


    GUID templateDocument::tdUI::AddSelectedTextArea(RECT *pRect,long pageNumber) {

    if ( ! ( GUID_NULL == findHilitedArea(pRect,pageNumber,textAreaNormalColor) ) ) 
        return GUID_NULL;

    hilitedArea *pArea = new hilitedArea(this,pageNumber,pRect,textAreaNormalColor);

    pArea -> paint(pageNumber);

    return pArea -> cookie;
    }


    void templateDocument::tdUI::RemoveHilitedTextArea(RECT *pRect,long pn) {

    long pageNumber = pn;
    if ( -1L == pageNumber )
        pIPDFiumControl -> get_PDFPageUnderMouse(&pageNumber);

    GUID pCookie = findHilitedArea(pRect,pageNumber);

    if ( GUID_NULL == pCookie ) 
        return;

    delete hilitedAreas[pCookie];

    RemoveHilitedTextArea(pRect,pageNumber);

    return;
    }