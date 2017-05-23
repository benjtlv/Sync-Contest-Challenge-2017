/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _AngleDist_Utilities_H_
#define _AngleDist_Utilities_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "HypotR_mathext_float64.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* angle/ */ angle;
  kcg_float64 /* dist/ */ dist;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_HypotR_mathext_float64 /* _L13=(mathext::HypotR#1)/ */ Context_HypotR_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionTy /* _L1/ */ _L1;
  positionTy /* _L2/ */ _L2;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
} outC_AngleDist_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::AngleDist/ */
extern void AngleDist_Utilities(
  /* from/ */
  positionTy *from,
  /* to/ */
  positionTy *to,
  outC_AngleDist_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AngleDist_reset_Utilities(outC_AngleDist_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AngleDist_init_Utilities(outC_AngleDist_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AngleDist_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AngleDist_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

