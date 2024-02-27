#pragma once
// Copyright 2018 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <windows.h>
#include <stdio.h>

   void SaveJPEG(BYTE *pImageData,char *pszBitmapFileName);
   void SavePNG(BYTE *pImageData,char *pszBitmapFileName);
   void SaveGIF(BYTE *pImageData,char *pszBitmapFileName);
   void SaveTIFF(BYTE *pImageData,char *pszBitmapFileName);

   BOOL IsSolidColor(HDC hdc,HBITMAP hBitmap,COLORREF theColor);

   void SaveMonoColor(char *pszSourceFile,char *pszDestFile,COLORREF monoColor,BYTE grayLevelIsWhite = 0);

   HBITMAP getBitmapHandle(HDC hdc,char *pszFileName,SIZE *pSize = NULL);

   void SaveWithEncoder(BYTE *pImageData,char *pszFileName,WCHAR *pszwEncoderName);
   void SaveBitmapFile(BYTE *pImageData,char *pszBitmapFileName);
   void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszBitmapFileName);
   void SaveBitmapFileMonoColor(HDC hdcSource,HBITMAP hBitmap,char *pszBitmapFileName,COLORREF monoColor);
