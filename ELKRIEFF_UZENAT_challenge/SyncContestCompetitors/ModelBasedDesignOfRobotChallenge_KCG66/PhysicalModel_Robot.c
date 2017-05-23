/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "PhysicalModel_Robot.h"

/* Robot::PhysicalModel/ */
void PhysicalModel_Robot(
  /* top/ */
  kcg_bool top,
  /* RotationalSpeed/ */
  wheelsTy_Robot *RotationalSpeed,
  /* InitialPhase/ */
  phaseTy *InitialPhase,
  outC_PhysicalModel_Robot *outC)
{
  array_float64_2 tmp;
  array_float64_2 tmp1;
  /* RobotPhase/ */
  phaseTy RobotPhase_partial;
  /* y0/ */
  kcg_float64 y0_partial;
  /* x0/ */
  kcg_float64 x0_partial;
  /* alpha0/ */
  kcg_float64 alpha0_partial;
  /* SM1: */
  SSM_ST_SM1 SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 SM1_fired_partial;
  /* SM1:positionning:<1> */
  kcg_bool tr_1_guard_positionning_SM1;
  positionTy noname;
  phaseTy _2_noname;
  kcg_float64 _3_noname;
  /* RobotPhase/ */
  phaseTy _4_RobotPhase_partial;
  /* y0/ */
  kcg_float64 _5_y0_partial;
  /* x0/ */
  kcg_float64 _6_x0_partial;
  /* alpha0/ */
  kcg_float64 _7_alpha0_partial;
  /* SM1: */
  SSM_ST_SM1 _8_SM1_state_nxt_partial;
  /* SM1: */
  kcg_bool _9_SM1_reset_nxt_partial;
  /* SM1: */
  SSM_TR_SM1 _10_SM1_fired_partial;
  positionTy _11_noname;
  /* alpha0/ */
  kcg_float64 last_alpha0;
  /* x0/ */
  kcg_float64 last_x0;
  /* y0/ */
  kcg_float64 last_y0;
  /* SM1: */
  kcg_bool SM1_reset_sel;
  /* SM1: */
  kcg_bool SM1_reset_prv;

  outC->SM1_state_sel = outC->SM1_state_nxt;
  outC->SM1_state_act = outC->SM1_state_sel;
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      outC->_L34_on_SM1 = PI * D / kcg_lit_float64(360.);
      kcg_copy_wheelsTy_Robot(&outC->_L35_on_SM1, RotationalSpeed);
      outC->_L30_on_SM1 = outC->_L35_on_SM1.left;
      /* SM1:on:_L29=(Utilities::Bound#4)/ */
      Bound_Utilities(outC->_L30_on_SM1, MAXWHEEL, &outC->Context_Bound_4);
      outC->_L29_on_SM1 = outC->Context_Bound_4.xb;
      outC->_L32_on_SM1 = outC->_L29_on_SM1 * outC->_L34_on_SM1;
      outC->vLeft_on_SM1 = outC->_L32_on_SM1;
      outC->_L31_on_SM1 = outC->_L35_on_SM1.right;
      /* SM1:on:_L36=(Utilities::Bound#3)/ */
      Bound_Utilities(outC->_L31_on_SM1, MAXWHEEL, &outC->Context_Bound_3);
      outC->_L36_on_SM1 = outC->Context_Bound_3.xb;
      outC->_L33_on_SM1 = outC->_L34_on_SM1 * outC->_L36_on_SM1;
      outC->vRight_on_SM1 = outC->_L33_on_SM1;
      outC->_L18_on_SM1 = (outC->vRight_on_SM1 - outC->vLeft_on_SM1) *
        kcg_lit_float64(180.) / (PI * B);
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_alpha0 = outC->alpha0;
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      _7_alpha0_partial = last_alpha0;
      outC->_L19_on_SM1 = _7_alpha0_partial;
      break;
    default :
      /* this branch is empty */
      break;
  }
  SM1_reset_sel = outC->SM1_reset_nxt;
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      if (SM1_reset_sel) {
        /* SM1:on:_L21=(Utilities::Integrator#7)/ */
        Integrator_reset_Utilities(&outC->Context_Integrator_7);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      /* SM1:on:_L21=(Utilities::Integrator#7)/ */
      Integrator_Utilities(
        outC->_L18_on_SM1,
        TIMESTEP,
        outC->_L19_on_SM1,
        &outC->Context_Integrator_7);
      outC->_L21_on_SM1 = outC->Context_Integrator_7.result;
      /* SM1:on:_L20=(Utilities::Normalize#3)/ */
      Normalize_Utilities(outC->_L21_on_SM1, &outC->Context_Normalize_3);
      outC->_L20_on_SM1 = outC->Context_Normalize_3.normal;
      outC->alpha_on_SM1 = outC->_L20_on_SM1;
      outC->_L25_on_SM1 = outC->alpha_on_SM1 * PI / kcg_lit_float64(180.);
      outC->Input1_SinCosR_16_float64 = outC->_L25_on_SM1;
      outC->_L1_SinCosR_16_float64 = outC->Input1_SinCosR_16_float64;
      outC->_L3_SinCosR_16_float64 = /* @1/_L3=(mathext::CosR#1)/ */
        CosR64_mathext_mathextimpl(outC->_L1_SinCosR_16_float64);
      outC->Output2_SinCosR_16_float64 = outC->_L3_SinCosR_16_float64;
      outC->_L2_SinCosR_16_float64 = /* @1/_L2=(mathext::SinR#1)/ */
        SinR64_mathext_mathextimpl(outC->_L1_SinCosR_16_float64);
      outC->Output1_SinCosR_16_float64 = outC->_L2_SinCosR_16_float64;
      break;
    default :
      /* this branch is empty */
      break;
  }
  last_x0 = outC->x0;
  last_y0 = outC->y0;
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      _6_x0_partial = last_x0;
      _5_y0_partial = last_y0;
      break;
    default :
      /* this branch is empty */
      break;
  }
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      _10_SM1_fired_partial = outC->SM1_fired_strong;
      _9_SM1_reset_nxt_partial = kcg_false;
      _8_SM1_state_nxt_partial = SSM_st_on_SM1;
      outC->_L27_on_SM1 = outC->Output2_SinCosR_16_float64;
      outC->co_on_SM1 = outC->_L27_on_SM1;
      outC->_L28_on_SM1 = (outC->vLeft_on_SM1 + outC->vRight_on_SM1) /
        kcg_lit_float64(2.);
      outC->v_on_SM1 = outC->_L28_on_SM1;
      outC->_L2_on_SM1 = outC->v_on_SM1 * outC->co_on_SM1;
      outC->_L13_on_SM1 = _6_x0_partial;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      if (SM1_reset_sel) {
        /* SM1:on:_L7=(Utilities::Integrator#5)/ */
        Integrator_reset_Utilities(&outC->Context_Integrator_5);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      /* SM1:on:_L7=(Utilities::Integrator#5)/ */
      Integrator_Utilities(
        outC->_L2_on_SM1,
        TIMESTEP,
        outC->_L13_on_SM1,
        &outC->Context_Integrator_5);
      outC->_L7_on_SM1 = outC->Context_Integrator_5.result;
      outC->_L26_on_SM1 = outC->Output1_SinCosR_16_float64;
      outC->si_on_SM1 = outC->_L26_on_SM1;
      outC->_L5_on_SM1 = outC->v_on_SM1 * outC->si_on_SM1;
      outC->_L4_on_SM1 = _5_y0_partial;
      break;
    default :
      /* this branch is empty */
      break;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_on_SM1 :
      if (SM1_reset_sel) {
        /* SM1:on:_L9=(Utilities::Integrator#4)/ */
        Integrator_reset_Utilities(&outC->Context_Integrator_4);
      }
      break;
    default :
      /* this branch is empty */
      break;
  }
  /* SM1: */
  switch (outC->SM1_state_act) {
    case SSM_st_on_SM1 :
      /* SM1:on:_L9=(Utilities::Integrator#4)/ */
      Integrator_Utilities(
        outC->_L5_on_SM1,
        TIMESTEP,
        outC->_L4_on_SM1,
        &outC->Context_Integrator_4);
      outC->_L9_on_SM1 = outC->Context_Integrator_4.result;
      outC->_L6_on_SM1.x = outC->_L7_on_SM1;
      outC->_L6_on_SM1.y = outC->_L9_on_SM1;
      outC->_L47_on_SM1 = outC->v_on_SM1;
      outC->_L46_on_SM1 = outC->alpha_on_SM1;
      kcg_copy_positionTy(&outC->_L45_on_SM1.position, &outC->_L6_on_SM1);
      outC->_L45_on_SM1.velocity = outC->_L47_on_SM1;
      outC->_L45_on_SM1.heading = outC->_L46_on_SM1;
      tmp[0] = DELTA;
      tmp[1] = kcg_lit_float64(0.);
      /* SM1:on:_L48=(Robot::CarGeometry#2)/ */
      CarGeometry_Robot(&outC->_L45_on_SM1, &tmp, &outC->Context_CarGeometry_2);
      kcg_copy_positionTy(&outC->_L48_on_SM1, &outC->Context_CarGeometry_2.newpos);
      kcg_copy_phaseTy(&outC->_L49_on_SM1, &outC->Context_CarGeometry_2.newphase);
      kcg_copy_positionTy(&_11_noname, &outC->_L48_on_SM1);
      kcg_copy_phaseTy(&_4_RobotPhase_partial, &outC->_L49_on_SM1);
      kcg_copy_phaseTy(&outC->RobotPhase, &_4_RobotPhase_partial);
      outC->y0 = _5_y0_partial;
      outC->x0 = _6_x0_partial;
      outC->alpha0 = _7_alpha0_partial;
      outC->SM1_state_nxt = _8_SM1_state_nxt_partial;
      outC->SM1_reset_nxt = _9_SM1_reset_nxt_partial;
      outC->SM1_fired = _10_SM1_fired_partial;
      break;
    case SSM_st_positionning_SM1 :
      tr_1_guard_positionning_SM1 = top;
      if (tr_1_guard_positionning_SM1) {
        SM1_fired_partial = SSM_TR_positionning_on_1_positionning_SM1;
      }
      else {
        SM1_fired_partial = SSM_TR_no_trans_SM1;
      }
      SM1_reset_nxt_partial = tr_1_guard_positionning_SM1;
      if (tr_1_guard_positionning_SM1) {
        SM1_state_nxt_partial = SSM_st_on_SM1;
      }
      else {
        SM1_state_nxt_partial = SSM_st_positionning_SM1;
      }
      kcg_copy_phaseTy(&outC->_L55_positionning_SM1, InitialPhase);
      kcg_copy_positionTy(
        &outC->_L61_positionning_SM1,
        &outC->_L55_positionning_SM1.position);
      kcg_copy_positionTy(&noname, &outC->_L61_positionning_SM1);
      tmp1[0] = - DELTA;
      tmp1[1] = kcg_lit_float64(0.);
      /* SM1:positionning:_L68=(Robot::CarGeometry#1)/ */
      CarGeometry_Robot(
        &outC->_L55_positionning_SM1,
        &tmp1,
        &outC->Context_CarGeometry_1);
      kcg_copy_positionTy(
        &outC->_L68_positionning_SM1,
        &outC->Context_CarGeometry_1.newpos);
      kcg_copy_phaseTy(
        &outC->_L71_positionning_SM1,
        &outC->Context_CarGeometry_1.newphase);
      kcg_copy_phaseTy(&_2_noname, &outC->_L71_positionning_SM1);
      outC->_L70_positionning_SM1 = outC->_L68_positionning_SM1.x;
      outC->_L69_positionning_SM1 = outC->_L68_positionning_SM1.y;
      outC->_L67_positionning_SM1 = kcg_lit_float64(0.);
      kcg_copy_phaseTy(&outC->_L66_positionning_SM1, &outC->_L55_positionning_SM1);
      if (kcg_true) {
        outC->_L66_positionning_SM1.velocity = outC->_L67_positionning_SM1;
      }
      outC->_L63_positionning_SM1 = outC->_L55_positionning_SM1.heading;
      alpha0_partial = outC->_L63_positionning_SM1;
      kcg_copy_phaseTy(&RobotPhase_partial, &outC->_L66_positionning_SM1);
      outC->_L62_positionning_SM1 = outC->_L55_positionning_SM1.velocity;
      y0_partial = outC->_L69_positionning_SM1;
      _3_noname = outC->_L62_positionning_SM1;
      x0_partial = outC->_L70_positionning_SM1;
      kcg_copy_phaseTy(&outC->RobotPhase, &RobotPhase_partial);
      outC->y0 = y0_partial;
      outC->x0 = x0_partial;
      outC->alpha0 = alpha0_partial;
      outC->SM1_state_nxt = SM1_state_nxt_partial;
      outC->SM1_reset_nxt = SM1_reset_nxt_partial;
      outC->SM1_fired = SM1_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  SM1_reset_prv = outC->SM1_reset_act;
  outC->SM1_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void PhysicalModel_init_Robot(outC_PhysicalModel_Robot *outC)
{
  outC->SM1_fired = SSM_TR_no_trans_SM1;
  outC->SM1_fired_strong = SSM_TR_no_trans_SM1;
  outC->SM1_state_act = SSM_st_positionning_SM1;
  outC->SM1_state_sel = SSM_st_positionning_SM1;
  outC->alpha_on_SM1 = kcg_lit_float64(0.0);
  outC->v_on_SM1 = kcg_lit_float64(0.0);
  outC->co_on_SM1 = kcg_lit_float64(0.0);
  outC->si_on_SM1 = kcg_lit_float64(0.0);
  outC->vLeft_on_SM1 = kcg_lit_float64(0.0);
  outC->vRight_on_SM1 = kcg_lit_float64(0.0);
  outC->_L13_on_SM1 = kcg_lit_float64(0.0);
  outC->_L9_on_SM1 = kcg_lit_float64(0.0);
  outC->_L7_on_SM1 = kcg_lit_float64(0.0);
  outC->_L6_on_SM1.x = kcg_lit_float64(0.0);
  outC->_L6_on_SM1.y = kcg_lit_float64(0.0);
  outC->_L5_on_SM1 = kcg_lit_float64(0.0);
  outC->_L4_on_SM1 = kcg_lit_float64(0.0);
  outC->_L2_on_SM1 = kcg_lit_float64(0.0);
  outC->_L21_on_SM1 = kcg_lit_float64(0.0);
  outC->_L20_on_SM1 = kcg_lit_float64(0.0);
  outC->_L19_on_SM1 = kcg_lit_float64(0.0);
  outC->_L18_on_SM1 = kcg_lit_float64(0.0);
  outC->_L26_on_SM1 = kcg_lit_float64(0.0);
  outC->_L27_on_SM1 = kcg_lit_float64(0.0);
  outC->_L25_on_SM1 = kcg_lit_float64(0.0);
  outC->_L28_on_SM1 = kcg_lit_float64(0.0);
  outC->_L36_on_SM1 = kcg_lit_float64(0.0);
  outC->_L35_on_SM1.left = kcg_lit_float64(0.0);
  outC->_L35_on_SM1.right = kcg_lit_float64(0.0);
  outC->_L34_on_SM1 = kcg_lit_float64(0.0);
  outC->_L33_on_SM1 = kcg_lit_float64(0.0);
  outC->_L32_on_SM1 = kcg_lit_float64(0.0);
  outC->_L30_on_SM1 = kcg_lit_float64(0.0);
  outC->_L31_on_SM1 = kcg_lit_float64(0.0);
  outC->_L29_on_SM1 = kcg_lit_float64(0.0);
  outC->_L45_on_SM1.position.x = kcg_lit_float64(0.0);
  outC->_L45_on_SM1.position.y = kcg_lit_float64(0.0);
  outC->_L45_on_SM1.velocity = kcg_lit_float64(0.0);
  outC->_L45_on_SM1.heading = kcg_lit_float64(0.0);
  outC->_L46_on_SM1 = kcg_lit_float64(0.0);
  outC->_L47_on_SM1 = kcg_lit_float64(0.0);
  outC->_L48_on_SM1.x = kcg_lit_float64(0.0);
  outC->_L48_on_SM1.y = kcg_lit_float64(0.0);
  outC->_L49_on_SM1.position.x = kcg_lit_float64(0.0);
  outC->_L49_on_SM1.position.y = kcg_lit_float64(0.0);
  outC->_L49_on_SM1.velocity = kcg_lit_float64(0.0);
  outC->_L49_on_SM1.heading = kcg_lit_float64(0.0);
  outC->_L61_positionning_SM1.x = kcg_lit_float64(0.0);
  outC->_L61_positionning_SM1.y = kcg_lit_float64(0.0);
  outC->_L62_positionning_SM1 = kcg_lit_float64(0.0);
  outC->_L63_positionning_SM1 = kcg_lit_float64(0.0);
  outC->_L55_positionning_SM1.position.x = kcg_lit_float64(0.0);
  outC->_L55_positionning_SM1.position.y = kcg_lit_float64(0.0);
  outC->_L55_positionning_SM1.velocity = kcg_lit_float64(0.0);
  outC->_L55_positionning_SM1.heading = kcg_lit_float64(0.0);
  outC->_L66_positionning_SM1.position.x = kcg_lit_float64(0.0);
  outC->_L66_positionning_SM1.position.y = kcg_lit_float64(0.0);
  outC->_L66_positionning_SM1.velocity = kcg_lit_float64(0.0);
  outC->_L66_positionning_SM1.heading = kcg_lit_float64(0.0);
  outC->_L67_positionning_SM1 = kcg_lit_float64(0.0);
  outC->_L68_positionning_SM1.x = kcg_lit_float64(0.0);
  outC->_L68_positionning_SM1.y = kcg_lit_float64(0.0);
  outC->_L70_positionning_SM1 = kcg_lit_float64(0.0);
  outC->_L69_positionning_SM1 = kcg_lit_float64(0.0);
  outC->_L71_positionning_SM1.position.x = kcg_lit_float64(0.0);
  outC->_L71_positionning_SM1.position.y = kcg_lit_float64(0.0);
  outC->_L71_positionning_SM1.velocity = kcg_lit_float64(0.0);
  outC->_L71_positionning_SM1.heading = kcg_lit_float64(0.0);
  outC->_L1_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->_L2_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->_L3_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->Input1_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->Output1_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->Output2_SinCosR_16_float64 = kcg_lit_float64(0.0);
  outC->alpha0 = kcg_lit_float64(0.0);
  outC->x0 = kcg_lit_float64(0.0);
  outC->y0 = kcg_lit_float64(0.0);
  outC->RobotPhase.position.x = kcg_lit_float64(0.0);
  outC->RobotPhase.position.y = kcg_lit_float64(0.0);
  outC->RobotPhase.velocity = kcg_lit_float64(0.0);
  outC->RobotPhase.heading = kcg_lit_float64(0.0);
  /* SM1:positionning:_L68=(Robot::CarGeometry#1)/ */
  CarGeometry_init_Robot(&outC->Context_CarGeometry_1);
  /* SM1:on:_L48=(Robot::CarGeometry#2)/ */
  CarGeometry_init_Robot(&outC->Context_CarGeometry_2);
  /* SM1:on:_L9=(Utilities::Integrator#4)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_4);
  /* SM1:on:_L7=(Utilities::Integrator#5)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_5);
  /* SM1:on:_L20=(Utilities::Normalize#3)/ */
  Normalize_init_Utilities(&outC->Context_Normalize_3);
  /* SM1:on:_L21=(Utilities::Integrator#7)/ */
  Integrator_init_Utilities(&outC->Context_Integrator_7);
  /* SM1:on:_L36=(Utilities::Bound#3)/ */
  Bound_init_Utilities(&outC->Context_Bound_3);
  /* SM1:on:_L29=(Utilities::Bound#4)/ */
  Bound_init_Utilities(&outC->Context_Bound_4);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_positionning_SM1;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void PhysicalModel_reset_Robot(outC_PhysicalModel_Robot *outC)
{
  /* SM1:positionning:_L68=(Robot::CarGeometry#1)/ */
  CarGeometry_reset_Robot(&outC->Context_CarGeometry_1);
  /* SM1:on:_L48=(Robot::CarGeometry#2)/ */
  CarGeometry_reset_Robot(&outC->Context_CarGeometry_2);
  /* SM1:on:_L9=(Utilities::Integrator#4)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_4);
  /* SM1:on:_L7=(Utilities::Integrator#5)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_5);
  /* SM1:on:_L20=(Utilities::Normalize#3)/ */
  Normalize_reset_Utilities(&outC->Context_Normalize_3);
  /* SM1:on:_L21=(Utilities::Integrator#7)/ */
  Integrator_reset_Utilities(&outC->Context_Integrator_7);
  /* SM1:on:_L36=(Utilities::Bound#3)/ */
  Bound_reset_Utilities(&outC->Context_Bound_3);
  /* SM1:on:_L29=(Utilities::Bound#4)/ */
  Bound_reset_Utilities(&outC->Context_Bound_4);
  outC->SM1_reset_act = kcg_false;
  outC->SM1_reset_nxt = kcg_false;
  outC->SM1_state_nxt = SSM_st_positionning_SM1;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Robot::PhysicalModel/
  @1: (mathext::SinCosR#16)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PhysicalModel_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

