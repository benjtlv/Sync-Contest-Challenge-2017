/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TurnControlleur_Robot.h"

/* Robot::TurnControlleur/ */
void TurnControlleur_Robot(
  /* turn/ */
  kcg_float64 turn,
  outC_TurnControlleur_Robot *outC)
{
  /* _L18= */
  if (outC->init) {
    outC->_L18 = kcg_lit_float64(0.);
  }
  else {
    outC->_L18 = outC->_L57;
  }
  outC->_L41 = kcg_lit_float64(1.);
  outC->_L26 = outC->_L41 + outC->_L18;
  outC->_L55 = kcg_lit_float64(0.);
  outC->_L29 = kcg_lit_float64(200.);
  outC->_L27 = turn;
  outC->_L28 = outC->_L27 / outC->_L29;
  outC->_L32 = - outC->_L28;
  outC->_L31 = kcg_lit_float64(0.);
  outC->_L30 = outC->_L28 > outC->_L31;
  /* _L2= */
  if (outC->_L30) {
    outC->_L2 = outC->_L28;
  }
  else {
    outC->_L2 = outC->_L32;
  }
  outC->dureeRotation = outC->_L2;
  outC->x = outC->_L26;
  outC->_L56 = outC->x * TIMESTEP > outC->dureeRotation;
  /* _L57= */
  if (outC->_L56) {
    outC->_L57 = outC->_L55;
  }
  else {
    outC->_L57 = outC->_L26;
  }
  outC->_L51 = outC->dureeRotation;
  outC->_L49 = TIMESTEP;
  outC->_L47 = outC->x;
  outC->_L48 = outC->_L47 * outC->_L49;
  outC->_L50 = outC->_L48 > outC->_L51;
  outC->_L45 = kcg_lit_float64(10.);
  outC->_L38 = kcg_lit_float64(1.);
  outC->_L37 = kcg_lit_float64(-1.);
  outC->_L40 = kcg_lit_float64(0.);
  outC->_L34 = turn;
  outC->_L39 = outC->_L34 < outC->_L40;
  /* _L35= */
  if (outC->_L39) {
    outC->_L35 = outC->_L37;
  }
  else {
    outC->_L35 = outC->_L38;
  }
  outC->coefRot = outC->_L35;
  outC->_L43 = outC->coefRot;
  outC->_L44 = outC->_L43 * outC->_L45;
  outC->_L46 = - outC->_L44;
  outC->_L19.left = outC->_L46;
  outC->_L19.right = outC->_L44;
  kcg_copy_wheelsTy_Robot(&outC->speed, &outC->_L19);
  outC->stop = outC->_L50;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void TurnControlleur_init_Robot(outC_TurnControlleur_Robot *outC)
{
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_lit_float64(0.0);
  outC->_L51 = kcg_lit_float64(0.0);
  outC->_L50 = kcg_true;
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L48 = kcg_lit_float64(0.0);
  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L46 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_lit_float64(0.0);
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_true;
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19.left = kcg_lit_float64(0.0);
  outC->_L19.right = kcg_lit_float64(0.0);
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->x = kcg_lit_float64(0.0);
  outC->coefRot = kcg_lit_float64(0.0);
  outC->dureeRotation = kcg_lit_float64(0.0);
  outC->_L57 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->speed.left = kcg_lit_float64(0.0);
  outC->speed.right = kcg_lit_float64(0.0);
  outC->stop = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TurnControlleur_reset_Robot(outC_TurnControlleur_Robot *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TurnControlleur_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

