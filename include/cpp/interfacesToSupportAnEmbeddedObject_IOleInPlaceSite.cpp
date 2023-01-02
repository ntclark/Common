
    long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::QueryInterface(REFIID riid,void **ppv) {

    if ( ! ppv )
        return E_POINTER;

    *ppv = NULL;

    if ( IID_IUnknown == riid ) 
        *ppv = static_cast<IUnknown *>(this);
    else

    if ( IID_IOleInPlaceSite == riid ) 
        *ppv = static_cast<IOleInPlaceSite *>(this);
    else

    if ( IID_IOleInPlaceSiteEx == riid ) 
        *ppv = static_cast<IOleInPlaceSiteEx *>(this);
    else

        return pParent -> QueryInterface(riid,ppv);

    AddRef();

    return S_OK;
    }
    unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::AddRef() {
    return pParent -> AddRef();
    }
    unsigned long __stdcall EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::Release() {
    return pParent -> Release();
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::GetWindow(HWND *gwh) {
    *gwh = pIOleInPlaceFrame -> HWNDHost();
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::ContextSensitiveHelp(BOOL fEnterMode) {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::CanInPlaceActivate() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnInPlaceActivate() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnUIActivate() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::GetWindowContext(IOleInPlaceFrame **ppIOleInPlaceFrame,
                                                                        IOleInPlaceUIWindow **ppIOleInPlaceUIWindow,
                                                                        RECT *pRectPosition,RECT *pRectClip,
                                                                        OLEINPLACEFRAMEINFO *pOleInPlaceFrameInfo) {

    *ppIOleInPlaceFrame = pIOleInPlaceFrame;
    *ppIOleInPlaceUIWindow = static_cast<IOleInPlaceUIWindow *>(pIOleInPlaceFrame);

    RECT rectHost;
    GetWindowRect(pIOleInPlaceFrame -> HWNDHost(),&rectHost);
    rectHost.right = rectHost.right - rectHost.left;
    rectHost.bottom = rectHost.bottom - rectHost.top;
    rectHost.left = 0;
    rectHost.top = 0;

    memcpy(pRectPosition,&rectHost,sizeof(RECT));
    memcpy(pRectClip,pRectPosition,sizeof(RECT));

    memset(pOleInPlaceFrameInfo,0,sizeof(OLEINPLACEFRAMEINFO));

    pOleInPlaceFrameInfo -> cb = sizeof(OLEINPLACEFRAMEINFO);
    pOleInPlaceFrameInfo -> fMDIApp = FALSE;
    pOleInPlaceFrameInfo -> hwndFrame = pIOleInPlaceFrame -> HWNDHost();
    pOleInPlaceFrameInfo -> haccel = NULL;
    pOleInPlaceFrameInfo -> cAccelEntries = NULL;   

    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::Scroll(SIZE) {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnUIDeactivate(BOOL) {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnInPlaceDeactivate() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::DiscardUndoState() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::DeactivateAndUndo() {
    return S_OK;
    }


    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnPosRectChange(const RECT *pRect) {
    return S_OK;
    }

    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnInPlaceActivateEx(BOOL *pRedraw,DWORD dwFlags) {
    *pRedraw = FALSE;
    return S_OK;
    }

    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::OnInPlaceDeactivateEx(BOOL fNoRedraw) {
    return S_OK;
    }

    HRESULT EMBEDDED_OBJECT_EMBEDDER_CLASS::_IOleInPlaceSite::RequestUIActivate() {
    return S_OK;
    }


