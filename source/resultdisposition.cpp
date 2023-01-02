
#include <Windows.h>

#include "resultDisposition.h"

    resultDisposition::resultDisposition() { 
   
    memset(this,0,sizeof(resultDisposition)); 

#ifdef SHOW_PROPERTIES_ON_STARTUP
    showStartupProperties = SHOW_PROPERTIES_ON_STARTUP;
#else
    showStartupProperties = false;
#endif

    openLastDocument = true;
    enforceLargestHeight = true;

    doAppend = true;
    doSave = true; 

    saveMyDocuments = true;
    saveByOriginal = false;
    saveIn = false;
 
    doProperties = false; 
    doRetain = true;

    doShowPadImage = false;

    userCanChangeDoProperties = true;

#ifdef RECEPTOR_BUILD
#else
    strcpy(szFileStorageDirectory,szUserDirectory);
#endif

    strcpy(szFileSuffix,"-signed"); 

    maximumSignatures = 1L;

    signMotionRight = 0.0;
    signMotionDown = 0.0;

    rcOptions.left = 0;
    rcOptions.top = 0;
    rcOptions.right = 0;
    rcOptions.bottom = 0;

    saveInMonthYear = false;
    saveInDayMonth = false;

    doRemember = true;

    return;
    }

