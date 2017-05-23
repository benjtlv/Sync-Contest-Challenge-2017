/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RoundFloor_math_float64.h"

/* math::RoundFloor/ */
void RoundFloor_math_float64(
  /* RF_Input/ */
  kcg_float64 RF_Input_float64,
  outC_RoundFloor_math_float64 *outC)
{
  outC->_L1_float64 = RF_Input_float64;
  outC->_L33_float64 = /* _L33= */(kcg_int32) outC->_L1_float64;
  outC->_L41_float64 = /* _L41= */(kcg_float64) outC->_L33_float64;
  outC->_L43_float64 = outC->_L41_float64 == outC->_L1_float64;
  outC->_L31_float64 = kcg_lit_float64(1.0);
  outC->_L30_float64 = outC->_L1_float64 - outC->_L31_float64;
  outC->_L32_float64 = /* _L32= */(kcg_int32) outC->_L30_float64;
  /* _L38= */
  if (outC->_L43_float64) {
    outC->_L38_float64 = outC->_L33_float64;
  }
  else {
    outC->_L38_float64 = outC->_L32_float64;
  }
  outC->_L25_float64 = kcg_lit_float64(0.0);
  outC->_L24_float64 = outC->_L1_float64 >= outC->_L25_float64;
  /* _L26= */
  if (outC->_L24_float64) {
    outC->_L26_float64 = outC->_L33_float64;
  }
  else {
    outC->_L26_float64 = outC->_L38_float64;
  }
  outC->RF_Output_float64 = outC->_L26_float64;
}

#ifndef KCG_USER_DEFINED_INIT
void RoundFloor_init_math_float64(outC_RoundFloor_math_float64 *outC)
{
  outC->_L43_float64 = kcg_true;
  outC->_L41_float64 = kcg_lit_float64(0.0);
  outC->_L38_float64 = kcg_lit_int32(0);
  outC->_L33_float64 = kcg_lit_int32(0);
  outC->_L32_float64 = kcg_lit_int32(0);
  outC->_L31_float64 = kcg_lit_float64(0.0);
  outC->_L30_float64 = kcg_lit_float64(0.0);
  outC->_L26_float64 = kcg_lit_int32(0);
  outC->_L25_float64 = kcg_lit_float64(0.0);
  outC->_L24_float64 = kcg_true;
  outC->_L1_float64 = kcg_lit_float64(0.0);
  outC->RF_Output_float64 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void RoundFloor_reset_math_float64(outC_RoundFloor_math_float64 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** RoundFloor_math_float64.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

