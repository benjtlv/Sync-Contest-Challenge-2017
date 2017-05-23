/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WallClock_City.h"

/* City::WallClock/ */
void WallClock_City(
  /* RobotStatus/ */
  statusTy RobotStatus,
  outC_WallClock_City *outC)
{
  outC->_L16 = TIMESTEP;
  /* _L12= */
  if (outC->init) {
    outC->_L12 = kcg_lit_int32(0);
  }
  else {
    outC->_L12 = outC->_L13;
  }
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(1);
  outC->_L1 = Running;
  outC->_L4 = RobotStatus;
  outC->_L3 = outC->_L4 == outC->_L1;
  /* _L7= */
  if (outC->_L3) {
    outC->_L7 = outC->_L10;
  }
  else {
    outC->_L7 = outC->_L11;
  }
  outC->_L13 = outC->_L12 + outC->_L7;
  outC->_L14 = /* _L14= */(kcg_float64) outC->_L13;
  outC->_L15 = outC->_L14 * outC->_L16;
  outC->time = outC->_L15;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void WallClock_init_City(outC_WallClock_City *outC)
{
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L1 = Preparing;
  outC->_L3 = kcg_true;
  outC->_L4 = Preparing;
  outC->_L7 = kcg_lit_int32(0);
  outC->_L13 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->time = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void WallClock_reset_City(outC_WallClock_City *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** WallClock_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

