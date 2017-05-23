/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "VectAdd_vect_float64_2.h"

/* vect::VectAdd/ */
void VectAdd_vect_float64_2(
  /* U/ */
  array_float64_2 *U_float64_2,
  /* V/ */
  array_float64_2 *V_float64_2,
  outC_VectAdd_vect_float64_2 *outC)
{
  kcg_size idx;

  kcg_copy_array_float64_2(&outC->_L2_float64_2, U_float64_2);
  kcg_copy_array_float64_2(&outC->_L3_float64_2, V_float64_2);
  /* _L1= */
  for (idx = 0; idx < 2; idx++) {
    outC->_L1_float64_2[idx] = outC->_L2_float64_2[idx] + outC->_L3_float64_2[idx];
  }
  kcg_copy_array_float64_2(&outC->W_float64_2, &outC->_L1_float64_2);
}

#ifndef KCG_USER_DEFINED_INIT
void VectAdd_init_vect_float64_2(outC_VectAdd_vect_float64_2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 2; idx++) {
    outC->_L3_float64_2[idx] = kcg_lit_float64(0.0);
  }
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L2_float64_2[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 2; idx2++) {
    outC->_L1_float64_2[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 2; idx3++) {
    outC->W_float64_2[idx3] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void VectAdd_reset_vect_float64_2(outC_VectAdd_vect_float64_2 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** VectAdd_vect_float64_2.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

