/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _HypotR_mathext_float64_H_
#define _HypotR_mathext_float64_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* HypotR_O/ */ HypotR_O_float64;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1_float64;
  kcg_float64 /* _L2/ */ _L2_float64;
  kcg_float64 /* _L3/ */ _L3_float64;
  kcg_float64 /* _L4/ */ _L4_float64;
  kcg_float64 /* _L5/ */ _L5_float64;
  kcg_float64 /* _L6/ */ _L6_float64;
} outC_HypotR_mathext_float64;

/* ===========  node initialization and cycle functions  =========== */
/* mathext::HypotR/ */
extern void HypotR_mathext_float64(
  /* HypotR_I1/ */
  kcg_float64 HypotR_I1_float64,
  /* HypotR_I2/ */
  kcg_float64 HypotR_I2_float64,
  outC_HypotR_mathext_float64 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void HypotR_reset_mathext_float64(outC_HypotR_mathext_float64 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void HypotR_init_mathext_float64(outC_HypotR_mathext_float64 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _HypotR_mathext_float64_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** HypotR_mathext_float64.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

