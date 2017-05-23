/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bound_Utilities.h"

/* Utilities::Bound/ */
void Bound_Utilities(
  /* x/ */
  kcg_float64 x,
  /* ceiling/ */
  kcg_float64 ceiling,
  outC_Bound_Utilities *outC)
{
  outC->_L6 = - ceiling;
  outC->I2_Max_1_float64 = outC->_L6;
  outC->_L2_Max_1_float64 = outC->I2_Max_1_float64;
  outC->_L2 = ceiling;
  outC->I2_Min_1_float64 = outC->_L2;
  outC->_L22_Min_1_float64 = outC->I2_Min_1_float64;
  outC->_L1 = x;
  outC->I1_Min_1_float64 = outC->_L1;
  outC->_L21_Min_1_float64 = outC->I1_Min_1_float64;
  outC->_L25_Min_1_float64 = outC->_L21_Min_1_float64 <= outC->_L22_Min_1_float64;
  /* @2/_L24= */
  if (outC->_L25_Min_1_float64) {
    outC->_L24_Min_1_float64 = outC->_L21_Min_1_float64;
  }
  else {
    outC->_L24_Min_1_float64 = outC->_L22_Min_1_float64;
  }
  outC->Mi_Output_Min_1_float64 = outC->_L24_Min_1_float64;
  outC->_L4 = outC->Mi_Output_Min_1_float64;
  outC->I1_Max_1_float64 = outC->_L4;
  outC->_L1_Max_1_float64 = outC->I1_Max_1_float64;
  outC->_L3_Max_1_float64 = outC->_L1_Max_1_float64 >= outC->_L2_Max_1_float64;
  /* @1/_L4= */
  if (outC->_L3_Max_1_float64) {
    outC->_L4_Max_1_float64 = outC->_L1_Max_1_float64;
  }
  else {
    outC->_L4_Max_1_float64 = outC->_L2_Max_1_float64;
  }
  outC->Ma_Output_Max_1_float64 = outC->_L4_Max_1_float64;
  outC->_L3 = outC->Ma_Output_Max_1_float64;
  outC->xb = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void Bound_init_Utilities(outC_Bound_Utilities *outC)
{
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L21_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L22_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L24_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L25_Min_1_float64 = kcg_true;
  outC->I1_Min_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Min_1_float64 = kcg_lit_float64(0.0);
  outC->Mi_Output_Min_1_float64 = kcg_lit_float64(0.0);
  outC->_L1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Max_1_float64 = kcg_true;
  outC->_L4_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I1_Max_1_float64 = kcg_lit_float64(0.0);
  outC->I2_Max_1_float64 = kcg_lit_float64(0.0);
  outC->Ma_Output_Max_1_float64 = kcg_lit_float64(0.0);
  outC->xb = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Bound_reset_Utilities(outC_Bound_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Utilities::Bound/
  @2: (math::Min#1)
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Bound_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

