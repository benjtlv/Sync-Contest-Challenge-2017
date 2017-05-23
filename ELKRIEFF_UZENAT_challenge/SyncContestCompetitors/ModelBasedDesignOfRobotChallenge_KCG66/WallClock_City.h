/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _WallClock_City_H_
#define _WallClock_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* time/ */ time;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L13/ */ _L13;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L7/ */ _L7;
  statusTy /* _L4/ */ _L4;
  kcg_bool /* _L3/ */ _L3;
  statusTy /* _L1/ */ _L1;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
} outC_WallClock_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::WallClock/ */
extern void WallClock_City(
  /* RobotStatus/ */
  statusTy RobotStatus,
  outC_WallClock_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void WallClock_reset_City(outC_WallClock_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void WallClock_init_City(outC_WallClock_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _WallClock_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** WallClock_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

