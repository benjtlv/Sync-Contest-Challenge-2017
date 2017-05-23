/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AgregateEvents_City.h"

/* City::AgregateEvents/ */
void AgregateEvents_City(
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
  outC_AgregateEvents_City *outC)
{
  outC->_L13 = wrong;
  outC->_L12 = okVal;
  outC->_L11 = haltVal;
  outC->_L4 = exitRoad;
  /* _L10= */
  if (outC->_L4) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L12;
  }
  outC->Interrupt = outC->_L10;
  outC->_L5 = collision;
  outC->_L3 = speedExcess;
  outC->_L2 = lightRun;
  outC->_L1.lightRun = outC->_L2;
  outC->_L1.speedExcess = outC->_L3;
  outC->_L1.exitRoad = outC->_L4;
  outC->_L1.collisionEvent = outC->_L5;
  outC->_L1.dirEvent = outC->_L13;
  kcg_copy_eventTy(&outC->events, &outC->_L1);
}

#ifndef KCG_USER_DEFINED_INIT
void AgregateEvents_init_City(outC_AgregateEvents_City *outC)
{
  outC->_L13 = kcg_true;
  outC->_L12 = waitVal;
  outC->_L11 = waitVal;
  outC->_L10 = waitVal;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1.lightRun = kcg_true;
  outC->_L1.speedExcess = kcg_true;
  outC->_L1.exitRoad = kcg_true;
  outC->_L1.collisionEvent = kcg_true;
  outC->_L1.dirEvent = kcg_true;
  outC->Interrupt = waitVal;
  outC->events.lightRun = kcg_true;
  outC->events.speedExcess = kcg_true;
  outC->events.exitRoad = kcg_true;
  outC->events.collisionEvent = kcg_true;
  outC->events.dirEvent = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AgregateEvents_reset_City(outC_AgregateEvents_City *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AgregateEvents_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

