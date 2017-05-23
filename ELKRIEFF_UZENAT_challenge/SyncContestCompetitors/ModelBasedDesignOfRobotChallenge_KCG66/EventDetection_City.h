/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _EventDetection_City_H_
#define _EventDetection_City_H_

#include "kcg_types.h"
#include "WrongDir_City.h"
#include "Light_City.h"
#include "Speed_City.h"
#include "Exit_City.h"
#include "Collision_City.h"
#include "AgregateEvents_City.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  interTy /* Interrupt/ */ Interrupt;
  eventTy /* Events/ */ Events;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_AgregateEvents_City /* _L3=(City::AgregateEvents#1)/ */ Context_AgregateEvents_1;
  outC_Collision_City /* _L5=(City::Collision#1)/ */ Context_Collision_1;
  outC_Exit_City /* _L6=(City::Exit#1)/ */ Context_Exit_1;
  outC_Speed_City /* _L7=(City::Speed#1)/ */ Context_Speed_1;
  outC_Light_City /* _L8=(City::Light#1)/ */ Context_Light_1;
  outC_WrongDir_City /* _L9=(City::WrongDir#1)/ */ Context_WrongDir_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  sigTy /* _L1/ */ _L1;
  phaseTy /* _L2/ */ _L2;
  interTy /* _L4/ */ _L4;
  eventTy /* _L3/ */ _L3;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  obstArr /* _L11/ */ _L11;
  trafLArr /* _L10/ */ _L10;
} outC_EventDetection_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::EventDetection/ */
extern void EventDetection_City(
  /* Signalization/ */
  sigTy *Signalization,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_EventDetection_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EventDetection_reset_City(outC_EventDetection_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EventDetection_init_City(outC_EventDetection_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EventDetection_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventDetection_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

