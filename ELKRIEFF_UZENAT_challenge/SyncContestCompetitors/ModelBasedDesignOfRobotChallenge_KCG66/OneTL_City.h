/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _OneTL_City_H_
#define _OneTL_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trafLTy /* trafL/ */ trafL;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* @1/Ma_Output/ */ Ma_Output_Max_1_int32;
  kcg_int32 /* @1/I2/ */ I2_Max_1_int32;
  kcg_int32 /* @1/I1/ */ I1_Max_1_int32;
  kcg_int32 /* @1/_L4/ */ _L4_Max_1_int32;
  kcg_bool /* @1/_L3/ */ _L3_Max_1_int32;
  kcg_int32 /* @1/_L2/ */ _L2_Max_1_int32;
  kcg_int32 /* @1/_L1/ */ _L1_Max_1_int32;
  colorTyQ /* IfBlock1:then:_L1/ */ _L1_then_IfBlock1;
  colorTyQ /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  colorTyQ /* IfBlock1:else:then:_L2/ */ _L2_then_else_IfBlock1;
  kcg_int32 /* cpt/ */ cpt;
  kcg_int32 /* period/ */ period;
  colorTyQ /* light/ */ light;
  kcg_int32 /* tGreen/ */ tGreen;
  kcg_int32 /* tAmber/ */ tAmber;
  kcg_int32 /* tRed/ */ tRed;
  kcg_int32 /* tPhase/ */ tPhase;
  trafLTy /* _L25/ */ _L25;
  colorTyQ /* _L28/ */ _L28;
  paramTLTy_City /* _L30/ */ _L30;
  kcg_int32 /* _L35/ */ _L35;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L33/ */ _L33;
  kcg_int32 /* _L32/ */ _L32;
  positionTy /* _L31/ */ _L31;
  kcg_int32 /* _L4/ */ _L4;
  kcg_int32 /* _L44/ */ _L44;
  kcg_int32 /* _L45/ */ _L45;
  kcg_int32 /* _L47/ */ _L47;
  kcg_int32 /* _L50/ */ _L50;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L54/ */ _L54;
  kcg_int32 /* _L55/ */ _L55;
  kcg_float64 /* _L57/ */ _L57;
  kcg_int32 /* _L58/ */ _L58;
  kcg_int32 /* _L59/ */ _L59;
  kcg_int32 /* _L60/ */ _L60;
} outC_OneTL_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::OneTL/ */
extern void OneTL_City(
  /* param/ */
  paramTLTy_City *param,
  /* time/ */
  kcg_float64 time,
  outC_OneTL_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void OneTL_reset_City(outC_OneTL_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void OneTL_init_City(outC_OneTL_City *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: City::OneTL/
  @1: (math::Max#1)
*/

#endif /* _OneTL_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneTL_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

