/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-17T14:31:08
*************************************************************$ */
#ifndef _automatonGo_Robot_H_
#define _automatonGo_Robot_H_

#include "kcg_types.h"
#include "CompareColors_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* speedL/ */ speedL;
  kcg_float64 /* speedR/ */ speedR;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool init1;
  kcg_size /* @1/_/v3/ */ v3_times_1_size;
  kcg_size /* @2/_/v3/ */ v3_times_3_size;
  SSM_ST_go /* go: */ go_state_nxt;
  kcg_bool /* go: */ go_reset_act;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_automatonGo_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::automatonGo/ */
extern void automatonGo_Robot(
  /* val/ */
  kcg_float64 val,
  /* _L19/, color/ */
  colorTy *color,
  outC_automatonGo_Robot *outC);

extern void automatonGo_reset_Robot(outC_automatonGo_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void automatonGo_init_Robot(outC_automatonGo_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Robot::automatonGo/
  @1: (times#1)
  @2: (times#3)
*/

#endif /* _automatonGo_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonGo_Robot.h
** Generation date: 2017-01-17T14:31:08
*************************************************************$ */

