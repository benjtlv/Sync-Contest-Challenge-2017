/* ============================================================================
   (C) 2016 ESTEREL TECHNOLOGIES SAS.  ALL RIGHTS RESERVED
    This source file may be used and distributed without restriction provided 
	that this copyright statement is not removed from the file and that any 
	derivative work contains this copyright notice.
 
   Warranty
   ESTEREL TECHNOLOGIES SAS makes no warranty of any kind with regard to the
   use of this Software, either expressed or implied, including, but not 
   limited to the fitness for a particular purpose.
 =========================================================================== */

#ifndef _SDY1_specification_H
#define _SDY1_specification_H

#include "sdy_events.h"

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API extern
#endif

DLL_API int SDY1_specification__lockio();
DLL_API int SDY1_specification__unlockio();
DLL_API int SDY1_specification__init();
DLL_API int SDY1_specification__draw();
DLL_API int SDY1_specification__cancelled();
DLL_API int SDY1_specification__refreshCallback(T_COSIM_REFRESH_CALLBACK f);

#include "SDY1_specification_control_panel.h"
DLL_API SDY1_specification_typ_control_panel * SDY1_specification_L_control_panel(void);


#endif

