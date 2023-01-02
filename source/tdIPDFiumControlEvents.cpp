
    #include "templateDocument.h"

    // IUnknown

    long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::QueryInterface(REFIID riid,void **ppv) {

    if ( riid == IID_IPDFiumControlEvents )
        *ppv = static_cast<IPDFiumControlEvents *>(this);
    else
        return pParent -> QueryInterface(riid,ppv);

    AddRef();

    return S_OK;
    }
    unsigned long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::AddRef() {
    return pParent -> AddRef();
    }
    unsigned long __stdcall templateDocument::tdUI::_IPDFiumControlEvents::Release() { 
    return pParent -> Release();
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::MouseMessage(UINT msg,WPARAM wParam,LPARAM lParam) {
    POINTL ptlTranslated{GET_X_LPARAM(lParam) + pParent -> rcPageParentCoordinates.left,GET_Y_LPARAM(lParam) + pParent -> rcPageParentCoordinates.top};
    SendMessage(pParent -> hwndParent,msg,wParam,MAKELPARAM(ptlTranslated.x,ptlTranslated.y));
    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::Size(SIZE *pSize) {
    pParent -> size();
    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::HasPainted() {

    GetClientRect(pParent -> hwndParent,&pParent -> rcVellumPixels);

    pParent -> size();

    if ( pParent -> pClientPaint ) {
        HDC hdc = GetDC(pParent -> hwndPane);
        pParent -> pClientPaint(hdc,pParent);
        ReleaseDC(pParent -> hwndPane,hdc);
    }

    if ( pParent -> postRenderAction )
        pParent -> postRenderAction();

    if ( pParent -> hiliteTextAreas ) {
        for ( std::pair<GUID,hilitedArea *> p : pParent -> hilitedAreas ) {
            p.second -> paint();
        }
    }

    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::PageRequestedHasPainted(long pageNumber) {
    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::PageChanged(long pageNumber) {

    // Note: this event is sending the "most visible" page number when the page changes.
    // I don't want to set the "currentPageNumber" because that value is the page number
    // determined by a point in the document, for example, where the mouse is
    // and that should remain the way to indicate the page number for now.
    //pParent -> currentPageNumber = pageNumber;

    if ( pParent -> pClientPageChanged )
        pParent -> pClientPageChanged(pageNumber);

    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::DocumentRendered() {
    pParent -> size();
    return S_OK;
    }


    HRESULT __stdcall templateDocument::tdUI::_IPDFiumControlEvents::DocumentOpened() {
    return S_OK;
    }