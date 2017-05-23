/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _VectAdd_vect_float64_2_H_
#define _VectAdd_vect_float64_2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_2 /* W/ */ W_float64_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float64_2 /* _L1/ */ _L1_float64_2;
  array_float64_2 /* _L2/ */ _L2_float64_2;
  array_float64_2 /* _L3/ */ _L3_float64_2;
} outC_VectAdd_vect_float64_2;

/* ===========  node initialization and cycle functions  =========== */
/* vect::VectAdd/ */
extern void VectAdd_vect_float64_2(
  /* U/ */
  array_float64_2 *U_float64_2,
  /* V/ */
  array_float64_2 *V_float64_2,
  outC_VectAdd_vect_float64_2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void VectAdd_reset_vect_float64_2(outC_VectAdd_vect_float64_2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void VectAdd_init_vect_float64_2(outC_VectAdd_vect_float64_2 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _VectAdd_vect_float64_2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** VectAdd_vect_float64_2.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

