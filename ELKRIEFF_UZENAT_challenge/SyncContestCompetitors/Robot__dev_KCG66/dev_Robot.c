/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/Robot__dev_KCG66/config.txt
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dev_Robot.h"

/* Robot::dev/ */
void dev_Robot(inC_dev_Robot *inC, outC_dev_Robot *outC)
{
  outC->d = C1 * /* _L13= */(kcg_float64) inC->color.red +
    /* _L14= */(kcg_float64) inC->color.green * C2 + /* _L15= */(kcg_float64)
      inC->color.blue * C3;
}

#ifndef KCG_USER_DEFINED_INIT
void dev_init_Robot(outC_dev_Robot *outC)
{
  outC->d = kcg_lit_float64(0.0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void dev_reset_Robot(outC_dev_Robot *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** dev_Robot.c
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */

