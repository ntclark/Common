/*

                       Copyright (c) 1996,1997,1998,1999,2000,2001 Nathan T. Clark

*/
#include <windows.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#include "general.h"

#include "utils.h"

  BOOL CALLBACK childIDFinder(HWND,LPARAM);

  static HWND foundWindow;

  __declspec(dllexport) HWND WinWindowFromID(HWND hwndParent,UINT idChild) {

  foundWindow = NULL;

  EnumChildWindows(hwndParent,(WNDENUMPROC)childIDFinder,idChild);

  return foundWindow;
  }


  BOOL CALLBACK childIDFinder(HWND hwnd,LPARAM supposedID) {
  if ( GetWindowLong(hwnd,GWL_ID) == supposedID ) {
	  foundWindow = hwnd;
     return FALSE;
  }
  return TRUE;
  }