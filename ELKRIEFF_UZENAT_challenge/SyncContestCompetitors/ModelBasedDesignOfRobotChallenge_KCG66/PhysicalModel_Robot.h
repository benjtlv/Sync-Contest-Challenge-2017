/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _PhysicalModel_Robot_H_
#define _PhysicalModel_Robot_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "Bound_Utilities.h"
#include "Normalize_Utilities.h"
#include "CarGeometry_Robot.h"
#include "Integrator_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  phaseTy /* RobotPhase/ */ RobotPhase;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* SM1: */ SM1_reset_act;
  kcg_bool /* SM1: */ SM1_reset_nxt;
  kcg_float64 /* y0/ */ y0;
  kcg_float64 /* x0/ */ x0;
  kcg_float64 /* alpha0/ */ alpha0;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CarGeometry_Robot /* SM1:positionning:_L68=(Robot::CarGeometry#1)/ */ Context_CarGeometry_1;
  outC_CarGeometry_Robot /* SM1:on:_L48=(Robot::CarGeometry#2)/ */ Context_CarGeometry_2;
  outC_Integrator_Utilities /* SM1:on:_L9=(Utilities::Integrator#4)/ */ Context_Integrator_4;
  outC_Integrator_Utilities /* SM1:on:_L7=(Utilities::Integrator#5)/ */ Context_Integrator_5;
  outC_Normalize_Utilities /* SM1:on:_L20=(Utilities::Normalize#3)/ */ Context_Normalize_3;
  outC_Integrator_Utilities /* SM1:on:_L21=(Utilities::Integrator#7)/ */ Context_Integrator_7;
  outC_Bound_Utilities /* SM1:on:_L36=(Utilities::Bound#3)/ */ Context_Bound_3;
  outC_Bound_Utilities /* SM1:on:_L29=(Utilities::Bound#4)/ */ Context_Bound_4;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM1 /* SM1: */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Output2/ */ Output2_SinCosR_16_float64;
  kcg_float64 /* @1/Output1/ */ Output1_SinCosR_16_float64;
  kcg_float64 /* @1/Input1/ */ Input1_SinCosR_16_float64;
  kcg_float64 /* @1/_L3/ */ _L3_SinCosR_16_float64;
  kcg_float64 /* @1/_L2/ */ _L2_SinCosR_16_float64;
  kcg_float64 /* @1/_L1/ */ _L1_SinCosR_16_float64;
  phaseTy /* SM1:positionning:_L71/ */ _L71_positionning_SM1;
  kcg_float64 /* SM1:positionning:_L69/ */ _L69_positionning_SM1;
  kcg_float64 /* SM1:positionning:_L70/ */ _L70_positionning_SM1;
  positionTy /* SM1:positionning:_L68/ */ _L68_positionning_SM1;
  kcg_float64 /* SM1:positionning:_L67/ */ _L67_positionning_SM1;
  phaseTy /* SM1:positionning:_L66/ */ _L66_positionning_SM1;
  phaseTy /* SM1:positionning:_L55/ */ _L55_positionning_SM1;
  kcg_float64 /* SM1:positionning:_L63/ */ _L63_positionning_SM1;
  kcg_float64 /* SM1:positionning:_L62/ */ _L62_positionning_SM1;
  positionTy /* SM1:positionning:_L61/ */ _L61_positionning_SM1;
  phaseTy /* SM1:on:_L49/ */ _L49_on_SM1;
  positionTy /* SM1:on:_L48/ */ _L48_on_SM1;
  kcg_float64 /* SM1:on:_L47/ */ _L47_on_SM1;
  kcg_float64 /* SM1:on:_L46/ */ _L46_on_SM1;
  phaseTy /* SM1:on:_L45/ */ _L45_on_SM1;
  kcg_float64 /* SM1:on:_L29/ */ _L29_on_SM1;
  kcg_float64 /* SM1:on:_L31/ */ _L31_on_SM1;
  kcg_float64 /* SM1:on:_L30/ */ _L30_on_SM1;
  kcg_float64 /* SM1:on:_L32/ */ _L32_on_SM1;
  kcg_float64 /* SM1:on:_L33/ */ _L33_on_SM1;
  kcg_float64 /* SM1:on:_L34/ */ _L34_on_SM1;
  wheelsTy_Robot /* SM1:on:_L35/ */ _L35_on_SM1;
  kcg_float64 /* SM1:on:_L36/ */ _L36_on_SM1;
  kcg_float64 /* SM1:on:_L28/ */ _L28_on_SM1;
  kcg_float64 /* SM1:on:_L25/ */ _L25_on_SM1;
  kcg_float64 /* SM1:on:_L27/ */ _L27_on_SM1;
  kcg_float64 /* SM1:on:_L26/ */ _L26_on_SM1;
  kcg_float64 /* SM1:on:_L18/ */ _L18_on_SM1;
  kcg_float64 /* SM1:on:_L19/ */ _L19_on_SM1;
  kcg_float64 /* SM1:on:_L20/ */ _L20_on_SM1;
  kcg_float64 /* SM1:on:_L21/ */ _L21_on_SM1;
  kcg_float64 /* SM1:on:_L2/ */ _L2_on_SM1;
  kcg_float64 /* SM1:on:_L4/ */ _L4_on_SM1;
  kcg_float64 /* SM1:on:_L5/ */ _L5_on_SM1;
  positionTy /* SM1:on:_L6/ */ _L6_on_SM1;
  kcg_float64 /* SM1:on:_L7/ */ _L7_on_SM1;
  kcg_float64 /* SM1:on:_L9/ */ _L9_on_SM1;
  kcg_float64 /* SM1:on:_L13/ */ _L13_on_SM1;
  kcg_float64 /* SM1:on:vRight/ */ vRight_on_SM1;
  kcg_float64 /* SM1:on:vLeft/ */ vLeft_on_SM1;
  kcg_float64 /* SM1:on:si/ */ si_on_SM1;
  kcg_float64 /* SM1:on:co/ */ co_on_SM1;
  kcg_float64 /* SM1:on:v/ */ v_on_SM1;
  kcg_float64 /* SM1:on:alpha/ */ alpha_on_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_sel;
  SSM_TR_SM1 /* SM1: */ SM1_fired_strong;
  SSM_TR_SM1 /* SM1: */ SM1_fired;
} outC_PhysicalModel_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::PhysicalModel/ */
extern void PhysicalModel_Robot(
  /* top/ */
  kcg_bool top,
  /* RotationalSpeed/ */
  wheelsTy_Robot *RotationalSpeed,
  /* InitialPhase/ */
  phaseTy *InitialPhase,
  outC_PhysicalModel_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void PhysicalModel_reset_Robot(outC_PhysicalModel_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void PhysicalModel_init_Robot(outC_PhysicalModel_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Robot::PhysicalModel/
  @1: (mathext::SinCosR#16)
*/

#endif /* _PhysicalModel_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PhysicalModel_Robot.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

