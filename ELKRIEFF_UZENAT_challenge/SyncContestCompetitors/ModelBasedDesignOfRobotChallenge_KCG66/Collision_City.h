/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _Collision_City_H_
#define _Collision_City_H_

#include "kcg_types.h"
#include "CollisionAux_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* collisionEvent/ */ collisionEvent;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CollisionAux_City /* _L4=(City::CollisionAux#1)/ */ Context_CollisionAux_1[10];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  obstArr /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  array /* _L5/ */ _L5;
} outC_Collision_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::Collision/ */
extern void Collision_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacles/ */
  obstArr *obstacles,
  outC_Collision_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Collision_reset_City(outC_Collision_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Collision_init_City(outC_Collision_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _Collision_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Collision_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

