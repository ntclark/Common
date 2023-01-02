
#include <comcat.h>

#pragma once

#include "GSystem_i.h"

#include "general.h"

#include "Variable_i.h"
#include "Evaluator_i.h"

#ifdef __cplusplus
  //extern "C" {
#endif

  LONG isLessConventional(double,double);
  LONG isLessBackward(double,double);

  double evalConsume(IEvaluator *pEvaluator,char *v);
  double eval(IEvaluator *pEvaluator,char *);
  double evalBSTR(IEvaluator *pEvaluator,BSTR);

  int uppercase(char *);
  int trim(char *);
  int lowercase(char *);
  char nextChar(char **);
  int replaceChar(char,char ** );
  int errorSound(void);
  int errorSound2(void);
  int errorSound3(void);
  int errorBlip(void);
  int adjustRange(double *min,double *max);
  long nextSegmentID(void);
  
  char *bstrcpy(char *,BSTR);
  char *strFromBstr(BSTR source);
  BSTR bstrFromStr(char *source);
  void freeStrFromBstr(char *toFree);
  void freeBstrFromStr(BSTR toFree);
  OLECHAR *convertToUnicode(char * szA);
  char *convertToSZAscii(OLECHAR * szU);

  HRESULT commaStringFromVariant(VARIANT *,char *szSupplied,long lenString);
  HRESULT variantFromCommaString(IEvaluator *pEvaluator,char *szSupplied,VARIANT *pv);

  HRESULT PutDataPointSafeArray(SAFEARRAY **ppDoubles,DataPoint *values);
  HRESULT GetDataPointSafeArray(SAFEARRAY *pArray,DataPoint *values);

  int subtractRect(RECT* rect,RECT* minusThis,RECT* equalsThis);
  
  int unitVector(double *input,double *output);
  int unitVector(float *input,float *output);
  int unitPoint(DataPoint *,DataPoint *);
  int unitVector(DataPoint *pDPIn,DataPoint *pResult);

  double radiansFromXY(double x,double y);

  double magnitude(double *input);
  int VxV(double *inputVector1,double *inputVector2,double *outputVector);
  int VxV(float *inputVector1,float *inputVector2,float *outputVector);
  int VxV(DataPoint *pDP1,DataPoint *pDP2,DataPoint *outputPoint);

  int VplusV(double *inputVector1,double *inputVector2,double *outputVector);
  int VplusV(float *inputVector1,float *inputVector2,float *outputVector);
  int VminusV(double *inputVector1,double *inputVector2,double *outputVector);
  int VminusV(float *inputVector1,float *inputVector2,float *outputVector);

  int VplusV(DataPoint *pDP1,DataPoint *pDP2,DataPoint *pResult);
  int VminusV(DataPoint *pDP1,DataPoint *pDP2,DataPoint *pResult);

  int MxV(double *inputMatrix,double *inputVector,double *outputVector);
  int MxPoint(double *inputMatrix,DataPoint *inputPoint,DataPoint *outputPoint);

  int M4xV(double *inputMatrix,double *inputVector,double *outputVector);
  int MTxV(double *inputMatrix,double *inputVector,double *outputVector);
  int MxM(double *inputMatrix1,double *inputMatrix2,double *outputMatrix);
  int MTxM(double *inputMatrix1,double *inputMatrix2,double *outputMatrix);
  int MxScalar(double *inputMatrix,double scalar,double *outputMatrix);
  int MplusM(double *inputMatrix1,double *inputMatrix2,double *outputMatrix);

  int rotateMatrix(char axis,double angle,double *output);
  int rotateMatrixVector(double angle,double *vector,double *output);
  int shearMatrix(char axis,double ratio,double *output);
  int viewToScreen(double viewVector[],double theta,double transformer[3][3]);
  int viewVectorFromRotations(double *angles,double *viewVector);
  int Solve(double *matrix,double *vector,double *solution,LONG size);
  int SolveOld(double *matrix,double *vector,double *solution,LONG size);
  int Mx4Inverse(double *source,double *target);
  
  __declspec(dllexport) HWND WinWindowFromID(HWND hwndParent,UINT idChild);
  
// COM Registry

  HRESULT utilsDllRegisterTypeLib(OLECHAR* wstrModuleName);
  HRESULT utilsDllUnregisterTypeLib(OLECHAR* wstrModuleName,const CLSID libID,unsigned short wVersionMajor,unsigned short wVersionMinor);

  HRESULT utilsDllRegisterObject(const CLSID classID,const CLSID libID,
                                HMODULE hModule,char *szModuleName,
                                char *objectName,
                                char *versionIndependentName,
                                char *versionDependentName,
                                CATID* pCategoryIDs,
                                long bitmapIndex,long oleMisc,boolean isControl,boolean isInsertable,boolean isProgrammable);
  
  HRESULT utilsDllUnregisterObject(const CLSID classID,char *versionIndependentName,char *versionDependentName);

// General Registry

  int deleteSubKey(HKEY parentKeyHandle,HKEY thisKeyHandle,char* thisKeyName);

// VARIANTS

  HRESULT GVariantInit(VARIANT*);
  HRESULT GVariantClear(VARIANT*);
  HRESULT GVariantCopy(VARIANT*,VARIANT*);
  long GVariantSize(VARIANT* v);

  int getVariantBinaryRepresentation(VARTYPE vtOwnerArray,VARTYPE* pvtOveride,VARIANT* v,BYTE** pResult,long* cntBytes);
  int getVariantFromBinaryRepresentation(VARIANT* v,VARTYPE vt,BYTE *theHex,unsigned long cntBytes);
  int convertSzStringToVariant(char *sIn,VARIANT* pv);
  HRESULT convertVariantToSzString(VARIANT* pvv,char **szString);
  int convertVariantToScalarValue(VARIANT* pv,void* someData);
  long countSafeArrayItems(SAFEARRAY* psa);

#ifdef __cplusplus
//  }
#endif

#define PIXELS_TO_HIMETRIC(x,ppli)  ( (2540*(x) + ((ppli) >> 1)) / (ppli) )
#define HIMETRIC_TO_PIXELS(x,ppli)  ( ((ppli)*(x) + 1270) / 2540 )


#define EVALUATE_SZ(ev,szExpression,result) {                                      \
   double _theValue;                                                               \
   BSTR bstrExpression = SysAllocStringLen(NULL,MAX_PROPERTY_SIZE);                \
   MultiByteToWideChar(CP_ACP,0,szExpression,-1,bstrExpression,MAX_PROPERTY_SIZE); \
   ev -> get_Eval(bstrExpression,&_theValue);                                      \
   SysFreeString(bstrExpression);                                                  \
   result = _theValue;                                                             \
   }

#define EVALUATE_VARIABLE(ev,v,result) {                                           \
   double _theValue;                                                               \
   BSTR _bstrExpression = SysAllocStringLen(NULL,MAX_PROPERTY_SIZE);               \
   v -> get_Expression(&_bstrExpression);                                          \
   evaluator -> get_Eval(_bstrExpression,&_theValue);                              \
   v -> put_Value(_theValue);                                                      \
   SysFreeString(_bstrExpression);                                                 \
   result = _theValue;                                                             \
   }

#define PUT_SZCHAR_TO_BSTR(iface,method,szchar) {            \
   BSTR bstrValue = SysAllocStringLen(NULL,1024);            \
   MultiByteToWideChar(CP_ACP,0,szchar,-1,bstrValue,1024);   \
   iface -> method(bstrValue);                               \
   SysFreeString(bstrValue);                                 \
   }

#define HWND_FROM_VT(h) (HWND)(h.lVal)
#define HWND_FROM_LONG(h) reinterpret_cast<HWND>(h)
#define LONG_FROM_HWND(h) reinterpret_cast<long>(h)

#define VT_FROM_HWND(h) (VARIANT)(h)

#define SZSTRING_FROM_STRING(sz,sizesz,bstrstring) \
   { \
   memset((sz),0,(sizesz));      \
   WideCharToMultiByte(CP_ACP,0,(bstrstring),-1,(sz),(sizesz),0,0);   \
   }

#define DEBUG_BREAK {      \
_asm {                     \
int 3                      \
}                          \
}

#define MAX_CONNECTION_POINT  8
#define ALLOC_CONNECTIONS     8

