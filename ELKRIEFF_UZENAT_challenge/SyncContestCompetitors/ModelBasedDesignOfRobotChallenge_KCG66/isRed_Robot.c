/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isRed_Robot.h"

/* Robot::isRed/ */
void isRed_Robot(/* color/ */ colorTy *color, outC_isRed_Robot *outC)
{
  kcg_uint8 noname;
  kcg_uint8 _1_noname;
  kcg_uint8 _2_noname;

  kcg_copy_colorTy(&outC->_L6, color);
  outC->_L4 = outC->_L6.green;
  _2_noname = outC->_L4;
  outC->_L3 = outC->_L6.red;
  outC->_L5 = outC->_L6.blue;
  kcg_copy_colorTy(&outC->_L2, (colorTy *) &RED);
  outC->_L1 = kcg_comp_colorTy(&outC->_L6, &outC->_L2);
  outC->is_red = outC->_L1;
  _1_noname = outC->_L3;
  noname = outC->_L5;
}

#ifndef KCG_USER_DEFINED_INIT
void isRed_init_Robot(outC_isRed_Robot *outC)
{
  outC->_L1 = kcg_true;
  outC->_L2.red = kcg_lit_uint8(0);
  outC->_L2.green = kcg_lit_uint8(0);
  outC->_L2.blue = kcg_lit_uint8(0);
  outC->_L5 = kcg_lit_uint8(0);
  outC->_L4 = kcg_lit_uint8(0);
  outC->_L3 = kcg_lit_uint8(0);
  outC->_L6.red = kcg_lit_uint8(0);
  outC->_L6.green = kcg_lit_uint8(0);
  outC->_L6.blue = kcg_lit_uint8(0);
  outC->is_red = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void isRed_reset_Robot(outC_isRed_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isRed_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

