
#include <Windows.h>
#include <stdio.h>
#include <Userenv.h>
#include <time.h>

#include "CursiVisionReceptorMessages.h"

#define SERVICE_NAME_W L"CursiVisionReceptor"
#define SERVICE_NAME_A "CursiVisionReceptor"

// Define the facility codes
//
#define FACILITY_SYSTEM                  0x0
#define FACILITY_STUBS                   0x3
#define FACILITY_RUNTIME                 0x2
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_ERROR            0x3

//
// MessageId: SVC_ERROR
//
// MessageText:
//
//  An error has occurred (%2).
//  
//
#define SERVICE_ERROR   ((DWORD)0xC0020001L)

void logEvent(char *pszMessage,char *pszAdditionalInfo,DWORD eventType,DWORD eventNumber);
void logEvent(LPTSTR szFunction,LPTSTR additionalInfo,DWORD eventType,DWORD eventNumber);

void reportStatus(DWORD dwCurrentState,DWORD dwWin32ExitCode,DWORD dwWaitHint);
void processFile(char *pszInputFile,char *pszTargetDirectory,char *pszPreferredName,char *pszProfileFile);

void launchProcess(char *pszArguments);
BOOL LaunchProcess(char *pszCommandLine);

unsigned int __stdcall serviceLoopNamedPipes(void *);
unsigned int __stdcall serviceLoop(void *);

void resetCommands();

enum commandResponse {
    sendResponse = 1,
    sendOk = 2,
    doContinue = 3,
    sendResponseAndQuit = 4,
    quit = 5,
    quitError = 6
};

enum commandResponse processCommand(char *pszInput,char *pszResponse);

#ifdef DEFINE_DATA

    HANDLE hPipeCommands = INVALID_HANDLE_VALUE;
    char szProgramDataDirectory[MAX_PATH];
    char szExecutableName[1024] = {0};

    TCHAR message[1024];

    SERVICE_STATUS serviceStatus = {0};

    BOOL continueService = TRUE;

    HANDLE hNamedPipesServiceThread = INVALID_HANDLE_VALUE;

#else
    extern HANDLE hPipeCommands;
    extern char szProgramDataDirectory[];
    extern char szExecutableName[];

    extern TCHAR message[];

    extern SERVICE_STATUS serviceStatus;

    extern BOOL continueService;

    extern HANDLE hNamedPipesServiceThread;


#endif
