/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _automatonGoPlus_Robot_H_
#define _automatonGoPlus_Robot_H_

#include "kcg_types.h"
#include "ComputeWheels_Robot.h"
#include "isRed_Robot.h"
#include "isGreen_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* speedL/ */ speedL;
  kcg_float64 /* speedR/ */ speedR;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_goPlus /* goPlus: */ goPlus_state_nxt;
  kcg_bool /* goPlus: */ goPlus_reset_act;
  kcg_bool /* goPlus: */ goPlus_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ComputeWheels_Robot /* goPlus:go:_L18=(Robot::ComputeWheels#3)/ */ Context_ComputeWheels_3;
  outC_isGreen_Robot /* _L1=(Robot::isGreen#2)/ */ Context_isGreen_2;
  outC_isRed_Robot /* _L4=(Robot::isRed#1)/ */ Context_isRed_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_goPlus /* goPlus: */ goPlus_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  wheelsTy_Robot /* goPlus:go:_L18/ */ _L18_go_goPlus;
  kcg_float64 /* goPlus:go:_L15/ */ _L15_go_goPlus;
  kcg_float64 /* goPlus:go:_L16/ */ _L16_go_goPlus;
  colorTy /* goPlus:go:_L2/ */ _L2_go_goPlus;
  kcg_float64 /* goPlus:go:_L1/ */ _L1_go_goPlus;
  kcg_float64 /* goPlus:stopCat:_L1/ */ _L1_stopCat_goPlus;
  kcg_float64 /* goPlus:stopLight:_L1/ */ _L1_stopLight_goPlus;
  SSM_ST_goPlus /* goPlus: */ goPlus_state_sel;
  SSM_TR_goPlus /* goPlus: */ goPlus_fired_strong;
  SSM_TR_goPlus /* goPlus: */ goPlus_fired;
  kcg_bool /* isGreen/ */ isGreen;
  kcg_bool /* isRed/ */ isRed;
  colorTy /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
  colorTy /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
} outC_automatonGoPlus_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::automatonGoPlus/ */
extern void automatonGoPlus_Robot(
  /* val/ */
  kcg_float64 val,
  /* color/ */
  colorTy *color,
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_automatonGoPlus_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void automatonGoPlus_reset_Robot(outC_automatonGoPlus_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void automatonGoPlus_init_Robot(outC_automatonGoPlus_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _automatonGoPlus_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonGoPlus_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

