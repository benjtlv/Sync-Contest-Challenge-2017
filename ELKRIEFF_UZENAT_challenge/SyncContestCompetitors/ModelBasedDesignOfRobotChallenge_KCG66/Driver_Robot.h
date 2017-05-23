/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _Driver_Robot_H_
#define _Driver_Robot_H_

#include "kcg_types.h"
#include "actionArrayOnWheels_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* RotationalSpeed/ */ RotationalSpeed;
  statusTy /* RobotStatus/ */ RobotStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_Robot /* Robot: */ Robot_state_nxt;
  kcg_bool /* Robot: */ Robot_reset_act;
  kcg_bool /* Robot: */ Robot_reset_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_actionArrayOnWheels_Robot /* _L16=(Robot::actionArrayOnWheels#2)/ */ Context_actionArrayOnWheels_2;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_Robot /* Robot: */ Robot_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  wheelsTy_Robot /* Robot:Preparing:_L11/ */ _L11_Preparing_Robot;
  statusTy /* Robot:Preparing:_L1/ */ _L1_Preparing_Robot;
  wheelsTy_Robot /* Robot:Running:_L9/ */ _L9_Running_Robot;
  kcg_bool /* Robot:Running:_L8/ */ _L8_Running_Robot;
  statusTy /* Robot:Running:_L3/ */ _L3_Running_Robot;
  kcg_bool /* Robot:Running:arriving/ */ arriving_Running_Robot;
  wheelsTy_Robot /* Robot:Arrived:_L11/ */ _L11_Arrived_Robot;
  statusTy /* Robot:Arrived:_L1/ */ _L1_Arrived_Robot;
  wheelsTy_Robot /* Robot:Stopped:_L5/ */ _L5_Stopped_Robot;
  statusTy /* Robot:Stopped:_L1/ */ _L1_Stopped_Robot;
  SSM_ST_Robot /* Robot: */ Robot_state_sel;
  SSM_TR_Robot /* Robot: */ Robot_fired_strong;
  SSM_TR_Robot /* Robot: */ Robot_fired;
  wheelsTy_Robot /* zero/ */ zero;
  wheelsTy_Robot /* _L11/ */ _L11;
  itiElemArr_Robot /* _L12/ */ _L12;
  sensorsTy /* _L13/ */ _L13;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
} outC_Driver_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::Driver/ */
extern void Driver_Robot(
  /* top/ */
  kcg_bool top,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  /* Interrupt/ */
  interTy Interrupt,
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  outC_Driver_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Driver_reset_Robot(outC_Driver_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Driver_init_Robot(outC_Driver_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Driver_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Driver_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

