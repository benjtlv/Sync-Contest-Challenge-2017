/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addOne_Robot.h"

/* Robot::addOne/ */
void addOne_Robot(/* index/ */ kcg_int32 index, outC_addOne_Robot *outC)
{
  outC->_L3 = index;
  outC->_L2 = kcg_lit_int32(1);
  outC->_L1 = outC->_L2 + outC->_L3;
  outC->newIndex = outC->_L1;
}

#ifndef KCG_USER_DEFINED_INIT
void addOne_init_Robot(outC_addOne_Robot *outC)
{
  outC->_L3 = kcg_lit_int32(0);
  outC->_L1 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->newIndex = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void addOne_reset_Robot(outC_addOne_Robot *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** addOne_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

