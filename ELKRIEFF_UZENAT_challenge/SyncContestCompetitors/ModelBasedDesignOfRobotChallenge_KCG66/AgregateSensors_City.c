/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AgregateSensors_City.h"

/* City::AgregateSensors/ */
void AgregateSensors_City(
  /* roadColor/ */
  colorTy *roadColor,
  /* lightsColor/ */
  colorTy *lightsColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_AgregateSensors_City *outC)
{
  kcg_copy_colorTy(&outC->_L1, roadColor);
  kcg_copy_colorTy(&outC->_L2, lightsColor);
  outC->_L3 = sonar;
  kcg_copy_colorTy(&outC->_L5.roadColor, &outC->_L1);
  kcg_copy_colorTy(&outC->_L5.frontColor, &outC->_L2);
  outC->_L5.sonar = outC->_L3;
  kcg_copy_sensorsTy(&outC->SensorsData, &outC->_L5);
}

#ifndef KCG_USER_DEFINED_INIT
void AgregateSensors_init_City(outC_AgregateSensors_City *outC)
{
  outC->_L5.roadColor.red = kcg_lit_uint8(0);
  outC->_L5.roadColor.green = kcg_lit_uint8(0);
  outC->_L5.roadColor.blue = kcg_lit_uint8(0);
  outC->_L5.frontColor.red = kcg_lit_uint8(0);
  outC->_L5.frontColor.green = kcg_lit_uint8(0);
  outC->_L5.frontColor.blue = kcg_lit_uint8(0);
  outC->_L5.sonar = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2.red = kcg_lit_uint8(0);
  outC->_L2.green = kcg_lit_uint8(0);
  outC->_L2.blue = kcg_lit_uint8(0);
  outC->_L1.red = kcg_lit_uint8(0);
  outC->_L1.green = kcg_lit_uint8(0);
  outC->_L1.blue = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.red = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.green = kcg_lit_uint8(0);
  outC->SensorsData.roadColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.red = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.green = kcg_lit_uint8(0);
  outC->SensorsData.frontColor.blue = kcg_lit_uint8(0);
  outC->SensorsData.sonar = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AgregateSensors_reset_City(outC_AgregateSensors_City *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AgregateSensors_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

