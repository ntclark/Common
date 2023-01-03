
   // IOleObject 

   class _IOleObject : public IOleObject {

   public:

      _IOleObject(InsertPDF *pp);
      ~_IOleObject();

      IPropertyPage *PropertyPage(long index) { return static_cast<IPropertyPage *>(pIPropertyPage[index]); };

      STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
      STDMETHOD_ (ULONG, AddRef)();
      STDMETHOD_ (ULONG, Release)();

      BOOL IsRunning() { return isRunning; };

#ifdef CURSIVISION_CONTROL_BUILD
      BOOL findProfile();
      BOOL loadProfile();
      long match(long countEntries,RECT *pPDFEntries,long *pPDFPages,char *pTextValues);
#endif

      static WNDPROC nativePropertySheetFrameHandler;
      static long nativePropertySheetFrameHandlerRefCount;
      static HWND hwndPropertySheetFrame;

      static LRESULT CALLBACK propertySheetFrameHandler(HWND,UINT,WPARAM,LPARAM);

      SIZEL containerSize;
      struct doodleOptionProperties doodleOptionProperties;
      bool showToolBar,showStatusBar;
      bool showAdobeToolBar;
      bool showSignatureControlPanel;
      char szTemplateDocumentName[MAX_PATH];

      RECT expectedRects[MAX_TEXT_RECT_COUNT];
      char expectedText[MAX_TEXT_TEXT_SPACE];
      long expectedPage[MAX_TEXT_RECT_COUNT];

      char szRepository[MAX_PATH];
      char szProfile[MAX_PATH];

      void fire_PropertyChanged() { connectionPointContainer.fire_PropertyChanged(); };

      void fire_DocumentStaged() { connectionPointContainer.fire_DocumentStaged(); };
      void fire_DocumentOpened() { connectionPointContainer.fire_DocumentOpened(); };
      void fire_DocumentClosed() { connectionPointContainer.fire_DocumentClosed(); };
      void fire_DocumentSigned() { connectionPointContainer.fire_DocumentSigned(); };
      void fire_DocumentSaved(BSTR savedFileName) { connectionPointContainer.fire_DocumentSaved(savedFileName); };
      void fire_AwaitingSignature() { connectionPointContainer.fire_AwaitingSignature(); };

      void fire_NoPadException() { connectionPointContainer.fire_NoPadException(); };
      void fire_ExitRequested() { connectionPointContainer.fire_ExitRequested(); };

      void fire_PenDown(long x,long y) { connectionPointContainer.fire_PenDown(x,y); };
      void fire_PenUp(long x,long y) { connectionPointContainer.fire_PenUp(x,y); };
      void fire_PenPoint(long x,long y) { connectionPointContainer.fire_PenPoint(x,y); };

   private:

      STDMETHOD(SetClientSite)(IOleClientSite *pClientSite);
      STDMETHOD(GetClientSite)(IOleClientSite **ppCLientSite);
      STDMETHOD(SetHostNames)(LPCOLESTR szContainerApp,LPCOLESTR szContainerObj);
      STDMETHOD(Close)(DWORD dwSaveOption);
      STDMETHOD(SetMoniker)(DWORD dwWhichMoniker, IMoniker *pmk);
      STDMETHOD(GetMoniker)(DWORD dwAssign, DWORD dwWhichMoniker,IMoniker **ppmk);
      STDMETHOD(InitFromData)(IDataObject *pDataObject,BOOL fCreation,DWORD dwReserved);
      STDMETHOD(GetClipboardData)(DWORD dwReserved,IDataObject **ppDataObject);
      STDMETHOD(DoVerb)(LONG iVerb,LPMSG lpmsg,IOleClientSite *pActiveSite,LONG lindex,HWND hwndParent,LPCRECT lprcPosRect);
      STDMETHOD(EnumVerbs)(IEnumOLEVERB **ppenumOleVerb);
      STDMETHOD(Update)();
      STDMETHOD(IsUpToDate)();
      STDMETHOD(GetUserClassID)(CLSID * pClsid);
      STDMETHOD(GetUserType)(DWORD dwFormOfType, LPOLESTR *pszUserType);
      STDMETHOD(SetExtent)(DWORD dwDrawAspect, LPSIZEL lpsizel);
      STDMETHOD(GetExtent)(DWORD dwDrawAspect, LPSIZEL lpsizel);
     
      STDMETHOD(Advise)(IAdviseSink *pAdvSink, DWORD * pdwConnection);
      STDMETHOD(Unadvise)(DWORD dwConnection);
      STDMETHOD(EnumAdvise)(IEnumSTATDATA **ppenumAdvise);
      STDMETHOD(GetMiscStatus)(DWORD dwAspect, DWORD * pdwStatus);        
     
      STDMETHOD(SetColorScheme)(LPLOGPALETTE lpLogpal);

      InsertPDF *pParent;
      long refCount;

      class _ICursiVisionFrontEnd : public ICursiVisionFrontEnd {
      public:

         _ICursiVisionFrontEnd(_IOleObject *pp) : pParent(pp) {};
         ~_ICursiVisionFrontEnd() {};

         //   IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IDispatch

         STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
         STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
         STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
         STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);
   
         // ICursiVisionFrontEnd

         STDMETHOD(put_document)(BSTR documentName);
         STDMETHOD(get_document)(BSTR *pDocumentName);
         STDMETHOD(put_resultDocument)(BSTR saveAsName);
         STDMETHOD(get_resultDocument)(BSTR *pSaveAsName);
         STDMETHOD(put_templateDocument)(BSTR templateDocumentName);
         STDMETHOD(get_templateDocument)(BSTR *pTemplateDocumentName);
         STDMETHOD(put_settingsFile)(BSTR settingsFileName);
         STDMETHOD(put_showCursiVisionToolbar)(VARIANT_BOOL);
         STDMETHOD(get_showCursiVisionToolbar)(VARIANT_BOOL *);
         STDMETHOD(put_showCursiVisionStatusbar)(VARIANT_BOOL);
         STDMETHOD(get_showCursiVisionStatusbar)(VARIANT_BOOL *);
         STDMETHOD(put_showAdobeToolbar)(VARIANT_BOOL);
         STDMETHOD(get_showAdobeToolbar)(VARIANT_BOOL *);

         STDMETHOD(get_PDFEnabler)(IPdfEnabler **ppIPdfEnabler);
         STDMETHOD(get_PDFDocument)(IPdfDocument **ppIPdfDocument);
         STDMETHOD(get_SignaturePad)(ISignaturePad **ppISignaturePad);
         STDMETHOD(get_signedDocument)(BSTR *);
         STDMETHOD(get_signingLocationCount)(long *);
         STDMETHOD(put_profileRepository)(BSTR);
         STDMETHOD(get_profileRepository)(BSTR *);
         STDMETHOD(put_profile)(BSTR);
         STDMETHOD(get_profile)(BSTR *);

         STDMETHOD(get_IsPadConnected)(VARIANT_BOOL *);

         STDMETHOD(Sign)();
         STDMETHOD(Cancel)();

         STDMETHOD(CloseDocument)();
         STDMETHOD(SaveAs)(BSTR);
         STDMETHOD(SavePrompt)();

         STDMETHOD(UseBackEndCLSID)(CLSID backEndCLSID);
         STDMETHOD(DoBackEndCLSID)(CLSID backEndCLSID);

         STDMETHOD(Shift)(long deltaX,long deltaY);

      private:

         _IOleObject *pParent;

      } *pICursiVisionFrontEnd;

      // IDataObject

      class _IDataObject : public IDataObject {
      public:

         _IDataObject(_IOleObject *pp) : pParent(pp) {};
         ~_IDataObject() {};

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

      private:

         // IDataObject

         STDMETHOD(GetData)(FORMATETC *,STGMEDIUM *);
         STDMETHOD(GetDataHere)(FORMATETC *,STGMEDIUM *);
         STDMETHOD(QueryGetData)(FORMATETC *);
         STDMETHOD(GetCanonicalFormatEtc)(FORMATETC *,FORMATETC *);
         STDMETHOD(SetData)(FORMATETC *,STGMEDIUM *,BOOL);
         STDMETHOD(EnumFormatEtc)(DWORD,IEnumFORMATETC **);
         STDMETHOD(DAdvise)(FORMATETC *,DWORD,IAdviseSink *,DWORD *);
         STDMETHOD(DUnadvise)(DWORD);
         STDMETHOD(EnumDAdvise)(IEnumSTATDATA **);

         _IOleObject *pParent;

      } *pIDataObject;

      // IOleControl

      class _IOleControl : public IOleControl {

      public:

         _IOleControl(_IOleObject *pp) : pParent(pp) {};
         ~_IOleControl() {};

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

      private:
     
         STDMETHOD(GetControlInfo)(CONTROLINFO *);
         STDMETHOD(OnMnemonic)(MSG *);
         STDMETHOD(OnAmbientPropertyChange)(long);
         STDMETHOD(FreezeEvents)(int);

         _IOleObject *pParent;

      } *pIOleControl;

      // IOleInPlaceObject

      class _IOleInPlaceObject : public IOleInPlaceObject {

      public:

         _IOleInPlaceObject(_IOleObject *pp) : pParent(pp) {};
         ~_IOleInPlaceObject() {};

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IOleWindow
   
         STDMETHOD (GetWindow)(HWND *);
         STDMETHOD (ContextSensitiveHelp)(BOOL);

         // IOleInPlaceObject

         STDMETHOD (InPlaceActivate)();
         STDMETHOD (InPlaceDeactivate)();
         STDMETHOD (UIDeactivate)();
         STDMETHOD (SetObjectRects)(LPCRECT,LPCRECT);
         STDMETHOD (ReactivateAndUndo)();

      private:

         _IOleObject *pParent;

      } *pIOleInPlaceObject;

      // IOleInPlaceActiveObject

      class _IOleInPlaceActiveObject : public IOleInPlaceActiveObject {

      public:

         _IOleInPlaceActiveObject(_IOleObject *pp) : pParent(pp) {};
         ~_IOleInPlaceActiveObject() {};

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

      private:

         // IOleWindow
   
         STDMETHOD (GetWindow)(HWND *);
         STDMETHOD (ContextSensitiveHelp)(BOOL);

         // IOleInPlaceActiveObject

         STDMETHOD(TranslateAccelerator)(LPMSG);
         STDMETHOD(OnFrameWindowActivate)(BOOL);
         STDMETHOD(OnDocWindowActivate)(BOOL);
         STDMETHOD(ResizeBorder)(LPCRECT ,IOleInPlaceUIWindow *,BOOL);
         STDMETHOD(EnableModeless)(BOOL);

      private:

         _IOleObject *pParent;

      } *pIOleInPlaceActiveObject;


      class _IProvideClassInfo2 : public IProvideClassInfo2 {
      public:

         _IProvideClassInfo2(_IOleObject *pp) : pParent(pp) {};
         ~_IProvideClassInfo2() {};

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IProvideClassInfo

         STDMETHOD(GetClassInfo)(ITypeInfo **);

         // IProvideClassInfo2

         STDMETHOD(GetGUID)(DWORD,GUID *);

      private:

         _IOleObject *pParent;

      } *pIProvideClassInfo2;

      class _IQuickActivate : public IQuickActivate {
      public:

         _IQuickActivate(_IOleObject *pp) : pParent(pp) {};
         ~_IQuickActivate() {};

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

        //  IQuickActivate

        STDMETHOD(QuickActivate)(QACONTAINER* pQAContainer,QACONTROL* pQAControl);
        STDMETHOD(SetContentExtent)(SIZEL* pSizel);
        STDMETHOD(GetContentExtent)(SIZEL* pSizel);

      private:
   
         _IOleObject* pParent;

      } *pIQuickActivate;

      class _IViewObjectEx : public IViewObjectEx {
      public:

         _IViewObjectEx(_IOleObject *pp) : pParent(pp) {};
         ~_IViewObjectEx() {};

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IViewObject

         STDMETHOD (Draw)(unsigned long,long,void *,DVTARGETDEVICE *,HDC,HDC,const struct _RECTL *,const struct _RECTL *,int (__stdcall *)(unsigned long),unsigned long);
         STDMETHOD (GetColorSet)(DWORD,long,void *,DVTARGETDEVICE *,HDC,LOGPALETTE **);
         STDMETHOD (Freeze)(DWORD,long,void *,DWORD *);
         STDMETHOD (Unfreeze)(DWORD);
         STDMETHOD (SetAdvise)(DWORD,DWORD,IAdviseSink *);
         STDMETHOD (GetAdvise)(DWORD *,DWORD *,IAdviseSink **);

         // IViewObject2

         STDMETHOD (GetExtent)(unsigned long,long,DVTARGETDEVICE *,struct tagSIZE *);

         // IViewObjectEx

         STDMETHOD (GetRect)(DWORD dwAspect,RECTL *);
         STDMETHOD (GetViewStatus)(DWORD *);
         STDMETHOD (QueryHitPoint)(DWORD dwAspect,const struct tagRECT *pRectBounds,POINT ptlHit,long lCloseHint,DWORD *dwHitResult);
         STDMETHOD (QueryHitRect)(DWORD dwAspect,const struct tagRECT *pRectBounds,const struct tagRECT *rctHit,long lCloseHint,DWORD *dwHitResult);
         STDMETHOD (GetNaturalExtent)(DWORD dwExtent,LONG lIndex,DVTARGETDEVICE *ptd,HDC hicTargetDev,DVEXTENTINFO *extentInfo,SIZEL *);

      private:
   
         _IOleObject *pParent;

      } *pIViewObjectEx;

      class _IRunnableObject : public IRunnableObject {
      public:

         _IRunnableObject(_IOleObject *pp) : pParent(pp) {};
         ~_IRunnableObject() {};

         // IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IRunnableObject

         STDMETHOD (GetRunningClass)(CLSID *);
         STDMETHOD (Run)(LPBC);
         int __stdcall IsRunning(void);
         STDMETHOD (LockRunning)(BOOL,BOOL);
         STDMETHOD (SetContainedObject)(BOOL);

      private:
   
         _IOleObject *pParent;

      } *pIRunnableObject;


      class _ISpecifyPropertyPages : public ISpecifyPropertyPages {
      public:

         _ISpecifyPropertyPages(_IOleObject *p) : pParent(p) {};
         ~_ISpecifyPropertyPages() {};

         // IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // ISpecifyPropertyPages

         STDMETHOD(GetPages)(CAUUID *pPages);

      private:

         _IOleObject *pParent;

      } *pISpecifyPropertyPages;

      class _IPropertyPage : public IPropertyPage {
      public:

         _IPropertyPage(_IOleObject *p,CLSID clsid) : pParent(p),theCLSID(clsid) {};
         ~_IPropertyPage() {};

         // IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         // IPropertyPage

      private:

         STDMETHOD(SetPageSite)(IPropertyPageSite *pPageSite);
         STDMETHOD(Activate)(HWND hWndParent, LPCRECT prc, BOOL fModal);
         STDMETHOD(Deactivate)();
         STDMETHOD(GetPageInfo)(PROPPAGEINFO *pPageInfo);
         STDMETHOD(SetObjects)(ULONG cObjects, IUnknown **ppUnk);
         STDMETHOD(Show)(UINT nCmdShow);
         STDMETHOD(Move)(LPCRECT prc);
         STDMETHOD(IsPageDirty)();
         STDMETHOD(Apply)();
         STDMETHOD(Help)(LPCOLESTR pszHelpDir);
         STDMETHOD(TranslateAccelerator)(LPMSG pMsg);

         _IOleObject *pParent;
         CLSID theCLSID;

      } *pIPropertyPage[7];

      //   IPropertyPageClient

      class _IGPropertyPageClient : public IGPropertyPageClient {
      public:

         _IGPropertyPageClient(_IOleObject *p) : pParent(p),refCount(0) {};
         ~_IGPropertyPageClient() {};

         //   IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

      private:

         STDMETHOD(BeforeAllPropertyPages)();
         STDMETHOD(GetPropertyPagesInfo)(long* countPages,SAFEARRAY** stringDescriptions,SAFEARRAY** stringHelpDirs,SAFEARRAY** pSize);
         STDMETHOD(CreatePropertyPage)(long,long,RECT*,BOOL,long* hwndPropertyPage);
         STDMETHOD(Apply)();
         STDMETHOD(IsPageDirty)(long,BOOL*);
         STDMETHOD(Help)(BSTR bstrHelpDir);
         STDMETHOD(TranslateAccelerator)(long,long*);
         STDMETHOD(AfterAllPropertyPages)(BOOL);
         STDMETHOD(DestroyPropertyPage)(long);

         STDMETHOD(GetPropertySheetHeader)(void *pHeader);
         STDMETHOD(get_PropertyPageCount)(long *pCount);
         STDMETHOD(GetPropertySheets)(void *pSheets); 

         _IOleObject *pParent;
         long refCount;

      } *pIGPropertyPageClient;

      class _IPersistStreamInit : public IPersistStreamInit {
      public:
 
         _IPersistStreamInit(_IOleObject *pp) : pParent(pp) {};
         ~_IPersistStreamInit() {};
 
         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();
 
         STDMETHOD(GetClassID)(CLSID *);
 
//      IPersistStream
 
         STDMETHOD(GetSizeMax)(ULARGE_INTEGER *);
         STDMETHOD(IsDirty)();
         STDMETHOD(Load)(IStream *);
         STDMETHOD(Save)(IStream *,int);
 
 //      IPersistStreamInit
 
         STDMETHOD(InitNew)();

     private:
 
         _IOleObject *pParent;
 
      } * pIPersistStreamInit;
 
      class _IPersistStorage : public IPersistStorage {
      public:
 
         _IPersistStorage(_IOleObject *pp) : pParent(pp), noScribble(true), pIStorage_Cached(NULL) {};
         ~_IPersistStorage() { if ( pIStorage_Cached ) pIStorage_Cached -> Release(); };
 
         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();
 
         STDMETHOD(GetClassID)(CLSID *);
         STDMETHOD(IsDirty)();
         STDMETHOD(InitNew)(IStorage *);
         STDMETHOD(Load)(IStorage *);
         STDMETHOD(Save)(IStorage *,BOOL);
         STDMETHOD(SaveCompleted)(IStorage *);
         STDMETHOD(HandsOffStorage)();
 
      private:
 
         _IOleObject *pParent;

         IStorage *pIStorage_Cached;

         boolean noScribble;
 
      } *pIPersistStorage;

      // IConnectionPointContainer

      struct _IConnectionPointContainer : public IConnectionPointContainer {

      public:

        STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
        STDMETHOD_ (ULONG, AddRef)();
        STDMETHOD_ (ULONG, Release)();

        STDMETHOD(FindConnectionPoint)(REFIID riid,IConnectionPoint **);
        STDMETHOD(EnumConnectionPoints)(IEnumConnectionPoints **);

        _IConnectionPointContainer(_IOleObject *pp);
		  ~_IConnectionPointContainer();

        void fire_PropertyChanged();

        void fire_DocumentStaged();
        void fire_DocumentOpened();
        void fire_DocumentClosed();
        void fire_DocumentSigned();
        void fire_DocumentSaved(BSTR savedFileName);
        void fire_AwaitingSignature();
        void fire_NoPadException();
        void fire_ExitRequested();

        void fire_PenDown(long x,long y);
        void fire_PenUp(long x,long y);
        void fire_PenPoint(long x,long y);

     private:

		  _IOleObject *pParent;

     } connectionPointContainer;

     struct _IConnectionPoint : IConnectionPoint {

	  public:

        STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
        STDMETHOD_ (ULONG, AddRef)();
        STDMETHOD_ (ULONG, Release)();

        STDMETHOD (GetConnectionInterface)(IID *);
        STDMETHOD (GetConnectionPointContainer)(IConnectionPointContainer **ppCPC);
        STDMETHOD (Advise)(IUnknown *pUnk,DWORD *pdwCookie);
   	  STDMETHOD (Unadvise)(DWORD);
        STDMETHOD (EnumConnections)(IEnumConnections **ppEnum);

        _IConnectionPoint(_IOleObject *pp,const IID &theInterface);
		  ~_IConnectionPoint();
		  IUnknown *AdviseSink() { return adviseSink; };

     private:

        int getSlot();
        int findSlot(DWORD dwCookie);

        IID eventInterface;

		  IUnknown *adviseSink;
		  _IOleObject *pParent;
        DWORD nextCookie;
		  int countConnections,countLiveConnections;

        long refCount;

        CONNECTDATA *connections;

     } connectionPoint_PropertyNotifySink,connectionPoint_CursiVisionEvents;


	  struct _IEnumConnectionPoints : IEnumConnectionPoints {

	  public:

        STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
        STDMETHOD_ (ULONG, AddRef)();
        STDMETHOD_ (ULONG, Release)();

 	     STDMETHOD (Next)(ULONG cConnections,IConnectionPoint **rgpcn,ULONG *pcFetched);
        STDMETHOD (Skip)(ULONG cConnections);
        STDMETHOD (Reset)();
        STDMETHOD (Clone)(IEnumConnectionPoints **);

	     _IEnumConnectionPoints(_IOleObject *pp,_IConnectionPoint **cp,int connectionPointCount);
       ~_IEnumConnectionPoints();

     private:

        int cpCount,enumeratorIndex;
		  _IOleObject *pParent;
		  _IConnectionPoint **connectionPoints;

     } *enumConnectionPoints;


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

      } *enumConnections;

      IOleAdviseHolder *pOleAdviseHolder;
      IDataAdviseHolder *pDataAdviseHolder;

      IAdviseSink *pViewAdviseSink;
      DWORD adviseSink_dwAspect,adviseSink_advf;
      DWORD dwViewAdviseSinkConnection;

      BYTE *pOleObjectProperties;
      long oleObjectPropertiesSize;

      IOleClientSite *pIOleClientSite_MySite;
      IOleInPlaceSite *pIOleInPlaceSite_MySite;

      IUnknown *ppIUnknownBackEnds[32];

      templateDocument *pTemplateDocument;

      bool isRunning;

      HWND hwndDispositionSettings;
      HWND hwndAdditionalBackEnds;
      HWND hwndControlProperties;
      HWND hwndTemplateProperties;
      HWND hwndRecognitionProperties;
      HWND hwndSigningLocationsProperties;
      HWND hwndDataFields;

      static LRESULT CALLBACK dispositionSettingsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
      static LRESULT CALLBACK dispositionSettingsHandlerISpecifyPropertyPageImplementation(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

      static LRESULT CALLBACK additionalSaveOptionsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
      static LRESULT CALLBACK multiSignOptionsHandler(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK additionalBackEndsHandler(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);
      static LRESULT CALLBACK additionalBackEndsHandlerISpecifyPropertyPageImplementation(HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam);

      static LRESULT CALLBACK listViewHandler(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK controlPropertiesHandler(HWND,UINT,WPARAM,LPARAM);
      static LRESULT CALLBACK controlPropertiesHandlerISpecifyPropertyPageImplementation(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK templateHandler(HWND,UINT,WPARAM,LPARAM);
      static LRESULT CALLBACK templateHandlerISpecifyPropertyPageImplementation(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK recognitionHandler(HWND,UINT,WPARAM,LPARAM);
      static LRESULT CALLBACK recognitionHandlerISpecifyPropertyPageImplementation(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK signingLocationsHandler(HWND,UINT,WPARAM,LPARAM);
      static LRESULT CALLBACK signingLocationsHandlerISpecifyPropertyPageImplementation(HWND,UINT,WPARAM,LPARAM);

      static LRESULT CALLBACK fieldsHandler(HWND,UINT,WPARAM,LPARAM);
      static LRESULT CALLBACK fieldsHandlerISpecifyPropertyPageImplementation(HWND,UINT,WPARAM,LPARAM);

      friend class InsertPDF;
      friend class SignatureProcess;
      friend class doodleOptions;

   };
