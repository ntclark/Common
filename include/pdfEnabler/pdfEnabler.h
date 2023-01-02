
#pragma once

#include "PdfEnabler_i.h"
//#include "Properties_i.h"

#define ALLOC_CONNECTIONS     16

   class DLLEXPORT PdfEnabler : public IPdfEnabler {

   public:

      PdfEnabler(IUnknown *pUnkOuter);

      ~PdfEnabler();

      STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

      STDMETHOD_ (ULONG, AddRef)();
      STDMETHOD_ (ULONG, Release)();

   private:

      STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
      STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
      STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
      STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);

   // IPdfEnabler

      STDMETHOD(Document)(IPdfDocument **);

   private:

      long refCount;

   };


#ifdef DEFINE_DATA

   HMODULE hModule;
   char szModuleName[MAX_PATH];
   ITypeInfo *pITypeInfo;

#else

   extern HMODULE hModule;
   extern char szModuleName[];
   extern ITypeInfo *pITypeInfo;

#endif
