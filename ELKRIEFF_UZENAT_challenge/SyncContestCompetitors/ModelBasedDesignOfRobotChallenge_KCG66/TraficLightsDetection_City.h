/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _TraficLightsDetection_City_H_
#define _TraficLightsDetection_City_H_

#include "kcg_types.h"
#include "EncodeColor_Utilities.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  colorTy /* lightsColor/ */ lightsColor;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_EncodeColor_Utilities /* _L32=(Utilities::EncodeColor#1)/ */ Context_EncodeColor_1;
  outC_MapADT_City /* _L22=(City::MapADT#2)/ */ Context_MapADT_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trafLArr /* _L2/ */ _L2;
  colorTy /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_int32 /* _L26/ */ _L26;
  kcg_bool /* _L27/ */ _L27;
  mapDataTy_City /* _L22/ */ _L22;
  phaseTy /* _L21/ */ _L21;
  positionTy /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
  trafLTy /* _L28/ */ _L28;
  positionTy /* _L30/ */ _L30;
  colorTy /* _L32/ */ _L32;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  paramTLArr_City /* _L35/ */ _L35;
  colorTyQ /* _L37/ */ _L37;
} outC_TraficLightsDetection_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::TraficLightsDetection/ */
extern void TraficLightsDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* TLights/ */
  trafLArr *TLights,
  /* mapid/ */
  kcg_int32 mapid,
  outC_TraficLightsDetection_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TraficLightsDetection_reset_City(
  outC_TraficLightsDetection_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TraficLightsDetection_init_City(
  outC_TraficLightsDetection_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TraficLightsDetection_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TraficLightsDetection_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

