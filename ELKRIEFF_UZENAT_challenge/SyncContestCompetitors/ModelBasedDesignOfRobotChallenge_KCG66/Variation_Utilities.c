/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Variation_Utilities.h"

/* Utilities::Variation/ */
void Variation_Utilities(
  /* enabled/ */
  kcg_bool enabled,
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  outC_Variation_Utilities *outC)
{
  kcg_float64 tmp;
  kcg_float64 op_call;

  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  outC->_L8 = step;
  /* _L6= */
  if (outC->init) {
    outC->_L6 = kcg_lit_float64(0.);
  }
  else {
    outC->_L6 = outC->_L7;
  }
  outC->_L7 = x;
  outC->_L3 = outC->_L7 - outC->_L6;
  /* _L11=(Utilities::Normalize#1)/ */
  Normalize_Utilities(outC->_L3, &outC->Context_Normalize_1);
  outC->_L11 = outC->Context_Normalize_1.normal;
  outC->_L5 = outC->_L11 / outC->_L8;
  outC->A_Input_Abs_1_float64 = outC->_L5;
  outC->_L5_Abs_1_float64 = outC->A_Input_Abs_1_float64;
  outC->_L3_Abs_1_float64 = - outC->_L5_Abs_1_float64;
  outC->_L1_Abs_1_float64 = outC->_L8_Abs_1_float64 <= outC->_L5_Abs_1_float64;
  /* @1/_L2= */
  if (outC->_L1_Abs_1_float64) {
    outC->_L2_Abs_1_float64 = outC->_L5_Abs_1_float64;
  }
  else {
    outC->_L2_Abs_1_float64 = outC->_L3_Abs_1_float64;
  }
  outC->A_Output_Abs_1_float64 = outC->_L2_Abs_1_float64;
  outC->_L10 = enabled;
  outC->every = outC->_L10;
  outC->_L2 = outC->A_Output_Abs_1_float64;
  outC->_L9 = kcg_lit_float64(0.);
  if (outC->every) {
    /* _L1=(Utilities::Integrator#1)/ */
    Integrator_Utilities(
      outC->_L2,
      outC->_L8,
      outC->_L9,
      &outC->Context_Integrator_1);
    op_call = outC->Context_Integrator_1.result;
    outC->_L1 = op_call;
  }
  else {
    /* _L1= */
    if (outC->init) {
      tmp = kcg_lit_float64(0.);
    }
    else {
      tmp = outC->_L1;
    }
    outC->_L1 = tmp;
  }
  outC->varX = outC->_L1;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Variation_init_Utilities(outC_Variation_Utilities *outC)
{
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->every = kcg_true;
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->varX = kcg_lit_float64(0.0);
  /* _L1=(Utilities::Integrator#1)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_1);
  /* _L11=(Utilities::Normalize#1)/ */
  Normalize_init_Utilities(&outC->Context_Normalize_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Variation_reset_Utilities(outC_Variation_Utilities *outC)
{
  outC->init = kcg_true;
  /* _L1=(Utilities::Integrator#1)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_1);
  /* _L11=(Utilities::Normalize#1)/ */
  Normalize_reset_Utilities(&outC->Context_Normalize_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Utilities::Variation/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Variation_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

