#ifndef _DEV_MACRO_H_
#define _DEV_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file dev_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "dev_Robot.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_dev_Robot inputs_ctx;
    outC_dev_Robot outputs_ctx;
} WU_dev_Robot;
#define WU_CTX_TYPE_dev WU_dev_Robot
#define WU_CTX_TYPE_dev_SIZE sizeof(WU_dev_Robot)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_dev() 

#define DECLARE_EXT_SENSORS_dev(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_dev_color(context) context.inputs_ctx.color  /* Robot::dev/color */
#define VAR_dev_color VARC_dev_color(CTX_dev_Robot)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_dev_d(context) context.outputs_ctx.d  /* Robot::dev/d */
#define VAR_dev_d VARC_dev_d(CTX_dev_Robot)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_color colorTy
#define CPY_color(DST, SRC) kcg_copy_colorTy(DST, SRC)
#define T_d kcg_float64
#define CPY_d(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_dev(context)  WU_dev_Robot context;

#define DECLARE_CTXT_dev() DECLAREC_CTXT_dev(CTX_dev_Robot)

#define DECLAREC_EXT_CTXT_dev(MODE , context) MODE WU_dev_Robot context;

#define DECLARE_EXT_CTXT_dev(MODE) DECLAREC_EXT_CTXT_dev(MODE , CTX_dev_Robot)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_dev(context) dev_init_Robot(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_dev(context) dev_reset_Robot(&context.outputs_ctx);
    #else
        #define INITC_dev(context) 
    #endif
#endif

#define INIT_dev() INITC_dev(CTX_dev_Robot)

#define PERFORMC_dev(context)     dev_Robot( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_dev() PERFORMC_dev(CTX_dev_Robot)

/*$************** SCADE Macro wrapper *********************
** End of file dev_macro.h
***********************************************************$*/

#endif /* _DEV_MACRO_H_ */
