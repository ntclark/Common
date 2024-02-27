 // ***** CursiVisionReceptor.mc *****
 // The following are message definitions.
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define FACILITY_SYSTEM                  0x0
#define FACILITY_RUNTIME                 0x2
#define FACILITY_STUBS                   0x3
#define FACILITY_IO_ERROR_CODE           0x4


//
// Define the severity codes
//
#define STATUS_SEVERITY_SUCCESS          0x0
#define STATUS_SEVERITY_INFORMATIONAL    0x1
#define STATUS_SEVERITY_WARNING          0x2
#define STATUS_SEVERITY_ERROR            0x3


//
// MessageId: EVENTLOG_EVENT_STOPPED
//
// MessageText:
//
// The CursiVision Receptor Service has been Stopped.
//
#define EVENTLOG_EVENT_STOPPED           ((DWORD)0x40020001L)

//
// MessageId: EVENTLOG_EVENT_PROCESS_LAUNCH_SUCCEEDED
//
// MessageText:
//
// The Receptor service successfully launched the CursiVision system.
// %1
//
#define EVENTLOG_EVENT_PROCESS_LAUNCH_SUCCEEDED ((DWORD)0x40020002L)

//
// MessageId: EVENTLOG_EVENT_PROCESS_LAUNCH_FAILED
//
// MessageText:
//
// The Receptor Service could not launch the CursiVision process.
// %1
//
#define EVENTLOG_EVENT_PROCESS_LAUNCH_FAILED ((DWORD)0xC0020003L)

//
// MessageId: COULDNT_START
//
// MessageText:
//
// The CursiVision Receptor Service could not be started.
//
#define COULDNT_START                    ((DWORD)0xC0020004L)

//
// MessageId: EVENTLOG_EVENT_SERVICE_STOPPING
//
// MessageText:
//
// The CursiVision Receptor service is shutting down.
//
#define EVENTLOG_EVENT_SERVICE_STOPPING  ((DWORD)0x40020005L)

//
// MessageId: EVENTLOG_INFORMATION_FILE_SAVED
//
// MessageText:
//
// %1
//
#define EVENTLOG_INFORMATION_FILE_SAVED  ((DWORD)0x40020006L)

//
// MessageId: EVENTLOG_ERROR_CANTLOAD_SETTINGS
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_CANTLOAD_SETTINGS ((DWORD)0xC0020007L)

//
// MessageId: EVENTLOG_ERROR_NO_SOCKET_SUPPORT_INITIALIZE
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_SOCKET_SUPPORT_INITIALIZE ((DWORD)0xC0020008L)

//
// MessageId: EVENTLOG_ERROR_NO_CREATE_SOCKET
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_CREATE_SOCKET  ((DWORD)0xC0020009L)

//
// MessageId: EVENTLOG_ERROR_NO_BIND_SOCKET
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_BIND_SOCKET    ((DWORD)0xC0020010L)

//
// MessageId: EVENTLOG_ERROR_NO_LISTEN_PORT
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_LISTEN_PORT    ((DWORD)0xC0020011L)

//
// MessageId: EVENTLOG_ERROR_ACCEPT
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_ACCEPT            ((DWORD)0xC0020012L)

//
// MessageId: EVENTLOG_INFORMATION_WAITING
//
// MessageText:
//
// %1
//
#define EVENTLOG_INFORMATION_WAITING     ((DWORD)0x40020013L)

//
// MessageId: EVENTLOG_INFORMATION_CONNECTION_ACCEPTED
//
// MessageText:
//
// %1
//
#define EVENTLOG_INFORMATION_CONNECTION_ACCEPTED ((DWORD)0x40020014L)

//
// MessageId: EVENTLOG_ERROR_SOCKET_RECIEVE_ERROR
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_SOCKET_RECIEVE_ERROR ((DWORD)0xC0020015L)

//
// MessageId: EVENTLOG_ERROR_WRONG_BYTES_SENT
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_WRONG_BYTES_SENT  ((DWORD)0xC0020016L)

//
// MessageId: EVENTLOG_ERROR_NO_GO_SENT
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_GO_SENT        ((DWORD)0xC0020017L)

//
// MessageId: EVENTLOG_ERROR_NO_FILE_SENT
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_FILE_SENT      ((DWORD)0xC0020018L)

//
// MessageId: EVENTLOG_ERROR_NO_DESTINATION_NAME_SPECIFIED
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_NO_DESTINATION_NAME_SPECIFIED ((DWORD)0xC0020019L)

//
// MessageId: EVENTLOG_ERROR_FILE_EXISTENCE_CLASH
//
// MessageText:
//
// %1
//
#define EVENTLOG_ERROR_FILE_EXISTENCE_CLASH ((DWORD)0xC0020020L)

//
// MessageId: EVENTLOG_ERROR
//
// MessageText:
//
// %1
// 
//
#define EVENTLOG_ERROR                   ((DWORD)0xC0020021L)

