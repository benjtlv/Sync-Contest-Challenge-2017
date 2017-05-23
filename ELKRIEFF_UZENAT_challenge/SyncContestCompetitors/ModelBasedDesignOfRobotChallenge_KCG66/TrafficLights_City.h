/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _TrafficLights_City_H_
#define _TrafficLights_City_H_

#include "kcg_types.h"
#include "OneTL_City.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trafLArr /* allLights/ */ allLights;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_OneTL_City /* _L11=(City::OneTL#1)/ */ Context_OneTL_1[5];
  outC_MapADT_City /* _L26=(City::MapADT#1)/ */ Context_MapADT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  trafLArr /* _L11/ */ _L11;
  paramTLArr_City /* _L27/ */ _L27;
  mapDataTy_City /* _L26/ */ _L26;
  positionTy /* _L28/ */ _L28;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L30/ */ _L30;
  array_float64_5 /* _L31/ */ _L31;
} outC_TrafficLights_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::TrafficLights/ */
extern void TrafficLights_City(
  /* time/ */
  kcg_float64 time,
  /* mapid/ */
  kcg_int32 mapid,
  outC_TrafficLights_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TrafficLights_reset_City(outC_TrafficLights_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TrafficLights_init_City(outC_TrafficLights_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TrafficLights_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TrafficLights_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

