/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-18T16:52:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "abs_Robot.h"

/* Robot::abs/ */
kcg_float64 abs_Robot(/* _L1/, x/ */ kcg_float64 x)
{
  /* _L5/, y/ */
  kcg_float64 y;

  /* _L5= */
  if (x >= kcg_lit_float64(0.)) {
    y = x;
  }
  else {
    y = x * kcg_lit_float64(-1.);
  }
  return y;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** abs_Robot.c
** Generation date: 2017-01-18T16:52:26
*************************************************************$ */

