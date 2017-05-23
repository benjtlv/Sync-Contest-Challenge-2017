/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _UpTime_Utilities_H_
#define _UpTime_Utilities_H_

#include "kcg_types.h"
#include "Integrator_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* t/ */ t;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Integrator_Utilities /* _L3=(Utilities::Integrator#1)/ */ Context_Integrator_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  kcg_float64 /* _L1/ */ _L1;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
} outC_UpTime_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::UpTime/ */
extern void UpTime_Utilities(
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  outC_UpTime_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void UpTime_reset_Utilities(outC_UpTime_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void UpTime_init_Utilities(outC_UpTime_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: Utilities::UpTime/
  @1: (math::Abs#1)
*/

#endif /* _UpTime_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** UpTime_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

