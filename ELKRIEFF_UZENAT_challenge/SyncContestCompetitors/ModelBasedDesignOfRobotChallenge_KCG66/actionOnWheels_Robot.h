/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _actionOnWheels_Robot_H_
#define _actionOnWheels_Robot_H_

#include "kcg_types.h"
#include "TurnControlleur_Robot.h"
#include "automatonGoPlus_Robot.h"
#include "undressItElem_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* speedL/ */ speedL;
  kcg_float64 /* speedR/ */ speedR;
  kcg_bool /* finTurn/ */ finTurn;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_automatonGoPlus_Robot /* WhenBlock1:go:_L18=(Robot::automatonGoPlus#1)/ */ Context_automatonGoPlus_1;
  outC_TurnControlleur_Robot /* WhenBlock1:turn:_L20=(Robot::TurnControlleur#2)/ */ Context_TurnControlleur_2;
  outC_undressItElem_Robot /* _L2=(Robot::undressItElem#1)/ */ Context_undressItElem_1;
  /* ------------------ clocks of observable data -------------------- */
  actionTy_Robot /* WhenBlock1: */ WhenBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* WhenBlock1:go:_L21/ */ _L21_go_WhenBlock1;
  colorTy /* WhenBlock1:go:_L20/ */ _L20_go_WhenBlock1;
  kcg_float64 /* WhenBlock1:go:_L18/ */ _L18_go_WhenBlock1;
  kcg_float64 /* WhenBlock1:go:_L19/ */ _L19_go_WhenBlock1;
  colorTy /* WhenBlock1:go:_L15/ */ _L15_go_WhenBlock1;
  kcg_bool /* WhenBlock1:go:_L10/ */ _L10_go_WhenBlock1;
  kcg_float64 /* WhenBlock1:go:_L4/ */ _L4_go_WhenBlock1;
  kcg_bool /* WhenBlock1:turn:_L20/ */ _L20_turn_WhenBlock1;
  wheelsTy_Robot /* WhenBlock1:turn:_L21/ */ _L21_turn_WhenBlock1;
  kcg_float64 /* WhenBlock1:turn:_L16/ */ _L16_turn_WhenBlock1;
  kcg_float64 /* WhenBlock1:turn:_L17/ */ _L17_turn_WhenBlock1;
  kcg_float64 /* WhenBlock1:turn:_L1/ */ _L1_turn_WhenBlock1;
  kcg_bool /* WhenBlock1:stop:_L3/ */ _L3_stop_WhenBlock1;
  kcg_float64 /* WhenBlock1:stop:_L1/ */ _L1_stop_WhenBlock1;
  kcg_float64 /* val/ */ val;
  actionTy_Robot /* act/ */ act;
  itiElement_Robot /* _L1/ */ _L1;
  kcg_float64 /* _L3/ */ _L3;
  actionTy_Robot /* _L2/ */ _L2;
} outC_actionOnWheels_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::actionOnWheels/ */
extern void actionOnWheels_Robot(
  /* itElemObj/ */
  itiElement_Robot *itElemObj,
  /* color/ */
  colorTy *color,
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_actionOnWheels_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void actionOnWheels_reset_Robot(outC_actionOnWheels_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void actionOnWheels_init_Robot(outC_actionOnWheels_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _actionOnWheels_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** actionOnWheels_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

