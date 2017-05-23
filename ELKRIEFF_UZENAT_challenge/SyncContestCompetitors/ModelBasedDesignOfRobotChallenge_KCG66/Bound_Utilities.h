/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Bound_Utilities_H_
#define _Bound_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* xb/ */ xb;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Ma_Output/ */ Ma_Output_Max_1_float64;
  kcg_float64 /* @1/I2/ */ I2_Max_1_float64;
  kcg_float64 /* @1/I1/ */ I1_Max_1_float64;
  kcg_float64 /* @1/_L4/ */ _L4_Max_1_float64;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Max_1_float64;
  kcg_float64 /* @1/_L1/ */ _L1_Max_1_float64;
  kcg_float64 /* @2/Mi_Output/ */ Mi_Output_Min_1_float64;
  kcg_float64 /* @2/I2/ */ I2_Min_1_float64;
  kcg_float64 /* @2/I1/ */ I1_Min_1_float64;
  kcg_bool /* @2/_L25/ */ _L25_Min_1_float64;
  kcg_float64 /* @2/_L24/ */ _L24_Min_1_float64;
  kcg_float64 /* @2/_L22/ */ _L22_Min_1_float64;
  kcg_float64 /* @2/_L21/ */ _L21_Min_1_float64;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L6/ */ _L6;
} outC_Bound_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Bound/ */
extern void Bound_Utilities(
  /* x/ */
  kcg_float64 x,
  /* ceiling/ */
  kcg_float64 ceiling,
  outC_Bound_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Bound_reset_Utilities(outC_Bound_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Bound_init_Utilities(outC_Bound_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Utilities::Bound/
  @1: (math::Max#1)
  @2: (math::Min#1)
*/

#endif /* _Bound_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Bound_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

