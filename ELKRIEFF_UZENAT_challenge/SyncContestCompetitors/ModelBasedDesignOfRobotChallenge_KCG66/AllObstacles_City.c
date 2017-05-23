/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AllObstacles_City.h"

/* City::AllObstacles/ */
void AllObstacles_City(
  /* time/ */
  kcg_float64 time,
  outC_AllObstacles_City *outC)
{
  kcg_size idx;
  kcg_size idx1;

  /* _L7=(City::readObstacles#1)/ */
  readObstacles_City(&outC->Context_readObstacles_1);
  kcg_copy_paramObstArr_City(
    &outC->_L7,
    &outC->Context_readObstacles_1.paramsObst);
  outC->_L1 = time;
  /* _L5/ */
  for (idx = 0; idx < 10; idx++) {
    outC->_L5[idx] = outC->_L1;
  }
  /* _L6= */
  for (idx1 = 0; idx1 < 10; idx1++) {
    /* _L6=(City::OneObstacle#1)/ */
    OneObstacle_City(
      &outC->_L7[idx1],
      outC->_L5[idx1],
      &outC->Context_OneObstacle_1[idx1]);
    kcg_copy_obstTy(&outC->_L6[idx1], &outC->Context_OneObstacle_1[idx1].obstacle);
  }
  kcg_copy_obstArr(&outC->obstacles, &outC->_L6);
}

#ifndef KCG_USER_DEFINED_INIT
void AllObstacles_init_City(outC_AllObstacles_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  for (idx1 = 0; idx1 < 10; idx1++) {
    outC->_L7[idx1].pos.x = kcg_lit_float64(0.0);
    outC->_L7[idx1].pos.y = kcg_lit_float64(0.0);
    outC->_L7[idx1].since = kcg_lit_float64(0.0);
    outC->_L7[idx1].till = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 10; idx2++) {
    outC->_L6[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L6[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L6[idx2].present = kcg_true;
  }
  for (idx3 = 0; idx3 < 10; idx3++) {
    outC->_L5[idx3] = kcg_lit_float64(0.0);
  }
  outC->_L1 = kcg_lit_float64(0.0);
  for (idx4 = 0; idx4 < 10; idx4++) {
    outC->obstacles[idx4].position.x = kcg_lit_float64(0.0);
    outC->obstacles[idx4].position.y = kcg_lit_float64(0.0);
    outC->obstacles[idx4].present = kcg_true;
  }
  for (idx = 0; idx < 10; idx++) {
    /* _L6=(City::OneObstacle#1)/ */
    OneObstacle_init_City(&outC->Context_OneObstacle_1[idx]);
  }
  /* _L7=(City::readObstacles#1)/ */
  readObstacles_init_City(&outC->Context_readObstacles_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void AllObstacles_reset_City(outC_AllObstacles_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 10; idx++) {
    /* _L6=(City::OneObstacle#1)/ */
    OneObstacle_reset_City(&outC->Context_OneObstacle_1[idx]);
  }
  /* _L7=(City::readObstacles#1)/ */
  readObstacles_reset_City(&outC->Context_readObstacles_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** AllObstacles_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

