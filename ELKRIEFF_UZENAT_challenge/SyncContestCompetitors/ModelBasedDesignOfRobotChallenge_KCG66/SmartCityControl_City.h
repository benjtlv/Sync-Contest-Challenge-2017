/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _SmartCityControl_City_H_
#define _SmartCityControl_City_H_

#include "kcg_types.h"
#include "AllObstacles_City.h"
#include "TrafficLights_City.h"
#include "RobotSensors_City.h"
#include "EventDetection_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sigTy /* Signalization/ */ Signalization;
  interTy /* Interrupt/ */ Interrupt;
  sensorsTy /* SensorsData/ */ SensorsData;
  eventTy /* Events/ */ Events;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EventDetection_City /* _L2=(City::EventDetection#1)/ */ Context_EventDetection_1;
  outC_RobotSensors_City /* _L4=(City::RobotSensors#1)/ */ Context_RobotSensors_1;
  outC_AllObstacles_City /* _L16=(City::AllObstacles#1)/ */ Context_AllObstacles_1;
  outC_TrafficLights_City /* _L11=(City::TrafficLights#1)/ */ Context_TrafficLights_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L1/ */ _L1;
  eventTy /* _L3/ */ _L3;
  interTy /* _L2/ */ _L2;
  sensorsTy /* _L4/ */ _L4;
  trafLArr /* _L11/ */ _L11;
  kcg_float64 /* _L13/ */ _L13;
  obstArr /* _L16/ */ _L16;
  sigTy /* _L17/ */ _L17;
} outC_SmartCityControl_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::SmartCityControl/ */
extern void SmartCityControl_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* time/ */
  kcg_float64 time,
  /* mapid/ */
  kcg_int32 mapid,
  outC_SmartCityControl_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void SmartCityControl_reset_City(outC_SmartCityControl_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void SmartCityControl_init_City(outC_SmartCityControl_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _SmartCityControl_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SmartCityControl_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

