/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T16:22:42
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "opTurn_Robot.h"

/* Robot::opTurn/ */
void opTurn_Robot(
  /* _L37/, _L6/, turn/ */
  kcg_float64 turn,
  outC_opTurn_Robot *outC)
{
  kcg_float64 tmp;
  /* _L2/, _L21/, _L4/, angle/, d/ */
  kcg_float64 _L4;

  _L4 = PI * D / kcg_lit_float64(360.) * turn / (PI * D * kcg_lit_float64(
        200.) / kcg_lit_float64(360.));
  /* _L18= */
  if (_L4 < kcg_lit_float64(0.)) {
    tmp = - _L4;
  }
  else {
    tmp = _L4;
  }
  outC->finished = outC->_L29 * TIMESTEP > tmp;
  /* _L29= */
  if (outC->finished) {
    outC->_L29 = kcg_lit_float64(1.);
  }
  else {
    outC->_L29 = kcg_lit_float64(1.) + outC->_L29;
  }
  /* _L4= */
  if (turn < kcg_lit_float64(0.)) {
    _L4 = kcg_lit_float64(-1.);
  }
  else {
    _L4 = kcg_lit_float64(1.);
  }
  outC->gogo.left = - _L4 * kcg_lit_float64(10.);
  outC->gogo.right = _L4 * kcg_lit_float64(10.);
}

#ifndef KCG_USER_DEFINED_INIT
void opTurn_init_Robot(outC_opTurn_Robot *outC)
{
  outC->finished = kcg_true;
  outC->gogo.left = kcg_lit_float64(0.0);
  outC->gogo.right = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void opTurn_reset_Robot(outC_opTurn_Robot *outC)
{
  outC->_L29 = kcg_lit_float64(0.);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** opTurn_Robot.c
** Generation date: 2017-01-22T16:22:42
*************************************************************$ */

