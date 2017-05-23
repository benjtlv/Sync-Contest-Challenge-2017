/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _RoundFloor_math_float64_H_
#define _RoundFloor_math_float64_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* RF_Output/ */ RF_Output_float64;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1_float64;
  kcg_bool /* _L24/ */ _L24_float64;
  kcg_float64 /* _L25/ */ _L25_float64;
  kcg_int32 /* _L26/ */ _L26_float64;
  kcg_float64 /* _L30/ */ _L30_float64;
  kcg_float64 /* _L31/ */ _L31_float64;
  kcg_int32 /* _L32/ */ _L32_float64;
  kcg_int32 /* _L33/ */ _L33_float64;
  kcg_int32 /* _L38/ */ _L38_float64;
  kcg_float64 /* _L41/ */ _L41_float64;
  kcg_bool /* _L43/ */ _L43_float64;
} outC_RoundFloor_math_float64;

/* ===========  node initialization and cycle functions  =========== */
/* math::RoundFloor/ */
extern void RoundFloor_math_float64(
  /* RF_Input/ */
  kcg_float64 RF_Input_float64,
  outC_RoundFloor_math_float64 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RoundFloor_reset_math_float64(outC_RoundFloor_math_float64 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RoundFloor_init_math_float64(outC_RoundFloor_math_float64 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RoundFloor_math_float64_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RoundFloor_math_float64.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

