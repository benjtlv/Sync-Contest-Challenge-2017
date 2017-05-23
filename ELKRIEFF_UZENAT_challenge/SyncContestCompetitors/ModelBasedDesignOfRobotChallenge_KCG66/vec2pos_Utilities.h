/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _vec2pos_Utilities_H_
#define _vec2pos_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionTy /* pos/ */ pos;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionTy /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
} outC_vec2pos_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::vec2pos/ */
extern void vec2pos_Utilities(
  /* vec/ */
  array_float64_2 *vec,
  outC_vec2pos_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void vec2pos_reset_Utilities(outC_vec2pos_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void vec2pos_init_Utilities(outC_vec2pos_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _vec2pos_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** vec2pos_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

