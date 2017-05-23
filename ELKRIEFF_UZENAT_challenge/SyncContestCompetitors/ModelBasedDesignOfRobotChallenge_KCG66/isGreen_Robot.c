/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isGreen_Robot.h"

/* Robot::isGreen/ */
void isGreen_Robot(/* color/ */ colorTy *color, outC_isGreen_Robot *outC)
{
  kcg_uint8 noname;
  kcg_uint8 _1_noname;
  kcg_uint8 _2_noname;

  kcg_copy_colorTy(&outC->_L9, (colorTy *) &GREEN);
  kcg_copy_colorTy(&outC->_L1, color);
  outC->_L8 = kcg_comp_colorTy(&outC->_L1, &outC->_L9);
  outC->_L4 = outC->_L1.blue;
  _2_noname = outC->_L4;
  outC->_L5 = outC->_L1.green;
  _1_noname = outC->_L5;
  outC->_L6 = outC->_L1.red;
  noname = outC->_L6;
  outC->is_green = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void isGreen_init_Robot(outC_isGreen_Robot *outC)
{
  outC->_L9.red = kcg_lit_uint8(0);
  outC->_L9.green = kcg_lit_uint8(0);
  outC->_L9.blue = kcg_lit_uint8(0);
  outC->_L8 = kcg_true;
  outC->_L4 = kcg_lit_uint8(0);
  outC->_L5 = kcg_lit_uint8(0);
  outC->_L6 = kcg_lit_uint8(0);
  outC->_L1.red = kcg_lit_uint8(0);
  outC->_L1.green = kcg_lit_uint8(0);
  outC->_L1.blue = kcg_lit_uint8(0);
  outC->is_green = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


void isGreen_reset_Robot(outC_isGreen_Robot *outC)
{
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isGreen_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

