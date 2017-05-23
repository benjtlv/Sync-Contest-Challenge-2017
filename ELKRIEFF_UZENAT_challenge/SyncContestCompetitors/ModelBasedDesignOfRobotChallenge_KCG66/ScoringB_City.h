/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _ScoringB_City_H_
#define _ScoringB_City_H_

#include "kcg_types.h"
#include "Variation_Utilities.h"
#include "UpTime_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* score/ */ score;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Variation_Utilities /* _L17=(Utilities::Variation#1)/ */ Context_Variation_1;
  outC_UpTime_Utilities /* _L16=(Utilities::UpTime#1)/ */ Context_UpTime_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L1/ */ _L1;
  kcg_float64 /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  positionTy /* _L2/ */ _L2;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_float64 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_float64 /* _L25/ */ _L25;
} outC_ScoringB_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::ScoringB/ */
extern void ScoringB_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  outC_ScoringB_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ScoringB_reset_City(outC_ScoringB_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ScoringB_init_City(outC_ScoringB_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ScoringB_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ScoringB_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

