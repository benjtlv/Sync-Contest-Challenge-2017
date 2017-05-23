/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _ExitAux_City_H_
#define _ExitAux_City_H_

#include "kcg_types.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* res/ */ res;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MapADT_City /* _L5=(City::MapADT#1)/ */ Context_MapADT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* _L1/ */ _L1;
  kcg_bool /* _L10/ */ _L10;
  mapDataTy_City /* _L5/ */ _L5;
  colorTy /* _L13/ */ _L13;
  kcg_bool /* _L12/ */ _L12;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L14/ */ _L14;
  kcg_bool /* _L15/ */ _L15;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  paramTLArr_City /* _L19/ */ _L19;
  positionTy /* _L20/ */ _L20;
} outC_ExitAux_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::ExitAux/ */
extern void ExitAux_City(
  /* acc/ */
  kcg_bool acc,
  /* pos/ */
  positionTy *pos,
  /* mapid/ */
  kcg_int32 mapid,
  outC_ExitAux_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ExitAux_reset_City(outC_ExitAux_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ExitAux_init_City(outC_ExitAux_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ExitAux_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ExitAux_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

