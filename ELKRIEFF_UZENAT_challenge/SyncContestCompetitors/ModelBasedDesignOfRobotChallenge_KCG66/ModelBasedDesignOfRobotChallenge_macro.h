#ifndef _MODELBASEDDESIGNOFROBOTCHALLENGE_MACRO_H_
#define _MODELBASEDDESIGNOFROBOTCHALLENGE_MACRO_H_


/*$************** SCADE Macro wrapper *********************
** Begin of file ModelBasedDesignOfRobotChallenge_macro.h
***********************************************************$*/


/*$**********************************************************
*                        INCLUDES
***********************************************************$*/

/* includes */
#include "ModelBasedDesignOfRobotCh.h"

/*$**********************************************************
*                           CONTEXT
***********************************************************$*/

typedef struct {
    inC_ModelBasedDesignOfRobotCh inputs_ctx;
    outC_ModelBasedDesignOfRobotCh outputs_ctx;
} WU_ModelBasedDesignOfRobotCh;
#define WU_CTX_TYPE_ModelBasedDesignOfRobotChallenge WU_ModelBasedDesignOfRobotCh
#define WU_CTX_TYPE_ModelBasedDesignOfRobotChallenge_SIZE sizeof(WU_ModelBasedDesignOfRobotCh)

/*$**********************************************************
*                           SENSORS
***********************************************************$*/

#define DECLARE_SENSORS_ModelBasedDesignOfRobotChallenge() 

#define DECLARE_EXT_SENSORS_ModelBasedDesignOfRobotChallenge(MODE) 

/*$**********************************************************
*                           INPUTS
***********************************************************$*/

#define VARC_ModelBasedDesignOfRobotChallenge_InitialPhase(context) context.inputs_ctx.InitialPhase  /* ModelBasedDesignOfRobotChallenge/InitialPhase */
#define VAR_ModelBasedDesignOfRobotChallenge_InitialPhase VARC_ModelBasedDesignOfRobotChallenge_InitialPhase(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_top(context) context.inputs_ctx.top  /* ModelBasedDesignOfRobotChallenge/top */
#define VAR_ModelBasedDesignOfRobotChallenge_top VARC_ModelBasedDesignOfRobotChallenge_top(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_mapid(context) context.inputs_ctx.mapid  /* ModelBasedDesignOfRobotChallenge/mapid */
#define VAR_ModelBasedDesignOfRobotChallenge_mapid VARC_ModelBasedDesignOfRobotChallenge_mapid(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_itiid(context) context.inputs_ctx.itiid  /* ModelBasedDesignOfRobotChallenge/itiid */
#define VAR_ModelBasedDesignOfRobotChallenge_itiid VARC_ModelBasedDesignOfRobotChallenge_itiid(CTX_ModelBasedDesignOfRobotCh)


/*$**********************************************************
*                           OUTPUTS
***********************************************************$*/

#define VARC_ModelBasedDesignOfRobotChallenge_RobotPhase(context) context.outputs_ctx.RobotPhase  /* ModelBasedDesignOfRobotChallenge/RobotPhase */
#define VAR_ModelBasedDesignOfRobotChallenge_RobotPhase VARC_ModelBasedDesignOfRobotChallenge_RobotPhase(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_RobotStatus(context) context.outputs_ctx.RobotStatus  /* ModelBasedDesignOfRobotChallenge/RobotStatus */
#define VAR_ModelBasedDesignOfRobotChallenge_RobotStatus VARC_ModelBasedDesignOfRobotChallenge_RobotStatus(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_Signalization(context) context.outputs_ctx.Signalization  /* ModelBasedDesignOfRobotChallenge/Signalization */
#define VAR_ModelBasedDesignOfRobotChallenge_Signalization VARC_ModelBasedDesignOfRobotChallenge_Signalization(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_Events(context) context.outputs_ctx.Events  /* ModelBasedDesignOfRobotChallenge/Events */
#define VAR_ModelBasedDesignOfRobotChallenge_Events VARC_ModelBasedDesignOfRobotChallenge_Events(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_scoreA(context) context.outputs_ctx.scoreA  /* ModelBasedDesignOfRobotChallenge/scoreA */
#define VAR_ModelBasedDesignOfRobotChallenge_scoreA VARC_ModelBasedDesignOfRobotChallenge_scoreA(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_scoreB(context) context.outputs_ctx.scoreB  /* ModelBasedDesignOfRobotChallenge/scoreB */
#define VAR_ModelBasedDesignOfRobotChallenge_scoreB VARC_ModelBasedDesignOfRobotChallenge_scoreB(CTX_ModelBasedDesignOfRobotCh)

#define VARC_ModelBasedDesignOfRobotChallenge_time(context) context.outputs_ctx.time  /* ModelBasedDesignOfRobotChallenge/time */
#define VAR_ModelBasedDesignOfRobotChallenge_time VARC_ModelBasedDesignOfRobotChallenge_time(CTX_ModelBasedDesignOfRobotCh)


/*$**********************************************************
*                           ELEMENT ACCESS
***********************************************************$*/

#define GET_ELEMENT_AT(VARIABLE, INDEX)  (VARIABLE)[INDEX]
#define GET_STRUCTURE_FIELD(VARIABLE, FIELD) (VARIABLE).FIELD

/*$**********************************************************
*                        VARIABLES TYPES
***********************************************************$*/

#define T_InitialPhase phaseTy
#define CPY_InitialPhase(DST, SRC) kcg_copy_phaseTy(DST, SRC)
#define T_top kcg_bool
#define CPY_top(DST, SRC) DST = SRC
#define T_mapid kcg_int32
#define CPY_mapid(DST, SRC) DST = SRC
#define T_itiid kcg_int32
#define CPY_itiid(DST, SRC) DST = SRC
#define T_RobotPhase phaseTy
#define CPY_RobotPhase(DST, SRC) kcg_copy_phaseTy(DST, SRC)
#define T_RobotStatus statusTy
#define CPY_RobotStatus(DST, SRC) DST = SRC
#define T_Signalization sigTy
#define CPY_Signalization(DST, SRC) kcg_copy_sigTy(DST, SRC)
#define T_Events eventTy
#define CPY_Events(DST, SRC) kcg_copy_eventTy(DST, SRC)
#define T_scoreA kcg_int32
#define CPY_scoreA(DST, SRC) DST = SRC
#define T_scoreB kcg_int32
#define CPY_scoreB(DST, SRC) DST = SRC
#define T_time kcg_float64
#define CPY_time(DST, SRC) DST = SRC


/*$**********************************************************
*                      CREATION, INIT AND PERFORM
***********************************************************$*/

#define DECLAREC_CTXT_ModelBasedDesignOfRobotChallenge(context)  WU_ModelBasedDesignOfRobotCh context;

#define DECLARE_CTXT_ModelBasedDesignOfRobotChallenge() DECLAREC_CTXT_ModelBasedDesignOfRobotChallenge(CTX_ModelBasedDesignOfRobotCh)

#define DECLAREC_EXT_CTXT_ModelBasedDesignOfRobotChallenge(MODE , context) MODE WU_ModelBasedDesignOfRobotCh context;

#define DECLARE_EXT_CTXT_ModelBasedDesignOfRobotChallenge(MODE) DECLAREC_EXT_CTXT_ModelBasedDesignOfRobotChallenge(MODE , CTX_ModelBasedDesignOfRobotCh)

#ifndef KCG_USER_DEFINED_INIT
    #define INITC_ModelBasedDesignOfRobotChallenge(context) ModelBasedDesignOfRobotCh_init(&context.outputs_ctx);
#else
    #ifndef KCG_NO_EXTERN_CALL_TO_RESET
        #define INITC_ModelBasedDesignOfRobotChallenge(context) ModelBasedDesignOfRobotCh_reset(&context.outputs_ctx);
    #else
        #define INITC_ModelBasedDesignOfRobotChallenge(context) 
    #endif
#endif

#define INIT_ModelBasedDesignOfRobotChallenge() INITC_ModelBasedDesignOfRobotChallenge(CTX_ModelBasedDesignOfRobotCh)

#define PERFORMC_ModelBasedDesignOfRobotChallenge(context)     ModelBasedDesignOfRobotCh( \
        &context.inputs_ctx /* input context */,\
        &context.outputs_ctx /* output/memories context */\
    )

#define PERFORM_ModelBasedDesignOfRobotChallenge() PERFORMC_ModelBasedDesignOfRobotChallenge(CTX_ModelBasedDesignOfRobotCh)

/*$************** SCADE Macro wrapper *********************
** End of file ModelBasedDesignOfRobotChallenge_macro.h
***********************************************************$*/

#endif /* _MODELBASEDDESIGNOFROBOTCHALLENGE_MACRO_H_ */
