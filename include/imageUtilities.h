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

   void SaveWithEncoder(BYTE *pImageData,char *pszFileName,WCHAR *pszwEncoderName);
   void SaveBitmapFile(BYTE *pImageData,char *pszBitmapFileName);
   void SaveBitmapFile(HDC hdcSource,HBITMAP hBitmap,char *pszBitmapFileName);
