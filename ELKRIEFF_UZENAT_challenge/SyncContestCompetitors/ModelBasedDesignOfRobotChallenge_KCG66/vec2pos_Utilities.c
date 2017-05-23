/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "vec2pos_Utilities.h"

/* Utilities::vec2pos/ */
void vec2pos_Utilities(
  /* vec/ */
  array_float64_2 *vec,
  outC_vec2pos_Utilities *outC)
{
  outC->_L4 = (*vec)[1];
  outC->_L3 = (*vec)[0];
  outC->_L2.x = outC->_L3;
  outC->_L2.y = outC->_L4;
  kcg_copy_positionTy(&outC->pos, &outC->_L2);
}

#ifndef KCG_USER_DEFINED_INIT
void vec2pos_init_Utilities(outC_vec2pos_Utilities *outC)
{
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2.x = kcg_lit_float64(0.0);
  outC->_L2.y = kcg_lit_float64(0.0);
  outC->pos.x = kcg_lit_float64(0.0);
  outC->pos.y = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void vec2pos_reset_Utilities(outC_vec2pos_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** vec2pos_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

