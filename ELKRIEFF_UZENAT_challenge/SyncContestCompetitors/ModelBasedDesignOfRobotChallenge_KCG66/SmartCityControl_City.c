/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SmartCityControl_City.h"

/* City::SmartCityControl/ */
void SmartCityControl_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* time/ */
  kcg_float64 time,
  /* mapid/ */
  kcg_int32 mapid,
  outC_SmartCityControl_City *outC)
{
  outC->_L13 = time;
  /* _L11=(City::TrafficLights#1)/ */
  TrafficLights_City(outC->_L13, mapid, &outC->Context_TrafficLights_1);
  kcg_copy_trafLArr(&outC->_L11, &outC->Context_TrafficLights_1.allLights);
  /* _L16=(City::AllObstacles#1)/ */
  AllObstacles_City(outC->_L13, &outC->Context_AllObstacles_1);
  kcg_copy_obstArr(&outC->_L16, &outC->Context_AllObstacles_1.obstacles);
  kcg_copy_trafLArr(&outC->_L17.TLights, &outC->_L11);
  kcg_copy_obstArr(&outC->_L17.obstacles, &outC->_L16);
  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  /* _L4=(City::RobotSensors#1)/ */
  RobotSensors_City(
    &outC->_L1,
    &outC->_L17,
    mapid,
    &outC->Context_RobotSensors_1);
  kcg_copy_sensorsTy(&outC->_L4, &outC->Context_RobotSensors_1.SensorsData);
  /* _L2=(City::EventDetection#1)/ */
  EventDetection_City(
    &outC->_L17,
    &outC->_L1,
    mapid,
    &outC->Context_EventDetection_1);
  outC->_L2 = outC->Context_EventDetection_1.Interrupt;
  kcg_copy_eventTy(&outC->_L3, &outC->Context_EventDetection_1.Events);
  kcg_copy_eventTy(&outC->Events, &outC->_L3);
  kcg_copy_sensorsTy(&outC->SensorsData, &outC->_L4);
  outC->Interrupt = outC->_L2;
  kcg_copy_sigTy(&outC->Signalization, &outC->_L17);
}

#ifndef KCG_USER_DEFINED_INIT
void SmartCityControl_init_City(outC_SmartCityControl_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  for (idx = 0; idx < 5; idx++) {
    outC->_L17.TLights[idx].position.x = kcg_lit_float64(0.0);
    outC->_L17.TLights[idx].position.y = kcg_lit_float64(0.0);
    outC->_L17.TLights[idx].light = redQ;
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L17.obstacles[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L17.obstacles[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L17.obstacles[idx1].present = kcg_true;
  }
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L16[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L16[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L16[idx2].present = kcg_true;
  }
  outC->_L13 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L11[idx3].position.x = kcg_lit_float64(0.0);
    outC->_L11[idx3].position.y = kcg_lit_float64(0.0);
    outC->_L11[idx3].light = redQ;
  }
  outC->_L4.roadColor.red = kcg_lit_uint8(0);
  outC->_L4.roadColor.green = kcg_lit_uint8(0);
  outC->_L4.roadColor.blue = kcg_lit_uint8(0);
  outC->_L4.frontColor.red = kcg_lit_uint8(0);
  outC->_L4.frontColor.green = kcg_lit_uint8(0);
  outC->_L4.frontColor.blue = kcg_lit_uint8(0);
  outC->_L4.sonar = kcg_lit_int32(0);
  outC->_L2 = waitVal;
  outC->_L3.lightRun = kcg_true;
  outC->_L3.speedExcess = kcg_true;
  outC->_L3.exitRoad = kcg_true;
  outC->_L3.collisionEvent = kcg_true;
  outC->_L3.dirEvent = kcg_true;
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->Events.lightRun = kcg_true;
  outC->Events.speedExcess = kcg_true;
  outC->Events.exitRoad = kcg_true;
  outC->Events.collisionEvent = kcg_true;
  outC->Events.dirEvent = kcg_true;
  outC->SensorsData.roadColor.red = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.green = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.red = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.green = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.sonar = kcg_lit_int32(0);
  outC->Interrupt = waitVal;
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->Signalization.TLights[idx4].position.x = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx4].position.y = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx4].light = redQ;
  }
  for (idx5 = 0; idx5 < 10; idx5++) {
    outC->Signalization.obstacles[idx5].position.x = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx5].position.y = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx5].present = kcg_true;
  }
  /* _L2=(City::EventDetection#1)/ */
  EventDetection_init_City(&outC->Context_EventDetection_1);
  /* _L4=(City::RobotSensors#1)/ */
  RobotSensors_init_City(&outC->Context_RobotSensors_1);
  /* _L16=(City::AllObstacles#1)/ */
  AllObstacles_init_City(&outC->Context_AllObstacles_1);
  /* _L11=(City::TrafficLights#1)/ */
  TrafficLights_init_City(&outC->Context_TrafficLights_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SmartCityControl_reset_City(outC_SmartCityControl_City *outC)
{
  /* _L2=(City::EventDetection#1)/ */
  EventDetection_reset_City(&outC->Context_EventDetection_1);
  /* _L4=(City::RobotSensors#1)/ */
  RobotSensors_reset_City(&outC->Context_RobotSensors_1);
  /* _L16=(City::AllObstacles#1)/ */
  AllObstacles_reset_City(&outC->Context_AllObstacles_1);
  /* _L11=(City::TrafficLights#1)/ */
  TrafficLights_reset_City(&outC->Context_TrafficLights_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** SmartCityControl_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

