#pragma once

#pragma warning(disable:6031)

#include <windows.h>
#include <windowsx.h>
#include <olectl.h>
#include <docobj.h>
#include <exDisp.h>

#include <list>
#include <unordered_map>

#include "CursiVisionGlobal.h"
#include "utilities.h"

#include "PdfEnabler_i.h"
#include "SignaturePad_i.h"
#include "PrintingSupport_i.h"
#include "CursiVision_i.h"
#include "PDFiumControl_i.h"

#define TIMER_ID_PAINT  1
#define TIMER_PAINT_DURATION  200

    class templateDocument {
    public:
   
        templateDocument(ICursiVisionServices *pICursiVisionServices,char *pszProfileOverride,char *pszDocumentName,RECT *pszExpectedRects,char *pszExpectedText);
        ~templateDocument();

        bool openDocument(char *pszName = NULL,char *pszProfileFileName = NULL);
        void closeDocument();

        char *DocumentName() { return pszDocumentName; }
        char *ProfileFileName() { return pszProfileFileName; }

        class tdUI : public IUnknown {
        public:

            tdUI(templateDocument *pp);
            ~tdUI();

            struct hilitedArea {
                hilitedArea(tdUI *pp,long pn,RECT *pRect,COLORREF theColor);
                ~hilitedArea();
                void configure();
                void paint(long pageNumber = -1L);
                void unpaint();
                long pageNumber{-1L};
                RECT pdfRect{0,0,0,0};
                RECT pixelsRect{0,0,0,0};
                COLORREF hiliteColor{RGB(0,0,0)};
                GUID cookie{GUID_NULL};
                HDC hdcPocket{NULL};
                HBITMAP hbmRecover{NULL};
                long width{0L};
                long height{0L};
                tdUI *pParent;
            };

            //   IUnknown

            STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
            STDMETHOD_ (ULONG, AddRef)();
            STDMETHOD_ (ULONG, Release)();

            class _IPDFiumControlEvents : public IPDFiumControlEvents {
            public:

                _IPDFiumControlEvents(templateDocument::tdUI *pp) : pParent(pp) {};

                // IUnknown

                STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
                STDMETHOD_ (ULONG, AddRef)();
                STDMETHOD_ (ULONG, Release)();

                // IPDFiumControlEvents

                STDMETHOD(MouseMessage)(UINT msg,WPARAM wParam,LPARAM lParam);
                STDMETHOD(Size)(SIZE *pSize);
                STDMETHOD(HasPainted)();
                STDMETHOD(PageChanged)(long pageNumber);
                STDMETHOD(PageRequestedHasPainted)(long pageNumber);
                STDMETHOD(DocumentRendered)();
                STDMETHOD(DocumentOpened)();

            private:

                templateDocument::tdUI *pParent;

            } *pIPDFiumControlEvents{NULL};

            templateDocument *Parent() { return pParent; };

            IPDFiumControl *PDFiumControl() { return pIPDFiumControl; };

            char *DocumentName() { return pParent -> DocumentName();}

            void createView(HWND hwndParent,long offsetX,long offsetY,bool generateFields = true,
                                void (*clientPaint)(HDC,templateDocument::tdUI *) = NULL,
                                    void (*clientPageChange)(long pageNumber) = NULL);

            void releaseView();

            void setupPDFiumControl();
            void setURL(char *pszDocumentName);
            void releasePDFiumControl();

            GUID HiliteArea(COLORREF color,long pageNumber_MinusOneForUnderMouse,RECT *pPDFRect);
            void UnHiliteArea(GUID *pCookie);
            GUID findHilitedArea(RECT *pRect,long pageNumber = -1L,COLORREF color = RGB(0xFF,0xFF,0xFF));

            void HiliteTextAreas(bool doHilite,COLORREF normalColor = RGB(0,0,0),RECT *pRects = NULL,long *pPageNumbers = NULL,long countRects = 0L);
            GUID AddSelectedTextArea(RECT *pRect,long pageNumber);
            void RemoveHilitedTextArea(RECT *pRect,long pageNumber = -1L);
            void ConfigureHilitedTextAreas();

            void size();

            long PDFPageWidth() { return pParent -> pdfPageWidth; };
            long PDFPageHeight() { return pParent -> pdfPageHeight; };
            long PDFPageCount() { return pParent -> pageCount; };

            void GetPDFLocation(RECT *pPoint,POINTFLOAT *pLocation,POINTFLOAT *pSize) {

                double pdfWidthInches = (double)(PDFPageWidth() ) / 72.0;
                double pdfHeightInches = (double)(PDFPageHeight() ) / 72.0;
    
                if ( pLocation ) {
                    pLocation -> x = (float)((double)(pPoint -> left - rcPDFPagePixels.left) * pdfWidthInches / (double)cxHTML);
                    pLocation -> y = (float)((double)(pPoint -> top - rcPDFPagePixels.top) * pdfHeightInches / (double)cyHTML);
                }

                if ( pSize ) {
                    pSize -> x = (float)((double)(pPoint -> right - pPoint -> left) * pdfWidthInches / (double)cxHTML);
                    pSize -> y = (float)((double)(pPoint -> bottom - pPoint -> top) * pdfHeightInches / (double)cyHTML);
                }
            }

            void Repaint() {
                HWND hwndMSHTML;
                PDFiumControl() -> get_MSHTMLHwnd(&hwndMSHTML);
                InvalidateRect(hwndMSHTML,NULL,TRUE);
                UpdateWindow(hwndMSHTML);
            }

            void convertToPoints(long pageNumber,RECT *pRect) { pIPDFiumControl -> ConvertVisiblePanePixelsToPoints(pageNumber,pRect); }
            void convertToPixels(long pageNumber,RECT *pRect) { pIPDFiumControl -> ConvertPointsToVisiblePanePixels(pageNumber,pRect); }
            void scaleToPoints(long pageNumber,RECT *pRect) { pIPDFiumControl -> ScalePixelsToPoints(pageNumber,pRect); }

            long currentPageNumber(long atY = -1L);
            long PageUnderMouse() {
                long pn;
                pIPDFiumControl -> get_PDFPageUnderMouse(&pn);
                return pn;
            }

            HDC pdfDC(long atY = -1L);
            HDC pdfDCArea(long pageNumber,RECT *prcPixels);
            HDC pdfPageDC(long pageNumber);

            HBITMAP pdfHBitmap(long pdfPageNumber);

            bool isDocumentRendered();

            RECT *pTextRects(long *pCount,long **ppPageNumbers,char **ppszFieldText,long pageNumber = -1L);
            char *pTextText(long index);
            long textPage(long index);

            std::function<void(void)> postRenderAction{NULL};

            bool hiliteTextAreas{false};
            COLORREF textAreaNormalColor{RGB(0,0,0)};

            RECT rcPageParentCoordinates{0,0,0,0};
            RECT rcHTML{0,0,0,0};
            RECT rcPDFPagePixels{0,0,0,0};
            RECT rcPDFPagePixelsInView{0,0,0,0};
            RECT rcPDFPagePixelsInHost{0,0,0,0};
            RECT rcVellumPixels{0,0,0,0};

            HDC pageDC{NULL};

            HWND hwndParent{NULL};
            HWND hwndPane{NULL};

            double scaleToPixels{0.0};

            GUID hilitedPotentialField{GUID_NULL};
            GUID hilitedSelectedField{GUID_NULL};

        private:

#ifdef EMBEDDED_OBJECT_EMBEDDER_CLASS
#undef EMBEDDED_OBJECT_EMBEDDER_CLASS
#endif

#define EMBEDDED_OBJECT_EMBEDDER_CLASS templateDocument::tdUI

#include "interfacesToSupportAnEmbeddedObject.h"

            // DWebBrowserEvents2

            class _DWebBrowserEvents2 : public DWebBrowserEvents2 {
            public:

                _DWebBrowserEvents2(templateDocument::tdUI *pp) : pParent(pp) {};

                //   IUnknown

                STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
                STDMETHODIMP_(ULONG) AddRef();
                STDMETHODIMP_(ULONG) Release();

                // IDispatch

                STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
                STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
                STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
                STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);

            private:
                templateDocument::tdUI *pParent{NULL};

            } *pDWebBrowserEvents_HTML{NULL};

            struct _IConnectionPointContainer : public IConnectionPointContainer {
            public:

                STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
                STDMETHOD_ (ULONG, AddRef)();
                STDMETHOD_ (ULONG, Release)();

                STDMETHOD(FindConnectionPoint)(REFIID riid,IConnectionPoint **);
                STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints **);

                _IConnectionPointContainer(templateDocument::tdUI *pp);
                ~_IConnectionPointContainer();

            private:
                templateDocument::tdUI *pParent{NULL};

            } *pIConnectionPointContainer_HTML{NULL};

            struct _IEnumConnectionPoints : IEnumConnectionPoints {
            public:

                STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
                STDMETHOD_ (ULONG, AddRef)();
                STDMETHOD_ (ULONG, Release)();

                STDMETHOD (Next)(ULONG cConnections,IConnectionPoint **rgpcn,ULONG *pcFetched);
                STDMETHOD (Skip)(ULONG cConnections);
                STDMETHOD (Reset)();
                STDMETHOD (Clone)(IEnumConnectionPoints **);

                _IEnumConnectionPoints(templateDocument::tdUI *pp,IConnectionPoint **cp,int connectionPointCount);
                ~_IEnumConnectionPoints();

            private:
                int cpCount{0};
                int enumeratorIndex{-1};
                templateDocument::tdUI *pParent{NULL};
                IConnectionPoint **connectionPoints{NULL};

            } *pIEnumConnectionPoints_HTML{NULL};

            struct _IEnumerateConnections : public IEnumConnections {
            public:

                _IEnumerateConnections(IUnknown* pParentUnknown,ULONG cConnections,CONNECTDATA* paConnections,ULONG initialIndex);
                ~_IEnumerateConnections();

                STDMETHOD(QueryInterface)(REFIID, void **);
                STDMETHODIMP_(ULONG) AddRef();
                STDMETHODIMP_(ULONG) Release();
                STDMETHOD(Next)(ULONG, CONNECTDATA*, ULONG*);
                STDMETHOD(Skip)(ULONG);
                STDMETHOD(Reset)();
                STDMETHOD(Clone)(IEnumConnections**);

            private:
                ULONG refCount{0};
                IUnknown *pParentUnknown{NULL};
                ULONG enumeratorIndex{0UL};
                ULONG countConnections{0UL};
                CONNECTDATA *connections{NULL};

            } *pIEnumerateConnections_HTML{NULL};

            void generateBitmap();

            long parentOffsetX{0L};
            long parentOffsetY{0L};

            SCROLLINFO scrollInfo{0};

            void (*pClientPaint)(HDC,tdUI *){NULL};
            void (*pClientPageChanged)(long pageNumber){NULL};

            RECT *pDocumentRects{NULL};
            char *pDocumentText{NULL};
            long *pDocumentPages{NULL};
            char szDocumentRectsPageNumbers[512];

            bool generateTextFields{false};

            long countDocumentRects{0L};

            long cxHTML{0L};
            long cyHTML{0L};

            long refCount{0L};

            HDC hdcPDF{NULL};
            HBITMAP hbmPDF{NULL};

            POINTL ptlPDFUpperLeft{0,0};

            IOleInPlaceObject *pIOleInPlaceObject_HTML{NULL};
            IOleObject *pIOleObject_HTML{NULL};
            IOleInPlaceActiveObject *pIOleInPlaceActiveObject_HTML{NULL};

            IConnectionPoint *pIConnectionPoint_HTML{NULL};
            DWORD connectionCookie_HTML{0};

            IConnectionPoint *pIConnectionPoint_PDFiumControlEvents{NULL};
            DWORD connectionCookie_PDFiumControlEvents{0};

            IPDFiumControl *pIPDFiumControl{0};

            std::unordered_map<GUID,hilitedArea *,guidHash> hilitedAreas;

            templateDocument *pParent{NULL};

            static LRESULT CALLBACK noPaintHandler(HWND,UINT,WPARAM,LPARAM);

        };

        tdUI *createView(HWND hwndInitialParent,long offsetX,long offsetY,bool generateTextFields = true,void (*clientPaint)(HDC,templateDocument::tdUI *) = NULL,void (*clientPageChange)(long pageNumber) = NULL);

        tdUI *getView(HWND);

        char *pszDocumentName;
        char *pszProfileFileName;
        RECT *pExpectedRects;
        char *pszExpectedText;

        long PDFPageWidth() { return pdfPageWidth; };
        long PDFPageHeight() { return pdfPageHeight; };
        long PDFPageCount() { return pageCount; };

        void GetSinglePagePDFDisplaySize(SIZEL *pSizel);

        ICursiVisionServices *pICursiVisionServices;

    private:

        void releaseView(HWND hwndParent);

        struct createdView {
            HWND hwndParent{NULL};
            tdUI *pUI{NULL};
        };

        long pageCount{0};
        long pdfPageWidth{0};
        long pdfPageHeight{0};

        IPdfEnabler *pIPdfEnabler;
        IPdfDocument *pIPdfDocument;

        bool selfAllocatedDocumentName;

        void openPDFDocument(char *pszFileName,char *pszOutlinesFile);

        std::list<createdView *> uiInstances;

    };

