/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _IndividualRobotControl_Robot_H_
#define _IndividualRobotControl_Robot_H_

#include "kcg_types.h"
#include "PhysicalModel_Robot.h"
#include "Driver_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  phaseTy /* RobotPhase/ */ RobotPhase;
  statusTy /* RobotStatus/ */ RobotStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PhysicalModel_Robot /* _L6=(Robot::PhysicalModel#1)/ */ Context_PhysicalModel_1;
  outC_Driver_Robot /* _L4=(Robot::Driver#1)/ */ Context_Driver_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L6/ */ _L6;
  wheelsTy_Robot /* _L4/ */ _L4;
  statusTy /* _L5/ */ _L5;
  sensorsTy /* _L7/ */ _L7;
  interTy /* _L8/ */ _L8;
  phaseTy /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  itiElemArr_Robot /* _L11/ */ _L11;
} outC_IndividualRobotControl_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::IndividualRobotControl/ */
extern void IndividualRobotControl_Robot(
  /* Itinerary/ */
  itiElemArr_Robot *Itinerary,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  /* Interrupt/ */
  interTy Interrupt,
  /* InitialPhase/ */
  phaseTy *InitialPhase,
  /* top/ */
  kcg_bool top,
  outC_IndividualRobotControl_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void IndividualRobotControl_reset_Robot(
  outC_IndividualRobotControl_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void IndividualRobotControl_init_Robot(
  outC_IndividualRobotControl_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _IndividualRobotControl_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** IndividualRobotControl_Robot.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

