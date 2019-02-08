// HandlerDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "HandlerDll.h"


// This is an example of an exported variable
HANDLERDLL_API int nHandlerDll=0;

// This is an example of an exported function.
HANDLERDLL_API int fnHandlerDll(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
CHandlerDll::CHandlerDll()
{
    return;
}
