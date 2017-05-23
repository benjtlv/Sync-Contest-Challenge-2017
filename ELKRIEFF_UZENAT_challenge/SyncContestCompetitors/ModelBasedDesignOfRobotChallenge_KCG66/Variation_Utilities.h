/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Variation_Utilities_H_
#define _Variation_Utilities_H_

#include "kcg_types.h"
#include "Normalize_Utilities.h"
#include "Integrator_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* varX/ */ varX;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L7/ */ _L7;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Integrator_Utilities /* _L1=(Utilities::Integrator#1)/ */ Context_Integrator_1;
  outC_Normalize_Utilities /* _L11=(Utilities::Normalize#1)/ */ Context_Normalize_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool every;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
} outC_Variation_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Variation/ */
extern void Variation_Utilities(
  /* enabled/ */
  kcg_bool enabled,
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  outC_Variation_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Variation_reset_Utilities(outC_Variation_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Variation_init_Utilities(outC_Variation_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Utilities::Variation/
  @1: (math::Abs#1)
*/

#endif /* _Variation_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Variation_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

