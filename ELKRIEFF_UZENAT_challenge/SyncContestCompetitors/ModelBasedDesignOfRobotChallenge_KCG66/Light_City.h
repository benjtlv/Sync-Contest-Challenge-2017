/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Light_City_H_
#define _Light_City_H_

#include "kcg_types.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* lightRun/ */ lightRun;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MapADT_City /* _L5=(City::MapADT#1)/ */ Context_MapADT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L15/ */ _L15;
  kcg_bool /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_bool /* _L19/ */ _L19;
  positionTy /* _L13/ */ _L13;
  positionTy /* _L10/ */ _L10;
  kcg_float64 /* _L11/ */ _L11;
  kcg_float64 /* _L12/ */ _L12;
  trafLArr /* _L8/ */ _L8;
  phaseTy /* _L6/ */ _L6;
  mapDataTy_City /* _L5/ */ _L5;
  trafLTy /* _L4/ */ _L4;
  kcg_bool /* _L20/ */ _L20;
  colorTyQ /* _L21/ */ _L21;
  kcg_bool /* _L22/ */ _L22;
  kcg_bool /* _L23/ */ _L23;
  kcg_float64 /* _L24/ */ _L24;
  kcg_float64 /* _L25/ */ _L25;
  kcg_float64 /* _L26/ */ _L26;
  paramTLArr_City /* _L27/ */ _L27;
  colorTyQ /* _L29/ */ _L29;
} outC_Light_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::Light/ */
extern void Light_City(
  /* trafLights/ */
  trafLArr *trafLights,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Light_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Light_reset_City(outC_Light_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Light_init_City(outC_Light_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Light_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Light_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

