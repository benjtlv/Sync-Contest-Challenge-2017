/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "actionOnWheels_Robot.h"

/* Robot::actionOnWheels/ */
void actionOnWheels_Robot(
  /* itElemObj/ */
  itiElement_Robot *itElemObj,
  /* color/ */
  colorTy *color,
  /* frontColor/ */
  colorTy *frontColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_actionOnWheels_Robot *outC)
{
  /* speedL/ */
  kcg_float64 speedL_partial;
  /* speedR/ */
  kcg_float64 speedR_partial;
  /* finTurn/ */
  kcg_bool finTurn_partial;
  /* speedL/ */
  kcg_float64 _1_speedL_partial;
  /* speedR/ */
  kcg_float64 _2_speedR_partial;
  /* finTurn/ */
  kcg_bool _3_finTurn_partial;
  /* speedL/ */
  kcg_float64 _4_speedL_partial;
  /* speedR/ */
  kcg_float64 _5_speedR_partial;
  /* finTurn/ */
  kcg_bool _6_finTurn_partial;

  kcg_copy_itiElement_Robot(&outC->_L1, itElemObj);
  /* _L2=(Robot::undressItElem#1)/ */
  undressItElem_Robot(&outC->_L1, &outC->Context_undressItElem_1);
  outC->_L2 = outC->Context_undressItElem_1.action;
  outC->_L3 = outC->Context_undressItElem_1.value;
  outC->act = outC->_L2;
  outC->val = outC->_L3;
  outC->WhenBlock1_clock = outC->act;
  /* WhenBlock1: */
  switch (outC->WhenBlock1_clock) {
    case stop_Robot :
      outC->_L3_stop_WhenBlock1 = kcg_false;
      _6_finTurn_partial = outC->_L3_stop_WhenBlock1;
      outC->_L1_stop_WhenBlock1 = kcg_lit_float64(0.);
      _4_speedL_partial = outC->_L1_stop_WhenBlock1;
      _5_speedR_partial = outC->_L1_stop_WhenBlock1;
      outC->speedL = _4_speedL_partial;
      outC->speedR = _5_speedR_partial;
      outC->finTurn = _6_finTurn_partial;
      break;
    case turn_Robot :
      outC->_L1_turn_WhenBlock1 = outC->val;
      /* WhenBlock1:turn:_L20=(Robot::TurnControlleur#2)/ */
      TurnControlleur_Robot(
        outC->_L1_turn_WhenBlock1,
        &outC->Context_TurnControlleur_2);
      outC->_L20_turn_WhenBlock1 = outC->Context_TurnControlleur_2.stop;
      kcg_copy_wheelsTy_Robot(
        &outC->_L21_turn_WhenBlock1,
        &outC->Context_TurnControlleur_2.speed);
      outC->_L17_turn_WhenBlock1 = outC->_L21_turn_WhenBlock1.left;
      outC->_L16_turn_WhenBlock1 = outC->_L21_turn_WhenBlock1.right;
      _3_finTurn_partial = outC->_L20_turn_WhenBlock1;
      _1_speedL_partial = outC->_L17_turn_WhenBlock1;
      _2_speedR_partial = outC->_L16_turn_WhenBlock1;
      outC->speedL = _1_speedL_partial;
      outC->speedR = _2_speedR_partial;
      outC->finTurn = _3_finTurn_partial;
      break;
    case go_Robot :
      outC->_L21_go_WhenBlock1 = sonar;
      kcg_copy_colorTy(&outC->_L20_go_WhenBlock1, frontColor);
      outC->_L4_go_WhenBlock1 = outC->val;
      kcg_copy_colorTy(&outC->_L15_go_WhenBlock1, color);
      /* WhenBlock1:go:_L18=(Robot::automatonGoPlus#1)/ */
      automatonGoPlus_Robot(
        outC->_L4_go_WhenBlock1,
        &outC->_L15_go_WhenBlock1,
        &outC->_L20_go_WhenBlock1,
        outC->_L21_go_WhenBlock1,
        &outC->Context_automatonGoPlus_1);
      outC->_L18_go_WhenBlock1 = outC->Context_automatonGoPlus_1.speedL;
      outC->_L19_go_WhenBlock1 = outC->Context_automatonGoPlus_1.speedR;
      outC->_L10_go_WhenBlock1 = kcg_false;
      finTurn_partial = outC->_L10_go_WhenBlock1;
      speedL_partial = outC->_L18_go_WhenBlock1;
      speedR_partial = outC->_L19_go_WhenBlock1;
      outC->speedL = speedL_partial;
      outC->speedR = speedR_partial;
      outC->finTurn = finTurn_partial;
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
}

#ifndef KCG_USER_DEFINED_INIT
void actionOnWheels_init_Robot(outC_actionOnWheels_Robot *outC)
{
  outC->_L2 = go_Robot;
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L1.action = go_Robot;
  outC->_L1.param = kcg_lit_float64(0.0);
  outC->act = go_Robot;
  outC->val = kcg_lit_float64(0.0);
  outC->WhenBlock1_clock = go_Robot;
  outC->_L1_stop_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L3_stop_WhenBlock1 = kcg_true;
  outC->_L1_turn_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L17_turn_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L16_turn_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L21_turn_WhenBlock1.left = kcg_lit_float64(0.0);
  outC->_L21_turn_WhenBlock1.right = kcg_lit_float64(0.0);
  outC->_L20_turn_WhenBlock1 = kcg_true;
  outC->_L4_go_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L10_go_WhenBlock1 = kcg_true;
  outC->_L15_go_WhenBlock1.red = kcg_lit_uint8(0);
  outC->_L15_go_WhenBlock1.green = kcg_lit_uint8(0);
  outC->_L15_go_WhenBlock1.blue = kcg_lit_uint8(0);
  outC->_L19_go_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L18_go_WhenBlock1 = kcg_lit_float64(0.0);
  outC->_L20_go_WhenBlock1.red = kcg_lit_uint8(0);
  outC->_L20_go_WhenBlock1.green = kcg_lit_uint8(0);
  outC->_L20_go_WhenBlock1.blue = kcg_lit_uint8(0);
  outC->_L21_go_WhenBlock1 = kcg_lit_int32(0);
  outC->finTurn = kcg_true;
  outC->speedR = kcg_lit_float64(0.0);
  outC->speedL = kcg_lit_float64(0.0);
  /* WhenBlock1:go:_L18=(Robot::automatonGoPlus#1)/ */
  automatonGoPlus_init_Robot(&outC->Context_automatonGoPlus_1);
  /* WhenBlock1:turn:_L20=(Robot::TurnControlleur#2)/ */
  TurnControlleur_init_Robot(&outC->Context_TurnControlleur_2);
  /* _L2=(Robot::undressItElem#1)/ */
  undressItElem_init_Robot(&outC->Context_undressItElem_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void actionOnWheels_reset_Robot(outC_actionOnWheels_Robot *outC)
{
  /* WhenBlock1:go:_L18=(Robot::automatonGoPlus#1)/ */
  automatonGoPlus_reset_Robot(&outC->Context_automatonGoPlus_1);
  /* WhenBlock1:turn:_L20=(Robot::TurnControlleur#2)/ */
  TurnControlleur_reset_Robot(&outC->Context_TurnControlleur_2);
  /* _L2=(Robot::undressItElem#1)/ */
  undressItElem_reset_Robot(&outC->Context_undressItElem_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** actionOnWheels_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

