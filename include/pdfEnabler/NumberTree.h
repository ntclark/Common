// Copyright 2017, 2018, 2019 InnoVisioNate Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "Library.h"

#include "Dictionary.h"

class DLLEXPORT PdfNumberTree : public std::list<char *> {

public:

   PdfNumberTree(PdfDictionary *pParent);

   ~PdfNumberTree();

private:

   PdfDictionary *pParent;
   std::list<PdfDictionary *> additionalDictionaries;

};
