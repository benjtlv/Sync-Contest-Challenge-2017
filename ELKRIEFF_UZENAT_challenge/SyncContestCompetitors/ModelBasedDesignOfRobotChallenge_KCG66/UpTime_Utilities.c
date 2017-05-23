/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UpTime_Utilities.h"

/* Utilities::UpTime/ */
void UpTime_Utilities(
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  outC_UpTime_Utilities *outC)
{
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  outC->_L1 = x;
  outC->A_Input_Abs_1_float64 = outC->_L1;
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
  outC->_L9 = kcg_lit_float64(0.);
  outC->_L8 = kcg_lit_float64(1.);
  outC->_L6 = kcg_lit_float64(1.);
  outC->_L4 = outC->A_Output_Abs_1_float64;
  outC->_L5 = outC->_L4 >= outC->_L6;
  /* _L7= */
  if (outC->_L5) {
    outC->_L7 = outC->_L8;
  }
  else {
    outC->_L7 = outC->_L9;
  }
  outC->_L2 = step;
  /* _L3=(Utilities::Integrator#1)/ */
  Integrator_Utilities(
    outC->_L7,
    outC->_L2,
    kcg_lit_float64(0.),
    &outC->Context_Integrator_1);
  outC->_L3 = outC->Context_Integrator_1.result;
  outC->t = outC->_L3;
}

#ifndef KCG_USER_DEFINED_INIT
void UpTime_init_Utilities(outC_UpTime_Utilities *outC)
{
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L1 = kcg_lit_float64(0.0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->t = kcg_lit_float64(0.0);
  /* _L3=(Utilities::Integrator#1)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void UpTime_reset_Utilities(outC_UpTime_Utilities *outC)
{
  /* _L3=(Utilities::Integrator#1)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Utilities::UpTime/
  @1: (math::Abs#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** UpTime_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

