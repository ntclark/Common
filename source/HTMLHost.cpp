
#include "CursiVision.h"

#include <Mshtml.h>

    HRESULT CursiVision::createHTMLHost() {

    pIOleInPlaceFrame_HTML_Host = new _IOleInPlaceFrame(this,hwndHTMLHost);
    pIOleInPlaceSite_HTML_Host = new _IOleInPlaceSite(this,pIOleInPlaceFrame_HTML_Host);
    pIOleClientSite_HTML_Host = new _IOleClientSite(this,pIOleInPlaceSite_HTML_Host,pIOleInPlaceFrame_HTML_Host);
    pIOleDocumentSite_HTML_Host = new _IOleDocumentSite(this,pIOleClientSite_HTML_Host);

    HRESULT rc = CoCreateInstance(CLSID_WebBrowser,NULL,CLSCTX_INPROC_SERVER,IID_IWebBrowser2,reinterpret_cast<void **>(&pIWebBrowser));

    if ( S_OK != rc ) {
        MessageBox(NULL,"CursiVision needs to use the Microsoft IE embedded ActiveX Control\n\n"
                        "This component is part of Microsoft Internet Explorer.\n\n"
                        "Is IE Installed on your system ?","Error!",MB_ICONEXCLAMATION);
        return E_FAIL;
    }

    rc = pIWebBrowser -> put_Resizable(TRUE);

    pIWebBrowser -> put_RegisterAsDropTarget(TRUE);

    pIWebBrowser -> QueryInterface(IID_IOleObject,reinterpret_cast<void **>(&pIOleObject_HTML));

    pIOleObject_HTML -> QueryInterface(IID_IOleInPlaceObject,reinterpret_cast<void **>(&pIOleInPlaceObject_HTML));

    pIOleObject_HTML -> SetClientSite(pIOleClientSite_HTML_Host);

    pDWebBrowserEvents_HTML_Host = new _DWebBrowserEvents2(this);

    IUnknown *pIUnknown = NULL;

    pDWebBrowserEvents_HTML_Host -> QueryInterface(IID_IUnknown,reinterpret_cast<void **>(&pIUnknown));

    IConnectionPointContainer *pIConnectionPointContainer = NULL;

    pIWebBrowser -> QueryInterface(IID_IConnectionPointContainer,reinterpret_cast<void**>(&pIConnectionPointContainer));

    if ( pIConnectionPointContainer ) {
        pIConnectionPointContainer -> FindConnectionPoint(DIID_DWebBrowserEvents2,&pIConnectionPoint_HTML);
        if ( pIConnectionPoint_HTML ) 
            pIConnectionPoint_HTML -> Advise(pIUnknown,&connectionCookie_HTML);
        pIConnectionPointContainer -> Release();
    }

    pIUnknown -> Release();

    sprintf(szWelcomeURL,"%s\\WelcomeCursiVision.htm",szApplicationDataDirectory);

    setURL();

    return S_OK;
    }


    void CursiVision::setURL(char *pszURL) {
    pIOleInPlaceObject_HTML -> SetObjectRects(&rcHTMLHost,&rcHTMLHost);

    pIOleObject_HTML -> DoVerb(OLEIVERB_SHOW,NULL,pIOleClientSite_HTML_Host,0,hwndHTMLHost,&rcHTMLHost);

    BSTR bstrURL = SysAllocStringLen(NULL,1024);

    MultiByteToWideChar(CP_ACP,0,szWelcomeURL,-1,bstrURL,1024);
    pIPDFiumControl -> DisplayHTML(bstrURL);

    return;
    }


    void CursiVision::removeHTMLHost() {

    if ( pIConnectionPoint_HTML ) {
        pIConnectionPoint_HTML -> Unadvise(connectionCookie_HTML);
        pIConnectionPoint_HTML -> Release();
        pIConnectionPoint_HTML = NULL;
    }

    if ( pDWebBrowserEvents_HTML_Host ) 
        delete pDWebBrowserEvents_HTML_Host;

    pDWebBrowserEvents_HTML_Host = NULL;

    pIOleObject_HTML -> Close(OLECLOSE_NOSAVE);

    pIOleObject_HTML -> SetClientSite(NULL);

    pIOleInPlaceObject_HTML -> Release();

    if ( pIOleInPlaceActiveObject_HTML )
        pIOleInPlaceActiveObject_HTML -> Release();

    pIOleObject_HTML -> Release();

    if ( pIElementBehaviorFactory )
        delete pIElementBehaviorFactory;

    pIElementBehaviorFactory = NULL;

    if ( pIElementBehavior )
        delete pIElementBehavior;

    pIElementBehavior = NULL;

    if ( pIHTMLPainter )
        delete pIHTMLPainter;
   
    pIHTMLPainter = NULL;

    if ( pDocumentElement )
        pDocumentElement -> Release();

    pDocumentElement = NULL;

    if ( pIWebBrowserDocument ) 
        pIWebBrowserDocument -> Release();

    pIWebBrowserDocument = NULL;

    long k = pIWebBrowser -> Release();

    delete pIOleInPlaceFrame_HTML_Host;
    delete pIOleInPlaceSite_HTML_Host;
    delete pIOleClientSite_HTML_Host;
    delete pIOleDocumentSite_HTML_Host;

    return;
    }
