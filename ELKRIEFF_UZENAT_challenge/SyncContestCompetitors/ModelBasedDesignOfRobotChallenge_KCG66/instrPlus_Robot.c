/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "instrPlus_Robot.h"

/* Robot::instrPlus/ */
void instrPlus_Robot(
  /* color/ */
  colorTy *color,
  /* index/ */
  kcg_int32 index,
  /* finTurn/ */
  kcg_bool finTurn,
  outC_instrPlus_Robot *outC)
{
  kcg_copy_colorTy(&outC->_L11, color);
  /* _L30=(Robot::isGreen#1)/ */
  isGreen_Robot(&outC->_L11, &outC->Context_isGreen_1);
  outC->_L30 = outC->Context_isGreen_1.is_green;
  /* _L46= */
  if (outC->init) {
    outC->_L46 = kcg_true;
  }
  else {
    outC->_L46 = outC->_L38;
  }
  outC->cond = outC->_L46;
  outC->_L47 = outC->cond;
  outC->_L36 = outC->_L30 & outC->_L47;
  outC->_L50 = finTurn;
  outC->_L51 = outC->_L50 | outC->_L36;
  outC->_L12 = index;
  /* _L45=(Robot::addOne#2)/ */ addOne_Robot(outC->_L12, &outC->Context_addOne_2);
  outC->_L45 = outC->Context_addOne_2.newIndex;
  /* _L44= */
  if (outC->_L51) {
    outC->_L44 = outC->_L45;
  }
  else {
    outC->_L44 = outC->_L12;
  }
  outC->_L42 = kcg_false;
  outC->_L40 = kcg_true;
  /* _L39= */
  if (outC->_L36) {
    outC->_L39 = outC->_L42;
  }
  else {
    outC->_L39 = outC->_L47;
  }
  outC->_L35 = !outC->_L30;
  /* _L38= */
  if (outC->_L35) {
    outC->_L38 = outC->_L40;
  }
  else {
    outC->_L38 = outC->_L39;
  }
  /* _L15= */
  if (outC->_L35) {
    outC->_L15 = outC->_L12;
  }
  else {
    outC->_L15 = outC->_L44;
  }
  outC->newIndex = outC->_L15;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void instrPlus_init_Robot(outC_instrPlus_Robot *outC)
{
  outC->_L30 = kcg_true;
  outC->_L51 = kcg_true;
  outC->_L50 = kcg_true;
  outC->_L44 = kcg_lit_int32(0);
  outC->_L47 = kcg_true;
  outC->_L46 = kcg_true;
  outC->_L45 = kcg_lit_int32(0);
  outC->_L42 = kcg_true;
  outC->_L40 = kcg_true;
  outC->_L39 = kcg_true;
  outC->_L36 = kcg_true;
  outC->_L35 = kcg_true;
  outC->_L15 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11.red = kcg_lit_uint8(0);
  outC->_L11.green = kcg_lit_uint8(0);
  outC->_L11.blue = kcg_lit_uint8(0);
  outC->cond = kcg_true;
  outC->_L38 = kcg_true;
  outC->init = kcg_true;
  outC->newIndex = kcg_lit_int32(0);
  /* _L45=(Robot::addOne#2)/ */ addOne_init_Robot(&outC->Context_addOne_2);
  /* _L30=(Robot::isGreen#1)/ */ isGreen_init_Robot(&outC->Context_isGreen_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void instrPlus_reset_Robot(outC_instrPlus_Robot *outC)
{
  outC->init = kcg_true;
  /* _L45=(Robot::addOne#2)/ */ addOne_reset_Robot(&outC->Context_addOne_2);
  /* _L30=(Robot::isGreen#1)/ */ isGreen_reset_Robot(&outC->Context_isGreen_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** instrPlus_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

