/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "actionArrayOnWheels_Robot.h"

/* Robot::actionArrayOnWheels/ */
void actionArrayOnWheels_Robot(
  /* ItiElemArrObj/ */
  itiElemArr_Robot *ItiElemArrObj,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_actionArrayOnWheels_Robot *outC)
{
  outC->_L104 = kcg_lit_float64(100.);
  outC->_L102 = MAXWHEEL;
  outC->_L103 = outC->_L102 / outC->_L104;
  outC->_L98 = kcg_lit_float64(4.);
  outC->_L101 = outC->_L98 * outC->_L103;
  /* _L94= */
  if (outC->init) {
    outC->_L94 = kcg_false;
  }
  else {
    outC->_L94 = outC->_L93;
  }
  kcg_copy_itiElement_Robot(&outC->_L82, (itiElement_Robot *) &STOP);
  kcg_copy_sensorsTy(&outC->_L65, SensorsData);
  /* _L70=(Robot::undressSensorTy#1)/ */
  undressSensorTy_Robot(&outC->_L65, &outC->Context_undressSensorTy_1);
  kcg_copy_colorTy(&outC->_L70, &outC->Context_undressSensorTy_1.roadColor);
  kcg_copy_colorTy(&outC->_L71, &outC->Context_undressSensorTy_1.frontColor);
  outC->_L72 = outC->Context_undressSensorTy_1.sonar;
  /* _L73= */
  if (outC->init) {
    outC->_L73 = kcg_lit_int32(0);
  }
  else {
    outC->_L73 = outC->_L78;
  }
  /* _L89=(Robot::instrPlus#2)/ */
  instrPlus_Robot(
    &outC->_L70,
    outC->_L73,
    outC->_L94,
    &outC->Context_instrPlus_2);
  outC->_L89 = outC->Context_instrPlus_2.newIndex;
  outC->index = outC->_L89;
  kcg_copy_itiElemArr_Robot(&outC->_L1, ItiElemArrObj);
  if ((kcg_lit_int32(0) <= outC->index) & (outC->index < kcg_lit_int32(50))) {
    kcg_copy_itiElement_Robot(&outC->_L79, &outC->_L1[outC->index]);
  }
  else {
    kcg_copy_itiElement_Robot(&outC->_L79, &outC->_L82);
  }
  /* _L68=(Robot::actionOnWheels#3)/ */
  actionOnWheels_Robot(
    &outC->_L79,
    &outC->_L70,
    &outC->_L71,
    outC->_L72,
    &outC->Context_actionOnWheels_3);
  outC->_L68 = outC->Context_actionOnWheels_3.speedL;
  outC->_L69 = outC->Context_actionOnWheels_3.speedR;
  outC->_L93 = outC->Context_actionOnWheels_3.finTurn;
  outC->_L100 = outC->_L101 * outC->_L69;
  outC->_L99 = outC->_L68 * outC->_L101;
  outC->_L78 = outC->index;
  outC->speedR = outC->_L100;
  outC->speedL = outC->_L99;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void actionArrayOnWheels_init_Robot(outC_actionArrayOnWheels_Robot *outC)
{
  kcg_size idx;

  outC->_L104 = kcg_lit_float64(0.0);
  outC->_L103 = kcg_lit_float64(0.0);
  outC->_L102 = kcg_lit_float64(0.0);
  outC->_L101 = kcg_lit_float64(0.0);
  outC->_L100 = kcg_lit_float64(0.0);
  outC->_L99 = kcg_lit_float64(0.0);
  outC->_L98 = kcg_lit_float64(0.0);
  outC->_L94 = kcg_true;
  outC->_L68 = kcg_lit_float64(0.0);
  outC->_L69 = kcg_lit_float64(0.0);
  outC->_L89 = kcg_lit_int32(0);
  outC->_L82.action = go_Robot;
  outC->_L82.param = kcg_lit_float64(0.0);
  outC->_L79.action = go_Robot;
  outC->_L79.param = kcg_lit_float64(0.0);
  outC->_L73 = kcg_lit_int32(0);
  outC->_L70.red = kcg_lit_uint8(0);
  outC->_L70.green = kcg_lit_uint8(0);
  outC->_L70.blue = kcg_lit_uint8(0);
  outC->_L71.red = kcg_lit_uint8(0);
  outC->_L71.green = kcg_lit_uint8(0);
  outC->_L71.blue = kcg_lit_uint8(0);
  outC->_L72 = kcg_lit_int32(0);
  outC->_L65.roadColor.red = kcg_lit_uint8(0);
  outC->_L65.roadColor.green = kcg_lit_uint8(0);
  outC->_L65.roadColor.blue = kcg_lit_uint8(0);
  outC->_L65.frontColor.red = kcg_lit_uint8(0);
  outC->_L65.frontColor.green = kcg_lit_uint8(0);
  outC->_L65.frontColor.blue = kcg_lit_uint8(0);
  outC->_L65.sonar = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L1[idx].action = go_Robot;
    outC->_L1[idx].param = kcg_lit_float64(0.0);
  }
  outC->index = kcg_lit_int32(0);
  outC->_L93 = kcg_true;
  outC->_L78 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->speedR = kcg_lit_float64(0.0);
  outC->speedL = kcg_lit_float64(0.0);
  /* _L68=(Robot::actionOnWheels#3)/ */
  actionOnWheels_init_Robot(&outC->Context_actionOnWheels_3);
  /* _L89=(Robot::instrPlus#2)/ */
  instrPlus_init_Robot(&outC->Context_instrPlus_2);
  /* _L70=(Robot::undressSensorTy#1)/ */
  undressSensorTy_init_Robot(&outC->Context_undressSensorTy_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void actionArrayOnWheels_reset_Robot(outC_actionArrayOnWheels_Robot *outC)
{
  outC->init = kcg_true;
  /* _L68=(Robot::actionOnWheels#3)/ */
  actionOnWheels_reset_Robot(&outC->Context_actionOnWheels_3);
  /* _L89=(Robot::instrPlus#2)/ */
  instrPlus_reset_Robot(&outC->Context_instrPlus_2);
  /* _L70=(Robot::undressSensorTy#1)/ */
  undressSensorTy_reset_Robot(&outC->Context_undressSensorTy_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** actionArrayOnWheels_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

