/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-17T17:12:34
*************************************************************$ */
#ifndef _automatonTurn_Robot_H_
#define _automatonTurn_Robot_H_

#include "kcg_types.h"
#include "abs_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* speedL/ */ speedL;
  kcg_float64 /* speedR/ */ speedR;
  kcg_bool /* finTurn/ */ finTurn;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* turn: */ turn_reset_act;
  SSM_ST_turn /* turn: */ turn_state_nxt;
  kcg_int32 /* @1/_/v3/ */ v3_times_4_int32;
  kcg_bool init;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_automatonTurn_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::automatonTurn/ */
extern void automatonTurn_Robot(
  /* _L2/, _L6/, val/ */
  kcg_float64 val,
  outC_automatonTurn_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void automatonTurn_reset_Robot(outC_automatonTurn_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void automatonTurn_init_Robot(outC_automatonTurn_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Robot::automatonTurn/
  @1: (times#4)
*/

#endif /* _automatonTurn_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonTurn_Robot.h
** Generation date: 2017-01-17T17:12:34
*************************************************************$ */

