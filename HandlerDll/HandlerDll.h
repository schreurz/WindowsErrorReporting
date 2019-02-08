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

// This class is exported from the dll
class HANDLERDLL_API CHandlerDll {
public:
	CHandlerDll(void);
	// TODO: add your methods here.
};

extern HANDLERDLL_API int nHandlerDll;

HANDLERDLL_API int fnHandlerDll(void);
