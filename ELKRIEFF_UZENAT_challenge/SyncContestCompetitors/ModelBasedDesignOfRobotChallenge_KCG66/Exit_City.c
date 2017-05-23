/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Exit_City.h"

/* City::Exit/ */
void Exit_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Exit_City *outC)
{
  kcg_size idx;
  array_float64_2 tmp;
  array_float64_2 tmp1;
  kcg_size idx2;
  kcg_bool acc;
  kcg_size idx3;
  _2_array noname;

  kcg_copy_phaseTy(&outC->_L23, RobotPhase);
  /* _L27/ */
  for (idx = 0; idx < 2; idx++) {
    kcg_copy_phaseTy(&outC->_L27[idx], &outC->_L23);
  }
  tmp[0] = - DELTA;
  tmp[1] = B / kcg_lit_float64(2.);
  tmp1[0] = - DELTA;
  tmp1[1] = - B / kcg_lit_float64(2.);
  kcg_copy_array_float64_2(&outC->_L28[0], &tmp);
  kcg_copy_array_float64_2(&outC->_L28[1], &tmp1);
  /* _L24= */
  for (idx2 = 0; idx2 < 2; idx2++) {
    /* _L24=(Robot::CarGeometry#1)/ */
    CarGeometry_Robot(
      &outC->_L27[idx2],
      &outC->_L28[idx2],
      &outC->Context_CarGeometry_1[idx2]);
    kcg_copy_positionTy(
      &outC->_L24[idx2],
      &outC->Context_CarGeometry_1[idx2].newpos);
    kcg_copy_phaseTy(
      &outC->_L29[idx2],
      &outC->Context_CarGeometry_1[idx2].newphase);
  }
  kcg_copy__2_array(&noname, &outC->_L29);
  outC->_L22[0] = mapid;
  outC->_L22[1] = mapid;
  outC->_L15 = kcg_true;
  outC->_L14 = outC->_L15;
  /* _L14= */
  for (idx3 = 0; idx3 < 2; idx3++) {
    acc = outC->_L14;
    /* _L14=(City::ExitAux#1)/ */
    ExitAux_City(
      acc,
      &outC->_L24[idx3],
      outC->_L22[idx3],
      &outC->Context_ExitAux_1[idx3]);
    outC->_L14 = outC->Context_ExitAux_1[idx3].res;
  }
  outC->_L16 = !outC->_L14;
  outC->exitRoad = outC->_L16;
}

#ifndef KCG_USER_DEFINED_INIT
void Exit_init_City(outC_Exit_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;

  for (idx2 = 0; idx2 < 2; idx2++) {
    outC->_L29[idx2].position.x = kcg_lit_float64(0.0);
    outC->_L29[idx2].position.y = kcg_lit_float64(0.0);
    outC->_L29[idx2].velocity = kcg_lit_float64(0.0);
    outC->_L29[idx2].heading = kcg_lit_float64(0.0);
  }
  for (idx4 = 0; idx4 < 2; idx4++) {
    for (idx3 = 0; idx3 < 2; idx3++) {
      outC->_L28[idx4][idx3] = kcg_lit_float64(0.0);
    }
  }
  for (idx5 = 0; idx5 < 2; idx5++) {
    outC->_L27[idx5].position.x = kcg_lit_float64(0.0);
    outC->_L27[idx5].position.y = kcg_lit_float64(0.0);
    outC->_L27[idx5].velocity = kcg_lit_float64(0.0);
    outC->_L27[idx5].heading = kcg_lit_float64(0.0);
  }
  for (idx6 = 0; idx6 < 2; idx6++) {
    outC->_L24[idx6].x = kcg_lit_float64(0.0);
    outC->_L24[idx6].y = kcg_lit_float64(0.0);
  }
  outC->_L23.position.x = kcg_lit_float64(0.0);
  outC->_L23.position.y = kcg_lit_float64(0.0);
  outC->_L23.velocity = kcg_lit_float64(0.0);
  outC->_L23.heading = kcg_lit_float64(0.0);
  for (idx7 = 0; idx7 < 2; idx7++) {
    outC->_L22[idx7] = kcg_lit_int32(0);
  }
  outC->_L16 = kcg_true;
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_true;
  outC->exitRoad = kcg_true;
  for (idx1 = 0; idx1 < 2; idx1++) {
    /* _L14=(City::ExitAux#1)/ */ ExitAux_init_City(&outC->Context_ExitAux_1[idx1]);
  }
  for (idx = 0; idx < 2; idx++) {
    /* _L24=(Robot::CarGeometry#1)/ */
    CarGeometry_init_Robot(&outC->Context_CarGeometry_1[idx]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Exit_reset_City(outC_Exit_City *outC)
{
  kcg_size idx;
  kcg_size idx1;

  for (idx1 = 0; idx1 < 2; idx1++) {
    /* _L14=(City::ExitAux#1)/ */
    ExitAux_reset_City(&outC->Context_ExitAux_1[idx1]);
  }
  for (idx = 0; idx < 2; idx++) {
    /* _L24=(Robot::CarGeometry#1)/ */
    CarGeometry_reset_Robot(&outC->Context_CarGeometry_1[idx]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Exit_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

