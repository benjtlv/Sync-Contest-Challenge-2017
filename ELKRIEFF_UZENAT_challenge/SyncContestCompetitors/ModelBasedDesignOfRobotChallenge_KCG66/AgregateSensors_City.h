/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _AgregateSensors_City_H_
#define _AgregateSensors_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  sensorsTy /* SensorsData/ */ SensorsData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L1/ */ _L1;
  colorTy /* _L2/ */ _L2;
  kcg_int32 /* _L3/ */ _L3;
  sensorsTy /* _L5/ */ _L5;
} outC_AgregateSensors_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::AgregateSensors/ */
extern void AgregateSensors_City(
  /* roadColor/ */
  colorTy *roadColor,
  /* lightsColor/ */
  colorTy *lightsColor,
  /* sonar/ */
  kcg_int32 sonar,
  outC_AgregateSensors_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AgregateSensors_reset_City(outC_AgregateSensors_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AgregateSensors_init_City(outC_AgregateSensors_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AgregateSensors_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AgregateSensors_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

