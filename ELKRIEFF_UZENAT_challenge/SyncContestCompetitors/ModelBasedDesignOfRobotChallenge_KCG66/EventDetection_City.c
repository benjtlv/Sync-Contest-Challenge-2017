/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EventDetection_City.h"

/* City::EventDetection/ */
void EventDetection_City(
  /* Signalization/ */
  sigTy *Signalization,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_EventDetection_City *outC)
{
  kcg_copy_sigTy(&outC->_L1, Signalization);
  kcg_copy_trafLArr(&outC->_L10, &outC->_L1.TLights);
  kcg_copy_obstArr(&outC->_L11, &outC->_L1.obstacles);
  kcg_copy_phaseTy(&outC->_L2, RobotPhase);
  /* _L9=(City::WrongDir#1)/ */
  WrongDir_City(&outC->_L2, mapid, &outC->Context_WrongDir_1);
  outC->_L9 = outC->Context_WrongDir_1.wrong;
  /* _L8=(City::Light#1)/ */
  Light_City(&outC->_L10, &outC->_L2, mapid, &outC->Context_Light_1);
  outC->_L8 = outC->Context_Light_1.lightRun;
  /* _L7=(City::Speed#1)/ */
  Speed_City(&outC->_L2, mapid, &outC->Context_Speed_1);
  outC->_L7 = outC->Context_Speed_1.speedExcess;
  /* _L6=(City::Exit#1)/ */ Exit_City(&outC->_L2, mapid, &outC->Context_Exit_1);
  outC->_L6 = outC->Context_Exit_1.exitRoad;
  /* _L5=(City::Collision#1)/ */
  Collision_City(&outC->_L2, &outC->_L11, &outC->Context_Collision_1);
  outC->_L5 = outC->Context_Collision_1.collisionEvent;
  /* _L3=(City::AgregateEvents#1)/ */
  AgregateEvents_City(
    outC->_L8,
    outC->_L7,
    outC->_L6,
    outC->_L5,
    outC->_L9,
    &outC->Context_AgregateEvents_1);
  kcg_copy_eventTy(&outC->_L3, &outC->Context_AgregateEvents_1.events);
  outC->_L4 = outC->Context_AgregateEvents_1.Interrupt;
  kcg_copy_eventTy(&outC->Events, &outC->_L3);
  outC->Interrupt = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void EventDetection_init_City(outC_EventDetection_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;

  for (idx = 0; idx < 5; idx++) {
    outC->_L10[idx].position.x = kcg_lit_float64(0.0);
    outC->_L10[idx].position.y = kcg_lit_float64(0.0);
    outC->_L10[idx].light = redQ;
  }
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L11[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L11[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L11[idx1].present = kcg_true;
  }
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L3.lightRun = kcg_true;
  outC->_L3.speedExcess = kcg_true;
  outC->_L3.exitRoad = kcg_true;
  outC->_L3.collisionEvent = kcg_true;
  outC->_L3.dirEvent = kcg_true;
  outC->_L4 = waitVal;
  outC->_L2.position.x = kcg_lit_float64(0.0);
  outC->_L2.position.y = kcg_lit_float64(0.0);
  outC->_L2.velocity = kcg_lit_float64(0.0);
  outC->_L2.heading = kcg_lit_float64(0.0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L1.TLights[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L1.TLights[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L1.TLights[idx2].light = redQ;
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L1.obstacles[idx3].position.x = kcg_lit_float64(0.0);
    outC->_L1.obstacles[idx3].position.y = kcg_lit_float64(0.0);
    outC->_L1.obstacles[idx3].present = kcg_true;
  }
  outC->Events.lightRun = kcg_true;
  outC->Events.speedExcess = kcg_true;
  outC->Events.exitRoad = kcg_true;
  outC->Events.collisionEvent = kcg_true;
  outC->Events.dirEvent = kcg_true;
  outC->Interrupt = waitVal;
  /* _L3=(City::AgregateEvents#1)/ */
  AgregateEvents_init_City(&outC->Context_AgregateEvents_1);
  /* _L5=(City::Collision#1)/ */ Collision_init_City(&outC->Context_Collision_1);
  /* _L6=(City::Exit#1)/ */ Exit_init_City(&outC->Context_Exit_1);
  /* _L7=(City::Speed#1)/ */ Speed_init_City(&outC->Context_Speed_1);
  /* _L8=(City::Light#1)/ */ Light_init_City(&outC->Context_Light_1);
  /* _L9=(City::WrongDir#1)/ */ WrongDir_init_City(&outC->Context_WrongDir_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EventDetection_reset_City(outC_EventDetection_City *outC)
{
  /* _L3=(City::AgregateEvents#1)/ */
  AgregateEvents_reset_City(&outC->Context_AgregateEvents_1);
  /* _L5=(City::Collision#1)/ */ Collision_reset_City(&outC->Context_Collision_1);
  /* _L6=(City::Exit#1)/ */ Exit_reset_City(&outC->Context_Exit_1);
  /* _L7=(City::Speed#1)/ */ Speed_reset_City(&outC->Context_Speed_1);
  /* _L8=(City::Light#1)/ */ Light_reset_City(&outC->Context_Light_1);
  /* _L9=(City::WrongDir#1)/ */ WrongDir_reset_City(&outC->Context_WrongDir_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventDetection_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

