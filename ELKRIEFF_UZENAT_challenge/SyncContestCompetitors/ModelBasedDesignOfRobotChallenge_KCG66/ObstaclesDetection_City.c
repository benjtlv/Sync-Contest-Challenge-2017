/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ObstaclesDetection_City.h"

/* City::ObstaclesDetection/ */
void ObstaclesDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacles/ */
  obstArr *obstacles,
  outC_ObstaclesDetection_City *outC)
{
  kcg_size idx;
  kcg_int32 acc;
  kcg_size idx1;

  outC->_L10 = SONARFAR;
  kcg_copy_phaseTy(&outC->_L2, RobotPhase);
  /* _L6/ */
  for (idx = 0; idx < 10; idx++) {
    kcg_copy_phaseTy(&outC->_L6[idx], &outC->_L2);
  }
  kcg_copy_obstArr(&outC->_L13, obstacles);
  outC->_L16 = outC->_L10;
  /* _L16= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    acc = outC->_L16;
    /* _L16=(City::OneObstacleDet#3)/ */
    OneObstacleDet_City(
      acc,
      &outC->_L6[idx1],
      &outC->_L13[idx1],
      &outC->Context_OneObstacleDet_3[idx1]);
    outC->_L16 = outC->Context_OneObstacleDet_3[idx1].accnew;
  }
  outC->sonar = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void ObstaclesDetection_init_City(outC_ObstaclesDetection_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;

  outC->_L16 = kcg_lit_int32(0);
  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L13[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L13[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L13[idx1].present = kcg_true;
  }
  outC->_L10 = kcg_lit_int32(0);
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L6[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L6[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L6[idx2].velocity = kcg_lit_float64(0.0);
    outC->_L6[idx2].heading = kcg_lit_float64(0.0);
  }
  outC->_L2.position.x = kcg_lit_float64(0.0);
  outC->_L2.position.y = kcg_lit_float64(0.0);
  outC->_L2.velocity = kcg_lit_float64(0.0);
  outC->_L2.heading = kcg_lit_float64(0.0);
  outC->sonar = kcg_lit_int32(0);
  for (idx = 0; idx < 10; idx++) {
    /* _L16=(City::OneObstacleDet#3)/ */
    OneObstacleDet_init_City(&outC->Context_OneObstacleDet_3[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ObstaclesDetection_reset_City(outC_ObstaclesDetection_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L16=(City::OneObstacleDet#3)/ */
    OneObstacleDet_reset_City(&outC->Context_OneObstacleDet_3[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ObstaclesDetection_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

