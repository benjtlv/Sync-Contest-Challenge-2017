/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T15:19:46
*************************************************************$ */
#ifndef _opPIDTest_Robot_H_
#define _opPIDTest_Robot_H_

#include "kcg_types.h"
#include "CompareColors_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* _L30/, wheels/ */ wheels;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_float64 /* _L18/ */ _L18;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_opPIDTest_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::opPIDTest/ */
extern void opPIDTest_Robot(
  /* _L12/, _L13/, _L3/, roadColor/ */
  colorTy *roadColor,
  /* _L2/, _L35/, _L45/, _L46/, _L56/, _L58/, _L68/, speed/, speedLocal/ */
  kcg_float64 speed,
  outC_opPIDTest_Robot *outC);

extern void opPIDTest_reset_Robot(outC_opPIDTest_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void opPIDTest_init_Robot(outC_opPIDTest_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _opPIDTest_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** opPIDTest_Robot.h
** Generation date: 2017-01-22T15:19:46
*************************************************************$ */

