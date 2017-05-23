/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _WrongDir_City_H_
#define _WrongDir_City_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "MapADT_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* wrong/ */ wrong;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_MapADT_City /* _L12=(City::MapADT#1)/ */ Context_MapADT_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/Output2/ */ Output2_SinCosR_1_float64;
  kcg_float64 /* @1/Output1/ */ Output1_SinCosR_1_float64;
  kcg_float64 /* @1/Input1/ */ Input1_SinCosR_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_SinCosR_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_SinCosR_1_float64;
  kcg_float64 /* @1/_L1/ */ _L1_SinCosR_1_float64;
  mapDataTy_City /* _L12/ */ _L12;
  phaseTy /* _L11/ */ _L11;
  positionTy /* _L8/ */ _L8;
  kcg_float64 /* _L9/ */ _L9;
  kcg_float64 /* _L10/ */ _L10;
  colorTy /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_float64 /* _L6/ */ _L6;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L13/ */ _L13;
  kcg_float64 /* _L14/ */ _L14;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_bool /* _L20/ */ _L20;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L22/ */ _L22;
  paramTLArr_City /* _L23/ */ _L23;
} outC_WrongDir_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::WrongDir/ */
extern void WrongDir_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_WrongDir_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void WrongDir_reset_City(outC_WrongDir_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void WrongDir_init_City(outC_WrongDir_City *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: City::WrongDir/
  @1: (mathext::SinCosR#1)
*/

#endif /* _WrongDir_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** WrongDir_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

