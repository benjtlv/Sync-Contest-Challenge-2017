/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-17T14:31:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "automatonGo_Robot.h"

/* Robot::automatonGo/ */
void automatonGo_Robot(
  /* val/ */
  kcg_float64 val,
  /* _L19/, color/ */
  colorTy *color,
  outC_automatonGo_Robot *outC)
{
  /* @1/_/v4/ */
  kcg_size v4_times_1_size;
  /* @2/_/v4/ */
  kcg_size v4_times_3_size;
  /* go:cyan:_L30/ */
  kcg_float64 _L30_cyan_go;
  /* go:magenta:_L28/ */
  kcg_float64 _L28_magenta_go;
  /* go:run:<2> */
  kcg_bool tr_2_guard_run_go;
  /* go:run:<1> */
  kcg_bool tr_1_guard_run_go;
  /* go: */
  SSM_ST_go go_state_act;

  /* go: */
  switch (outC->go_state_nxt) {
    case SSM_st_correctCyan_go :
      if (outC->go_reset_act) {
        outC->init = kcg_true;
      }
      /* @2/_/v4= */
      if (outC->init) {
        v4_times_3_size = 5;
      }
      else {
        v4_times_3_size = outC->v3_times_3_size;
      }
      /* @2/_/v3= */
      if (v4_times_3_size < 0) {
        outC->v3_times_3_size = v4_times_3_size;
      }
      else {
        outC->v3_times_3_size = v4_times_3_size - 1;
      }
      outC->go_reset_act = outC->v3_times_3_size == 0;
      if (outC->go_reset_act) {
        go_state_act = SSM_st_run_go;
      }
      else {
        go_state_act = SSM_st_correctCyan_go;
      }
      outC->init = kcg_false;
      break;
    case SSM_st_correctMagenta_go :
      if (outC->go_reset_act) {
        outC->init1 = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init1) {
        v4_times_1_size = 5;
      }
      else {
        v4_times_1_size = outC->v3_times_1_size;
      }
      /* @1/_/v3= */
      if (v4_times_1_size < 0) {
        outC->v3_times_1_size = v4_times_1_size;
      }
      else {
        outC->v3_times_1_size = v4_times_1_size - 1;
      }
      outC->go_reset_act = outC->v3_times_1_size == 0;
      if (outC->go_reset_act) {
        go_state_act = SSM_st_run_go;
      }
      else {
        go_state_act = SSM_st_correctMagenta_go;
      }
      outC->init1 = kcg_false;
      break;
    case SSM_st_magenta_go :
      outC->go_reset_act = (*color).red < kcg_lit_uint8(2);
      if (outC->go_reset_act) {
        go_state_act = SSM_st_correctMagenta_go;
      }
      else {
        go_state_act = SSM_st_magenta_go;
      }
      break;
    case SSM_st_cyan_go :
      outC->go_reset_act = (*color).green < kcg_lit_uint8(2);
      if (outC->go_reset_act) {
        go_state_act = SSM_st_correctCyan_go;
      }
      else {
        go_state_act = SSM_st_cyan_go;
      }
      break;
    case SSM_st_run_go :
      tr_2_guard_run_go = ((*color).red >= kcg_lit_uint8(2)) | kcg_comp_colorTy(
          color,
          (colorTy *) &GRAY);
      tr_1_guard_run_go = ((*color).green >= kcg_lit_uint8(2)) |
        kcg_comp_colorTy(color, (colorTy *) &GRAY);
      if (tr_1_guard_run_go) {
        go_state_act = SSM_st_cyan_go;
      }
      else if (tr_2_guard_run_go) {
        go_state_act = SSM_st_magenta_go;
      }
      else {
        go_state_act = SSM_st_run_go;
      }
      outC->go_reset_act = tr_1_guard_run_go | tr_2_guard_run_go;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* go: */
  switch (go_state_act) {
    case SSM_st_correctCyan_go :
      outC->speedL = val - kcg_lit_float64(10.);
      outC->speedR = val + kcg_lit_float64(10.);
      outC->go_state_nxt = SSM_st_correctCyan_go;
      break;
    case SSM_st_correctMagenta_go :
      outC->speedL = val + kcg_lit_float64(10.);
      outC->speedR = val - kcg_lit_float64(10.);
      outC->go_state_nxt = SSM_st_correctMagenta_go;
      break;
    case SSM_st_magenta_go :
      _L28_magenta_go = /* go:magenta:_L24=(Utilities::CompareColors#1)/ */
        CompareColors_Utilities(color, (colorTy *) &MAGENTA) * kcg_lit_float64(
          5.);
      outC->speedL = val - _L28_magenta_go;
      outC->speedR = val + _L28_magenta_go;
      outC->go_state_nxt = SSM_st_magenta_go;
      break;
    case SSM_st_cyan_go :
      _L30_cyan_go = /* go:cyan:_L27=(Utilities::CompareColors#2)/ */
        CompareColors_Utilities(color, (colorTy *) &CYAN) * kcg_lit_float64(5.);
      outC->speedL = val + _L30_cyan_go;
      outC->speedR = val - _L30_cyan_go;
      outC->go_state_nxt = SSM_st_cyan_go;
      break;
    case SSM_st_run_go :
      outC->speedL = val;
      outC->speedR = val;
      outC->go_state_nxt = SSM_st_run_go;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void automatonGo_init_Robot(outC_automatonGo_Robot *outC)
{
  outC->go_reset_act = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->v3_times_3_size = 0;
  outC->v3_times_1_size = 0;
  outC->speedR = kcg_lit_float64(0.0);
  outC->speedL = kcg_lit_float64(0.0);
  outC->go_state_nxt = SSM_st_run_go;
}
#endif /* KCG_USER_DEFINED_INIT */


void automatonGo_reset_Robot(outC_automatonGo_Robot *outC)
{
  outC->go_reset_act = kcg_false;
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->go_state_nxt = SSM_st_run_go;
}

/*
  Expanded instances for: Robot::automatonGo/
  @2: (times#3)
  @1: (times#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonGo_Robot.c
** Generation date: 2017-01-17T14:31:08
*************************************************************$ */

