/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T16:22:41
*************************************************************$ */
#ifndef _opTurn_Robot_H_
#define _opTurn_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* _L15/, gogo/ */ gogo;
  kcg_bool /* _L30/, _L36/, finished/ */ finished;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_float64 /* _L29/ */ _L29;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_opTurn_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::opTurn/ */
extern void opTurn_Robot(
  /* _L37/, _L6/, turn/ */
  kcg_float64 turn,
  outC_opTurn_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void opTurn_reset_Robot(outC_opTurn_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void opTurn_init_Robot(outC_opTurn_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _opTurn_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** opTurn_Robot.h
** Generation date: 2017-01-22T16:22:41
*************************************************************$ */

