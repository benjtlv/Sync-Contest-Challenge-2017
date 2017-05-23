/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _instrPlus_Robot_H_
#define _instrPlus_Robot_H_

#include "kcg_types.h"
#include "addOne_Robot.h"
#include "isGreen_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* newIndex/ */ newIndex;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* _L38/ */ _L38;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_addOne_Robot /* _L45=(Robot::addOne#2)/ */ Context_addOne_2;
  outC_isGreen_Robot /* _L30=(Robot::isGreen#1)/ */ Context_isGreen_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* cond/ */ cond;
  colorTy /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L15/ */ _L15;
  kcg_bool /* _L35/ */ _L35;
  kcg_bool /* _L36/ */ _L36;
  kcg_bool /* _L39/ */ _L39;
  kcg_bool /* _L40/ */ _L40;
  kcg_bool /* _L42/ */ _L42;
  kcg_int32 /* _L45/ */ _L45;
  kcg_bool /* _L46/ */ _L46;
  kcg_bool /* _L47/ */ _L47;
  kcg_int32 /* _L44/ */ _L44;
  kcg_bool /* _L50/ */ _L50;
  kcg_bool /* _L51/ */ _L51;
  kcg_bool /* _L30/ */ _L30;
} outC_instrPlus_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::instrPlus/ */
extern void instrPlus_Robot(
  /* color/ */
  colorTy *color,
  /* index/ */
  kcg_int32 index,
  /* finTurn/ */
  kcg_bool finTurn,
  outC_instrPlus_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void instrPlus_reset_Robot(outC_instrPlus_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void instrPlus_init_Robot(outC_instrPlus_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _instrPlus_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** instrPlus_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

