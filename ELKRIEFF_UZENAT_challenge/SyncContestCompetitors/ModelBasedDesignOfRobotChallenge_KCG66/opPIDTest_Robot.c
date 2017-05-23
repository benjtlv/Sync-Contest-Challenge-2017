/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T15:19:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "opPIDTest_Robot.h"

/* Robot::opPIDTest/ */
void opPIDTest_Robot(
  /* _L12/, _L13/, _L3/, roadColor/ */
  colorTy *roadColor,
  /* _L2/, _L35/, _L45/, _L46/, _L56/, _L58/, _L68/, speed/, speedLocal/ */
  kcg_float64 speed,
  outC_opPIDTest_Robot *outC)
{
  /* _L28/, _L4/, turnColor/ */
  colorTy _L4;
  /* _L19/, _L37/, _L44/, _L49/, _L59/, propError/ */
  kcg_float64 _L19;
  /* _L62/ */
  kcg_float64 _L62;
  /* _L18/, _L50/ */
  kcg_float64 _L50;

  _L50 = outC->_L18;
  _L19 = /* _L5=(Utilities::CompareColors#2)/ */
    CompareColors_Utilities(roadColor, (colorTy *) &RED);
  _L62 = /* _L10=(Utilities::CompareColors#1)/ */
    CompareColors_Utilities(roadColor, (colorTy *) &GREEN);
  /* _L4= */
  if ((_L19 == kcg_lit_float64(1.)) | (_L62 == kcg_lit_float64(1.))) {
    kcg_copy_colorTy(&_L4, (colorTy *) &BLUE);
  }
  else {
    kcg_copy_colorTy(&_L4, roadColor);
  }
  outC->_L18 = (/* _L16= */(kcg_float64) _L4.red - /* _L24= */(kcg_float64)
        _L4.green) / kcg_lit_float64(255.);
  _L19 = outC->_L18 + (outC->_L18 - _L50) * kcg_lit_float64(10.);
  _L62 = _L19 / kcg_lit_float64(2.) + kcg_lit_float64(0.5);
  _L50 = - _L19 / kcg_lit_float64(2.) + kcg_lit_float64(0.5);
  /* _L30= */
  if (_L19 > kcg_lit_float64(0.)) {
    outC->wheels.left = (kcg_lit_float64(1.) - _L62) * speed;
    outC->wheels.right = _L62 * speed;
  }
  else /* _L34= */
  if (_L19 < kcg_lit_float64(0.)) {
    outC->wheels.left = _L50 * speed;
    outC->wheels.right = (kcg_lit_float64(1.) - _L50) * speed;
  }
  else {
    outC->wheels.left = kcg_lit_float64(0.5) * speed;
    outC->wheels.right = kcg_lit_float64(0.5) * speed;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void opPIDTest_init_Robot(outC_opPIDTest_Robot *outC)
{
  outC->wheels.left = kcg_lit_float64(0.0);
  outC->wheels.right = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.);
}
#endif /* KCG_USER_DEFINED_INIT */


void opPIDTest_reset_Robot(outC_opPIDTest_Robot *outC)
{
  outC->_L18 = kcg_lit_float64(0.);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** opPIDTest_Robot.c
** Generation date: 2017-01-22T15:19:47
*************************************************************$ */

