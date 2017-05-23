/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _undressSensorTy_Robot_H_
#define _undressSensorTy_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  colorTy /* roadColor/ */ roadColor;
  colorTy /* frontColor/ */ frontColor;
  kcg_int32 /* sonar/ */ sonar;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sensorsTy /* _L1/ */ _L1;
  colorTy /* _L4/ */ _L4;
  colorTy /* _L3/ */ _L3;
  kcg_int32 /* _L2/ */ _L2;
} outC_undressSensorTy_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::undressSensorTy/ */
extern void undressSensorTy_Robot(
  /* SensorsData/ */
  sensorsTy *SensorsData,
  outC_undressSensorTy_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void undressSensorTy_reset_Robot(outC_undressSensorTy_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void undressSensorTy_init_Robot(outC_undressSensorTy_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _undressSensorTy_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** undressSensorTy_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

