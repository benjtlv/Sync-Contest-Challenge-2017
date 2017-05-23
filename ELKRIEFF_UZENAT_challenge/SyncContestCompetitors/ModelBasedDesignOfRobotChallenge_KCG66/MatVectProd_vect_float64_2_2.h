/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _MatVectProd_vect_float64_2_2_H_
#define _MatVectProd_vect_float64_2_2_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_2 /* R/ */ R_float64_2_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array_float64_2_2 /* @1/_L7/ */ _L7_ScalProd_1_float64_2;
  array_float64_2 /* @1/_L6/ */ _L6_ScalProd_1_float64_2;
  array_float64_2 /* @1/_L4/ */ _L4_ScalProd_1_float64_2;
  array_float64_2_2 /* @1/_L3/ */ _L3_ScalProd_1_float64_2;
  array_float64_2_2 /* @1/_L2/ */ _L2_ScalProd_1_float64_2;
  array_float64_2_2 /* _L1/ */ _L1_float64_2_2;
  array_float64_2 /* _L2/ */ _L2_float64_2_2;
  array_float64_2_2 /* _L4/ */ _L4_float64_2_2;
  array_float64_2 /* _L7/ */ _L7_float64_2_2;
} outC_MatVectProd_vect_float64_2_2;

/* ===========  node initialization and cycle functions  =========== */
/* vect::MatVectProd/ */
extern void MatVectProd_vect_float64_2_2(
  /* A/ */
  array_float64_2_2 *A_float64_2_2,
  /* V/ */
  array_float64_2 *V_float64_2_2,
  outC_MatVectProd_vect_float64_2_2 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MatVectProd_reset_vect_float64_2_2(
  outC_MatVectProd_vect_float64_2_2 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void MatVectProd_init_vect_float64_2_2(
  outC_MatVectProd_vect_float64_2_2 *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: vect::MatVectProd/
  @1: (vect::ScalProd#1)
*/

#endif /* _MatVectProd_vect_float64_2_2_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** MatVectProd_vect_float64_2_2.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

