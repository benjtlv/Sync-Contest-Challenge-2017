/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Driver_Robot.h"

/* Robot::Driver/ */
void Driver_Robot(
  /* top/ */
  kcg_bool top,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  /* Interrupt/ */
  interTy Interrupt,
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  outC_Driver_Robot *outC)
{
  /* RotationalSpeed/ */
  wheelsTy_Robot RotationalSpeed_partial;
  /* RobotStatus/ */
  statusTy RobotStatus_partial;
  /* Robot: */
  SSM_ST_Robot Robot_state_nxt_partial;
  /* Robot: */
  kcg_bool Robot_reset_nxt_partial;
  /* Robot: */
  SSM_TR_Robot Robot_fired_partial;
  /* Robot:Preparing:<1> */
  kcg_bool tr_1_guard_Preparing_Robot;
  /* RotationalSpeed/ */
  wheelsTy_Robot _1_RotationalSpeed_partial;
  /* RobotStatus/ */
  statusTy _2_RobotStatus_partial;
  /* Robot: */
  SSM_ST_Robot _3_Robot_state_nxt_partial;
  /* Robot: */
  kcg_bool _4_Robot_reset_nxt_partial;
  /* Robot: */
  SSM_TR_Robot _5_Robot_fired_partial;
  /* Robot:Running:<2> */
  kcg_bool tr_2_guard_Running_Robot;
  /* Robot:Running:<1> */
  kcg_bool tr_1_guard_Running_Robot;
  /* RotationalSpeed/ */
  wheelsTy_Robot _6_RotationalSpeed_partial;
  /* RobotStatus/ */
  statusTy _7_RobotStatus_partial;
  /* Robot: */
  SSM_ST_Robot _8_Robot_state_nxt_partial;
  /* Robot: */
  kcg_bool _9_Robot_reset_nxt_partial;
  /* Robot: */
  SSM_TR_Robot _10_Robot_fired_partial;
  /* RotationalSpeed/ */
  wheelsTy_Robot _11_RotationalSpeed_partial;
  /* RobotStatus/ */
  statusTy _12_RobotStatus_partial;
  /* Robot: */
  SSM_ST_Robot _13_Robot_state_nxt_partial;
  /* Robot: */
  kcg_bool _14_Robot_reset_nxt_partial;
  /* Robot: */
  SSM_TR_Robot _15_Robot_fired_partial;
  /* Robot: */
  kcg_bool Robot_reset_sel;
  /* Robot: */
  kcg_bool Robot_reset_prv;

  kcg_copy_itiElemArr_Robot(&outC->_L12, Itinerary);
  kcg_copy_sensorsTy(&outC->_L13, SensorsData);
  /* _L16=(Robot::actionArrayOnWheels#2)/ */
  actionArrayOnWheels_Robot(
    &outC->_L12,
    &outC->_L13,
    &outC->Context_actionArrayOnWheels_2);
  outC->_L16 = outC->Context_actionArrayOnWheels_2.speedL;
  outC->_L17 = outC->Context_actionArrayOnWheels_2.speedR;
  outC->_L11.left = outC->_L16;
  outC->_L11.right = outC->_L17;
  kcg_copy_wheelsTy_Robot(&outC->zero, &outC->_L11);
  outC->Robot_state_sel = outC->Robot_state_nxt;
  outC->Robot_state_act = outC->Robot_state_sel;
  outC->Robot_fired_strong = SSM_TR_no_trans_Robot;
  /* Robot: */
  switch (outC->Robot_state_act) {
    case SSM_st_Stopped_Robot :
      _15_Robot_fired_partial = outC->Robot_fired_strong;
      _14_Robot_reset_nxt_partial = kcg_false;
      _13_Robot_state_nxt_partial = SSM_st_Stopped_Robot;
      kcg_copy_wheelsTy_Robot(&outC->_L5_Stopped_Robot, &outC->zero);
      kcg_copy_wheelsTy_Robot(&_11_RotationalSpeed_partial, &outC->_L5_Stopped_Robot);
      outC->_L1_Stopped_Robot = Stopped;
      _12_RobotStatus_partial = outC->_L1_Stopped_Robot;
      kcg_copy_wheelsTy_Robot(&outC->RotationalSpeed, &_11_RotationalSpeed_partial);
      outC->RobotStatus = _12_RobotStatus_partial;
      outC->Robot_state_nxt = _13_Robot_state_nxt_partial;
      break;
    case SSM_st_Arrived_Robot :
      _10_Robot_fired_partial = outC->Robot_fired_strong;
      _9_Robot_reset_nxt_partial = kcg_false;
      _8_Robot_state_nxt_partial = SSM_st_Arrived_Robot;
      kcg_copy_wheelsTy_Robot(&outC->_L11_Arrived_Robot, &outC->zero);
      kcg_copy_wheelsTy_Robot(&_6_RotationalSpeed_partial, &outC->_L11_Arrived_Robot);
      outC->_L1_Arrived_Robot = Arrived;
      _7_RobotStatus_partial = outC->_L1_Arrived_Robot;
      kcg_copy_wheelsTy_Robot(&outC->RotationalSpeed, &_6_RotationalSpeed_partial);
      outC->RobotStatus = _7_RobotStatus_partial;
      outC->Robot_state_nxt = _8_Robot_state_nxt_partial;
      break;
    case SSM_st_Running_Robot :
      outC->_L8_Running_Robot = kcg_false;
      outC->arriving_Running_Robot = outC->_L8_Running_Robot;
      tr_2_guard_Running_Robot = outC->arriving_Running_Robot;
      tr_1_guard_Running_Robot = Interrupt == haltVal;
      if (tr_1_guard_Running_Robot) {
        _5_Robot_fired_partial = SSM_TR_Running_Stopped_1_Running_Robot;
      }
      else if (tr_2_guard_Running_Robot) {
        _5_Robot_fired_partial = SSM_TR_Running_Arrived_2_Running_Robot;
      }
      else {
        _5_Robot_fired_partial = SSM_TR_no_trans_Robot;
      }
      if (tr_1_guard_Running_Robot) {
        _4_Robot_reset_nxt_partial = kcg_true;
      }
      else {
        _4_Robot_reset_nxt_partial = tr_2_guard_Running_Robot;
      }
      if (tr_1_guard_Running_Robot) {
        _3_Robot_state_nxt_partial = SSM_st_Stopped_Robot;
      }
      else if (tr_2_guard_Running_Robot) {
        _3_Robot_state_nxt_partial = SSM_st_Arrived_Robot;
      }
      else {
        _3_Robot_state_nxt_partial = SSM_st_Running_Robot;
      }
      kcg_copy_wheelsTy_Robot(&outC->_L9_Running_Robot, &outC->zero);
      kcg_copy_wheelsTy_Robot(&_1_RotationalSpeed_partial, &outC->_L9_Running_Robot);
      outC->_L3_Running_Robot = Running;
      _2_RobotStatus_partial = outC->_L3_Running_Robot;
      kcg_copy_wheelsTy_Robot(&outC->RotationalSpeed, &_1_RotationalSpeed_partial);
      outC->RobotStatus = _2_RobotStatus_partial;
      outC->Robot_state_nxt = _3_Robot_state_nxt_partial;
      break;
    case SSM_st_Preparing_Robot :
      tr_1_guard_Preparing_Robot = top;
      if (tr_1_guard_Preparing_Robot) {
        Robot_fired_partial = SSM_TR_Preparing_Running_1_Preparing_Robot;
      }
      else {
        Robot_fired_partial = SSM_TR_no_trans_Robot;
      }
      Robot_reset_nxt_partial = tr_1_guard_Preparing_Robot;
      if (tr_1_guard_Preparing_Robot) {
        Robot_state_nxt_partial = SSM_st_Running_Robot;
      }
      else {
        Robot_state_nxt_partial = SSM_st_Preparing_Robot;
      }
      kcg_copy_wheelsTy_Robot(&outC->_L11_Preparing_Robot, &outC->zero);
      kcg_copy_wheelsTy_Robot(&RotationalSpeed_partial, &outC->_L11_Preparing_Robot);
      outC->_L1_Preparing_Robot = Preparing;
      RobotStatus_partial = outC->_L1_Preparing_Robot;
      kcg_copy_wheelsTy_Robot(&outC->RotationalSpeed, &RotationalSpeed_partial);
      outC->RobotStatus = RobotStatus_partial;
      outC->Robot_state_nxt = Robot_state_nxt_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Robot_reset_sel = outC->Robot_reset_nxt;
  /* Robot: */
  switch (outC->Robot_state_act) {
    case SSM_st_Stopped_Robot :
      outC->Robot_reset_nxt = _14_Robot_reset_nxt_partial;
      outC->Robot_fired = _15_Robot_fired_partial;
      break;
    case SSM_st_Arrived_Robot :
      outC->Robot_reset_nxt = _9_Robot_reset_nxt_partial;
      outC->Robot_fired = _10_Robot_fired_partial;
      break;
    case SSM_st_Running_Robot :
      outC->Robot_reset_nxt = _4_Robot_reset_nxt_partial;
      outC->Robot_fired = _5_Robot_fired_partial;
      break;
    case SSM_st_Preparing_Robot :
      outC->Robot_reset_nxt = Robot_reset_nxt_partial;
      outC->Robot_fired = Robot_fired_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Robot_reset_prv = outC->Robot_reset_act;
  outC->Robot_reset_act = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void Driver_init_Robot(outC_Driver_Robot *outC)
{
  kcg_size idx;

  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L13.roadColor.red = kcg_lit_uint8(0);
  outC->_L13.roadColor.green = kcg_lit_uint8(0);
  outC->_L13.roadColor.blue = kcg_lit_uint8(0);
  outC->_L13.frontColor.red = kcg_lit_uint8(0);
  outC->_L13.frontColor.green = kcg_lit_uint8(0);
  outC->_L13.frontColor.blue = kcg_lit_uint8(0);
  outC->_L13.sonar = kcg_lit_int32(0);
  for (idx = 0; idx < 50; idx++) {
    outC->_L12[idx].action = go_Robot;
    outC->_L12[idx].param = kcg_lit_float64(0.0);
  }
  outC->_L11.left = kcg_lit_float64(0.0);
  outC->_L11.right = kcg_lit_float64(0.0);
  outC->zero.left = kcg_lit_float64(0.0);
  outC->zero.right = kcg_lit_float64(0.0);
  outC->Robot_fired = SSM_TR_no_trans_Robot;
  outC->Robot_fired_strong = SSM_TR_no_trans_Robot;
  outC->Robot_state_act = SSM_st_Preparing_Robot;
  outC->Robot_state_sel = SSM_st_Preparing_Robot;
  outC->_L1_Stopped_Robot = Preparing;
  outC->_L5_Stopped_Robot.left = kcg_lit_float64(0.0);
  outC->_L5_Stopped_Robot.right = kcg_lit_float64(0.0);
  outC->_L1_Arrived_Robot = Preparing;
  outC->_L11_Arrived_Robot.left = kcg_lit_float64(0.0);
  outC->_L11_Arrived_Robot.right = kcg_lit_float64(0.0);
  outC->arriving_Running_Robot = kcg_true;
  outC->_L3_Running_Robot = Preparing;
  outC->_L8_Running_Robot = kcg_true;
  outC->_L9_Running_Robot.left = kcg_lit_float64(0.0);
  outC->_L9_Running_Robot.right = kcg_lit_float64(0.0);
  outC->_L1_Preparing_Robot = Preparing;
  outC->_L11_Preparing_Robot.left = kcg_lit_float64(0.0);
  outC->_L11_Preparing_Robot.right = kcg_lit_float64(0.0);
  outC->RobotStatus = Preparing;
  outC->RotationalSpeed.left = kcg_lit_float64(0.0);
  outC->RotationalSpeed.right = kcg_lit_float64(0.0);
  /* _L16=(Robot::actionArrayOnWheels#2)/ */
  actionArrayOnWheels_init_Robot(&outC->Context_actionArrayOnWheels_2);
  outC->Robot_reset_act = kcg_false;
  outC->Robot_reset_nxt = kcg_false;
  outC->Robot_state_nxt = SSM_st_Preparing_Robot;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Driver_reset_Robot(outC_Driver_Robot *outC)
{
  /* _L16=(Robot::actionArrayOnWheels#2)/ */
  actionArrayOnWheels_reset_Robot(&outC->Context_actionArrayOnWheels_2);
  outC->Robot_reset_act = kcg_false;
  outC->Robot_reset_nxt = kcg_false;
  outC->Robot_state_nxt = SSM_st_Preparing_Robot;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Driver_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

