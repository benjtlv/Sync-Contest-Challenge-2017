/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Normalize_Utilities_H_
#define _Normalize_Utilities_H_

#include "kcg_types.h"
#include "RoundFloor_math_float64.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* normal/ */ normal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RoundFloor_math_float64 /* _L5=(math::RoundFloor#1)/ */ Context_RoundFloor_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_int32 /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
} outC_Normalize_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Normalize/ */
extern void Normalize_Utilities(
  /* angle/ */
  kcg_float64 angle,
  outC_Normalize_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Normalize_reset_Utilities(outC_Normalize_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Normalize_init_Utilities(outC_Normalize_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Normalize_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Normalize_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

