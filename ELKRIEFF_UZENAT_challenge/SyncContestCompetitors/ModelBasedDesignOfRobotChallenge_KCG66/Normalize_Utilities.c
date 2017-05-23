/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Normalize_Utilities.h"

/* Utilities::Normalize/ */
void Normalize_Utilities(
  /* angle/ */
  kcg_float64 angle,
  outC_Normalize_Utilities *outC)
{
  outC->_L11 = kcg_lit_float64(180.);
  outC->_L1 = angle;
  outC->_L10 = outC->_L1 + outC->_L11;
  outC->_L3 = kcg_lit_float64(360.);
  outC->_L2 = outC->_L10 / outC->_L3;
  /* _L5=(math::RoundFloor#1)/ */
  RoundFloor_math_float64(outC->_L2, &outC->Context_RoundFloor_1);
  outC->_L5 = outC->Context_RoundFloor_1.RF_Output_float64;
  outC->_L9 = /* _L9= */(kcg_float64) outC->_L5;
  outC->_L7 = kcg_lit_float64(360.);
  outC->_L6 = outC->_L9 * outC->_L7;
  outC->_L8 = outC->_L1 - outC->_L6;
  outC->normal = outC->_L8;
}

#ifndef KCG_USER_DEFINED_INIT
void Normalize_init_Utilities(outC_Normalize_Utilities *outC)
{
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->normal = kcg_lit_float64(0.0);
  /* _L5=(math::RoundFloor#1)/ */
  RoundFloor_init_math_float64(&outC->Context_RoundFloor_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Normalize_reset_Utilities(outC_Normalize_Utilities *outC)
{
  /* _L5=(math::RoundFloor#1)/ */
  RoundFloor_reset_math_float64(&outC->Context_RoundFloor_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Normalize_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

