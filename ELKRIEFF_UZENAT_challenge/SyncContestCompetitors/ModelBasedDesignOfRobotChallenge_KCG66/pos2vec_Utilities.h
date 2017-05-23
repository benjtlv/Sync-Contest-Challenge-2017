/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _pos2vec_Utilities_H_
#define _pos2vec_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_2 /* vec/ */ vec;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionTy /* _L1/ */ _L1;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  array_float64_2 /* _L6/ */ _L6;
} outC_pos2vec_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::pos2vec/ */
extern void pos2vec_Utilities(
  /* pos/ */
  positionTy *pos,
  outC_pos2vec_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void pos2vec_reset_Utilities(outC_pos2vec_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void pos2vec_init_Utilities(outC_pos2vec_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _pos2vec_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** pos2vec_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

