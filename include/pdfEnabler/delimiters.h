
#pragma once

#ifdef DEFINE_DATA

char entityDelimiters[][32] = {
   "obj" "\0" "endobj",
   "<<" "\0" ">>",
   "stream" "\0" "endstream",
   "/" "\0" "~",
   "startxref" "\0" "\0",
   "trailer" "\0" "\0",
   "[" "\0" "]",
   "(" "\0" ")",
   "<" "\0" ">",
   "\0"};

#else

extern char entityDelimiters[][32];

#endif

#define WHITE_SPACE "[]<> ()\t\x0A\x0D/"

#define ARRAY_START_DELIMITERS "[ "
#define ARRAY_ITEM_DELIMITERS "\x0A\x0D "
#define ARRAY_END_DELIMITERS "\x0A\x0D ]"
