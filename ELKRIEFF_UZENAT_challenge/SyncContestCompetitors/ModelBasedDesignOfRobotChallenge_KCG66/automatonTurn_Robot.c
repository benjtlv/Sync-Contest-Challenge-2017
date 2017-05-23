/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-17T17:12:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "automatonTurn_Robot.h"

/* Robot::automatonTurn/ */
void automatonTurn_Robot(
  /* _L2/, _L6/, val/ */
  kcg_float64 val,
  outC_automatonTurn_Robot *outC)
{
  /* turn: */
  SSM_ST_turn turn_state_act;
  /* turn:run:IfBlock1: */
  kcg_bool IfBlock1_clock_run_turn;
  /* @1/_/v4/ */
  kcg_int32 v4_times_4_int32;

  /* turn: */
  switch (outC->turn_state_nxt) {
    case SSM_st_finTurnFalse_turn :
      turn_state_act = SSM_st_run_turn;
      outC->turn_reset_act = kcg_true;
      break;
    case SSM_st_stop_turn :
      turn_state_act = SSM_st_finTurnFalse_turn;
      outC->turn_reset_act = kcg_true;
      break;
    case SSM_st_run_turn :
      if (outC->turn_reset_act) {
        outC->init = kcg_true;
      }
      /* @1/_/v4= */
      if (outC->init) {
        v4_times_4_int32 = /* _L8= */(kcg_int32)
            (/* _L14=(Robot::abs#1)/ */ abs_Robot(val) * kcg_lit_float64(20.) /
              kcg_lit_float64(90.));
      }
      else {
        v4_times_4_int32 = outC->v3_times_4_int32;
      }
      /* @1/_/v3= */
      if (v4_times_4_int32 < kcg_lit_int32(0)) {
        outC->v3_times_4_int32 = v4_times_4_int32;
      }
      else {
        outC->v3_times_4_int32 = v4_times_4_int32 - kcg_lit_int32(1);
      }
      outC->turn_reset_act = outC->v3_times_4_int32 == kcg_lit_int32(0);
      if (outC->turn_reset_act) {
        turn_state_act = SSM_st_stop_turn;
      }
      else {
        turn_state_act = SSM_st_run_turn;
      }
      outC->init = kcg_false;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  /* turn: */
  switch (turn_state_act) {
    case SSM_st_finTurnFalse_turn :
      outC->finTurn = kcg_false;
      outC->turn_state_nxt = SSM_st_finTurnFalse_turn;
      break;
    case SSM_st_stop_turn :
      outC->finTurn = kcg_true;
      outC->speedL = kcg_lit_float64(0.);
      outC->speedR = kcg_lit_float64(0.);
      outC->turn_state_nxt = SSM_st_stop_turn;
      break;
    case SSM_st_run_turn :
      outC->finTurn = kcg_false;
      IfBlock1_clock_run_turn = val >= kcg_lit_float64(0.);
      /* turn:run:IfBlock1: */
      if (IfBlock1_clock_run_turn) {
        outC->speedL = kcg_lit_float64(-100.);
        outC->speedR = kcg_lit_float64(100.);
      }
      else {
        outC->speedL = kcg_lit_float64(100.);
        outC->speedR = kcg_lit_float64(-100.);
      }
      outC->turn_state_nxt = SSM_st_run_turn;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void automatonTurn_init_Robot(outC_automatonTurn_Robot *outC)
{
  outC->turn_reset_act = kcg_false;
  outC->finTurn = kcg_true;
  outC->init = kcg_true;
  outC->v3_times_4_int32 = kcg_lit_int32(0);
  outC->speedR = kcg_lit_float64(0.0);
  outC->speedL = kcg_lit_float64(0.0);
  outC->turn_state_nxt = SSM_st_run_turn;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void automatonTurn_reset_Robot(outC_automatonTurn_Robot *outC)
{
  outC->turn_reset_act = kcg_false;
  outC->init = kcg_true;
  outC->turn_state_nxt = SSM_st_run_turn;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Robot::automatonTurn/
  @1: (times#4)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** automatonTurn_Robot.c
** Generation date: 2017-01-17T17:12:35
*************************************************************$ */

