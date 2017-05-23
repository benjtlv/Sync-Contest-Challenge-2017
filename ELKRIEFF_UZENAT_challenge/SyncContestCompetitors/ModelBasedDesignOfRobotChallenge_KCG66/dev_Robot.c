/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-18T22:37:07
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dev_Robot.h"

/* Robot::dev/ */
kcg_float64 dev_Robot(/* _L1/, color/ */ colorTy *color)
{
  /* _L12/, d/ */
  kcg_float64 d;

  d = C1 * /* _L13= */(kcg_float64) (*color).red + /* _L14= */(kcg_float64)
      (*color).green * C2 + /* _L15= */(kcg_float64) (*color).blue * C3;
  return d;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** dev_Robot.c
** Generation date: 2017-01-18T22:37:07
*************************************************************$ */

