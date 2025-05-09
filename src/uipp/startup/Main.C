/***********************************************************************/
/* Open Visualization Data Explorer                                    */
/* (C) Copyright IBM Corp. 1989,1999                                   */
/* ALL RIGHTS RESERVED                                                 */
/* This code licensed under the                                        */
/*    "IBM PUBLIC LICENSE - Open Visualization Data Explorer"          */
/***********************************************************************/

#include <dxconfig.h>
#include "../base/defines.h"
#include "StartupApplication.h"

#if defined(HAVE_HCLXMINIT)
extern "C" void HCLXmInit();
#endif

int main(int argc,
	  char**       argv)
{
#if defined(HAVE_HCLXMINIT)
    HCLXmInit();
#endif

    //
    // Initialize Xt Intrinsics, build all the windows, and enter event loop.
    // Note that all the windows are created elsewhere (<Application>App.C),
    // and managed in the application initialization routine.
    //
    if (NOT theApplication)
    {
	theApplication = new StartupApplication("Startup");
    }

    theApplication->initialize(&argc, argv);
    theApplication->handleEvents();

    delete theApplication;

    return 0;
}
