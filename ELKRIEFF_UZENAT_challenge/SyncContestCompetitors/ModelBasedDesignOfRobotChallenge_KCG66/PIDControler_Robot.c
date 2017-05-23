/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PIDControler_Robot.h"

/* Robot::PIDControler/ */
void PIDControler_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  outC_PIDControler_Robot *outC)
{
  kcg_copy_colorTy(&outC->_L23, roadColor);
  /* _L73=(Robot::isRed#1)/ */ isRed_Robot(&outC->_L23, &outC->Context_isRed_1);
  outC->_L73 = outC->Context_isRed_1.is_red;
  /* _L72=(Robot::isGreen#1)/ */
  isGreen_Robot(&outC->_L23, &outC->Context_isGreen_1);
  outC->_L72 = outC->Context_isGreen_1.is_green;
  outC->_L65 = KI;
  /* _L42= */
  if (outC->init) {
    outC->_L42 = kcg_lit_float64(0.);
  }
  else {
    outC->_L42 = outC->_L62;
  }
  outC->_L48 = C3;
  kcg_copy_colorTy(&outC->_L19, roadColor);
  kcg_copy_colorTy(&outC->_L24, (colorTy *) &BLUE);
  outC->_L18 = outC->_L73 | outC->_L72;
  /* _L21= */
  if (outC->_L18) {
    kcg_copy_colorTy(&outC->_L21, &outC->_L24);
  }
  else {
    kcg_copy_colorTy(&outC->_L21, &outC->_L19);
  }
  kcg_copy_colorTy(&outC->errorColor, &outC->_L21);
  kcg_copy_colorTy(&outC->_L55, &outC->errorColor);
  outC->_L52 = outC->_L55.blue;
  outC->_L59 = /* _L59= */(kcg_float64) outC->_L52;
  outC->_L49 = outC->_L59 * outC->_L48;
  outC->_L53 = C2;
  outC->_L51 = outC->_L55.green;
  outC->_L54 = /* _L54= */(kcg_float64) outC->_L51;
  outC->_L61 = outC->_L54 * outC->_L53;
  outC->_L50 = outC->_L55.red;
  outC->_L57 = /* _L57= */(kcg_float64) outC->_L50;
  outC->_L58 = C1;
  outC->_L47 = outC->_L58 * outC->_L57;
  outC->_L56 = outC->_L47 + outC->_L61;
  outC->_L60 = outC->_L56 + outC->_L49;
  outC->dev = outC->_L60;
  outC->_L62 = outC->dev;
  /* _L63=(Utilities::Integrator#1)/ */
  Integrator_Utilities(
    outC->_L62,
    TIMESTEP,
    kcg_lit_float64(0.),
    &outC->Context_Integrator_1);
  outC->_L63 = outC->Context_Integrator_1.result;
  outC->_L64 = outC->_L63 * outC->_L65;
  outC->_L67 = KD;
  outC->_L70 = TIMESTEP;
  outC->_L37 = outC->_L62 - outC->_L42;
  outC->_L69 = outC->_L37 / outC->_L70;
  outC->_L41 = outC->_L69 * outC->_L67;
  outC->_L44 = KP;
  outC->_L40 = outC->_L44 * outC->_L62;
  outC->_L43 = outC->_L40 + outC->_L41;
  outC->_L71 = outC->_L43 + outC->_L64;
  outC->epsilon = outC->_L71;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void PIDControler_init_Robot(outC_PIDControler_Robot *outC)
{
  outC->_L73 = kcg_true;
  outC->_L72 = kcg_true;
  outC->_L71 = kcg_lit_float64(0.0);
  outC->_L70 = kcg_lit_float64(0.0);
  outC->_L69 = kcg_lit_float64(0.0);
  outC->_L67 = kcg_lit_float64(0.0);
  outC->_L65 = kcg_lit_float64(0.0);
  outC->_L64 = kcg_lit_float64(0.0);
  outC->_L63 = kcg_lit_float64(0.0);
  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L48 = kcg_lit_float64(0.0);
  outC->_L49 = kcg_lit_float64(0.0);
  outC->_L52 = kcg_lit_uint8(0);
  outC->_L51 = kcg_lit_uint8(0);
  outC->_L50 = kcg_lit_uint8(0);
  outC->_L53 = kcg_lit_float64(0.0);
  outC->_L54 = kcg_lit_float64(0.0);
  outC->_L55.red = kcg_lit_uint8(0);
  outC->_L55.green = kcg_lit_uint8(0);
  outC->_L55.blue = kcg_lit_uint8(0);
  outC->_L56 = kcg_lit_float64(0.0);
  outC->_L57 = kcg_lit_float64(0.0);
  outC->_L58 = kcg_lit_float64(0.0);
  outC->_L59 = kcg_lit_float64(0.0);
  outC->_L60 = kcg_lit_float64(0.0);
  outC->_L61 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_lit_float64(0.0);
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_lit_float64(0.0);
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L44 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_true;
  outC->_L19.red = kcg_lit_uint8(0);
  outC->_L19.green = kcg_lit_uint8(0);
  outC->_L19.blue = kcg_lit_uint8(0);
  outC->_L21.red = kcg_lit_uint8(0);
  outC->_L21.green = kcg_lit_uint8(0);
  outC->_L21.blue = kcg_lit_uint8(0);
  outC->_L23.red = kcg_lit_uint8(0);
  outC->_L23.green = kcg_lit_uint8(0);
  outC->_L23.blue = kcg_lit_uint8(0);
  outC->_L24.red = kcg_lit_uint8(0);
  outC->_L24.green = kcg_lit_uint8(0);
  outC->_L24.blue = kcg_lit_uint8(0);
  outC->errorColor.red = kcg_lit_uint8(0);
  outC->errorColor.green = kcg_lit_uint8(0);
  outC->errorColor.blue = kcg_lit_uint8(0);
  outC->dev = kcg_lit_float64(0.0);
  outC->_L62 = kcg_lit_float64(0.0);
  outC->init = kcg_true;
  outC->epsilon = kcg_lit_float64(0.0);
  /* _L63=(Utilities::Integrator#1)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_1);
  /* _L72=(Robot::isGreen#1)/ */ isGreen_init_Robot(&outC->Context_isGreen_1);
  /* _L73=(Robot::isRed#1)/ */ isRed_init_Robot(&outC->Context_isRed_1);
}
#endif /* KCG_USER_DEFINED_INIT */


void PIDControler_reset_Robot(outC_PIDControler_Robot *outC)
{
  outC->init = kcg_true;
  /* _L63=(Utilities::Integrator#1)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_1);
  /* _L72=(Robot::isGreen#1)/ */ isGreen_reset_Robot(&outC->Context_isGreen_1);
  /* _L73=(Robot::isRed#1)/ */ isRed_reset_Robot(&outC->Context_isRed_1);
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PIDControler_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

