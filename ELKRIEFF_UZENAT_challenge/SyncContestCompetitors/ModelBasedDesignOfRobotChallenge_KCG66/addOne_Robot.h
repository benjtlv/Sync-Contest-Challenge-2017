/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _addOne_Robot_H_
#define _addOne_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* newIndex/ */ newIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L1/ */ _L1;
  kcg_int32 /* _L3/ */ _L3;
} outC_addOne_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::addOne/ */
extern void addOne_Robot(/* index/ */ kcg_int32 index, outC_addOne_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void addOne_reset_Robot(outC_addOne_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void addOne_init_Robot(outC_addOne_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _addOne_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** addOne_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

