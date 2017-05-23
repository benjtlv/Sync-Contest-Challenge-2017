/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _AllObstacles_City_H_
#define _AllObstacles_City_H_

#include "kcg_types.h"
#include "readObstacles_City.h"
#include "OneObstacle_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  obstArr /* obstacles/ */ obstacles;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_OneObstacle_City /* _L6=(City::OneObstacle#1)/ */ Context_OneObstacle_1[10];
  outC_readObstacles_City /* _L7=(City::readObstacles#1)/ */ Context_readObstacles_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* _L1/ */ _L1;
  array_float64_10 /* _L5/ */ _L5;
  obstArr /* _L6/ */ _L6;
  paramObstArr_City /* _L7/ */ _L7;
} outC_AllObstacles_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::AllObstacles/ */
extern void AllObstacles_City(
  /* time/ */
  kcg_float64 time,
  outC_AllObstacles_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AllObstacles_reset_City(outC_AllObstacles_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AllObstacles_init_City(outC_AllObstacles_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AllObstacles_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AllObstacles_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

