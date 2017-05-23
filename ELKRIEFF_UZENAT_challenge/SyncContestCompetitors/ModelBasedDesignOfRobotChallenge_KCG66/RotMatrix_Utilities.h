/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _RotMatrix_Utilities_H_
#define _RotMatrix_Utilities_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_float64_2_2 /* res/ */ res;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Output2/ */ Output2_SinCosR_2_float64;
  kcg_float64 /* @1/Output1/ */ Output1_SinCosR_2_float64;
  kcg_float64 /* @1/Input1/ */ Input1_SinCosR_2_float64;
  kcg_float64 /* @1/_L3/ */ _L3_SinCosR_2_float64;
  kcg_float64 /* @1/_L2/ */ _L2_SinCosR_2_float64;
  kcg_float64 /* @1/_L1/ */ _L1_SinCosR_2_float64;
  kcg_float64 /* si/ */ si;
  kcg_float64 /* co/ */ co;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L18/ */ _L18;
  array_float64_2_2 /* _L19/ */ _L19;
} outC_RotMatrix_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::RotMatrix/ */
extern void RotMatrix_Utilities(
  /* alpha/ */
  kcg_float64 alpha,
  outC_RotMatrix_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RotMatrix_reset_Utilities(outC_RotMatrix_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RotMatrix_init_Utilities(outC_RotMatrix_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Utilities::RotMatrix/
  @1: (mathext::SinCosR#2)
*/

#endif /* _RotMatrix_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RotMatrix_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

