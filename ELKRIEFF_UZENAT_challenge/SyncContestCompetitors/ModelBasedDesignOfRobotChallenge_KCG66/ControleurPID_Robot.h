/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-18T22:37:06
*************************************************************$ */
#ifndef _ControleurPID_Robot_H_
#define _ControleurPID_Robot_H_

#include "kcg_types.h"
#include "dev_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* _L88/, _L99/, localWheels/, wheels/ */ wheels;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_float64 /* _L158/ */ _L158;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ControleurPID_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::ControleurPID/ */
extern void ControleurPID_Robot(
  /* _L13/, _L9/, roadColor/ */
  colorTy *roadColor,
  /* _L135/, _L137/, _L138/, _L14/, localSpeed/, speed/ */
  kcg_float64 speed,
  outC_ControleurPID_Robot *outC);

extern void ControleurPID_reset_Robot(outC_ControleurPID_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ControleurPID_init_Robot(outC_ControleurPID_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ControleurPID_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ControleurPID_Robot.h
** Generation date: 2017-01-18T22:37:06
*************************************************************$ */

