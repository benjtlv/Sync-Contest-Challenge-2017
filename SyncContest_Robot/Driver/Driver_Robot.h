/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/Robot__Driver_KCG66/config.txt
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */
#ifndef _Driver_Robot_H_
#define _Driver_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L93/, @2/finTurn/ */ _L93_actionArrayOnWheels_2;
  kcg_int32 /* @1/_L78/ */ _L78_actionArrayOnWheels_2;
  kcg_bool /* @12/_L38/ */ _L38_instrPlus_2_actionArrayOnWheels_2;
  SSM_ST_goPlus /* @3/goPlus: */ goPlus_state_nxt_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @6/_L11/,
     @6/_L13/,
     @6/_L16/,
     @6/s/ */ _L11_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @5/_L60/,
     @5/_L84/,
     @5/dev/,
     @6/x/ */ x_Integrator_1_PIDControler_3_ComputeWheels_3_automatonGoPlus_1_actionOnWheels_3_actionArrayOnWheels_2;
  SSM_ST_Robot /* Robot: */ Robot_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  actionTy_Robot /* @2/WhenBlock1:,
     @2/_L2/,
     @2/act/,
     @7/_L8/,
     @7/action/ */ WhenBlock1_clock_actionOnWheels_3_actionArrayOnWheels_2;
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @2/WhenBlock1:turn:_L59/,
     @2/angleMotor/,
     @8/angleMotorOut/,
     @9/A_Input/,
     @9/_L5/ */ angleMotorOut_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @2/WhenBlock1:turn:_L56/,
     @2/finTurn/,
     @8/stop/ */ stop_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  wheelsTy_Robot /* @2/WhenBlock1:turn:_L55/,
     @8/speed/ */ speed_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @11/A_Input/,
     @11/_L5/,
     @2/WhenBlock1:turn:_L58/,
     @8/getCountB/ */ getCountB_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @10/A_Input/,
     @10/_L5/,
     @2/WhenBlock1:turn:_L57/,
     @8/getCountA/ */ getCountA_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/turn/ */ turn_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  wheelsTy_Robot /* @8/_L18/ */ _L18_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L54/ */ _L54_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L50/ */ _L50_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L48/ */ _L48_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L45/ */ _L45_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L44/ */ _L44_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L43/ */ _L43_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L42/ */ _L42_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L38/,
     @9/A_Output/,
     @9/_L2/ */ _L38_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @10/A_Output/,
     @10/_L2/,
     @8/_L35/ */ _L35_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L34/ */ _L34_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L32/ */ _L32_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @11/A_Output/,
     @11/_L2/,
     @8/_L28/ */ _L28_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L27/ */ _L27_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L24/ */ _L24_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L16/ */ _L16_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L17/ */ _L17_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L19/ */ _L19_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_bool /* @8/_L10/ */ _L10_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L11/ */ _L11_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L12/ */ _L12_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L13/ */ _L13_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L14/ */ _L14_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L15/ */ _L15_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L5/ */ _L5_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L4/ */ _L4_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L3/ */ _L3_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/_L2/ */ _L2_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @2/WhenBlock1:turn:_L1/,
     @8/_L1/ */ _L1_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/angleMotor/ */ angleMotor_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
  kcg_float64 /* @8/coefRot/ */ coefRot_turnGetCount_1_actionOnWheels_3_actionArrayOnWheels_2;
} outC_Driver_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::Driver/ */
extern void Driver_Robot(void);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Driver_reset_Robot(void);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Driver_init_Robot(void);
#endif /* KCG_USER_DEFINED_INIT */

extern outC_Driver_Robot Ctxt_Driver_Robot;

/* top/ */
extern kcg_bool top;
/* @1/SensorsData/, @1/_L65/, @13/SensorsData/, @13/_L1/, SensorsData/, _L13/ */
extern sensorsTy SensorsData;
/* Interrupt/ */
extern interTy Interrupt;
/* @1/ItiElemArrObj/, @1/_L1/, Itinerary/, _L12/ */
extern itiElemArr_Robot Itinerary;
/* @1/_L105/, @1/getCountA/, @2/getCountA/, _L18/, getCountA/ */
extern kcg_float64 getCountA;
/* @1/_L106/, @1/getCountB/, @2/getCountB/, _L19/, getCountB/ */
extern kcg_float64 getCountB;
/* @1/_L111/, @1/light/, @2/light/, _L24/, light/ */
extern kcg_int32 light;

/* RotationalSpeed/ */
extern wheelsTy_Robot RotationalSpeed;
/* RobotStatus/ */
extern statusTy RobotStatus;
/* @1/_L107/,
   @1/_L89/,
   @1/index/,
   @1/indexOut/,
   @12/_L15/,
   @12/newIndex/,
   _L20/,
   indexOut/ */
extern kcg_int32 indexOut;
/* @1/_L108/, @1/angleMotor/, @2/angleMotor/, _L21/, angleMotor/ */
extern kcg_float64 angleMotor;

/*
  Expanded instances for: Robot::Driver/
  @1: (Robot::actionArrayOnWheels#2)
  @2: @1/(Robot::actionOnWheels#3)
  @3: @2/(Robot::automatonGoPlus#1)
  @4: @3/(Robot::ComputeWheels#3)
  @5: @4/(Robot::PIDControler#3)
  @6: @5/(Utilities::Integrator#1)
  @7: @2/(Robot::undressItElem#1)
  @8: @2/(Robot::turnGetCount#1)
  @9: @8/(math::Abs#3)
  @10: @8/(math::Abs#2)
  @11: @8/(math::Abs#1)
  @12: @1/(Robot::instrPlus#2)
  @13: @1/(Robot::undressSensorTy#1)
*/

#endif /* _Driver_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Driver_Robot.h
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

