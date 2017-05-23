/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/Robot__Driver_KCG66/config.txt
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Driver_Robot.h"

/* Robot::Driver/ */
void Driver_Robot(void)
{
  kcg_float64 tmp;
  kcg_float64 tmp1;
  kcg_float64 tmp2;
  kcg_float64 tmp3;
  /* @1/_L101/ */
  kcg_float64 _L101_actionArrayOnWheels_2;
  /* @3/goPlus: */
  kcg_bool goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @3/goPlus: */
  SSM_ST_goPlus goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @3/goPlus:go:<1> */
  kcg_bool tr_1_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus;
  /* @12/_L35/, @3/goPlus:go:<2> */
  kcg_bool tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus;
  /* @5/_L21/, @5/_L55/, @5/errorColor/ */
  colorTy _L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @6/_L18/ */
  kcg_float64 _L18_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @6/_L20/ */
  kcg_float64 _L20_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @4/IfBlock1:then:_L20/ */
  kcg_float64 _L20_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_IfBlock1;
  /* @12/_L36/, @4/IfBlock1:else: */
  kcg_bool else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1;
  /* @4/IfBlock1:else:then:_L16/ */
  kcg_float64 _L16_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_else_IfBlock1;
  /* @12/_L30/, @14/_L12/, @14/is_green/, @4/IfBlock1: */
  kcg_bool IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @4/_L159/, @4/epsilon/, @5/_L71/, @5/epsilon/ */
  kcg_float64 _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @1/_L79/, @2/_L1/, @2/itElemObj/, @7/_L1/, @7/itElemObj/ */
  itiElement_Robot _L1_actionOnWheels_3_actionArrayOnWheels_2;
  /* Robot: */
  SSM_ST_Robot Robot_state_sel;
  /* @3/goPlus:go:_L18/, @4/_L163/, @4/localWheels/, @4/wheels/, _L11/, zero/ */
  wheelsTy_Robot zero;
  /* @5/_L60/, @5/_L84/, @5/dev/, @6/x/ */
  kcg_float64 x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;

  IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
    SensorsData.roadColor.red < SensorsData.roadColor.green &&
    SensorsData.roadColor.green > SensorsData.roadColor.blue;
  else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1 =
    IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 &&
    Ctxt_Driver_Robot._L38_instrPlus_2_actionArrayOnWheels_2;
  tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus =
    !IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  /* @12/_L15= */
  if (tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus) {
    indexOut = Ctxt_Driver_Robot._L78_actionArrayOnWheels_2;
  }
  else /* @12/_L44= */
  if (Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 ||
    else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1) {
    indexOut = kcg_lit_int32(1) + Ctxt_Driver_Robot._L78_actionArrayOnWheels_2;
  }
  else {
    indexOut = Ctxt_Driver_Robot._L78_actionArrayOnWheels_2;
  }
  if (kcg_lit_int32(0) <= indexOut && indexOut < kcg_lit_int32(50)) {
    kcg_copy_itiElement_Robot(
      &_L1_actionOnWheels_3_actionArrayOnWheels_2,
      &Itinerary[indexOut]);
  }
  else {
    kcg_copy_itiElement_Robot(
      &_L1_actionOnWheels_3_actionArrayOnWheels_2,
      (itiElement_Robot *) &STOP);
  }
  Ctxt_Driver_Robot.WhenBlock1_clock_actionOnWheels_3_actionArrayOnWheels_2 =
    _L1_actionOnWheels_3_actionArrayOnWheels_2.action;
  _L101_actionArrayOnWheels_2 = kcg_lit_float64(3.) * (MAXWHEEL /
      kcg_lit_float64(100.));
  Ctxt_Driver_Robot._L38_instrPlus_2_actionArrayOnWheels_2 =
    tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus ||
    (!else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1 &&
      Ctxt_Driver_Robot._L38_instrPlus_2_actionArrayOnWheels_2);
  /* @2/WhenBlock1: */
  switch (Ctxt_Driver_Robot.WhenBlock1_clock_actionOnWheels_3_actionArrayOnWheels_2) {
    case stop_Robot :
      Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 = kcg_false;
      angleMotor = kcg_lit_float64(0.);
      tmp2 = kcg_lit_float64(0.);
      tmp3 = kcg_lit_float64(0.);
      break;
    case turn_Robot :
      Ctxt_Driver_Robot._L34_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_false;
      Ctxt_Driver_Robot._L45_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_true;
      /* @11/_L2= */
      if (kcg_lit_float64(0.) <= getCountB) {
        Ctxt_Driver_Robot._L28_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          getCountB;
      }
      else {
        Ctxt_Driver_Robot._L28_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          - getCountB;
      }
      /* @10/_L2= */
      if (kcg_lit_float64(0.) <= getCountA) {
        Ctxt_Driver_Robot._L35_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          getCountA;
      }
      else {
        Ctxt_Driver_Robot._L35_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          - getCountA;
      }
      Ctxt_Driver_Robot._L2_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        _L1_actionOnWheels_3_actionArrayOnWheels_2.param * D;
      Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L2_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 / B;
      /* @9/_L2= */
      if (kcg_lit_float64(0.) <=
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2) {
        Ctxt_Driver_Robot._L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      }
      else {
        Ctxt_Driver_Robot._L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          - Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      }
      Ctxt_Driver_Robot._L10_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        _L1_actionOnWheels_3_actionArrayOnWheels_2.param < kcg_lit_float64(0.);
      /* @8/_L14= */
      if (Ctxt_Driver_Robot._L10_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2) {
        Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          kcg_lit_float64(-1.);
      }
      else {
        Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
          kcg_lit_float64(1.);
      }
      Ctxt_Driver_Robot._L17_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 *
        kcg_lit_float64(7.);
      Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.right =
        Ctxt_Driver_Robot._L17_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L19_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        - Ctxt_Driver_Robot._L17_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.left =
        Ctxt_Driver_Robot._L19_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L54_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_lit_float64(7.);
      Ctxt_Driver_Robot._L43_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L28_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 >
        Ctxt_Driver_Robot._L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L42_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L35_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 >
        Ctxt_Driver_Robot._L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot.stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L42_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 ||
        Ctxt_Driver_Robot._L43_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L15_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_lit_float64(0.);
      Ctxt_Driver_Robot._L13_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_lit_float64(-1.);
      Ctxt_Driver_Robot._L11_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        kcg_lit_float64(1.);
      Ctxt_Driver_Robot._L5_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 = B;
      Ctxt_Driver_Robot._L3_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 = D;
      Ctxt_Driver_Robot.getCountB_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        getCountB;
      Ctxt_Driver_Robot.getCountA_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        getCountA;
      Ctxt_Driver_Robot._L1_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
      Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      angleMotor =
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      tmp2 =
        Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.left;
      tmp3 =
        Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.right;
      Ctxt_Driver_Robot._L27_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        getCountB;
      Ctxt_Driver_Robot._L24_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        getCountA;
      Ctxt_Driver_Robot.turn_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
      Ctxt_Driver_Robot._L12_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
      Ctxt_Driver_Robot._L50_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      kcg_copy_wheelsTy_Robot(
        &Ctxt_Driver_Robot._L18_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2,
        &Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2);
      Ctxt_Driver_Robot.angleMotor_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L4_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L48_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L44_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L32_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot.stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot._L16_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      Ctxt_Driver_Robot.coefRot_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
        Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
      break;
    case go_Robot :
      /* @3/goPlus: */
      switch (Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
        case SSM_st_stopLight_goPlus :
          goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            light > kcg_lit_int32(600);
          if (goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_go_goPlus;
          }
          else {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_stopLight_goPlus;
          }
          break;
        case SSM_st_stopCat_goPlus :
          goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            SensorsData.sonar > LIMSONAR;
          if (goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_go_goPlus;
          }
          else {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_stopCat_goPlus;
          }
          break;
        case SSM_st_go_goPlus :
          tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus =
            light < kcg_lit_int32(500) && SensorsData.roadColor.red >
            /* @15/_L32= */(kcg_int16) kcg_lit_float64(595.);
          tr_1_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus =
            SensorsData.sonar < LIMSONAR;
          if (tr_1_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus) {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_stopCat_goPlus;
          }
          else if (tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus) {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_stopLight_goPlus;
          }
          else {
            goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
              SSM_st_go_goPlus;
          }
          goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            tr_1_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus ||
            tr_2_guard_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_go_goPlus;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 = kcg_false;
      angleMotor = kcg_lit_float64(0.);
      /* @3/goPlus: */
      switch (goPlus_state_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
        case SSM_st_stopLight_goPlus :
          Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            SSM_st_stopLight_goPlus;
          tmp2 = kcg_lit_float64(0.);
          tmp3 = kcg_lit_float64(0.);
          break;
        case SSM_st_stopCat_goPlus :
          Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            SSM_st_stopCat_goPlus;
          tmp2 = kcg_lit_float64(0.);
          tmp3 = kcg_lit_float64(0.);
          break;
        case SSM_st_go_goPlus :
          x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
          if (goPlus_reset_act_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
            Ctxt_Driver_Robot.init = kcg_true;
          }
          Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            SSM_st_go_goPlus;
          /* @5/_L21= */
          if (SensorsData.roadColor.red > /* @16/_L32= */(kcg_int16)
              kcg_lit_float64(595.) || (SensorsData.roadColor.red <
              SensorsData.roadColor.green && SensorsData.roadColor.green >
              SensorsData.roadColor.blue)) {
            kcg_copy_colorTy(
              &_L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2,
              (colorTy *) &BLUE);
          }
          else {
            kcg_copy_colorTy(
              &_L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2,
              &SensorsData.roadColor);
          }
          Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            C1 * /* @5/_L57= */(kcg_float64)
              _L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2.red +
            /* @5/_L54= */(kcg_float64)
              _L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2.green *
            C2 + /* @5/_L59= */(kcg_float64)
              _L55_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2.blue *
            C3;
          _L18_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            TIMESTEP *
            Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
          _L20_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            _L18_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 /
            kcg_lit_float64(2.);
          /* @5/_L42=, @6/_L12= */
          if (Ctxt_Driver_Robot.init) {
            tmp = kcg_lit_float64(0.) -
              _L20_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
            tmp1 = kcg_lit_float64(0.);
          }
          else {
            tmp =
              Ctxt_Driver_Robot._L11_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
            tmp1 =
              x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
          }
          Ctxt_Driver_Robot._L11_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            tmp +
            _L18_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
          _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            KP *
            Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 +
            (Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 -
              tmp1) / TIMESTEP * KD +
            (Ctxt_Driver_Robot._L11_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 -
              _L20_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) *
            KI;
          IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
            _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 >
            kcg_lit_float64(0.);
          /* @4/IfBlock1: */
          if (IfBlock1_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2) {
            _L20_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_IfBlock1 =
              _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 /
              kcg_lit_float64(2.) + kcg_lit_float64(0.5);
            zero.left = (kcg_lit_float64(1.) -
                _L20_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_IfBlock1) *
              _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
            zero.right =
              _L20_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_IfBlock1 *
              _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
          }
          else {
            else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1 =
              _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 <
              kcg_lit_float64(0.);
            /* @4/IfBlock1:else: */
            if (else_clock_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_IfBlock1) {
              _L16_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_else_IfBlock1 =
                kcg_lit_float64(0.5) +
                - _L159_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 /
                kcg_lit_float64(2.);
              zero.left =
                _L16_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_else_IfBlock1 *
                _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
              zero.right = (kcg_lit_float64(1.) -
                  _L16_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2_then_else_IfBlock1) *
                _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
            }
            else {
              zero.left = kcg_lit_float64(0.5) *
                _L1_actionOnWheels_3_actionArrayOnWheels_2.param;
              zero.right = zero.left;
            }
          }
          tmp2 = zero.left;
          tmp3 = zero.right;
          Ctxt_Driver_Robot.init = kcg_false;
          break;
        default :
          /* this default branch is unreachable */
          break;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  zero.left = tmp2 * _L101_actionArrayOnWheels_2;
  zero.right = _L101_actionArrayOnWheels_2 * tmp3;
  Robot_state_sel = Ctxt_Driver_Robot.Robot_state_nxt;
  /* Robot: */
  switch (Robot_state_sel) {
    case SSM_st_Stopped_Robot :
      kcg_copy_wheelsTy_Robot(&RotationalSpeed, &zero);
      RobotStatus = Stopped;
      Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Stopped_Robot;
      break;
    case SSM_st_Arrived_Robot :
      kcg_copy_wheelsTy_Robot(&RotationalSpeed, &zero);
      RobotStatus = Arrived;
      Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Arrived_Robot;
      break;
    case SSM_st_Running_Robot :
      kcg_copy_wheelsTy_Robot(&RotationalSpeed, &zero);
      RobotStatus = Running;
      if (Interrupt == haltVal) {
        Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Stopped_Robot;
      }
      else {
        Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Running_Robot;
      }
      break;
    case SSM_st_Preparing_Robot :
      kcg_copy_wheelsTy_Robot(&RotationalSpeed, &zero);
      RobotStatus = Preparing;
      if (top) {
        Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Running_Robot;
      }
      else {
        Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Preparing_Robot;
      }
      break;
    default :
      /* this default branch is unreachable */
      break;
  }
  Ctxt_Driver_Robot._L78_actionArrayOnWheels_2 = indexOut;
}

#ifndef KCG_USER_DEFINED_INIT
void Driver_init_Robot(void)
{
  Ctxt_Driver_Robot._L38_instrPlus_2_actionArrayOnWheels_2 = kcg_true;
  Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 = kcg_false;
  Ctxt_Driver_Robot.init = kcg_true;
  Ctxt_Driver_Robot.stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L45_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L44_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L43_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L42_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L34_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L32_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot._L10_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_true;
  Ctxt_Driver_Robot.WhenBlock1_clock_actionOnWheels_3_actionArrayOnWheels_2 =
    go_Robot;
  Ctxt_Driver_Robot.coefRot_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.angleMotor_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L1_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L2_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L3_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L4_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L5_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L15_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L13_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L12_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L11_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L19_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L17_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L16_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L24_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L27_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L28_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L35_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L48_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L50_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L54_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L18_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.left =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L18_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.right =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.turn_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.getCountA_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.getCountB_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.left =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2.right =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot._L11_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
    kcg_lit_float64(0.0);
  Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Preparing_Robot;
  Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
    SSM_st_go_goPlus;
  Ctxt_Driver_Robot._L78_actionArrayOnWheels_2 = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Driver_reset_Robot(void)
{
  Ctxt_Driver_Robot._L38_instrPlus_2_actionArrayOnWheels_2 = kcg_true;
  Ctxt_Driver_Robot._L93_actionArrayOnWheels_2 = kcg_false;
  Ctxt_Driver_Robot.init = kcg_true;
  Ctxt_Driver_Robot.Robot_state_nxt = SSM_st_Preparing_Robot;
  Ctxt_Driver_Robot.goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2 =
    SSM_st_go_goPlus;
  Ctxt_Driver_Robot._L78_actionArrayOnWheels_2 = kcg_lit_int32(0);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: Robot::Driver/
  @1: (Robot::actionArrayOnWheels#2)
  @12: @1/(Robot::instrPlus#2)
  @14: @12/(Robot::isGreen#1)
  @2: @1/(Robot::actionOnWheels#3)
  @7: @2/(Robot::undressItElem#1)
  @8: @2/(Robot::turnGetCount#1)
  @11: @8/(math::Abs#1)
  @10: @8/(math::Abs#2)
  @9: @8/(math::Abs#3)
  @3: @2/(Robot::automatonGoPlus#1)
  @15: @3/(Robot::isRed#1)
  @4: @3/(Robot::ComputeWheels#3)
  @5: @4/(Robot::PIDControler#3)
  @16: @5/(Robot::isRed#1)
  @6: @5/(Utilities::Integrator#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Driver_Robot.c
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

