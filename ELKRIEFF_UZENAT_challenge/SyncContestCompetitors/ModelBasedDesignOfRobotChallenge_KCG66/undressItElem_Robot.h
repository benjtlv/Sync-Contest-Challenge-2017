/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _undressItElem_Robot_H_
#define _undressItElem_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  actionTy_Robot /* action/ */ action;
  kcg_float64 /* value/ */ value;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  itiElement_Robot /* _L1/ */ _L1;
  actionTy_Robot /* _L8/ */ _L8;
  kcg_float64 /* _L7/ */ _L7;
} outC_undressItElem_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::undressItElem/ */
extern void undressItElem_Robot(
  /* itElemObj/ */
  itiElement_Robot *itElemObj,
  outC_undressItElem_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void undressItElem_reset_Robot(outC_undressItElem_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void undressItElem_init_Robot(outC_undressItElem_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _undressItElem_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** undressItElem_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

