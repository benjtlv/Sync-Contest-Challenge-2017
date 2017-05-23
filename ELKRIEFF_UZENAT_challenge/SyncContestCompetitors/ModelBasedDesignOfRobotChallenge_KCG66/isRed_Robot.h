/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _isRed_Robot_H_
#define _isRed_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* is_red/ */ is_red;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L6/ */ _L6;
  kcg_uint8 /* _L3/ */ _L3;
  kcg_uint8 /* _L4/ */ _L4;
  kcg_uint8 /* _L5/ */ _L5;
  colorTy /* _L2/ */ _L2;
  kcg_bool /* _L1/ */ _L1;
} outC_isRed_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::isRed/ */
extern void isRed_Robot(/* color/ */ colorTy *color, outC_isRed_Robot *outC);

extern void isRed_reset_Robot(outC_isRed_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void isRed_init_Robot(outC_isRed_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isRed_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isRed_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

