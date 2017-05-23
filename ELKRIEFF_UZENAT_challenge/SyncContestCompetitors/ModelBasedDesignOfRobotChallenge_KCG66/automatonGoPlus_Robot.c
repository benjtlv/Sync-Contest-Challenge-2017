/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "automatonGoPlus_Robot.h"

/* Robot::automatonGoPlus/ */
void automatonGoPlus_Robot(
  /* val/ */
  kcg_float64 val,
  /* color/ */
  colorTy *color,
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_automatonGoPlus_Robot *outC)
{
  /* speedL/ */
  kcg_float64 speedL_partial;
  /* speedR/ */
  kcg_float64 speedR_partial;
  /* goPlus: */
  SSM_ST_goPlus goPlus_state_nxt_partial;
  /* goPlus: */
  kcg_bool goPlus_reset_nxt_partial;
  /* goPlus: */
  SSM_TR_goPlus goPlus_fired_partial;
  /* speedL/ */
  kcg_float64 _1_speedL_partial;
  /* speedR/ */
  kcg_float64 _2_speedR_partial;
  /* goPlus: */
  SSM_ST_goPlus _3_goPlus_state_nxt_partial;
  /* goPlus: */
  kcg_bool _4_goPlus_reset_nxt_partial;
  /* goPlus: */
  SSM_TR_goPlus _5_goPlus_fired_partial;
  /* speedL/ */
  kcg_float64 _6_speedL_partial;
  /* speedR/ */
  kcg_float64 _7_speedR_partial;
  /* goPlus: */
  SSM_ST_goPlus _8_goPlus_state_nxt_partial;
  /* goPlus: */
  kcg_bool _9_goPlus_reset_nxt_partial;
  /* goPlus: */
  SSM_TR_goPlus _10_goPlus_fired_partial;
  /* goPlus: */
  SSM_ST_goPlus goPlus_state_act_partial;
  /* goPlus: */
  kcg_bool goPlus_reset_act_partial;
  /* goPlus: */
  SSM_TR_goPlus goPlus_fired_strong_partial;
  /* goPlus:go:<2> */
  kcg_bool tr_2_guard_go_goPlus;
  /* goPlus:go:<1> */
  kcg_bool tr_1_guard_go_goPlus;
  /* goPlus: */
  SSM_ST_goPlus _11_goPlus_state_act_partial;
  /* goPlus: */
  kcg_bool _12_goPlus_reset_act_partial;
  /* goPlus: */
  SSM_TR_goPlus _13_goPlus_fired_strong_partial;
  /* goPlus:stopCat:<1> */
  kcg_bool tr_1_guard_stopCat_goPlus;
  /* goPlus: */
  SSM_ST_goPlus _14_goPlus_state_act_partial;
  /* goPlus: */
  kcg_bool _15_goPlus_reset_act_partial;
  /* goPlus: */
  SSM_TR_goPlus _16_goPlus_fired_strong_partial;
  /* goPlus:stopLight:<1> */
  kcg_bool tr_1_guard_stopLight_goPlus;
  /* goPlus: */
  kcg_bool goPlus_reset_sel;
  /* goPlus: */
  kcg_bool goPlus_reset_prv;

  kcg_copy_colorTy(&outC->_L3, color);
  /* _L4=(Robot::isRed#1)/ */ isRed_Robot(&outC->_L3, &outC->Context_isRed_1);
  outC->_L4 = outC->Context_isRed_1.is_red;
  outC->isRed = outC->_L4;
  kcg_copy_colorTy(&outC->_L2, frontColor);
  /* _L1=(Robot::isGreen#2)/ */
  isGreen_Robot(&outC->_L2, &outC->Context_isGreen_2);
  outC->_L1 = outC->Context_isGreen_2.is_green;
  outC->isGreen = outC->_L1;
  outC->goPlus_state_sel = outC->goPlus_state_nxt;
  /* goPlus: */
  switch (outC->goPlus_state_sel) {
    case SSM_st_stopLight_goPlus :
      tr_1_guard_stopLight_goPlus = outC->isGreen | kcg_comp_colorTy(
          frontColor,
          (colorTy *) &GRAY);
      if (tr_1_guard_stopLight_goPlus) {
        _14_goPlus_state_act_partial = SSM_st_go_goPlus;
      }
      else {
        _14_goPlus_state_act_partial = SSM_st_stopLight_goPlus;
      }
      outC->goPlus_state_act = _14_goPlus_state_act_partial;
      if (tr_1_guard_stopLight_goPlus) {
        _16_goPlus_fired_strong_partial = SSM_TR_stopLight_go_1_stopLight_goPlus;
      }
      else {
        _16_goPlus_fired_strong_partial = SSM_TR_no_trans_goPlus;
      }
      outC->goPlus_fired_strong = _16_goPlus_fired_strong_partial;
      break;
    case SSM_st_stopCat_goPlus :
      tr_1_guard_stopCat_goPlus = sonar > LIMSONAR;
      if (tr_1_guard_stopCat_goPlus) {
        _11_goPlus_state_act_partial = SSM_st_go_goPlus;
      }
      else {
        _11_goPlus_state_act_partial = SSM_st_stopCat_goPlus;
      }
      outC->goPlus_state_act = _11_goPlus_state_act_partial;
      if (tr_1_guard_stopCat_goPlus) {
        _13_goPlus_fired_strong_partial = SSM_TR_stopCat_go_1_stopCat_goPlus;
      }
      else {
        _13_goPlus_fired_strong_partial = SSM_TR_no_trans_goPlus;
      }
      outC->goPlus_fired_strong = _13_goPlus_fired_strong_partial;
      break;
    case SSM_st_go_goPlus :
      tr_2_guard_go_goPlus = outC->isRed;
      tr_1_guard_go_goPlus = sonar < LIMSONAR;
      if (tr_1_guard_go_goPlus) {
        goPlus_state_act_partial = SSM_st_stopCat_goPlus;
      }
      else if (tr_2_guard_go_goPlus) {
        goPlus_state_act_partial = SSM_st_stopLight_goPlus;
      }
      else {
        goPlus_state_act_partial = SSM_st_go_goPlus;
      }
      outC->goPlus_state_act = goPlus_state_act_partial;
      if (tr_1_guard_go_goPlus) {
        goPlus_fired_strong_partial = SSM_TR_go_stopCat_1_go_goPlus;
      }
      else if (tr_2_guard_go_goPlus) {
        goPlus_fired_strong_partial = SSM_TR_go_stopLight_2_go_goPlus;
      }
      else {
        goPlus_fired_strong_partial = SSM_TR_no_trans_goPlus;
      }
      outC->goPlus_fired_strong = goPlus_fired_strong_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  switch (outC->goPlus_state_act) {
    case SSM_st_stopLight_goPlus :
      _10_goPlus_fired_partial = outC->goPlus_fired_strong;
      _9_goPlus_reset_nxt_partial = kcg_false;
      _8_goPlus_state_nxt_partial = SSM_st_stopLight_goPlus;
      outC->_L1_stopLight_goPlus = kcg_lit_float64(0.);
      _7_speedR_partial = outC->_L1_stopLight_goPlus;
      _6_speedL_partial = outC->_L1_stopLight_goPlus;
      break;
    case SSM_st_stopCat_goPlus :
      _5_goPlus_fired_partial = outC->goPlus_fired_strong;
      _4_goPlus_reset_nxt_partial = kcg_false;
      _3_goPlus_state_nxt_partial = SSM_st_stopCat_goPlus;
      outC->_L1_stopCat_goPlus = kcg_lit_float64(0.);
      _2_speedR_partial = outC->_L1_stopCat_goPlus;
      _1_speedL_partial = outC->_L1_stopCat_goPlus;
      break;
    case SSM_st_go_goPlus :
      goPlus_fired_partial = outC->goPlus_fired_strong;
      goPlus_reset_nxt_partial = kcg_false;
      goPlus_state_nxt_partial = SSM_st_go_goPlus;
      kcg_copy_colorTy(&outC->_L2_go_goPlus, color);
      outC->_L1_go_goPlus = val;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  goPlus_reset_prv = outC->goPlus_reset_act;
  /* goPlus: */
  switch (outC->goPlus_state_sel) {
    case SSM_st_stopLight_goPlus :
      _15_goPlus_reset_act_partial = tr_1_guard_stopLight_goPlus;
      outC->goPlus_reset_act = _15_goPlus_reset_act_partial;
      break;
    case SSM_st_stopCat_goPlus :
      _12_goPlus_reset_act_partial = tr_1_guard_stopCat_goPlus;
      outC->goPlus_reset_act = _12_goPlus_reset_act_partial;
      break;
    case SSM_st_go_goPlus :
      if (tr_1_guard_go_goPlus) {
        goPlus_reset_act_partial = kcg_true;
      }
      else {
        goPlus_reset_act_partial = tr_2_guard_go_goPlus;
      }
      outC->goPlus_reset_act = goPlus_reset_act_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* goPlus: */
  switch (outC->goPlus_state_act) {
    case SSM_st_stopLight_goPlus :
      outC->speedL = _6_speedL_partial;
      outC->speedR = _7_speedR_partial;
      outC->goPlus_state_nxt = _8_goPlus_state_nxt_partial;
      break;
    case SSM_st_stopCat_goPlus :
      outC->speedL = _1_speedL_partial;
      outC->speedR = _2_speedR_partial;
      outC->goPlus_state_nxt = _3_goPlus_state_nxt_partial;
      break;
    case SSM_st_go_goPlus :
      if (outC->goPlus_reset_act) {
        /* goPlus:go:_L18=(Robot::ComputeWheels#3)/ */
        ComputeWheels_reset_Robot(&outC->Context_ComputeWheels_3);
      }
      /* goPlus:go:_L18=(Robot::ComputeWheels#3)/ */
      ComputeWheels_Robot(
        &outC->_L2_go_goPlus,
        outC->_L1_go_goPlus,
        &outC->Context_ComputeWheels_3);
      kcg_copy_wheelsTy_Robot(
        &outC->_L18_go_goPlus,
        &outC->Context_ComputeWheels_3.wheels);
      outC->_L16_go_goPlus = outC->_L18_go_goPlus.left;
      outC->_L15_go_goPlus = outC->_L18_go_goPlus.right;
      speedR_partial = outC->_L15_go_goPlus;
      speedL_partial = outC->_L16_go_goPlus;
      outC->speedL = speedL_partial;
      outC->speedR = speedR_partial;
      outC->goPlus_state_nxt = goPlus_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  goPlus_reset_sel = outC->goPlus_reset_nxt;
  /* goPlus: */
  switch (outC->goPlus_state_act) {
    case SSM_st_stopLight_goPlus :
      outC->goPlus_reset_nxt = _9_goPlus_reset_nxt_partial;
      outC->goPlus_fired = _10_goPlus_fired_partial;
      break;
    case SSM_st_stopCat_goPlus :
      outC->goPlus_reset_nxt = _4_goPlus_reset_nxt_partial;
      outC->goPlus_fired = _5_goPlus_fired_partial;
      break;
    case SSM_st_go_goPlus :
      outC->goPlus_reset_nxt = goPlus_reset_nxt_partial;
      outC->goPlus_fired = goPlus_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void automatonGoPlus_init_Robot(outC_automatonGoPlus_Robot *outC)
{
  outC->_L4 = kcg_true;
  outC->_L3.red = kcg_lit_uint8(0);
  outC->_L3.green = kcg_lit_uint8(0);
  outC->_L3.blue = kcg_lit_uint8(0);
  outC->_L1 = kcg_true;
  outC->_L2.red = kcg_lit_uint8(0);
  outC->_L2.green = kcg_lit_uint8(0);
  outC->_L2.blue = kcg_lit_uint8(0);
  outC->isRed = kcg_true;
  outC->isGreen = kcg_true;
  outC->goPlus_fired = SSM_TR_no_trans_goPlus;
  outC->goPlus_fired_strong = SSM_TR_no_trans_goPlus;
  outC->goPlus_state_act = SSM_st_go_goPlus;
  outC->goPlus_state_sel = SSM_st_go_goPlus;
  outC->_L1_stopLight_goPlus = kcg_lit_float64(0.0);
  outC->_L1_stopCat_goPlus = kcg_lit_float64(0.0);
  outC->_L1_go_goPlus = kcg_lit_float64(0.0);
  outC->_L2_go_goPlus.red = kcg_lit_uint8(0);
  outC->_L2_go_goPlus.green = kcg_lit_uint8(0);
  outC->_L2_go_goPlus.blue = kcg_lit_uint8(0);
  outC->_L16_go_goPlus = kcg_lit_float64(0.0);
  outC->_L15_go_goPlus = kcg_lit_float64(0.0);
  outC->_L18_go_goPlus.left = kcg_lit_float64(0.0);
  outC->_L18_go_goPlus.right = kcg_lit_float64(0.0);
  outC->speedR = kcg_lit_float64(0.0);
  outC->speedL = kcg_lit_float64(0.0);
  /* goPlus:go:_L18=(Robot::ComputeWheels#3)/ */
  ComputeWheels_init_Robot(&outC->Context_ComputeWheels_3);
  /* _L1=(Robot::isGreen#2)/ */ isGreen_init_Robot(&outC->Context_isGreen_2);
  /* _L4=(Robot::isRed#1)/ */ isRed_init_Robot(&outC->Context_isRed_1);
  outC->goPlus_reset_nxt = kcg_false;
  outC->goPlus_reset_act = kcg_false;
  outC->goPlus_state_nxt = SSM_st_go_goPlus;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void automatonGoPlus_reset_Robot(outC_automatonGoPlus_Robot *outC)
{
  /* goPlus:go:_L18=(Robot::ComputeWheels#3)/ */
  ComputeWheels_reset_Robot(&outC->Context_ComputeWheels_3);
  /* _L1=(Robot::isGreen#2)/ */ isGreen_reset_Robot(&outC->Context_isGreen_2);
  /* _L4=(Robot::isRed#1)/ */ isRed_reset_Robot(&outC->Context_isRed_1);
  outC->goPlus_reset_nxt = kcg_false;
  outC->goPlus_reset_act = kcg_false;
  outC->goPlus_state_nxt = SSM_st_go_goPlus;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonGoPlus_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

