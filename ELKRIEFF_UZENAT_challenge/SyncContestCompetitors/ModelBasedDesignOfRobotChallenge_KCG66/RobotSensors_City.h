/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _RobotSensors_City_H_
#define _RobotSensors_City_H_

#include "kcg_types.h"
#include "TraficLightsDetection_City.h"
#include "ObstaclesDetection_City.h"
#include "GroundColorDetection_City.h"
#include "AgregateSensors_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sensorsTy /* SensorsData/ */ SensorsData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AgregateSensors_City /* _L1=(City::AgregateSensors#1)/ */ Context_AgregateSensors_1;
  outC_GroundColorDetection_City /* _L4=(City::GroundColorDetection#1)/ */ Context_GroundColorDetection_1;
  outC_ObstaclesDetection_City /* _L5=(City::ObstaclesDetection#1)/ */ Context_ObstaclesDetection_1;
  outC_TraficLightsDetection_City /* _L6=(City::TraficLightsDetection#1)/ */ Context_TraficLightsDetection_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sensorsTy /* _L1/ */ _L1;
  phaseTy /* _L2/ */ _L2;
  sigTy /* _L3/ */ _L3;
  colorTy /* _L4/ */ _L4;
  kcg_int32 /* _L5/ */ _L5;
  colorTy /* _L6/ */ _L6;
  obstArr /* _L8/ */ _L8;
  trafLArr /* _L7/ */ _L7;
} outC_RobotSensors_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::RobotSensors/ */
extern void RobotSensors_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* Signalization/ */
  sigTy *Signalization,
  /* mapid/ */
  kcg_int32 mapid,
  outC_RobotSensors_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RobotSensors_reset_City(outC_RobotSensors_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RobotSensors_init_City(outC_RobotSensors_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _RobotSensors_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RobotSensors_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

