/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _GroundColorDetection_City_H_
#define _GroundColorDetection_City_H_

#include "kcg_types.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  colorTy /* roadColor/ */ roadColor;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MapADT_City /* _L5=(City::MapADT#1)/ */ Context_MapADT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L1/ */ _L1;
  positionTy /* _L4/ */ _L4;
  kcg_float64 /* _L3/ */ _L3;
  kcg_float64 /* _L2/ */ _L2;
  mapDataTy_City /* _L5/ */ _L5;
  colorTy /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L6/ */ _L6;
  kcg_int32 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L12/ */ _L12;
  paramTLArr_City /* _L13/ */ _L13;
} outC_GroundColorDetection_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::GroundColorDetection/ */
extern void GroundColorDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_GroundColorDetection_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void GroundColorDetection_reset_City(
  outC_GroundColorDetection_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void GroundColorDetection_init_City(
  outC_GroundColorDetection_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _GroundColorDetection_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GroundColorDetection_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

