/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _ModelBasedDesignOfRobotCh_H_
#define _ModelBasedDesignOfRobotCh_H_

#include "kcg_types.h"
#include "WallClock_City.h"
#include "ScoringA_City.h"
#include "ScoringB_City.h"
#include "readIti_Robot.h"
#include "SmartCityControl_City.h"
#include "IndividualRobotControl_Robot.h"

/* ========================  input structure  ====================== */
typedef struct {
  phaseTy /* InitialPhase/ */ InitialPhase;
  kcg_bool /* top/ */ top;
  kcg_int32 /* mapid/ */ mapid;
  kcg_int32 /* itiid/ */ itiid;
} inC_ModelBasedDesignOfRobotCh;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  phaseTy /* RobotPhase/ */ RobotPhase;
  statusTy /* RobotStatus/ */ RobotStatus;
  sigTy /* Signalization/ */ Signalization;
  eventTy /* Events/ */ Events;
  kcg_int32 /* scoreA/ */ scoreA;
  kcg_int32 /* scoreB/ */ scoreB;
  kcg_float64 /* time/ */ time;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  sensorsTy /* _L15/ */ _L15;
  interTy /* _L14/ */ _L14;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ScoringB_City /* _L22=(City::ScoringB#1)/ */ Context_ScoringB_1;
  outC_ScoringA_City /* _L19=(City::ScoringA#1)/ */ Context_ScoringA_1;
  outC_SmartCityControl_City /* _L13=(City::SmartCityControl#1)/ */ Context_SmartCityControl_1;
  outC_WallClock_City /* _L23=(City::WallClock#1)/ */ Context_WallClock_1;
  outC_IndividualRobotControl_Robot /* _L11=(Robot::IndividualRobotControl#1)/ */ Context_IndividualRobotControl_1;
  outC_readIti_Robot /* _L21=(Robot::readIti#1)/ */ Context_readIti_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L7/ */ _L7;
  statusTy /* _L12/ */ _L12;
  phaseTy /* _L11/ */ _L11;
  eventTy /* _L16/ */ _L16;
  sigTy /* _L13/ */ _L13;
  kcg_bool /* _L8/ */ _L8;
  itiElemArr_Robot /* _L21/ */ _L21;
  kcg_int32 /* _L22/ */ _L22;
  kcg_int32 /* _L19/ */ _L19;
  kcg_float64 /* _L23/ */ _L23;
  interTy /* _L25/ */ _L25;
  sensorsTy /* _L26/ */ _L26;
} outC_ModelBasedDesignOfRobotCh;

/* ===========  node initialization and cycle functions  =========== */
/* ModelBasedDesignOfRobotChallenge/ */
extern void ModelBasedDesignOfRobotCh(
  inC_ModelBasedDesignOfRobotCh *inC,
  outC_ModelBasedDesignOfRobotCh *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ModelBasedDesignOfRobotCh_reset(
  outC_ModelBasedDesignOfRobotCh *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ModelBasedDesignOfRobotCh_init(
  outC_ModelBasedDesignOfRobotCh *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ModelBasedDesignOfRobotCh_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ModelBasedDesignOfRobotCh.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

