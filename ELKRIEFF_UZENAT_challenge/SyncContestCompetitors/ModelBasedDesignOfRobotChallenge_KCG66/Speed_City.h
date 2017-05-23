/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Speed_City_H_
#define _Speed_City_H_

#include "kcg_types.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* speedExcess/ */ speedExcess;
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
  kcg_float64 /* _L9/ */ _L9;
  kcg_bool /* _L10/ */ _L10;
  mapDataTy_City /* _L5/ */ _L5;
  colorTy /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  paramTLArr_City /* _L18/ */ _L18;
} outC_Speed_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::Speed/ */
extern void Speed_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Speed_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Speed_reset_City(outC_Speed_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Speed_init_City(outC_Speed_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Speed_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Speed_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

