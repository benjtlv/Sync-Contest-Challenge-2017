/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _OneObstacle_City_H_
#define _OneObstacle_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  obstTy /* obstacle/ */ obstacle;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L10/ */ _L10;
  positionTy /* _L9/ */ _L9;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_float64 /* _L27/ */ _L27;
  paramObstTy_City /* _L2/ */ _L2;
  obstTy /* _L29/ */ _L29;
} outC_OneObstacle_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::OneObstacle/ */
extern void OneObstacle_City(
  /* param/ */
  paramObstTy_City *param,
  /* time/ */
  kcg_float64 time,
  outC_OneObstacle_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void OneObstacle_reset_City(outC_OneObstacle_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void OneObstacle_init_City(outC_OneObstacle_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _OneObstacle_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneObstacle_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

