/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Exit_City_H_
#define _Exit_City_H_

#include "kcg_types.h"
#include "ExitAux_City.h"
#include "CarGeometry_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* exitRoad/ */ exitRoad;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ExitAux_City /* _L14=(City::ExitAux#1)/ */ Context_ExitAux_1[2];
  outC_CarGeometry_Robot /* _L24=(Robot::CarGeometry#1)/ */ Context_CarGeometry_1[2];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  array_int32_2 /* _L22/ */ _L22;
  phaseTy /* _L23/ */ _L23;
  _3_array /* _L24/ */ _L24;
  _2_array /* _L27/ */ _L27;
  array_float64_2_2 /* _L28/ */ _L28;
  _2_array /* _L29/ */ _L29;
} outC_Exit_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::Exit/ */
extern void Exit_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Exit_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Exit_reset_City(outC_Exit_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Exit_init_City(outC_Exit_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Exit_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Exit_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

