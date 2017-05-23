/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeWheels_Robot.h"

/* Robot::ComputeWheels/ */
void ComputeWheels_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  /* speed/ */
  kcg_float64 speed,
  outC_ComputeWheels_Robot *outC)
{
  /* localWheels/ */
  wheelsTy_Robot localWheels_partial;
  /* localWheels/ */
  wheelsTy_Robot _1_localWheels_partial;
  /* localWheels/ */
  wheelsTy_Robot _2_localWheels_partial;
  /* localWheels/ */
  wheelsTy_Robot _3_localWheels_partial;

  outC->_L164 = speed;
  outC->localSpeed = outC->_L164;
  kcg_copy_colorTy(&outC->_L161, roadColor);
  /* _L159=(Robot::PIDControler#3)/ */
  PIDControler_Robot(&outC->_L161, &outC->Context_PIDControler_3);
  outC->_L159 = outC->Context_PIDControler_3.epsilon;
  outC->epsilon = outC->_L159;
  outC->IfBlock1_clock = outC->epsilon > kcg_lit_float64(0.);
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L19_then_IfBlock1 = outC->localSpeed;
    outC->_L21_then_IfBlock1 = kcg_lit_float64(0.5);
    outC->_L12_then_IfBlock1 = kcg_lit_float64(2.);
    outC->_L10_then_IfBlock1 = outC->epsilon;
    outC->_L18_then_IfBlock1 = outC->_L10_then_IfBlock1 / outC->_L12_then_IfBlock1;
    outC->_L20_then_IfBlock1 = outC->_L18_then_IfBlock1 + outC->_L21_then_IfBlock1;
    outC->_L9_then_IfBlock1 = kcg_lit_float64(1.);
    outC->_L13_then_IfBlock1 = outC->_L9_then_IfBlock1 - outC->_L20_then_IfBlock1;
    outC->_L17_then_IfBlock1 = outC->_L13_then_IfBlock1 * outC->_L19_then_IfBlock1;
    outC->_L11_then_IfBlock1 = outC->_L20_then_IfBlock1 * outC->_L19_then_IfBlock1;
    outC->_L15_then_IfBlock1.left = outC->_L17_then_IfBlock1;
    outC->_L15_then_IfBlock1.right = outC->_L11_then_IfBlock1;
    kcg_copy_wheelsTy_Robot(&localWheels_partial, &outC->_L15_then_IfBlock1);
    kcg_copy_wheelsTy_Robot(&outC->localWheels, &localWheels_partial);
  }
  else {
    outC->else_clock_IfBlock1 = outC->epsilon < kcg_lit_float64(0.);
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L12_then_else_IfBlock1 = outC->localSpeed;
      outC->_L6_then_else_IfBlock1 = kcg_lit_float64(2.);
      outC->_L11_then_else_IfBlock1 = outC->epsilon;
      outC->_L18_then_else_IfBlock1 = - outC->_L11_then_else_IfBlock1;
      outC->_L9_then_else_IfBlock1 = outC->_L18_then_else_IfBlock1 /
        outC->_L6_then_else_IfBlock1;
      outC->_L17_then_else_IfBlock1 = kcg_lit_float64(0.5);
      outC->_L16_then_else_IfBlock1 = outC->_L17_then_else_IfBlock1 +
        outC->_L9_then_else_IfBlock1;
      outC->_L8_then_else_IfBlock1 = outC->_L16_then_else_IfBlock1 *
        outC->_L12_then_else_IfBlock1;
      outC->_L5_then_else_IfBlock1 = kcg_lit_float64(1.);
      outC->_L3_then_else_IfBlock1 = outC->_L5_then_else_IfBlock1 -
        outC->_L16_then_else_IfBlock1;
      outC->_L4_then_else_IfBlock1 = outC->_L3_then_else_IfBlock1 *
        outC->_L12_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.left = outC->_L8_then_else_IfBlock1;
      outC->_L10_then_else_IfBlock1.right = outC->_L4_then_else_IfBlock1;
      kcg_copy_wheelsTy_Robot(
        &_3_localWheels_partial,
        &outC->_L10_then_else_IfBlock1);
      kcg_copy_wheelsTy_Robot(&_1_localWheels_partial, &_3_localWheels_partial);
    }
    else {
      outC->_L4_else_else_IfBlock1 = outC->localSpeed;
      outC->_L6_else_else_IfBlock1 = kcg_lit_float64(0.5);
      outC->_L5_else_else_IfBlock1 = outC->_L6_else_else_IfBlock1 *
        outC->_L4_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1.left = outC->_L5_else_else_IfBlock1;
      outC->_L1_else_else_IfBlock1.right = outC->_L5_else_else_IfBlock1;
      kcg_copy_wheelsTy_Robot(&_2_localWheels_partial, &outC->_L1_else_else_IfBlock1);
      kcg_copy_wheelsTy_Robot(&_1_localWheels_partial, &_2_localWheels_partial);
    }
    kcg_copy_wheelsTy_Robot(&outC->localWheels, &_1_localWheels_partial);
  }
  kcg_copy_wheelsTy_Robot(&outC->_L163, &outC->localWheels);
  kcg_copy_wheelsTy_Robot(&outC->wheels, &outC->_L163);
}

#ifndef KCG_USER_DEFINED_INIT
void ComputeWheels_init_Robot(outC_ComputeWheels_Robot *outC)
{
  outC->_L164 = kcg_lit_float64(0.0);
  outC->_L163.left = kcg_lit_float64(0.0);
  outC->_L163.right = kcg_lit_float64(0.0);
  outC->_L161.red = kcg_lit_uint8(0);
  outC->_L161.green = kcg_lit_uint8(0);
  outC->_L161.blue = kcg_lit_uint8(0);
  outC->_L159 = kcg_lit_float64(0.0);
  outC->localWheels.left = kcg_lit_float64(0.0);
  outC->localWheels.right = kcg_lit_float64(0.0);
  outC->localSpeed = kcg_lit_float64(0.0);
  outC->epsilon = kcg_lit_float64(0.0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L18_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L17_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L16_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L12_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L11_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L3_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L4_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L6_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L8_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L9_then_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L10_then_else_IfBlock1.left = kcg_lit_float64(0.0);
  outC->_L10_then_else_IfBlock1.right = kcg_lit_float64(0.0);
  outC->_L6_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L5_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L4_else_else_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L1_else_else_IfBlock1.left = kcg_lit_float64(0.0);
  outC->_L1_else_else_IfBlock1.right = kcg_lit_float64(0.0);
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L17_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L15_then_IfBlock1.left = kcg_lit_float64(0.0);
  outC->_L15_then_IfBlock1.right = kcg_lit_float64(0.0);
  outC->_L13_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L12_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L11_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L10_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L9_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L18_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L19_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L20_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->_L21_then_IfBlock1 = kcg_lit_float64(0.0);
  outC->wheels.left = kcg_lit_float64(0.0);
  outC->wheels.right = kcg_lit_float64(0.0);
  /* _L159=(Robot::PIDControler#3)/ */
  PIDControler_init_Robot(&outC->Context_PIDControler_3);
}
#endif /* KCG_USER_DEFINED_INIT */


void ComputeWheels_reset_Robot(outC_ComputeWheels_Robot *outC)
{
  /* _L159=(Robot::PIDControler#3)/ */
  PIDControler_reset_Robot(&outC->Context_PIDControler_3);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ComputeWheels_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

