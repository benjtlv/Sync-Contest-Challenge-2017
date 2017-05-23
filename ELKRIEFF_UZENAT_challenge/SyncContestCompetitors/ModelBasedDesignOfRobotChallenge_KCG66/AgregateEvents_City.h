/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _AgregateEvents_City_H_
#define _AgregateEvents_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  eventTy /* events/ */ events;
  interTy /* Interrupt/ */ Interrupt;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  eventTy /* _L1/ */ _L1;
  kcg_bool /* _L2/ */ _L2;
  kcg_bool /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  interTy /* _L10/ */ _L10;
  interTy /* _L11/ */ _L11;
  interTy /* _L12/ */ _L12;
  kcg_bool /* _L13/ */ _L13;
} outC_AgregateEvents_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::AgregateEvents/ */
extern void AgregateEvents_City(
  /* lightRun/ */
  kcg_bool lightRun,
  /* speedExcess/ */
  kcg_bool speedExcess,
  /* exitRoad/ */
  kcg_bool exitRoad,
  /* collision/ */
  kcg_bool collision,
  /* wrong/ */
  kcg_bool wrong,
  outC_AgregateEvents_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void AgregateEvents_reset_City(outC_AgregateEvents_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void AgregateEvents_init_City(outC_AgregateEvents_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _AgregateEvents_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AgregateEvents_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

