/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _isGreen_Robot_H_
#define _isGreen_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* is_green/ */ is_green;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTy /* _L1/ */ _L1;
  kcg_uint8 /* _L6/ */ _L6;
  kcg_uint8 /* _L5/ */ _L5;
  kcg_uint8 /* _L4/ */ _L4;
  kcg_bool /* _L8/ */ _L8;
  colorTy /* _L9/ */ _L9;
} outC_isGreen_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::isGreen/ */
extern void isGreen_Robot(
  /* color/ */
  colorTy *color,
  outC_isGreen_Robot *outC);

extern void isGreen_reset_Robot(outC_isGreen_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void isGreen_init_Robot(outC_isGreen_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _isGreen_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** isGreen_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

