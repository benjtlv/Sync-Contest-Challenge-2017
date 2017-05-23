/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _actionArrayOnWheels_Robot_H_
#define _actionArrayOnWheels_Robot_H_

#include "kcg_types.h"
#include "instrPlus_Robot.h"
#include "undressSensorTy_Robot.h"
#include "actionOnWheels_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* speedL/ */ speedL;
  kcg_float64 /* speedR/ */ speedR;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L78/ */ _L78;
  kcg_bool /* _L93/ */ _L93;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_actionOnWheels_Robot /* _L68=(Robot::actionOnWheels#3)/ */ Context_actionOnWheels_3;
  outC_instrPlus_Robot /* _L89=(Robot::instrPlus#2)/ */ Context_instrPlus_2;
  outC_undressSensorTy_Robot /* _L70=(Robot::undressSensorTy#1)/ */ Context_undressSensorTy_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* index/ */ index;
  itiElemArr_Robot /* _L1/ */ _L1;
  sensorsTy /* _L65/ */ _L65;
  kcg_int32 /* _L72/ */ _L72;
  colorTy /* _L71/ */ _L71;
  colorTy /* _L70/ */ _L70;
  kcg_int32 /* _L73/ */ _L73;
  itiElement_Robot /* _L79/ */ _L79;
  itiElement_Robot /* _L82/ */ _L82;
  kcg_int32 /* _L89/ */ _L89;
  kcg_float64 /* _L69/ */ _L69;
  kcg_float64 /* _L68/ */ _L68;
  kcg_bool /* _L94/ */ _L94;
  kcg_float64 /* _L98/ */ _L98;
  kcg_float64 /* _L99/ */ _L99;
  kcg_float64 /* _L100/ */ _L100;
  kcg_float64 /* _L101/ */ _L101;
  kcg_float64 /* _L102/ */ _L102;
  kcg_float64 /* _L103/ */ _L103;
  kcg_float64 /* _L104/ */ _L104;
} outC_actionArrayOnWheels_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::actionArrayOnWheels/ */
extern void actionArrayOnWheels_Robot(
  /* ItiElemArrObj/ */
  itiElemArr_Robot *ItiElemArrObj,
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_actionArrayOnWheels_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void actionArrayOnWheels_reset_Robot(
  outC_actionArrayOnWheels_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void actionArrayOnWheels_init_Robot(
  outC_actionArrayOnWheels_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _actionArrayOnWheels_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** actionArrayOnWheels_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

