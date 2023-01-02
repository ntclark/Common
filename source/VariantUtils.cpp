
#include <windows.h>
#include <stdio.h>

#include "utils.h"

   HRESULT GVariantInit(VARIANT* vc) {
   VariantInit(vc);
   memset(vc,0,sizeof(VARIANT));
   vc -> vt = VT_EMPTY;
   return S_OK;
   }


   HRESULT GVariantClear(VARIANT* vc) {
   HRESULT rc = S_OK;
   switch ( vc -> vt ) {
   case VT_BYREF | VT_I1:
      delete [] reinterpret_cast<char *>(vc -> pcVal);
      break;
   default:
      rc = VariantClear(vc);
   }
   GVariantInit(vc);
   return rc;
   }


   HRESULT GVariantCopy(VARIANT* vct,VARIANT* vcs) {
   return VariantCopy(vct,vcs);
   }


   int getVariantFromBinaryRepresentation(VARIANT* v,VARTYPE vt,BYTE *pData,unsigned long cntBytes) {

   GVariantClear(v);

   v -> vt = vt;
   bool byRef = false;
   if ( vt & VT_BYREF ) {
      byRef = true;
      vt = vt & ~ VT_BYREF;
   }

#define VARIANT_VALUE(pvtype,vtype,_type)    \
   if ( byRef ) pvtype = new _type;    \
   memcpy(byRef ? pvtype : &vtype,pData,cntBytes);

   switch ( vt ) {
   case ( VT_I1 ) :
      VARIANT_VALUE(v -> pcVal,v -> cVal,char)
      break;

   case ( VT_UI2) :
      VARIANT_VALUE(v -> puiVal,v -> uiVal,unsigned short)
      break;

   case ( VT_UI4 ) :
      VARIANT_VALUE(v -> pulVal,v -> ulVal,unsigned long)
      break;

   case ( VT_INT ) :
      VARIANT_VALUE(v -> pintVal,v -> intVal,int)
      break;

   case ( VT_UINT ) :
      VARIANT_VALUE(v -> puintVal,v -> uintVal,unsigned int)
      break;

   case ( VT_UI1 ) :
      VARIANT_VALUE(v -> pbVal,v -> bVal,BYTE)
      break;

   case ( VT_I2 ) :
      VARIANT_VALUE(v -> piVal,v -> iVal,short)
      break;

   case ( VT_I4 ) :
      VARIANT_VALUE(v -> plVal,v -> lVal,long)
      break;

   case ( VT_R4 ) :
      VARIANT_VALUE(v -> pfltVal,v -> fltVal,float)
      break;

   case ( VT_R8 ) :
      VARIANT_VALUE(v -> pdblVal,v -> dblVal,double)
      break;

   case ( VT_BOOL ) :
      VARIANT_VALUE(v -> pboolVal,v -> boolVal,short)
      break;

   case ( VT_ERROR ) :
      VARIANT_VALUE(v -> pscode,v -> scode,SCODE)
      break;

   case ( VT_CY ) :
      VARIANT_VALUE(v -> pcyVal,v -> cyVal,CY)
      break;

   case ( VT_DATE ) :
      VARIANT_VALUE(v -> pdate,v -> date,DATE)
      break;

   case ( VT_BSTR ) : {
      if ( byRef ) {
         v -> pbstrVal = new BSTR;
         *v -> pbstrVal = SysAllocStringLen(NULL,cntBytes / 2);
         memcpy(*v -> pbstrVal,pData,cntBytes);
      } else {
         v -> bstrVal = SysAllocStringLen(NULL,cntBytes / 2);
         memcpy(v -> bstrVal,pData,cntBytes);
      }
      }
      break;

   default:
      break;
   }
   return 0;
   }


   long GVariantSize(VARIANT* v) {

   if ( VT_EMPTY == v -> vt ) 
      return 0;

   bool byRef = false;
   if ( v -> vt & VT_BYREF ) {
      byRef = true;
   }

#define VARIANT_SIZE(vptrtype,vtype) return byRef ? sizeof(vptrtype) : sizeof(vtype);

   switch ( v -> vt ) {
   case ( VT_I1 ) :
      VARIANT_SIZE(v -> pcVal,v -> cVal)

   case ( VT_UI2) :
      VARIANT_SIZE(v -> puiVal,v -> uiVal)

   case ( VT_UI4 ) :
      VARIANT_SIZE(v -> pulVal,v -> ulVal)

   case ( VT_INT ) :
      VARIANT_SIZE(v -> pintVal,v -> intVal)

   case ( VT_UINT ) :
      VARIANT_SIZE(v -> puintVal,v -> uintVal)

   case ( VT_UI1 ) :
      VARIANT_SIZE(v -> pbVal,v -> bVal)

   case ( VT_I2 ) :
      VARIANT_SIZE(v -> piVal,v -> iVal)

   case ( VT_R4 ) :
      VARIANT_SIZE(v -> pfltVal,v -> fltVal)

   case ( VT_R8 ) :
      VARIANT_SIZE(v -> pdblVal,v -> dblVal)

   case ( VT_BOOL ) :
      VARIANT_SIZE(v -> pboolVal,v -> boolVal)

   case ( VT_ERROR ) :
      VARIANT_SIZE(v -> pscode,v -> scode)

   case ( VT_CY ) :
      VARIANT_SIZE(v -> pcyVal,v -> cyVal)

   case ( VT_DATE ) :
      VARIANT_SIZE(v -> pdate,v -> date)

   case ( VT_BSTR ) :
      return 2 * (long)wcslen(byRef ? *v -> pbstrVal : v -> bstrVal);

   default:
      break;

   }

   return 0;
   }


   int getVariantBinaryRepresentation(VARTYPE vtOwnerArray,VARTYPE* pvtOveride,VARIANT* v,BYTE** pResult,long* cntBytes) {

   bool byRef = false;

#define COERCED_VALUE(vptrType,vtype)                 \
      *pResult = new BYTE[*cntBytes = sizeof(vtype)]; \
      memcpy(*pResult,byRef ? reinterpret_cast<BYTE*>(v) : reinterpret_cast<BYTE*>(v),*cntBytes); \
      memcpy(&vtype,*pResult,sizeof(vtype));          \
      v -> vt = vtOwnerArray;

   if ( VT_VARIANT != vtOwnerArray && VT_EMPTY != vtOwnerArray ) {

      if ( vtOwnerArray & VT_BYREF ) {
         byRef = true;
         vtOwnerArray = vtOwnerArray & ~ VT_BYREF;
      }

      switch ( vtOwnerArray ) {
      case ( VT_I1 ) :
         COERCED_VALUE(v -> pcVal,v -> cVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_I2 ) :
         COERCED_VALUE(v -> piVal,v -> iVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_I4 ) :
         COERCED_VALUE(v -> plVal,v -> lVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_UI2) :
         COERCED_VALUE(v -> puiVal,v -> uiVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_UI4 ) :
         COERCED_VALUE(v -> pulVal,v -> ulVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_INT ) :
         COERCED_VALUE(v -> pintVal,v -> intVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_UINT ) :
         COERCED_VALUE(v -> puintVal,v -> uintVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_UI1 ) :
         COERCED_VALUE(v -> pbVal,v -> bVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_R4 ) :
         COERCED_VALUE(v -> pfltVal,v -> fltVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_R8 ) :
         COERCED_VALUE(v -> pdblVal,v -> dblVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_BOOL ) :
         COERCED_VALUE(v -> pboolVal,v -> boolVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_ERROR ) :
         COERCED_VALUE(v -> pscode,v -> scode)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_CY ) :
         COERCED_VALUE(v -> pcyVal,v -> cyVal)
         *pvtOveride = vtOwnerArray;
         break;
   
      case ( VT_DATE ) :
         COERCED_VALUE(v -> pdate,v -> date)
         *pvtOveride = vtOwnerArray;
         break;

      case ( VT_BSTR ) :
         *cntBytes = 2 * (long)wcslen(byRef ? *v -> pbstrVal : v -> bstrVal);
         *pResult = new BYTE[*cntBytes];
         memcpy(*pResult,byRef ? *v -> pbstrVal : v -> bstrVal,*cntBytes);
         *pvtOveride = vtOwnerArray;
         break;

      default:
         break;
      }

      return 0;
   }

   if ( VT_EMPTY == v -> vt ) {
      *cntBytes = 0;
      return 0;
   }

   VARTYPE vt = v -> vt;

   if ( v -> vt & VT_BYREF ) {
      byRef = true;
      vt = vt & ~ VT_BYREF;
   }

#define SCALAR_VALUE(vptrType,vtype)                  \
      *pResult = new BYTE[*cntBytes = sizeof(vtype)]; \
      memcpy(*pResult,byRef ? reinterpret_cast<BYTE*>(vptrType) : reinterpret_cast<BYTE*>(&vtype),*cntBytes);

   switch ( vt ) {
   case ( VT_I1 ) :
      SCALAR_VALUE(v -> pcVal,v -> cVal)
      break;
   
   case ( VT_I2 ) :
      SCALAR_VALUE(v -> piVal,v -> iVal)
      break;
   
   case ( VT_I4 ) :
      SCALAR_VALUE(v -> plVal,v -> lVal)
      break;
   
   case ( VT_UI2) :
      SCALAR_VALUE(v -> puiVal,v -> uiVal)
      break;

   case ( VT_UI4 ) :
      SCALAR_VALUE(v -> pulVal,v -> ulVal)
      break;

   case ( VT_INT ) :
      SCALAR_VALUE(v -> pintVal,v -> intVal)
      break;

   case ( VT_UINT ) :
      SCALAR_VALUE(v -> puintVal,v -> uintVal)
      break;

   case ( VT_UI1 ) :
      SCALAR_VALUE(v -> pbVal,v -> bVal)
      break;

   case ( VT_R4 ) :
      SCALAR_VALUE(v -> pfltVal,v -> fltVal)
      break;

   case ( VT_R8 ) :
      SCALAR_VALUE(v -> pdblVal,v -> dblVal)
      break;

   case ( VT_BOOL ) :
      SCALAR_VALUE(v -> pboolVal,v -> boolVal)
      break;

   case ( VT_ERROR ) :
      SCALAR_VALUE(v -> pscode,v -> scode)
      break;

   case ( VT_CY ) :
      SCALAR_VALUE(v -> pcyVal,v -> cyVal)
      break;

   case ( VT_DATE ) :
      SCALAR_VALUE(v -> pdate,v -> date)
      break;

   case ( VT_BSTR ) :
      *cntBytes = 2 * (long)wcslen(byRef ? *v -> pbstrVal : v -> bstrVal);
      *pResult = new BYTE[*cntBytes];
      memcpy(*pResult,byRef ? *v -> pbstrVal : v -> bstrVal,*cntBytes);
      break;

   default:
      break;
   }

   return 0;
   }


   int convertSzStringToVariant(char* szString,VARIANT *v) {
   VARIANT vBstr = {VT_EMPTY};
   GVariantClear(&vBstr);
   vBstr.vt = VT_BSTR;
   vBstr.bstrVal = SysAllocStringLen(NULL,(UINT)strlen(szString) + 1);
   MultiByteToWideChar(CP_ACP,0,szString,-1,vBstr.bstrVal,(int)strlen(szString) + 1);
   VariantChangeType(v,&vBstr,VARIANT_ALPHABOOL,v -> vt);
   return 0;
   }


   HRESULT convertVariantToSzString(VARIANT *v,char** pszString) {
   if ( VT_EMPTY == v -> vt )
      return E_INVALIDARG;
   VARIANT vDestination = {VT_EMPTY};
   GVariantClear(&vDestination);
   if ( ! SUCCEEDED(VariantChangeType(&vDestination,v,VARIANT_ALPHABOOL,VT_BSTR)) )
      return E_INVALIDARG;
   long cbString = (long)wcslen(vDestination.bstrVal) + 1;
   *pszString = new char[cbString];
   memset(*pszString,0,cbString);
   WideCharToMultiByte(CP_ACP,0,vDestination.bstrVal,-1,*pszString,cbString,0,0);
   SysFreeString(vDestination.bstrVal);
   return S_OK;
   }


   int convertVariantToScalarValue(VARIANT* v,void* pResult) {

#undef COERCED_VALUE

#define COERCED_VALUE(vptrType,vtype) \
   memset(pResult,0,sizeof(VARIANT)); \
   memcpy(pResult,reinterpret_cast<BYTE*>(v),sizeof(vtype));

   switch ( v -> vt ) {
   case ( VT_I1 ) :
      COERCED_VALUE(v -> pcVal,v -> cVal)
      break;

   case ( VT_I2 ) :
      COERCED_VALUE(v -> piVal,v -> iVal)
      break;

   case ( VT_I4 ) :
      COERCED_VALUE(v -> plVal,v -> lVal)
      break;

   case ( VT_UI2) :
      COERCED_VALUE(v -> puiVal,v -> uiVal)
      break;

   case ( VT_UI4 ) :
      COERCED_VALUE(v -> pulVal,v -> ulVal)
      break;

   case ( VT_INT ) :
      COERCED_VALUE(v -> pintVal,v -> intVal)
      break;

   case ( VT_UINT ) :
      COERCED_VALUE(v -> puintVal,v -> uintVal)
      break;

   case ( VT_UI1 ) :
      COERCED_VALUE(v -> pbVal,v -> bVal)
      break;

   case ( VT_R4 ) :
      COERCED_VALUE(v -> pfltVal,v -> fltVal)
      break;

   case ( VT_R8 ) :
      COERCED_VALUE(v -> pdblVal,v -> dblVal)
      break;

   case ( VT_BOOL ) :
      COERCED_VALUE(v -> pboolVal,v -> boolVal)
      break;

   case ( VT_ERROR ) :
      COERCED_VALUE(v -> pscode,v -> scode)
      break;

   case ( VT_CY ) :
      COERCED_VALUE(v -> pcyVal,v -> cyVal)
      break;

   case ( VT_DATE ) :
      COERCED_VALUE(v -> pdate,v -> date)
      break;

   default:
      break;
   }

   return 0;
   }

#if 0 // moved this to utilities.cpp
    long countSafeArrayItems(SAFEARRAY* pSafeArray) {
    long cntTotalItems;
    long lBound,uBound;
    SafeArrayGetLBound(pSafeArray,1,&lBound);
    SafeArrayGetUBound(pSafeArray,1,&uBound);
    cntTotalItems = uBound - lBound + 1;
    for ( int k = 1; k < pSafeArray -> cDims; k++ ) {
        SafeArrayGetLBound(pSafeArray,k + 1,&lBound);
        SafeArrayGetUBound(pSafeArray,k + 1,&uBound);
        cntTotalItems *= uBound - lBound + 1;
    }
    return cntTotalItems;
    }
#endif

#if 0

   HRESULT variantFromCommaString(IEvaluator *pIEvaluator,char *szString,VARIANT *pv) {
   VARTYPE vt = pv -> vt;
   if ( VT_EMPTY == vt ) {
      pv -> vt = VT_BSTR;
      pv -> bstrVal = SysAllocStringLen(NULL,strlen(szString));
      MultiByteToWideChar(CP_ACP,0,szString,-1,pv -> bstrVal,strlen(szString));
      return S_OK;
   }
   List<char> strings;
   char *p = strtok(szString,",");
   while ( p ) {
      char *t = new char[strlen(p) + 1];
      memset(t,0,strlen(p) + 1);
      strcpy(t,p);
      strings.Add(t);
      p = strtok(NULL,",");
   }
   bool isArray = false;
   if ( vt & VT_ARRAY ) {
      vt = vt & ~ VT_ARRAY;
      isArray = true;
   }
   switch ( vt ) {
   case VT_BSTR: {
      if ( isArray ) {

/* This code has not been tested because VB cannot "assign to array" */

         SAFEARRAYBOUND rgsa;
         memcpy(&rgsa,pv -> parray -> rgsabound,sizeof(SAFEARRAYBOUND));
         SafeArrayDestroy(pv -> parray);
         rgsa.cElements = strings.Count();
         pv -> parray = SafeArrayCreate(VT_BSTR,1,&rgsa);
         char *s = (char *)NULL;
         BSTR *pbstrArray;
         SafeArrayAccessData(pv -> parray,reinterpret_cast<void**>(&pbstrArray));
         long n = 0;
         while ( s = strings.GetFirst() ) {
            pbstrArray[n++] = SysAllocStringLen(NULL,strlen(s));
            MultiByteToWideChar(CP_ACP,0,s,-1,pbstrArray[n],strlen(s));
            strings.Remove(s);
            delete [] s;
         }
         SafeArrayUnaccessData(pv -> parray);
      } else {
         long n = 0;
         char *s = (char *)NULL;
         while ( s = strings.GetNext(s) ) {
            n += strlen(s) + 1;
         }
         char *pszTemp = new char[n + 1];
         char *p = pszTemp;
         while ( s = strings.GetFirst() ) {
            p += sprintf(p,"%s,",s);
            strings.Remove(s);
            delete [] s;
         }
         pv -> bstrVal = SysAllocStringLen(NULL,n + 1);
         MultiByteToWideChar(CP_ACP,0,pszTemp,-1,pv -> bstrVal,n + 1);
         delete [] pszTemp;
      }   
      }
      break;

   case VT_I2:
   case VT_I4:
   case VT_R4:
   case VT_R8: {
      if ( ! isArray ) return E_INVALIDARG;

/* This code has not been tested because VB cannot "assign to array" */

      SAFEARRAYBOUND rgsa;
      memcpy(&rgsa,pv -> parray -> rgsabound,sizeof(SAFEARRAYBOUND));
      SafeArrayDestroy(pv -> parray);
      rgsa.cElements = strings.Count();
      pv -> parray = SafeArrayCreate(vt,1,&rgsa);

      void *pData;
      int *pInts;
      long *pLongs;
      float *pFloats;
      double *pDoubles;

      SafeArrayAccessData(pv -> parray,&pData);

      if ( VT_I2 == vt ) 
         pInts = reinterpret_cast<int*>(pData);
      else if ( VT_I4 == vt ) 
            pLongs = reinterpret_cast<long*>(pData);
         else if ( VT_R4 == vt ) 
               pFloats = reinterpret_cast<float*>(pData);
            else
               pDoubles = reinterpret_cast<double*>(pData);

      long n = 0;
      char *s = (char *)NULL;
      while ( s = strings.GetFirst() ) {

         if ( VT_I2 == vt ) 
            *(pInts + n) = (int)eval(pIEvaluator,s);
         else if ( VT_I4 == vt ) 
               *(pLongs + n) = (long)eval(pIEvaluator,s);
            else if ( VT_R4 == vt ) 
                  *(pFloats + n) = (float)eval(pIEvaluator,s);
               else
                  *(pDoubles + n) = eval(pIEvaluator,s);

         n++;
         strings.Remove(s);
         delete [] s;
      }
      SafeArrayUnaccessData(pv -> parray);
      }
      break;

   default:
      break;
   }
   return S_OK;
   }
#endif

    HRESULT commaStringFromVariant(VARIANT *pv,char *szResult,long cbResult) {

    VARTYPE vt = pv -> vt;
    bool isArray = false;
    if ( vt & VT_ARRAY ) {
        vt = vt & ~ VT_ARRAY;
        isArray = true;
    }

    memset(szResult,0,cbResult * sizeof(char));

    if ( ! isArray ) {
        char* pszTemp;
        HRESULT hr = convertVariantToSzString(pv,&pszTemp);
        if ( ! SUCCEEDED(hr) ) return hr;
        if ( (long)strlen(pszTemp) > cbResult ) return E_INVALIDARG;
        strcpy(szResult,pszTemp);
        delete [] pszTemp;
        return S_OK;
    } 

    switch ( vt ) {
    case VT_BSTR: {

        BSTR *bstrArray;
        SAFEARRAY *psaValues = pv -> parray;
        char *pszResult = szResult;
        long cb = 0;

        if ( ! SUCCEEDED(SafeArrayAccessData(psaValues,reinterpret_cast<void**>(&bstrArray))) ) return E_INVALIDARG;

        long n = 0;
        for ( unsigned j = 0; j < psaValues -> cDims; j++ ) {
            for ( unsigned k = 0; k < psaValues -> rgsabound[j].cElements; k++ ) {
            if ( bstrArray[n] ) {
                char* pszTemp = new char[wcslen(bstrArray[n]) + 1];
                WideCharToMultiByte(CP_ACP,0,bstrArray[n],-1,pszTemp,(int)wcslen(bstrArray[n]) + 1,0,0);
                if ( (long)strlen(szResult) + (long)strlen(pszTemp) > cbResult ) {
                    delete [] pszTemp;
                    return E_INVALIDARG;
                }
                cb = sprintf(pszResult,"%s,",pszTemp);
                delete [] pszTemp;
            }
            else {
                if ( (long)strlen(szResult) + 4 > cbResult ) return E_INVALIDARG;
                cb = sprintf(pszResult,"0.0,");
            }
            pszResult += cb;
            n++;
            }
        }
        if ( cb ) szResult[strlen(szResult) - 1] = '\0';
        SafeArrayUnaccessData(psaValues);
        }
        break;

    case VT_I2:
    case VT_I4:
    case VT_R4:
    case VT_R8: {

        SAFEARRAY *psaValues = pv -> parray;

        void *pData;
        int *pInts;
        long *pLongs;
        float *pFloats;
        double *pDoubles;
        long cb = 0;
        char szNumber[64];

        if ( ! SUCCEEDED(SafeArrayAccessData(psaValues,&pData)) ) return E_INVALIDARG;

        if ( VT_I2 == vt ) 
            pInts = reinterpret_cast<int*>(pData);
        else if ( VT_I4 == vt ) 
            pLongs = reinterpret_cast<long*>(pData);
            else if ( VT_R4 == vt ) 
                pFloats = reinterpret_cast<float*>(pData);
            else
                pDoubles = reinterpret_cast<double*>(pData);

        char *pszResult = szResult;
        long n = 0;
        for ( unsigned j = 0; j < psaValues -> cDims; j++ ) {
            for ( unsigned k = 0; k < psaValues -> rgsabound[j].cElements; k++ ) {

            if ( VT_I2 == vt ) 
                sprintf(szNumber,"%d",pInts[n]);
            else if ( VT_I4 == vt ) 
                    sprintf(szNumber,"%ld",pLongs[n]);
                else if ( VT_R4 == vt ) 
                        sprintf(szNumber,"%f",pFloats[n]);
                    else
                        sprintf(szNumber,"%lf",pDoubles[n]);

            if ( (long)strlen(szResult) + (long)strlen(szNumber) > cbResult ) return E_INVALIDARG;

            cb = sprintf(pszResult,"%s,",szNumber);

            pszResult += cb;

            n++;

            }
        }
        if ( cb ) szResult[strlen(szResult) - 1] = '\0';
        SafeArrayUnaccessData(psaValues);

        }
        break;
      
    default:
        break;
    }
   
    return S_OK;
    }


   HRESULT PutDataPointSafeArray(SAFEARRAY **ppDoubles,DataPoint *values) {

   if ( ! ppDoubles ) return E_POINTER;

   SAFEARRAYBOUND rgsaBound;

   rgsaBound.lLbound = 0;
   rgsaBound.cElements = 3;

   if ( ! *ppDoubles ) {

      *ppDoubles = SafeArrayCreate(VT_R8,1,&rgsaBound);

      double *pData;
      SafeArrayAccessData(*ppDoubles,reinterpret_cast<void**>(&pData));
   
      *pData++ = values -> x;
      *pData++ = values -> y;
      *pData++ = values -> z;

      SafeArrayUnaccessData(*ppDoubles);

      return S_OK;

   }

   VARTYPE vType;
   void *pData;

   long cntItems = countSafeArrayItems(*ppDoubles);
   if ( cntItems < 3 ) return E_INVALIDARG;

   SafeArrayGetVartype(*ppDoubles,&vType);
   SafeArrayAccessData(*ppDoubles,&pData);

   switch ( vType ) {
   case VT_I2: {
      int *pInt = (int *)pData;
      *pInt++ = (int)values -> x;
      *pInt++ = (int)values -> y;
      *pInt++ = (int)values -> z;
      }
      break;

   case VT_I4: {
      long *pLong = (long *)pData;
      *pLong++ = (long)values -> x;
      *pLong++ = (long)values -> y;
      *pLong++ = (long)values -> z;
      }
      break;

   case VT_R4: {
      float *pFloat = (float *)pData;
      *pFloat++ = (float)values -> x;
      *pFloat++ = (float)values -> y;
      *pFloat++ = (float)values -> z;
      }
      break;

   case VT_R8: {
      double *pDouble = (double *)pData;
      *pDouble++ = values -> x;
      *pDouble++ = values -> y;
      *pDouble++ = values -> z;
      }
      break;

   default:
      SafeArrayUnaccessData(*ppDoubles);
      return E_INVALIDARG;
   }
      
   SafeArrayUnaccessData(*ppDoubles);

   return S_OK;
   }



   HRESULT GetDataPointSafeArray(SAFEARRAY *pArray,DataPoint *values) {
   VARTYPE vt;
   SafeArrayGetVartype(pArray,&vt);
   switch ( vt ) {
   case VT_R8: {
      double *pDoubles;
      SafeArrayAccessData(pArray,reinterpret_cast<void**>(&pDoubles));
      values -> x = *pDoubles++;
      values -> y = *pDoubles++;
      values -> z = *pDoubles++;
      }
      break;
   case VT_R4: {
      float *pFloat;
      SafeArrayAccessData(pArray,reinterpret_cast<void**>(&pFloat));
      values -> x = (double)*pFloat++;
      values -> y = (double)*pFloat++;
      values -> z = (double)*pFloat++;
      }
      break;
   case VT_I4: {
      long *pLong;
      SafeArrayAccessData(pArray,reinterpret_cast<void**>(&pLong));
      values -> x = (double)*pLong++;
      values -> y = (double)*pLong++;
      values -> z = (double)*pLong++;
      }
      break;
   case VT_I2: {
      int *pInt;
      SafeArrayAccessData(pArray,reinterpret_cast<void**>(&pInt));
      values -> x = (double)*pInt++;
      values -> y = (double)*pInt++;
      values -> z = (double)*pInt++;
      }
      break;
   default:
      return E_INVALIDARG;
   }

   SafeArrayUnaccessData(pArray);

   return S_OK;
   }

