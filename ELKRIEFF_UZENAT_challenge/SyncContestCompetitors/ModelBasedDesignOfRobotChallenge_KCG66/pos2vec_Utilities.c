/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "pos2vec_Utilities.h"

/* Utilities::pos2vec/ */
void pos2vec_Utilities(/* pos/ */ positionTy *pos, outC_pos2vec_Utilities *outC)
{
  kcg_copy_positionTy(&outC->_L1, pos);
  outC->_L2 = outC->_L1.x;
  outC->_L3 = outC->_L1.y;
  outC->_L6[0] = outC->_L2;
  outC->_L6[1] = outC->_L3;
  kcg_copy_array_float64_2(&outC->vec, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void pos2vec_init_Utilities(outC_pos2vec_Utilities *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx = 0; idx < 2; idx++) {
    outC->_L6[idx] = kcg_lit_float64(0.0);
  }
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L1.x = kcg_lit_float64(0.0);
  outC->_L1.y = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->vec[idx1] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void pos2vec_reset_Utilities(outC_pos2vec_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** pos2vec_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

