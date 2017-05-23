/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModelBasedDesignOfRobotCh.h"

/* ModelBasedDesignOfRobotChallenge/ */
void ModelBasedDesignOfRobotCh(
  inC_ModelBasedDesignOfRobotCh *inC,
  outC_ModelBasedDesignOfRobotCh *outC)
{
  /* _L26= */
  if (outC->init) {
    outC->_L26.roadColor.red = kcg_lit_uint8(128);
    outC->_L26.roadColor.green = kcg_lit_uint8(128);
    outC->_L26.roadColor.blue = kcg_lit_uint8(128);
    outC->_L26.frontColor.red = kcg_lit_uint8(128);
    outC->_L26.frontColor.green = kcg_lit_uint8(128);
    outC->_L26.frontColor.blue = kcg_lit_uint8(128);
    outC->_L26.sonar = SONARFAR;
  }
  else {
    kcg_copy_sensorsTy(&outC->_L26, &outC->_L15);
  }
  /* _L25= */
  if (outC->init) {
    outC->_L25 = okVal;
  }
  else {
    outC->_L25 = outC->_L14;
  }
  /* _L21=(Robot::readIti#1)/ */
  readIti_Robot(inC->itiid, &outC->Context_readIti_1);
  kcg_copy_itiElemArr_Robot(&outC->_L21, &outC->Context_readIti_1.itinerary);
  kcg_copy_phaseTy(&outC->_L7, &inC->InitialPhase);
  outC->_L8 = inC->top;
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_Robot(
    &outC->_L21,
    &outC->_L26,
    outC->_L25,
    &outC->_L7,
    outC->_L8,
    &outC->Context_IndividualRobotControl_1);
  kcg_copy_phaseTy(
    &outC->_L11,
    &outC->Context_IndividualRobotControl_1.RobotPhase);
  outC->_L12 = outC->Context_IndividualRobotControl_1.RobotStatus;
  /* _L23=(City::WallClock#1)/ */
  WallClock_City(outC->_L12, &outC->Context_WallClock_1);
  outC->_L23 = outC->Context_WallClock_1.time;
  outC->time = outC->_L23;
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_City(
    &outC->_L11,
    outC->_L23,
    inC->mapid,
    &outC->Context_SmartCityControl_1);
  kcg_copy_sigTy(&outC->_L13, &outC->Context_SmartCityControl_1.Signalization);
  outC->_L14 = outC->Context_SmartCityControl_1.Interrupt;
  kcg_copy_sensorsTy(&outC->_L15, &outC->Context_SmartCityControl_1.SensorsData);
  kcg_copy_eventTy(&outC->_L16, &outC->Context_SmartCityControl_1.Events);
  /* _L19=(City::ScoringA#1)/ */
  ScoringA_City(&outC->_L16, outC->_L12, &outC->Context_ScoringA_1);
  outC->_L19 = outC->Context_ScoringA_1.score;
  /* _L22=(City::ScoringB#1)/ */
  ScoringB_City(&outC->_L11, &outC->Context_ScoringB_1);
  outC->_L22 = outC->Context_ScoringB_1.score;
  outC->scoreB = outC->_L22;
  outC->scoreA = outC->_L19;
  kcg_copy_phaseTy(&outC->RobotPhase, &outC->_L11);
  outC->RobotStatus = outC->_L12;
  kcg_copy_eventTy(&outC->Events, &outC->_L16);
  kcg_copy_sigTy(&outC->Signalization, &outC->_L13);
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ModelBasedDesignOfRobotCh_init(outC_ModelBasedDesignOfRobotCh *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  outC->_L26.roadColor.red = kcg_lit_uint8(0);
  outC->_L26.roadColor.green = kcg_lit_uint8(0);
  outC->_L26.roadColor.blue = kcg_lit_uint8(0);
  outC->_L26.frontColor.red = kcg_lit_uint8(0);
  outC->_L26.frontColor.green = kcg_lit_uint8(0);
  outC->_L26.frontColor.blue = kcg_lit_uint8(0);
  outC->_L26.sonar = kcg_lit_int32(0);
  outC->_L25 = waitVal;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L22 = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L21[idx].action = go_Robot;
    outC->_L21[idx].param = kcg_lit_float64(0.0);
  }
  outC->_L8 = kcg_true;
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L13.TLights[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L13.TLights[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L13.TLights[idx1].light = redQ;
  }
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L13.obstacles[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L13.obstacles[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L13.obstacles[idx2].present = kcg_true;
  }
  outC->_L16.lightRun = kcg_true;
  outC->_L16.speedExcess = kcg_true;
  outC->_L16.exitRoad = kcg_true;
  outC->_L16.collisionEvent = kcg_true;
  outC->_L16.dirEvent = kcg_true;
  outC->_L11.position.x = kcg_lit_float64(0.0);
  outC->_L11.position.y = kcg_lit_float64(0.0);
  outC->_L11.velocity = kcg_lit_float64(0.0);
  outC->_L11.heading = kcg_lit_float64(0.0);
  outC->_L12 = Preparing;
  outC->_L7.position.x = kcg_lit_float64(0.0);
  outC->_L7.position.y = kcg_lit_float64(0.0);
  outC->_L7.velocity = kcg_lit_float64(0.0);
  outC->_L7.heading = kcg_lit_float64(0.0);
  outC->_L14 = waitVal;
  outC->_L15.roadColor.red = kcg_lit_uint8(0);
  outC->_L15.roadColor.green = kcg_lit_uint8(0);
  outC->_L15.roadColor.blue = kcg_lit_uint8(0);
  outC->_L15.frontColor.red = kcg_lit_uint8(0);
  outC->_L15.frontColor.green = kcg_lit_uint8(0);
  outC->_L15.frontColor.blue = kcg_lit_uint8(0);
  outC->_L15.sonar = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->time = kcg_lit_float64(0.0);
  outC->scoreB = kcg_lit_int32(0);
  outC->scoreA = kcg_lit_int32(0);
  outC->Events.lightRun = kcg_true;
  outC->Events.speedExcess = kcg_true;
  outC->Events.exitRoad = kcg_true;
  outC->Events.collisionEvent = kcg_true;
  outC->Events.dirEvent = kcg_true;
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->Signalization.TLights[idx3].position.x = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx3].position.y = kcg_lit_float64(0.0);
    outC->Signalization.TLights[idx3].light = redQ;
  }
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->Signalization.obstacles[idx4].position.x = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx4].position.y = kcg_lit_float64(0.0);
    outC->Signalization.obstacles[idx4].present = kcg_true;
  }
  outC->RobotStatus = Preparing;
  outC->RobotPhase.position.x = kcg_lit_float64(0.0);
  outC->RobotPhase.position.y = kcg_lit_float64(0.0);
  outC->RobotPhase.velocity = kcg_lit_float64(0.0);
  outC->RobotPhase.heading = kcg_lit_float64(0.0);
  /* _L22=(City::ScoringB#1)/ */ ScoringB_init_City(&outC->Context_ScoringB_1);
  /* _L19=(City::ScoringA#1)/ */ ScoringA_init_City(&outC->Context_ScoringA_1);
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_init_City(&outC->Context_SmartCityControl_1);
  /* _L23=(City::WallClock#1)/ */ WallClock_init_City(&outC->Context_WallClock_1);
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_init_Robot(&outC->Context_IndividualRobotControl_1);
  /* _L21=(Robot::readIti#1)/ */ readIti_init_Robot(&outC->Context_readIti_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ModelBasedDesignOfRobotCh_reset(outC_ModelBasedDesignOfRobotCh *outC)
{
  outC->init = kcg_true;
  /* _L22=(City::ScoringB#1)/ */ ScoringB_reset_City(&outC->Context_ScoringB_1);
  /* _L19=(City::ScoringA#1)/ */ ScoringA_reset_City(&outC->Context_ScoringA_1);
  /* _L13=(City::SmartCityControl#1)/ */
  SmartCityControl_reset_City(&outC->Context_SmartCityControl_1);
  /* _L23=(City::WallClock#1)/ */
  WallClock_reset_City(&outC->Context_WallClock_1);
  /* _L11=(Robot::IndividualRobotControl#1)/ */
  IndividualRobotControl_reset_Robot(&outC->Context_IndividualRobotControl_1);
  /* _L21=(Robot::readIti#1)/ */ readIti_reset_Robot(&outC->Context_readIti_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModelBasedDesignOfRobotCh.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

