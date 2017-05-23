/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AngleDist_Utilities.h"

/* Utilities::AngleDist/ */
void AngleDist_Utilities(
  /* from/ */
  positionTy *from,
  /* to/ */
  positionTy *to,
  outC_AngleDist_Utilities *outC)
{
  outC->_L16 = kcg_lit_float64(180.) / PI;
  kcg_copy_positionTy(&outC->_L1, from);
  outC->_L4 = outC->_L1.y;
  kcg_copy_positionTy(&outC->_L2, to);
  outC->_L8 = outC->_L2.y;
  outC->_L12 = outC->_L8 - outC->_L4;
  outC->_L3 = outC->_L1.x;
  outC->_L7 = outC->_L2.x;
  outC->_L11 = outC->_L7 - outC->_L3;
  outC->_L14 = /* _L14=(mathext::Atan2R#1)/ */
    Atan2R64_mathext_mathextimpl(outC->_L12, outC->_L11);
  outC->_L15 = outC->_L14 * outC->_L16;
  /* _L13=(mathext::HypotR#1)/ */
  HypotR_mathext_float64(outC->_L11, outC->_L12, &outC->Context_HypotR_1);
  outC->_L13 = outC->Context_HypotR_1.HypotR_O_float64;
  outC->dist = outC->_L13;
  outC->angle = outC->_L15;
}

#ifndef KCG_USER_DEFINED_INIT
void AngleDist_init_Utilities(outC_AngleDist_Utilities *outC)
{
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L2.x = kcg_lit_float64(0.0);
  outC->_L2.y = kcg_lit_float64(0.0);
  outC->_L1.x = kcg_lit_float64(0.0);
  outC->_L1.y = kcg_lit_float64(0.0);
  outC->dist = kcg_lit_float64(0.0);
  outC->angle = kcg_lit_float64(0.0);
  /* _L13=(mathext::HypotR#1)/ */
  HypotR_init_mathext_float64(&outC->Context_HypotR_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AngleDist_reset_Utilities(outC_AngleDist_Utilities *outC)
{
  /* _L13=(mathext::HypotR#1)/ */
  HypotR_reset_mathext_float64(&outC->Context_HypotR_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AngleDist_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

