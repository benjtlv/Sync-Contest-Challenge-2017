/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Collision_City.h"

/* City::Collision/ */
void Collision_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacles/ */
  obstArr *obstacles,
  outC_Collision_City *outC)
{
  kcg_size idx;
  kcg_bool acc;
  kcg_size idx1;

  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  /* _L5/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_phaseTy(&outC->_L5[idx], &outC->_L1);
  }
  outC->_L2 = kcg_false;
  kcg_copy_obstArr(&outC->_L3, obstacles);
  outC->_L4 = outC->_L2;
  /* _L4= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    acc = outC->_L4;
    /* _L4=(City::CollisionAux#1)/ */
    CollisionAux_City(
      acc,
      &outC->_L5[idx1],
      &outC->_L3[idx1],
      &outC->Context_CollisionAux_1[idx1]);
    outC->_L4 = outC->Context_CollisionAux_1[idx1].accnew;
  }
  outC->collisionEvent = outC->_L4;
}

#ifndef KCG_USER_DEFINED_INIT
void Collision_init_City(outC_Collision_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L5[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L5[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L5[idx1].velocity = kcg_lit_float64(0.0);
    outC->_L5[idx1].heading = kcg_lit_float64(0.0);
  }
  outC->_L4 = kcg_true;
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L3[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L3[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L3[idx2].present = kcg_true;
  }
  outC->_L2 = kcg_true;
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->collisionEvent = kcg_true;
  for (idx = 0; idx < 10; idx++) {
    /* _L4=(City::CollisionAux#1)/ */
    CollisionAux_init_City(&outC->Context_CollisionAux_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Collision_reset_City(outC_Collision_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L4=(City::CollisionAux#1)/ */
    CollisionAux_reset_City(&outC->Context_CollisionAux_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Collision_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

