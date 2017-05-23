/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _PIDControler_Robot_H_
#define _PIDControler_Robot_H_

#include "kcg_types.h"
#include "isRed_Robot.h"
#include "isGreen_Robot.h"
#include "Integrator_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* epsilon/ */ epsilon;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_float64 /* _L62/ */ _L62;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Integrator_Utilities /* _L63=(Utilities::Integrator#1)/ */ Context_Integrator_1;
  outC_isGreen_Robot /* _L72=(Robot::isGreen#1)/ */ Context_isGreen_1;
  outC_isRed_Robot /* _L73=(Robot::isRed#1)/ */ Context_isRed_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* dev/ */ dev;
  colorTy /* errorColor/ */ errorColor;
  colorTy /* _L24/ */ _L24;
  colorTy /* _L23/ */ _L23;
  colorTy /* _L21/ */ _L21;
  colorTy /* _L19/ */ _L19;
  kcg_bool /* _L18/ */ _L18;
  kcg_float64 /* _L44/ */ _L44;
  kcg_float64 /* _L43/ */ _L43;
  kcg_float64 /* _L42/ */ _L42;
  kcg_float64 /* _L41/ */ _L41;
  kcg_float64 /* _L40/ */ _L40;
  kcg_float64 /* _L37/ */ _L37;
  kcg_float64 /* _L61/ */ _L61;
  kcg_float64 /* _L60/ */ _L60;
  kcg_float64 /* _L59/ */ _L59;
  kcg_float64 /* _L58/ */ _L58;
  kcg_float64 /* _L57/ */ _L57;
  kcg_float64 /* _L56/ */ _L56;
  colorTy /* _L55/ */ _L55;
  kcg_float64 /* _L54/ */ _L54;
  kcg_float64 /* _L53/ */ _L53;
  kcg_uint8 /* _L50/ */ _L50;
  kcg_uint8 /* _L51/ */ _L51;
  kcg_uint8 /* _L52/ */ _L52;
  kcg_float64 /* _L49/ */ _L49;
  kcg_float64 /* _L48/ */ _L48;
  kcg_float64 /* _L47/ */ _L47;
  kcg_float64 /* _L63/ */ _L63;
  kcg_float64 /* _L64/ */ _L64;
  kcg_float64 /* _L65/ */ _L65;
  kcg_float64 /* _L67/ */ _L67;
  kcg_float64 /* _L69/ */ _L69;
  kcg_float64 /* _L70/ */ _L70;
  kcg_float64 /* _L71/ */ _L71;
  kcg_bool /* _L72/ */ _L72;
  kcg_bool /* _L73/ */ _L73;
} outC_PIDControler_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::PIDControler/ */
extern void PIDControler_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  outC_PIDControler_Robot *outC);

extern void PIDControler_reset_Robot(outC_PIDControler_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void PIDControler_init_Robot(outC_PIDControler_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _PIDControler_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** PIDControler_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

