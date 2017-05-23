/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-18T22:37:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ControleurPID_Robot.h"

/* Robot::ControleurPID/ */
void ControleurPID_Robot(
  /* _L13/, _L9/, roadColor/ */
  colorTy *roadColor,
  /* _L135/, _L137/, _L138/, _L14/, localSpeed/, speed/ */
  kcg_float64 speed,
  outC_ControleurPID_Robot *outC)
{
  colorTy tmp;
  /* _L113/, _L158/ */
  kcg_float64 _L113;
  /* _L110/ */
  kcg_float64 _L110;
  /* _L95/ */
  kcg_float64 _L95;
  /* _L127/, _L128/, _L129/, _L131/, _L142/, epsilon/ */
  kcg_float64 _L127;

  _L113 = outC->_L158;
  /* _L10= */
  if (kcg_comp_colorTy((colorTy *) &RED, roadColor) | kcg_comp_colorTy(
      roadColor,
      (colorTy *) &GREEN)) {
    kcg_copy_colorTy(&tmp, (colorTy *) &BLUE);
  }
  else {
    kcg_copy_colorTy(&tmp, roadColor);
  }
  outC->_L158 = /* _L158=(Robot::dev#2)/ */ dev_Robot(&tmp);
  _L127 = KP * outC->_L158 + (outC->_L158 - _L113) / TIMESTEP * KD;
  _L113 = kcg_lit_float64(0.5) * speed;
  _L110 = _L127 / kcg_lit_float64(2.) + kcg_lit_float64(0.5);
  _L95 = - _L127 / kcg_lit_float64(2.) + kcg_lit_float64(0.5);
  /* _L99= */
  if (_L127 > kcg_lit_float64(0.)) {
    outC->wheels.left = (kcg_lit_float64(1.) - _L110) * speed;
    outC->wheels.right = _L110 * speed;
  }
  else /* _L123= */
  if (_L127 < kcg_lit_float64(0.)) {
    outC->wheels.left = _L95 * speed;
    outC->wheels.right = (kcg_lit_float64(1.) - _L95) * speed;
  }
  else {
    outC->wheels.left = _L113;
    outC->wheels.right = outC->wheels.left;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void ControleurPID_init_Robot(outC_ControleurPID_Robot *outC)
{
  outC->wheels.left = kcg_lit_float64(0.0);
  outC->wheels.right = kcg_lit_float64(0.0);
  outC->_L158 = kcg_lit_float64(0.);
}
#endif /* KCG_USER_DEFINED_INIT */


void ControleurPID_reset_Robot(outC_ControleurPID_Robot *outC)
{
  outC->_L158 = kcg_lit_float64(0.);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ControleurPID_Robot.c
** Generation date: 2017-01-18T22:37:07
*************************************************************$ */

