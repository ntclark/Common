// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

         // IVisioLoggerSignaturePad

         HRESULT __stdcall Initialize(BSTR padName,UINT_PTR hwndHost);

         HRESULT __stdcall Clear();

         HRESULT __stdcall ClearDisplay();

         HRESULT __stdcall ShowBitmap(long x,long y,long width,long height,UINT_PTR hBitmap,long durationInMilliseconds);
         HRESULT __stdcall AddBitmap(long x,long y,long width,long height,UINT_PTR hBitmap,long durationInMilliseconds);
         HRESULT __stdcall FlushBitmap();

         HRESULT __stdcall Start();
         HRESULT __stdcall Stop();

         HRESULT __stdcall Kill();

         HRESULT __stdcall get_IsConnected(long *);

         HRESULT __stdcall get_HasLCD(long *);

         HRESULT __stdcall get_Width(long *);
         HRESULT __stdcall put_Width(long);
         HRESULT __stdcall get_Height(long *);
         HRESULT __stdcall put_Height(long);

         HRESULT __stdcall get_PadScaleX(double *);
         HRESULT __stdcall get_PadScaleY(double *);

         HRESULT __stdcall get_MenuMode(long *);
         HRESULT __stdcall put_MenuMode(long);

         HRESULT __stdcall get_SmallFontSize(long *);
         HRESULT __stdcall get_MediumFontSize(long *);
         HRESULT __stdcall get_LargeFontSize(long *);

         HRESULT __stdcall get_SmallFontPixels(long *);
         HRESULT __stdcall get_MediumFontPixels(long *);
         HRESULT __stdcall get_LargeFontPixels(long *);

         HRESULT __stdcall put_BitDepth(long);

         HRESULT __stdcall ShowProperties();

         HRESULT __stdcall get_NativeSizeImage(UINT_PTR *pImageInPadDimensions);