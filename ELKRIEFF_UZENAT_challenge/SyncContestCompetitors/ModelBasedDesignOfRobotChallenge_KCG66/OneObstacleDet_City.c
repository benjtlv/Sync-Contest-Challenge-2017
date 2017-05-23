/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneObstacleDet_City.h"

/* City::OneObstacleDet/ */
void OneObstacleDet_City(
  /* acc/ */
  kcg_int32 acc,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacle/ */
  obstTy *obstacle,
  outC_OneObstacleDet_City *outC)
{
  kcg_float64 noname;

  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.);
  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  kcg_copy_positionTy(&outC->_L3, &outC->_L1.position);
  kcg_copy_obstTy(&outC->_L36, obstacle);
  kcg_copy_positionTy(&outC->_L37, &outC->_L36.position);
  /* _L15=(Utilities::AngleDist#1)/ */
  AngleDist_Utilities(&outC->_L3, &outC->_L37, &outC->Context_AngleDist_1);
  outC->_L15 = outC->Context_AngleDist_1.angle;
  outC->_L16 = outC->Context_AngleDist_1.dist;
  outC->_L5 = outC->_L1.heading;
  outC->_L17 = outC->_L5 - outC->_L15;
  /* _L18=(Utilities::Normalize#1)/ */
  Normalize_Utilities(outC->_L17, &outC->Context_Normalize_1);
  outC->_L18 = outC->Context_Normalize_1.normal;
  outC->A_Input_Abs_1_float64 = outC->_L18;
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
  outC->_L33 = SONARFAR;
  outC->_L48 = ROBST;
  outC->_L47 = outC->_L16 - outC->_L48;
  outC->_L32 = /* _L32= */(kcg_int32) outC->_L47;
  outC->_L38 = outC->_L36.present;
  outC->_L23 = kcg_lit_float64(100.);
  outC->_L28 = outC->_L47 <= outC->_L23;
  outC->_L21 = kcg_lit_float64(30.);
  outC->_L19 = outC->A_Output_Abs_1_float64;
  outC->_L29 = outC->_L19 <= outC->_L21;
  outC->_L24 = outC->_L29 & outC->_L28 & outC->_L38;
  /* _L30= */
  if (outC->_L24) {
    outC->_L30 = outC->_L32;
  }
  else {
    outC->_L30 = outC->_L33;
  }
  outC->I2_Min_3_int32 = outC->_L30;
  outC->_L22_Min_3_int32 = outC->I2_Min_3_int32;
  outC->_L45 = acc;
  outC->I1_Min_3_int32 = outC->_L45;
  outC->_L21_Min_3_int32 = outC->I1_Min_3_int32;
  outC->_L25_Min_3_int32 = outC->_L21_Min_3_int32 <= outC->_L22_Min_3_int32;
  /* @2/_L24= */
  if (outC->_L25_Min_3_int32) {
    outC->_L24_Min_3_int32 = outC->_L21_Min_3_int32;
  }
  else {
    outC->_L24_Min_3_int32 = outC->_L22_Min_3_int32;
  }
  outC->Mi_Output_Min_3_int32 = outC->_L24_Min_3_int32;
  outC->_L46 = outC->Mi_Output_Min_3_int32;
  outC->accnew = outC->_L46;
  outC->_L4 = outC->_L1.velocity;
  noname = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void OneObstacleDet_init_City(outC_OneObstacleDet_City *outC)
{
  outC->_L48 = kcg_lit_float64(0.0);
  outC->_L47 = kcg_lit_float64(0.0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L37.x = kcg_lit_float64(0.0);
  outC->_L37.y = kcg_lit_float64(0.0);
  outC->_L38 = kcg_true;
  outC->_L36.position.x = kcg_lit_float64(0.0);
  outC->_L36.position.y = kcg_lit_float64(0.0);
  outC->_L36.present = kcg_true;
  outC->_L33 = kcg_lit_int32(0);
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L30 = kcg_lit_int32(0);
  outC->_L29 = kcg_true;
  outC->_L28 = kcg_true;
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L3.x = kcg_lit_float64(0.0);
  outC->_L3.y = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_lit_float64(0.0);
  outC->_L21_Min_3_int32 = kcg_lit_int32(0);
  outC->_L22_Min_3_int32 = kcg_lit_int32(0);
  outC->_L24_Min_3_int32 = kcg_lit_int32(0);
  outC->_L25_Min_3_int32 = kcg_true;
  outC->I1_Min_3_int32 = kcg_lit_int32(0);
  outC->I2_Min_3_int32 = kcg_lit_int32(0);
  outC->Mi_Output_Min_3_int32 = kcg_lit_int32(0);
  outC->_L1_Abs_1_float64 = kcg_true;
  outC->_L2_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L5_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->_L8_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Input_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->A_Output_Abs_1_float64 = kcg_lit_float64(0.0);
  outC->accnew = kcg_lit_int32(0);
  /* _L18=(Utilities::Normalize#1)/ */
  Normalize_init_Utilities(&outC->Context_Normalize_1);
  /* _L15=(Utilities::AngleDist#1)/ */
  AngleDist_init_Utilities(&outC->Context_AngleDist_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void OneObstacleDet_reset_City(outC_OneObstacleDet_City *outC)
{
  /* _L18=(Utilities::Normalize#1)/ */
  Normalize_reset_Utilities(&outC->Context_Normalize_1);
  /* _L15=(Utilities::AngleDist#1)/ */
  AngleDist_reset_Utilities(&outC->Context_AngleDist_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: City::OneObstacleDet/
  @1: (math::Abs#1)
  @2: (math::Min#3)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneObstacleDet_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

