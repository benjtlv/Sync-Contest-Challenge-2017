/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Integrator_Utilities.h"

/* Utilities::Integrator/ */
void Integrator_Utilities(
  /* x/ */
  kcg_float64 x,
  /* step/ */
  kcg_float64 step,
  /* init/ */
  kcg_float64 init,
  outC_Integrator_Utilities *outC)
{
  outC->_L20 = step * x / kcg_lit_float64(2.);
  outC->_L18 = step * x;
  outC->_L17 = init - step * x / kcg_lit_float64(2.);
  /* _L12= */
  if (outC->init) {
    outC->_L12 = outC->_L17;
  }
  else {
    outC->_L12 = outC->_L11;
  }
  outC->_L13 = outC->_L12 + outC->_L18;
  outC->s = outC->_L13;
  outC->_L16 = outC->s;
  outC->_L19 = outC->_L16 - outC->_L20;
  outC->result = outC->_L19;
  outC->_L11 = outC->s;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Integrator_init_Utilities(outC_Integrator_Utilities *outC)
{
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_float64(0.0);
  outC->s = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->result = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


void Integrator_reset_Utilities(outC_Integrator_Utilities *outC)
{
  outC->init = kcg_true;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Integrator_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

