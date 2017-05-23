/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "undressItElem_Robot.h"

/* Robot::undressItElem/ */
void undressItElem_Robot(
  /* itElemObj/ */
  itiElement_Robot *itElemObj,
  outC_undressItElem_Robot *outC)
{
  kcg_copy_itiElement_Robot(&outC->_L1, itElemObj);
  outC->_L7 = outC->_L1.param;
  outC->value = outC->_L7;
  outC->_L8 = outC->_L1.action;
  outC->action = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void undressItElem_init_Robot(outC_undressItElem_Robot *outC)
{
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = go_Robot;
  outC->_L1.action = go_Robot;
  outC->_L1.param = kcg_lit_float64(0.0);
  outC->value = kcg_lit_float64(0.0);
  outC->action = go_Robot;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void undressItElem_reset_Robot(outC_undressItElem_Robot *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** undressItElem_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

