/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _Integrator_Utilities_H_
#define _Integrator_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* result/ */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L11/ */ _L11;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* s/ */ s;
  kcg_float64 /* _L12/ */ _L12;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
} outC_Integrator_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::Integrator/ */
extern void Integrator_Utilities(
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  /* init/ */
  kcg_float64 init,
  outC_Integrator_Utilities *outC);

extern void Integrator_reset_Utilities(outC_Integrator_Utilities *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void Integrator_init_Utilities(outC_Integrator_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Integrator_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Integrator_Utilities.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

