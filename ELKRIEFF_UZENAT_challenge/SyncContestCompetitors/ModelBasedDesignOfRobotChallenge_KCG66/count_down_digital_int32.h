/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _count_down_digital_int32_H_
#define _count_down_digital_int32_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* cpt/ */ cpt_int32;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L4/ */ _L4_int32;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1_int32;
  kcg_int32 /* _L2/ */ _L2_int32;
  kcg_int32 /* _L3/ */ _L3_int32;
  kcg_int32 /* _L7/ */ _L7_int32;
  kcg_int32 /* _L8/ */ _L8_int32;
  kcg_int32 /* _L13/ */ _L13_int32;
} outC_count_down_digital_int32;

/* ===========  node initialization and cycle functions  =========== */
/* digital::count_down/ */
extern void count_down_digital_int32(
  /* Reset/ */
  kcg_bool Reset_int32,
  /* N/ */
  kcg_int32 N_int32,
  outC_count_down_digital_int32 *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void count_down_reset_digital_int32(outC_count_down_digital_int32 *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void count_down_init_digital_int32(outC_count_down_digital_int32 *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _count_down_digital_int32_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** count_down_digital_int32.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

