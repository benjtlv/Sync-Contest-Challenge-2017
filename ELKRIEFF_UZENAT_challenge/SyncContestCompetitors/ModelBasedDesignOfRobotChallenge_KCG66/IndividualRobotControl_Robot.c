/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "IndividualRobotControl_Robot.h"

/* Robot::IndividualRobotControl/ */
void IndividualRobotControl_Robot(
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  /* Interrupt/ */
  interTy Interrupt,
  /* InitialPhase/ */
  phaseTy *InitialPhase,
  /* top/ */
  kcg_bool top,
  outC_IndividualRobotControl_Robot *outC)
{
  kcg_copy_itiElemArr_Robot(&outC->_L11, Itinerary);
  outC->_L10 = top;
  kcg_copy_phaseTy(&outC->_L9, InitialPhase);
  kcg_copy_sensorsTy(&outC->_L7, SensorsData);
  outC->_L8 = Interrupt;
  /* _L4=(Robot::Driver#1)/ */
  Driver_Robot(
    outC->_L10,
    &outC->_L7,
    outC->_L8,
    &outC->_L11,
    &outC->Context_Driver_1);
  kcg_copy_wheelsTy_Robot(&outC->_L4, &outC->Context_Driver_1.RotationalSpeed);
  outC->_L5 = outC->Context_Driver_1.RobotStatus;
  outC->RobotStatus = outC->_L5;
  /* _L6=(Robot::PhysicalModel#1)/ */
  PhysicalModel_Robot(
    outC->_L10,
    &outC->_L4,
    &outC->_L9,
    &outC->Context_PhysicalModel_1);
  kcg_copy_phaseTy(&outC->_L6, &outC->Context_PhysicalModel_1.RobotPhase);
  kcg_copy_phaseTy(&outC->RobotPhase, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void IndividualRobotControl_init_Robot(outC_IndividualRobotControl_Robot *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 50; idx++) {
    outC->_L11[idx].action = go_Robot;
    outC->_L11[idx].param = kcg_lit_float64(0.0);
  }
  outC->_L10 = kcg_true;
  outC->_L9.position.x = kcg_lit_float64(0.0);
  outC->_L9.position.y = kcg_lit_float64(0.0);
  outC->_L9.velocity = kcg_lit_float64(0.0);
  outC->_L9.heading = kcg_lit_float64(0.0);
  outC->_L8 = waitVal;
  outC->_L7.roadColor.red = kcg_lit_uint8(0);
  outC->_L7.roadColor.green = kcg_lit_uint8(0);
  outC->_L7.roadColor.blue = kcg_lit_uint8(0);
  outC->_L7.frontColor.red = kcg_lit_uint8(0);
  outC->_L7.frontColor.green = kcg_lit_uint8(0);
  outC->_L7.frontColor.blue = kcg_lit_uint8(0);
  outC->_L7.sonar = kcg_lit_int32(0);
  outC->_L5 = Preparing;
  outC->_L4.left = kcg_lit_float64(0.0);
  outC->_L4.right = kcg_lit_float64(0.0);
  outC->_L6.position.x = kcg_lit_float64(0.0);
  outC->_L6.position.y = kcg_lit_float64(0.0);
  outC->_L6.velocity = kcg_lit_float64(0.0);
  outC->_L6.heading = kcg_lit_float64(0.0);
  outC->RobotStatus = Preparing;
  outC->RobotPhase.position.x = kcg_lit_float64(0.0);
  outC->RobotPhase.position.y = kcg_lit_float64(0.0);
  outC->RobotPhase.velocity = kcg_lit_float64(0.0);
  outC->RobotPhase.heading = kcg_lit_float64(0.0);
  /* _L6=(Robot::PhysicalModel#1)/ */
  PhysicalModel_init_Robot(&outC->Context_PhysicalModel_1);
  /* _L4=(Robot::Driver#1)/ */ Driver_init_Robot(&outC->Context_Driver_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void IndividualRobotControl_reset_Robot(outC_IndividualRobotControl_Robot *outC)
{
  /* _L6=(Robot::PhysicalModel#1)/ */
  PhysicalModel_reset_Robot(&outC->Context_PhysicalModel_1);
  /* _L4=(Robot::Driver#1)/ */ Driver_reset_Robot(&outC->Context_Driver_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IndividualRobotControl_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

