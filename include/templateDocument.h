
#pragma once

#include <olectl.h>
#include <docobj.h>
#include <exDisp.h>

#include <list>

#include "PdfEnabler_i.h"

#include "SignaturePad_i.h"
#include "PrintingSupport_i.h"
#include "CursiVision_i.h"
#include "PDFiumControl_i.h"

#define TIMER_ID_PAINT  1
#define TIMER_PAINT_DURATION  200
#define WM_GENERATE_BITMAP    (WM_USER + 1)

   class templateDocument {

   public:
   
      templateDocument(ICursiVisionServices *pICursiVisionServices,char *pszProfileOverride,char *pszDocumentName,RECT *pszExpectedRects,char *pszExpectedText);
      ~templateDocument();

      bool openDocument(char *pszName = NULL,char *pszProfileFileName = NULL);
      void closeDocument();

      class tdUI : public IUnknown {

      public:

         tdUI(templateDocument *pp);
         ~tdUI();

         //   IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         templateDocument *Parent() { return pParent; };

         void createView(HWND hwndParent,long offsetX,long offsetY,void (*clientPaint)(HDC,templateDocument::tdUI *) = NULL);

         void releaseView();

         void size();

         void resetScrollbar(long pageCount);

         void convertToPoints(RECT *pTarget);
         void convertToPixels(RECT *pTarget);
         void convertToPoints(POINTL *pTarget);
         void convertToPixels(POINTL *pTarget);

         HDC pdfDC();

         RECT *pTextRects(long *pCount);
         char *pTextText(long index);
         long textPage(long index);

         long currentPageNumber;

         RECT rcPageParentCoordinates;
         RECT rcHTML;
         RECT rcPDFPagePixels;

         HWND hwndParent;
         HWND hwndPane;
         HWND hwndHTMLHost;
         HWND hwndScroll;
         HWND hwndVellum;

         double scaleToPixelsX,scaleToPixelsY;

      private:

#undef MSHTML_SUPPORTING_CLASS
#define MSHTML_SUPPORTING_CLASS templateDocument::tdUI

#include "interfacesToSupportMSHTML.h"

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

            templateDocument::tdUI *pParent;

         } *pDWebBrowserEvents_HTML;

         //      IConnectionPointContainer

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

		    templateDocument::tdUI *pParent;

         } *pIConnectionPointContainer_HTML;

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

            int cpCount,enumeratorIndex;
		    templateDocument::tdUI *pParent;
		    IConnectionPoint **connectionPoints;

         } *pIEnumConnectionPoints_HTML;

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

            ULONG refCount;
            IUnknown *pParentUnknown;
            ULONG enumeratorIndex;
            ULONG countConnections;
            CONNECTDATA *connections;

         } *pIEnumerateConnections_HTML;

         void setupPDFiumControl();
         void setURL(char *pszDocumentName);
         void releasePDFiumControl();

         void findPDFArea();

         void generateBitmap();

         long parentOffsetX,parentOffsetY;

         SCROLLINFO scrollInfo;

         void (*pClientPaint)(HDC,tdUI *);

         RECT *pDocumentRects;
         char *pDocumentText;
         long *pDocumentPages;

         long countDocumentRects;

         long cxHTML,cyHTML;
         bool needsImageRegenerated;

         long refCount;

         HDC hdcPDF;
         HBITMAP hbmPDF;

         POINTL ptlPDFUpperLeft{0,0};

         IOleInPlaceObject *pIOleInPlaceObject_HTML;
         IOleObject *pIOleObject_HTML;
         IOleInPlaceActiveObject *pIOleInPlaceActiveObject_HTML;

         IConnectionPoint *pIConnectionPoint_HTML;
         DWORD connectionCookie_HTML;

         IPDFiumControl *pIPDFiumControl{0};

         templateDocument *pParent;

         static LRESULT CALLBACK paneHandler(HWND,UINT,WPARAM,LPARAM);
         static LRESULT CALLBACK pdfDocumentRenderer(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
         static LRESULT CALLBACK vellumHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

         friend class templateDocument;

      };

      tdUI *createView(HWND hwndInitialParent,long offsetX,long offsetY,void (*clientPaint)(HDC,templateDocument::tdUI *) = NULL);

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
         HWND hwndParent;
         tdUI *pUI;
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


#define RESET_PAGE                     \
   if ( pDocumentRects ) {             \
      delete [] pDocumentRects;        \
      pDocumentRects = NULL;           \
      countDocumentRects = 0L;         \
   }                                   \
   if ( pDocumentText ) {              \
      delete [] pDocumentText;         \
      pDocumentText = NULL;            \
   }                                   \
   if ( pDocumentPages ) {             \
      delete [] pDocumentPages;        \
      pDocumentPages = NULL;           \
   }                                   \
   if ( hdcPDF ) DeleteDC(hdcPDF);     \
   hdcPDF = NULL;                      \
   if ( hbmPDF ) DeleteObject(hbmPDF); \
   hbmPDF = NULL;                      \
   if ( pIPDFiumControl )              \
      pIPDFiumControl -> GoToPage(currentPageNumber);  


#define RESET_PAGE_PTR(p)             \
   if ( p -> pDocumentRects ) {       \
      delete [] p -> pDocumentRects;  \
      p -> pDocumentRects = NULL;     \
      p -> countDocumentRects = 0L;   \
   }                                  \
   if ( p -> pDocumentText ) {        \
      delete [] p -> pDocumentText;   \
      p -> pDocumentText = NULL;      \
   }                                  \
   if ( p -> pDocumentPages ) {       \
      delete [] p -> pDocumentPages;  \
      p -> pDocumentPages = NULL;     \
   }                                            \
   if ( p -> hdcPDF ) DeleteDC(p -> hdcPDF);    \
   p -> hdcPDF = NULL;                          \
   if ( p -> hbmPDF ) DeleteObject(p -> hbmPDF);\
   p -> hbmPDF = NULL;
