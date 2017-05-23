/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "undressSensorTy_Robot.h"

/* Robot::undressSensorTy/ */
void undressSensorTy_Robot(
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_undressSensorTy_Robot *outC)
{
  kcg_copy_sensorsTy(&outC->_L1, SensorsData);
  outC->_L2 = outC->_L1.sonar;
  outC->sonar = outC->_L2;
  kcg_copy_colorTy(&outC->_L3, &outC->_L1.frontColor);
  kcg_copy_colorTy(&outC->frontColor, &outC->_L3);
  kcg_copy_colorTy(&outC->_L4, &outC->_L1.roadColor);
  kcg_copy_colorTy(&outC->roadColor, &outC->_L4);
}

#ifndef KCG_USER_DEFINED_INIT
void undressSensorTy_init_Robot(outC_undressSensorTy_Robot *outC)
{
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3.red = kcg_lit_uint8(0);
  outC->_L3.green = kcg_lit_uint8(0);
  outC->_L3.blue = kcg_lit_uint8(0);
  outC->_L4.red = kcg_lit_uint8(0);
  outC->_L4.green = kcg_lit_uint8(0);
  outC->_L4.blue = kcg_lit_uint8(0);
  outC->_L1.roadColor.red = kcg_lit_uint8(0);
  outC->_L1.roadColor.green = kcg_lit_uint8(0);
  outC->_L1.roadColor.blue = kcg_lit_uint8(0);
  outC->_L1.frontColor.red = kcg_lit_uint8(0);
  outC->_L1.frontColor.green = kcg_lit_uint8(0);
  outC->_L1.frontColor.blue = kcg_lit_uint8(0);
  outC->_L1.sonar = kcg_lit_int32(0);
  outC->sonar = kcg_lit_int32(0);
  outC->frontColor.red = kcg_lit_uint8(0);
  outC->frontColor.green = kcg_lit_uint8(0);
  outC->frontColor.blue = kcg_lit_uint8(0);
  outC->roadColor.red = kcg_lit_uint8(0);
  outC->roadColor.green = kcg_lit_uint8(0);
  outC->roadColor.blue = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void undressSensorTy_reset_Robot(outC_undressSensorTy_Robot *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** undressSensorTy_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

