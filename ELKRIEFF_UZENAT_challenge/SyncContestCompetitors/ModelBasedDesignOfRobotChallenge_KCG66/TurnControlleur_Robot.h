/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _TurnControlleur_Robot_H_
#define _TurnControlleur_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* stop/ */ stop;
  wheelsTy_Robot /* speed/ */ speed;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L57/ */ _L57;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* dureeRotation/ */ dureeRotation;
  kcg_float64 /* coefRot/ */ coefRot;
  kcg_float64 /* x/ */ x;
  kcg_float64 /* _L2/ */ _L2;
  kcg_float64 /* _L26/ */ _L26;
  wheelsTy_Robot /* _L19/ */ _L19;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L27/ */ _L27;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L29/ */ _L29;
  kcg_bool /* _L30/ */ _L30;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L34/ */ _L34;
  kcg_float64 /* _L35/ */ _L35;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L43/ */ _L43;
  kcg_float64 /* _L44/ */ _L44;
  kcg_float64 /* _L45/ */ _L45;
  kcg_float64 /* _L46/ */ _L46;
  kcg_float64 /* _L47/ */ _L47;
  kcg_float64 /* _L48/ */ _L48;
  kcg_float64 /* _L49/ */ _L49;
  kcg_bool /* _L50/ */ _L50;
  kcg_float64 /* _L51/ */ _L51;
  kcg_float64 /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
} outC_TurnControlleur_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::TurnControlleur/ */
extern void TurnControlleur_Robot(
  /* turn/ */
  kcg_float64 turn,
  outC_TurnControlleur_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void TurnControlleur_reset_Robot(outC_TurnControlleur_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void TurnControlleur_init_Robot(outC_TurnControlleur_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _TurnControlleur_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TurnControlleur_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

