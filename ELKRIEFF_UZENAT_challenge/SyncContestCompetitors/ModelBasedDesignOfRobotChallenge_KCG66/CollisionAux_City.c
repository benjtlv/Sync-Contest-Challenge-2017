/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CollisionAux_City.h"

/* City::CollisionAux/ */
void CollisionAux_City(
  /* acc/ */
  kcg_bool acc,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacle/ */
  obstTy *obstacle,
  outC_CollisionAux_City *outC)
{
  kcg_float64 noname;

  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  kcg_copy_phaseTy(&outC->_L2, RobotPhase);
  kcg_copy_positionTy(&outC->_L5, &outC->_L2.position);
  kcg_copy_obstTy(&outC->_L3, obstacle);
  kcg_copy_positionTy(&outC->_L11, &outC->_L3.position);
  /* _L16=(Utilities::AngleDist#1)/ */
  AngleDist_Utilities(&outC->_L5, &outC->_L11, &outC->Context_AngleDist_1);
  outC->_L16 = outC->Context_AngleDist_1.angle;
  outC->_L17 = outC->Context_AngleDist_1.dist;
  outC->_L7 = outC->_L2.heading;
  outC->_L19 = outC->_L7 - outC->_L16;
  /* _L20=(Utilities::Normalize#1)/ */
  Normalize_Utilities(outC->_L19, &outC->Context_Normalize_1);
  outC->_L20 = outC->Context_Normalize_1.normal;
  outC->A_Input_Abs_1_float64 = outC->_L20;
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
  outC->_L43 = PI / kcg_lit_float64(180.);
  outC->_L18 = outC->A_Output_Abs_1_float64;
  outC->angle = outC->_L18;
  outC->_L30 = outC->angle;
  outC->_L42 = outC->_L30 * outC->_L43;
  outC->Input1_SinCosR_1_float64 = outC->_L42;
  outC->_L1_SinCosR_1_float64 = outC->Input1_SinCosR_1_float64;
  outC->_L3_SinCosR_1_float64 = /* @2/_L3=(mathext::CosR#1)/ */
    CosR64_mathext_mathextimpl(outC->_L1_SinCosR_1_float64);
  outC->Output2_SinCosR_1_float64 = outC->_L3_SinCosR_1_float64;
  outC->_L2_SinCosR_1_float64 = /* @2/_L2=(mathext::SinR#1)/ */
    SinR64_mathext_mathextimpl(outC->_L1_SinCosR_1_float64);
  outC->Output1_SinCosR_1_float64 = outC->_L2_SinCosR_1_float64;
  outC->_L40 = - SC;
  outC->_L32 = outC->Output2_SinCosR_1_float64;
  outC->_L28 = ROBST;
  outC->dist = outC->_L17;
  outC->_L27 = outC->dist;
  outC->_L29 = outC->_L27 - outC->_L28;
  outC->_L34 = outC->_L29 * outC->_L32;
  outC->_L39 = outC->_L34 >= outC->_L40;
  outC->_L38 = SA;
  outC->_L37 = outC->_L34 <= outC->_L38;
  outC->_L36 = SB;
  outC->_L31 = outC->Output1_SinCosR_1_float64;
  outC->_L33 = outC->_L31 * outC->_L29;
  outC->_L35 = outC->_L33 <= outC->_L36;
  outC->_L41 = outC->_L35 & outC->_L37 & outC->_L39;
  outC->_L25 = ROBST;
  outC->_L23 = outC->dist;
  outC->_L24 = outC->_L23 <= outC->_L25;
  outC->_L26 = outC->_L24 | outC->_L41;
  outC->_L12 = outC->_L3.present;
  outC->_L15 = outC->_L12 & outC->_L26;
  outC->_L6 = outC->_L2.velocity;
  noname = outC->_L6;
  outC->_L1 = acc;
  outC->_L4 = outC->_L1 | outC->_L15;
  outC->accnew = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void CollisionAux_init_City(outC_CollisionAux_City *outC)
{
  outC->_L43 = kcg_lit_float64(0.0);
  outC->_L42 = kcg_lit_float64(0.0);
  outC->_L41 = kcg_true;
  outC->_L40 = kcg_lit_float64(0.0);
  outC->_L39 = kcg_true;
  outC->_L38 = kcg_lit_float64(0.0);
  outC->_L37 = kcg_true;
  outC->_L36 = kcg_lit_float64(0.0);
  outC->_L35 = kcg_true;
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L31 = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_float64(0.0);
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L27 = kcg_lit_float64(0.0);
  outC->_L28 = kcg_lit_float64(0.0);
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_true;
  outC->_L11.x = kcg_lit_float64(0.0);
  outC->_L11.y = kcg_lit_float64(0.0);
  outC->_L12 = kcg_true;
  outC->_L5.x = kcg_lit_float64(0.0);
  outC->_L5.y = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_true;
  outC->_L3.position.x = kcg_lit_float64(0.0);
  outC->_L3.position.y = kcg_lit_float64(0.0);
  outC->_L3.present = kcg_true;
  outC->_L2.position.x = kcg_lit_float64(0.0);
  outC->_L2.position.y = kcg_lit_float64(0.0);
  outC->_L2.velocity = kcg_lit_float64(0.0);
  outC->_L2.heading = kcg_lit_float64(0.0);
  outC->_L1 = kcg_true;
  outC->dist = kcg_lit_float64(0.0);
  outC->angle = kcg_lit_float64(0.0);
  outC->_L1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Input1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Output1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Output2_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->accnew = kcg_true;
  /* _L20=(Utilities::Normalize#1)/ */
  Normalize_init_Utilities(&outC->Context_Normalize_1);
  /* _L16=(Utilities::AngleDist#1)/ */
  AngleDist_init_Utilities(&outC->Context_AngleDist_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CollisionAux_reset_City(outC_CollisionAux_City *outC)
{
  /* _L20=(Utilities::Normalize#1)/ */
  Normalize_reset_Utilities(&outC->Context_Normalize_1);
  /* _L16=(Utilities::AngleDist#1)/ */
  AngleDist_reset_Utilities(&outC->Context_AngleDist_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: City::CollisionAux/
  @1: (math::Abs#1)
  @2: (mathext::SinCosR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** CollisionAux_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

