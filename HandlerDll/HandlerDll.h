// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the HANDLERDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// HANDLERDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef HANDLERDLL_EXPORTS
#define HANDLERDLL_API __declspec(dllexport)
#else
#define HANDLERDLL_API __declspec(dllimport)
#endif

#include <crtdbg.h>
#include <windows.h>
#include <werapi.h>

extern "C" HANDLERDLL_API HRESULT
OutOfProcessExceptionEventCallback(
	/* __in    */ PVOID pContext,
	/* __in    */ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	/* __out   */ BOOL *pbOwnershipClaimed,
	/* __out   */ PWSTR pwszEventName,
	/* __inout */ PDWORD pchSize,
	/* __out   */ PDWORD pdwSignatureCount
);

extern "C" HANDLERDLL_API HRESULT
OutOfProcessExceptionEventSignatureCallback(
	/* __in    */ PVOID pContext,
	/* __in    */ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	/* __in    */ DWORD dwIndex,
	/* __out   */ PWSTR pwszName,
	/* __inout */ PDWORD pchName,
	/* __out   */ PWSTR pwszValue,
	/* __inout */ PDWORD pchValue
);

extern "C" HANDLERDLL_API HRESULT
OutOfProcessExceptionEventDebuggerLaunchCallback(
	/* __in    */ PVOID pContext,
	/* __in    */ const PWER_RUNTIME_EXCEPTION_INFORMATION pExceptionInformation,
	/* __out   */ PBOOL pbIsCustomDebugger,
	/* __out   */ PWSTR pwszDebuggerLaunch,
	/* __inout */ PDWORD pchDebuggerLaunch,
	/* __out   */ PBOOL pbIsDebuggerAutolaunch
);
