/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "HypotR_mathext_float64.h"

/* mathext::HypotR/ */
void HypotR_mathext_float64(
  /* HypotR_I1/ */
  kcg_float64 HypotR_I1_float64,
  /* HypotR_I2/ */
  kcg_float64 HypotR_I2_float64,
  outC_HypotR_mathext_float64 *outC)
{
  outC->_L1_float64 = HypotR_I2_float64;
  outC->_L4_float64 = outC->_L1_float64 * outC->_L1_float64;
  outC->_L2_float64 = HypotR_I1_float64;
  outC->_L3_float64 = outC->_L2_float64 * outC->_L2_float64;
  outC->_L5_float64 = outC->_L3_float64 + outC->_L4_float64;
  outC->_L6_float64 = /* _L6=(mathext::SqrtR#4)/ */
    SqrtR64_mathext_mathextimpl(outC->_L5_float64);
  outC->HypotR_O_float64 = outC->_L6_float64;
}

#ifndef KCG_USER_DEFINED_INIT
void HypotR_init_mathext_float64(outC_HypotR_mathext_float64 *outC)
{
  outC->_L6_float64 = kcg_lit_float64(0.0);
  outC->_L5_float64 = kcg_lit_float64(0.0);
  outC->_L4_float64 = kcg_lit_float64(0.0);
  outC->_L3_float64 = kcg_lit_float64(0.0);
  outC->_L2_float64 = kcg_lit_float64(0.0);
  outC->_L1_float64 = kcg_lit_float64(0.0);
  outC->HypotR_O_float64 = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void HypotR_reset_mathext_float64(outC_HypotR_mathext_float64 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** HypotR_mathext_float64.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

