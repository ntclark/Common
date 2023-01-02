
#define SERVICE_NAME_W L"CursiVisionReceptor"
#define SERVICE_NAME_A "CursiVisionReceptor"
#define SERVICE_PORT_W L"17638"
#define SERVICE_PORT_A "17638"

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
