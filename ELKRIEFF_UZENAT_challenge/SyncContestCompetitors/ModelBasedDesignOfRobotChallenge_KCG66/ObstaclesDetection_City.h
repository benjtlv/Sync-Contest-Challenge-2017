/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _ObstaclesDetection_City_H_
#define _ObstaclesDetection_City_H_

#include "kcg_types.h"
#include "OneObstacleDet_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* sonar/ */ sonar;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_OneObstacleDet_City /* _L16=(City::OneObstacleDet#3)/ */ Context_OneObstacleDet_3[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L2/ */ _L2;
  array /* _L6/ */ _L6;
  kcg_int32 /* _L10/ */ _L10;
  obstArr /* _L13/ */ _L13;
  kcg_int32 /* _L16/ */ _L16;
} outC_ObstaclesDetection_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::ObstaclesDetection/ */
extern void ObstaclesDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacles/ */
  obstArr *obstacles,
  outC_ObstaclesDetection_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ObstaclesDetection_reset_City(outC_ObstaclesDetection_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ObstaclesDetection_init_City(outC_ObstaclesDetection_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ObstaclesDetection_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ObstaclesDetection_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

