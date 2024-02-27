
#pragma once

#include "Object.h"

class DLLEXPORT PdfDocument;

class DLLEXPORT PdfPage : public IPdfPage {

public:
   
   PdfPage(PdfDocument *,long pageNumber,PdfObject *);
   ~PdfPage();

   // IUnknown

   STDMETHOD(QueryInterface)(REFIID riid,void **ppv);

   STDMETHOD_ (ULONG, AddRef)();
   STDMETHOD_ (ULONG, Release)();

   // IDispatch

   STDMETHOD(GetTypeInfoCount)(UINT *pctinfo);
   STDMETHOD(GetTypeInfo)(UINT itinfo, LCID lcid, ITypeInfo **pptinfo);
   STDMETHOD(GetIDsOfNames)(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgdispid);
   STDMETHOD(Invoke)(DISPID dispidMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pdispparams, VARIANT *pvarResult, EXCEPINFO *pexcepinfo, UINT *puArgErr);

   // IPdfPage

   STDMETHOD(AddStream)(BYTE *,long dataSize,long identifier);
   STDMETHOD(PageSize)(RECT *);
   STDMETHOD(Rotation)(double *);
   STDMETHOD(AddImage)(double fromLeft,double fromTop,double scaleX,double scaleY,HBITMAP bitmapHandle);
   STDMETHOD(DisplayedPageSize)(RECT *);
   STDMETHOD(AddImageFromFile)(double inchesFromLeft,double inchesFromTop,double scaleX,double scaleY,BSTR bstrFileName);
   STDMETHOD(AddCenteredImageFromFile)(double inchesFromLeft,double inchesFromTop,BSTR bstrFileName);
   STDMETHOD(AddSizedImageFromFile)(double inchesFromLeft,double inchesFromTop,double widthInInches,double heightInInches,BSTR bstrFileName);
   STDMETHOD(get_PageNumber)(long *);
   STDMETHOD(ParseText)(HDC hdc,RECT *prcWindowsClip,void *pvIPostScriptTakeText);
   STDMETHOD(GetNativePdfPage)(void **ppPdfPage);
   STDMETHOD(GetLastError)(char **ppszError);
   STDMETHOD(AddBinaryObjectFromFile)(BSTR objectName,BSTR fileName);
   STDMETHOD(GetBinaryObjectToFile)(BSTR objectName,BSTR fileName);
   STDMETHOD(AddText)(char *pszText,double inchesFromLeft,double inchesFromRight,char *pszFont = NULL,double fontSize = 8.0);


   PdfObject *Object() { return pContentsObject; };

   long PageNumber() { return pageNumber; };

   long AddContentsReference(PdfObject *pObject) { return addContentsReference(pObject); };

   PdfDictionary *findResource(char *pszResourceName,char *pszSubdictionaryType);

   long getPageSize(RECT *);

   long getRotation(double *);

private:

   long addStreamInternal(BYTE *pData,long dataSize,long identifier,long embedCount = -1L);

   long addContentsReference(PdfObject *);

   HRESULT parseText(HDC hdc,RECT *prcWindowsClip,void *pvIPostScriptTakeText);

   PdfDocument *pDocument;
   PdfObject *pContentsObject;

   long pageNumber;

   long refCount;

   static char szErrorMessage[1024];

};