
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
