
#pragma once

#include <windows.h>

#include "CursiVisionGlobal.h"

#include "backEndPackage.h"

struct resultDisposition {

    resultDisposition();

    bool isGlobalDisposition;
    bool useGlobalProperties;
    bool showStartupProperties;
    bool enforceLargestHeight;
    bool openLastDocument;
    bool doAppend;
    bool doAppendDate;
    bool doAppendTime;
    bool doSave;
    bool doReplace;
    bool doSequence;
    bool doRetain;
    bool doExit;
    bool doReopenOriginal;
    bool saveMyDocuments;
    bool saveByOriginal;
    bool saveIn;
    bool doPrint;
    bool doProperties;
    bool userCanChangeDoProperties;
    bool doShowPadImage;

    bool doRemember;
    bool doContinuousDoodle;

    bool doCloseDocument;
    bool doCloseDocumentAndAwaitJob;
    bool doMinimizeWhileWaiting;
    bool doCloseWhileWaiting;

    BYTE boolBuffer[31 - sizeof(bool) - sizeof(bool) - sizeof(bool) - sizeof(bool)];

    BYTE longBuffer[16];

    char szFileSuffix[MAX_PATH];
    char szMyDocumentsDirectory[MAX_PATH];
    char szFileStorageDirectory[MAX_PATH];
    char szDestinationPrintName[MAX_PATH];

    long useBackEnds[MAX_BACK_END_PROCESSORS];
    GUID backEndGUIDS[MAX_BACK_END_PROCESSORS];
    char backEndDescriptions[MAX_BACK_END_PROCESSORS][128];
    char backEndSettingsFiles[MAX_BACK_END_PROCESSORS][MAX_PATH];
    char backEndInstanceIds_DontUse[MAX_BACK_END_PROCESSORS][32];
    long countBackEnds;

    void *pParent;

    long maximumSignatures;
    double signMotionRight,signMotionDown;

    RECT rcOptions;

    bool saveInMonthYear;
    bool saveInDayMonth;
    bool captureSignatureValidationData;

    char charBuffer[512 - 5 * sizeof(bool) - MAX_PATH - 2 * sizeof(long) - 2 * sizeof(double) - sizeof(RECT)];

    GUID backEndInstanceIds[32];
};

