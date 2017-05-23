/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OneTL_City.h"

/* City::OneTL/ */
void OneTL_City(
  /* param/ */
  paramTLTy_City *param,
  /* time/ */
  kcg_float64 time,
  outC_OneTL_City *outC)
{
  /* light/ */
  colorTyQ light_partial;
  /* light/ */
  colorTyQ _1_light_partial;
  /* light/ */
  colorTyQ _2_light_partial;
  /* light/ */
  colorTyQ _3_light_partial;

  outC->_L50 = kcg_lit_int32(1);
  outC->I2_Max_1_int32 = outC->_L50;
  outC->_L2_Max_1_int32 = outC->I2_Max_1_int32;
  kcg_copy_paramTLTy_City(&outC->_L30, param);
  outC->_L34 = outC->_L30.tRed;
  outC->tRed = outC->_L34;
  outC->_L47 = outC->tRed;
  outC->_L33 = outC->_L30.tAmber;
  outC->tAmber = outC->_L33;
  outC->_L44 = outC->tAmber;
  outC->_L32 = outC->_L30.tGreen;
  outC->tGreen = outC->_L32;
  outC->_L45 = outC->tGreen;
  outC->_L4 = outC->_L45 + outC->_L44 + outC->_L47;
  outC->I1_Max_1_int32 = outC->_L4;
  outC->_L1_Max_1_int32 = outC->I1_Max_1_int32;
  outC->_L3_Max_1_int32 = outC->_L1_Max_1_int32 >= outC->_L2_Max_1_int32;
  /* @1/_L4= */
  if (outC->_L3_Max_1_int32) {
    outC->_L4_Max_1_int32 = outC->_L1_Max_1_int32;
  }
  else {
    outC->_L4_Max_1_int32 = outC->_L2_Max_1_int32;
  }
  outC->Ma_Output_Max_1_int32 = outC->_L4_Max_1_int32;
  outC->_L35 = outC->_L30.tPhase;
  outC->tPhase = outC->_L35;
  outC->_L60 = outC->tPhase;
  outC->_L57 = time;
  outC->_L58 = /* _L58= */(kcg_int32) outC->_L57;
  outC->_L59 = outC->_L58 + outC->_L60;
  outC->_L51 = outC->Ma_Output_Max_1_int32;
  outC->period = outC->_L51;
  outC->_L55 = outC->period;
  outC->_L54 = outC->_L59 % outC->_L55;
  kcg_copy_positionTy(&outC->_L31, &outC->_L30.pos);
  outC->cpt = outC->_L54;
  outC->IfBlock1_clock = outC->cpt < outC->tGreen;
  /* IfBlock1: */
  if (outC->IfBlock1_clock) {
    outC->_L1_then_IfBlock1 = greenQ;
    light_partial = outC->_L1_then_IfBlock1;
    outC->light = light_partial;
  }
  else {
    outC->else_clock_IfBlock1 = outC->cpt < outC->tGreen + outC->tAmber;
    /* IfBlock1:else: */
    if (outC->else_clock_IfBlock1) {
      outC->_L2_then_else_IfBlock1 = amberQ;
      _3_light_partial = outC->_L2_then_else_IfBlock1;
      _1_light_partial = _3_light_partial;
    }
    else {
      outC->_L1_else_else_IfBlock1 = redQ;
      _2_light_partial = outC->_L1_else_else_IfBlock1;
      _1_light_partial = _2_light_partial;
    }
    outC->light = _1_light_partial;
  }
  outC->_L28 = outC->light;
  kcg_copy_positionTy(&outC->_L25.position, &outC->_L31);
  outC->_L25.light = outC->_L28;
  kcg_copy_trafLTy(&outC->trafL, &outC->_L25);
}

#ifndef KCG_USER_DEFINED_INIT
void OneTL_init_City(outC_OneTL_City *outC)
{
  outC->_L60 = kcg_lit_int32(0);
  outC->_L59 = kcg_lit_int32(0);
  outC->_L58 = kcg_lit_int32(0);
  outC->_L57 = kcg_lit_float64(0.0);
  outC->_L55 = kcg_lit_int32(0);
  outC->_L54 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L4 = kcg_lit_int32(0);
  outC->_L31.x = kcg_lit_float64(0.0);
  outC->_L31.y = kcg_lit_float64(0.0);
  outC->_L32 = kcg_lit_int32(0);
  outC->_L33 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L35 = kcg_lit_int32(0);
  outC->_L30.pos.x = kcg_lit_float64(0.0);
  outC->_L30.pos.y = kcg_lit_float64(0.0);
  outC->_L30.tGreen = kcg_lit_int32(0);
  outC->_L30.tAmber = kcg_lit_int32(0);
  outC->_L30.tRed = kcg_lit_int32(0);
  outC->_L30.tPhase = kcg_lit_int32(0);
  outC->_L28 = redQ;
  outC->_L25.position.x = kcg_lit_float64(0.0);
  outC->_L25.position.y = kcg_lit_float64(0.0);
  outC->_L25.light = redQ;
  outC->tPhase = kcg_lit_int32(0);
  outC->tRed = kcg_lit_int32(0);
  outC->tAmber = kcg_lit_int32(0);
  outC->tGreen = kcg_lit_int32(0);
  outC->light = redQ;
  outC->period = kcg_lit_int32(0);
  outC->cpt = kcg_lit_int32(0);
  outC->IfBlock1_clock = kcg_true;
  outC->_L2_then_else_IfBlock1 = redQ;
  outC->_L1_else_else_IfBlock1 = redQ;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L1_then_IfBlock1 = redQ;
  outC->_L1_Max_1_int32 = kcg_lit_int32(0);
  outC->_L2_Max_1_int32 = kcg_lit_int32(0);
  outC->_L3_Max_1_int32 = kcg_true;
  outC->_L4_Max_1_int32 = kcg_lit_int32(0);
  outC->I1_Max_1_int32 = kcg_lit_int32(0);
  outC->I2_Max_1_int32 = kcg_lit_int32(0);
  outC->Ma_Output_Max_1_int32 = kcg_lit_int32(0);
  outC->trafL.position.x = kcg_lit_float64(0.0);
  outC->trafL.position.y = kcg_lit_float64(0.0);
  outC->trafL.light = redQ;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void OneTL_reset_City(outC_OneTL_City *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: City::OneTL/
  @1: (math::Max#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneTL_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

