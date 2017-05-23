/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "count_down_digital_int32.h"

/* digital::count_down/ */
void count_down_digital_int32(
  /* Reset/ */
  kcg_bool Reset_int32,
  /* N/ */
  kcg_int32 N_int32,
  outC_count_down_digital_int32 *outC)
{
  outC->_L13_int32 = outC->_L4_int32;
  outC->_L2_int32 = N_int32;
  /* _L8= */
  if (outC->init) {
    outC->_L8_int32 = outC->_L2_int32;
  }
  else {
    outC->_L8_int32 = outC->_L13_int32;
  }
  outC->_L7_int32 = kcg_lit_int32(1);
  outC->_L1_int32 = Reset_int32;
  /* _L3= */
  if (outC->_L1_int32) {
    outC->_L3_int32 = outC->_L2_int32;
  }
  else {
    outC->_L3_int32 = outC->_L8_int32;
  }
  outC->_L4_int32 = outC->_L3_int32 - outC->_L7_int32;
  outC->cpt_int32 = outC->_L3_int32;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void count_down_init_digital_int32(outC_count_down_digital_int32 *outC)
{
  outC->_L13_int32 = kcg_lit_int32(0);
  outC->_L8_int32 = kcg_lit_int32(0);
  outC->_L7_int32 = kcg_lit_int32(0);
  outC->_L3_int32 = kcg_lit_int32(0);
  outC->_L2_int32 = kcg_lit_int32(0);
  outC->_L1_int32 = kcg_true;
  outC->_L4_int32 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->cpt_int32 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void count_down_reset_digital_int32(outC_count_down_digital_int32 *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** count_down_digital_int32.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

