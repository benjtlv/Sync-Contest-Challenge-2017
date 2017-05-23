/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RotMatrix_Utilities.h"

/* Utilities::RotMatrix/ */
void RotMatrix_Utilities(
  /* alpha/ */
  kcg_float64 alpha,
  outC_RotMatrix_Utilities *outC)
{
  array_float64_2 tmp;
  array_float64_2 tmp1;

  outC->_L17 = PI / kcg_lit_float64(180.);
  outC->_L18 = alpha;
  outC->_L16 = outC->_L18 * outC->_L17;
  outC->Input1_SinCosR_2_float64 = outC->_L16;
  outC->_L1_SinCosR_2_float64 = outC->Input1_SinCosR_2_float64;
  outC->_L3_SinCosR_2_float64 = /* @1/_L3=(mathext::CosR#1)/ */
    CosR64_mathext_mathextimpl(outC->_L1_SinCosR_2_float64);
  outC->Output2_SinCosR_2_float64 = outC->_L3_SinCosR_2_float64;
  outC->_L2_SinCosR_2_float64 = /* @1/_L2=(mathext::SinR#1)/ */
    SinR64_mathext_mathextimpl(outC->_L1_SinCosR_2_float64);
  outC->Output1_SinCosR_2_float64 = outC->_L2_SinCosR_2_float64;
  outC->_L15 = outC->Output2_SinCosR_2_float64;
  outC->co = outC->_L15;
  outC->_L14 = outC->Output1_SinCosR_2_float64;
  outC->si = outC->_L14;
  tmp[0] = outC->co;
  tmp[1] = - outC->si;
  tmp1[0] = - outC->si;
  tmp1[1] = outC->co;
  kcg_copy_array_float64_2(&outC->_L19[0], &tmp);
  kcg_copy_array_float64_2(&outC->_L19[1], &tmp1);
  kcg_copy_array_float64_2_2(&outC->res, &outC->_L19);
}

#ifndef KCG_USER_DEFINED_INIT
void RotMatrix_init_Utilities(outC_RotMatrix_Utilities *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx1 = 0; idx1 < 2; idx1++) {
    for (idx = 0; idx < 2; idx++) {
      outC->_L19[idx1][idx] = kcg_lit_float64(0.0);
    }
  }
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->co = kcg_lit_float64(0.0);
  outC->si = kcg_lit_float64(0.0);
  outC->_L1_SinCosR_2_float64 = kcg_lit_float64(0.0);
  outC->_L2_SinCosR_2_float64 = kcg_lit_float64(0.0);
  outC->_L3_SinCosR_2_float64 = kcg_lit_float64(0.0);
  outC->Input1_SinCosR_2_float64 = kcg_lit_float64(0.0);
  outC->Output1_SinCosR_2_float64 = kcg_lit_float64(0.0);
  outC->Output2_SinCosR_2_float64 = kcg_lit_float64(0.0);
  for (idx3 = 0; idx3 < 2; idx3++) {
    for (idx2 = 0; idx2 < 2; idx2++) {
      outC->res[idx3][idx2] = kcg_lit_float64(0.0);
    }
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RotMatrix_reset_Utilities(outC_RotMatrix_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Utilities::RotMatrix/
  @1: (mathext::SinCosR#2)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RotMatrix_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

