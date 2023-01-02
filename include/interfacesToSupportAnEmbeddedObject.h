
      class _IOleInPlaceSite;
      class _IOleInPlaceFrame;
      class _IOleDocumentSite;

      // IOleClientSite

      class _IOleClientSite : public IOleClientSite {

      public:

         _IOleClientSite(EMBEDDED_OBJECT_EMBEDDER_CLASS *p,_IOleInPlaceSite *pis,_IOleInPlaceFrame *pif) : pParent(p), pIOleInPlaceSite(pis),pIOleInPlaceFrame(pif) { pParent -> AddRef(); };
         ~_IOleClientSite() {};

         //   IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         long _stdcall SaveObject();
         long _stdcall GetMoniker(DWORD,DWORD,IMoniker**);
         long _stdcall GetContainer(IOleContainer**);
         long _stdcall ShowObject();
         long _stdcall OnShowWindow(BOOL);
         long _stdcall RequestNewObjectLayout();

         EMBEDDED_OBJECT_EMBEDDER_CLASS *pParent{NULL};

         _IOleInPlaceSite *pIOleInPlaceSite{NULL};
         _IOleInPlaceFrame *pIOleInPlaceFrame{NULL};

      } * pIOleClientSite_HTML_Host{NULL};

      // IOleDocumentSite

      class _IOleDocumentSite : public IOleDocumentSite {

      public:

         _IOleDocumentSite(EMBEDDED_OBJECT_EMBEDDER_CLASS *p,_IOleClientSite *pics) : pParent(p), pIOleClientSite(pics), pIOleDocumentView(NULL) { pParent -> AddRef(); };
         ~_IOleDocumentSite() { if ( pIOleDocumentView ) pIOleDocumentView -> Release(); };

         //   IUnknown

         STDMETHOD (QueryInterface)(REFIID riid,void **ppv);
         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         long _stdcall ActivateMe(IOleDocumentView *);

         EMBEDDED_OBJECT_EMBEDDER_CLASS *pParent{NULL};

         _IOleClientSite *pIOleClientSite{NULL};
         IOleDocumentView *pIOleDocumentView{NULL};

      } * pIOleDocumentSite_HTML_Host{NULL};

      // IOleInPlaceSiteEx

      class _IOleInPlaceSite : public IOleInPlaceSiteEx {

      public:

         _IOleInPlaceSite(EMBEDDED_OBJECT_EMBEDDER_CLASS* pp,_IOleInPlaceFrame *ipf) : pParent(pp), pIOleInPlaceFrame(ipf) { pParent -> AddRef(); };

         _IOleInPlaceFrame *GetIOleInPlaceFrame() { return pIOleInPlaceFrame; };

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

      private:

         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         STDMETHOD(GetWindow)(HWND*);
         STDMETHOD(ContextSensitiveHelp)(BOOL);
         STDMETHOD(CanInPlaceActivate)();
         STDMETHOD(OnInPlaceActivate)();
         STDMETHOD(OnUIActivate)();
         STDMETHOD(GetWindowContext)(IOleInPlaceFrame **,IOleInPlaceUIWindow**,RECT* position,RECT* clip,OLEINPLACEFRAMEINFO*);
         STDMETHOD(Scroll)(SIZE);
         STDMETHOD(OnUIDeactivate)(BOOL);
         STDMETHOD(OnInPlaceDeactivate)();
         STDMETHOD(DiscardUndoState)();
         STDMETHOD(DeactivateAndUndo)();
         STDMETHOD(OnPosRectChange)(const RECT*);
         STDMETHOD(OnInPlaceActivateEx)(BOOL *,DWORD);
         STDMETHOD(OnInPlaceDeactivateEx)(BOOL);
         STDMETHOD(RequestUIActivate)();

      protected:

         EMBEDDED_OBJECT_EMBEDDER_CLASS *pParent{NULL};

         _IOleInPlaceFrame *pIOleInPlaceFrame{NULL};

      } * pIOleInPlaceSite_HTML_Host{NULL};

      // IOleInPlaceFrame

      class _IOleInPlaceFrame : public IOleInPlaceFrame {

      public:

         _IOleInPlaceFrame(EMBEDDED_OBJECT_EMBEDDER_CLASS *pp,HWND hostWindow) : pParent(pp), hwndHost(hostWindow) { pParent -> AddRef(); };

         STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

         HWND HWNDHost() { return hwndHost; };

      private:

         STDMETHOD_ (ULONG, AddRef)();
         STDMETHOD_ (ULONG, Release)();

         STDMETHOD(GetWindow)(HWND *);
         STDMETHOD(ContextSensitiveHelp)(BOOL);
         STDMETHOD(GetBorder)(RECT *);
         STDMETHOD(RequestBorderSpace)(LPCBORDERWIDTHS);
         STDMETHOD(SetBorderSpace)(LPCBORDERWIDTHS);
         STDMETHOD(SetActiveObject)(IOleInPlaceActiveObject *,LPCOLESTR);
         STDMETHOD(InsertMenus)(HMENU,OLEMENUGROUPWIDTHS *);
         STDMETHOD(SetMenu)(HMENU,HOLEMENU,HWND);
         STDMETHOD(RemoveMenus)(HMENU);
         STDMETHOD(SetStatusText)(LPCOLESTR);
         STDMETHOD(EnableModeless)(BOOL);
         STDMETHOD(TranslateAccelerator)(MSG *,WORD);

      protected:

         EMBEDDED_OBJECT_EMBEDDER_CLASS *pParent{NULL};

         HWND hwndHost{NULL};

      } * pIOleInPlaceFrame_HTML_Host{NULL};