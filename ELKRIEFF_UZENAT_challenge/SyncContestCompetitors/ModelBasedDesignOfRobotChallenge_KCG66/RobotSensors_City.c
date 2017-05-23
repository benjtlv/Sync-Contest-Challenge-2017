/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RobotSensors_City.h"

/* City::RobotSensors/ */
void RobotSensors_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* Signalization/ */
  sigTy *Signalization,
  /* mapid/ */
  kcg_int32 mapid,
  outC_RobotSensors_City *outC)
{
  kcg_copy_sigTy(&outC->_L3, Signalization);
  kcg_copy_trafLArr(&outC->_L7, &outC->_L3.TLights);
  kcg_copy_obstArr(&outC->_L8, &outC->_L3.obstacles);
  kcg_copy_phaseTy(&outC->_L2, RobotPhase);
  /* _L6=(City::TraficLightsDetection#1)/ */
  TraficLightsDetection_City(
    &outC->_L2,
    &outC->_L7,
    mapid,
    &outC->Context_TraficLightsDetection_1);
  kcg_copy_colorTy(
    &outC->_L6,
    &outC->Context_TraficLightsDetection_1.lightsColor);
  /* _L5=(City::ObstaclesDetection#1)/ */
  ObstaclesDetection_City(
    &outC->_L2,
    &outC->_L8,
    &outC->Context_ObstaclesDetection_1);
  outC->_L5 = outC->Context_ObstaclesDetection_1.sonar;
  /* _L4=(City::GroundColorDetection#1)/ */
  GroundColorDetection_City(
    &outC->_L2,
    mapid,
    &outC->Context_GroundColorDetection_1);
  kcg_copy_colorTy(&outC->_L4, &outC->Context_GroundColorDetection_1.roadColor);
  /* _L1=(City::AgregateSensors#1)/ */
  AgregateSensors_City(
    &outC->_L4,
    &outC->_L6,
    outC->_L5,
    &outC->Context_AgregateSensors_1);
  kcg_copy_sensorsTy(&outC->_L1, &outC->Context_AgregateSensors_1.SensorsData);
  kcg_copy_sensorsTy(&outC->SensorsData, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void RobotSensors_init_City(outC_RobotSensors_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 5; idx++) {
    outC->_L7[idx].position.x = kcg_lit_float64(0.0);
    outC->_L7[idx].position.y = kcg_lit_float64(0.0);
    outC->_L7[idx].light = redQ;
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L8[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L8[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L8[idx1].present = kcg_true;
  }
  outC->_L6.red = kcg_lit_uint8(0);
  outC->_L6.green = kcg_lit_uint8(0);
  outC->_L6.blue = kcg_lit_uint8(0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L4.red = kcg_lit_uint8(0);
  outC->_L4.green = kcg_lit_uint8(0);
  outC->_L4.blue = kcg_lit_uint8(0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L3.TLights[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L3.TLights[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L3.TLights[idx2].light = redQ;
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L3.obstacles[idx3].position.x = kcg_lit_float64(0.0);
    outC->_L3.obstacles[idx3].position.y = kcg_lit_float64(0.0);
    outC->_L3.obstacles[idx3].present = kcg_true;
  }
  outC->_L2.position.x = kcg_lit_float64(0.0);
  outC->_L2.position.y = kcg_lit_float64(0.0);
  outC->_L2.velocity = kcg_lit_float64(0.0);
  outC->_L2.heading = kcg_lit_float64(0.0);
  outC->_L1.roadColor.red = kcg_lit_uint8(0);
  outC->_L1.roadColor.green = kcg_lit_uint8(0);
  outC->_L1.roadColor.blue = kcg_lit_uint8(0);
  outC->_L1.frontColor.red = kcg_lit_uint8(0);
  outC->_L1.frontColor.green = kcg_lit_uint8(0);
  outC->_L1.frontColor.blue = kcg_lit_uint8(0);
  outC->_L1.sonar = kcg_lit_int32(0);
  outC->SensorsData.roadColor.red = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.green = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.red = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.green = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.sonar = kcg_lit_int32(0);
  /* _L1=(City::AgregateSensors#1)/ */
  AgregateSensors_init_City(&outC->Context_AgregateSensors_1);
  /* _L4=(City::GroundColorDetection#1)/ */
  GroundColorDetection_init_City(&outC->Context_GroundColorDetection_1);
  /* _L5=(City::ObstaclesDetection#1)/ */
  ObstaclesDetection_init_City(&outC->Context_ObstaclesDetection_1);
  /* _L6=(City::TraficLightsDetection#1)/ */
  TraficLightsDetection_init_City(&outC->Context_TraficLightsDetection_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RobotSensors_reset_City(outC_RobotSensors_City *outC)
{
  /* _L1=(City::AgregateSensors#1)/ */
  AgregateSensors_reset_City(&outC->Context_AgregateSensors_1);
  /* _L4=(City::GroundColorDetection#1)/ */
  GroundColorDetection_reset_City(&outC->Context_GroundColorDetection_1);
  /* _L5=(City::ObstaclesDetection#1)/ */
  ObstaclesDetection_reset_City(&outC->Context_ObstaclesDetection_1);
  /* _L6=(City::TraficLightsDetection#1)/ */
  TraficLightsDetection_reset_City(&outC->Context_TraficLightsDetection_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RobotSensors_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

