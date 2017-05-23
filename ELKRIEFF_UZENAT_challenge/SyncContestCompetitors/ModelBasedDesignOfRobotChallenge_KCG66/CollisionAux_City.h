/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _CollisionAux_City_H_
#define _CollisionAux_City_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"
#include "AngleDist_Utilities.h"
#include "Normalize_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* accnew/ */ accnew;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Utilities /* _L20=(Utilities::Normalize#1)/ */ Context_Normalize_1;
  outC_AngleDist_Utilities /* _L16=(Utilities::AngleDist#1)/ */ Context_AngleDist_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* @1/A_Output/ */ A_Output_Abs_1_float64;
  kcg_float64 /* @1/A_Input/ */ A_Input_Abs_1_float64;
  kcg_float64 /* @1/_L8/ */ _L8_Abs_1_float64;
  kcg_float64 /* @1/_L5/ */ _L5_Abs_1_float64;
  kcg_float64 /* @1/_L3/ */ _L3_Abs_1_float64;
  kcg_float64 /* @1/_L2/ */ _L2_Abs_1_float64;
  kcg_bool /* @1/_L1/ */ _L1_Abs_1_float64;
  kcg_float64 /* @2/Output2/ */ Output2_SinCosR_1_float64;
  kcg_float64 /* @2/Output1/ */ Output1_SinCosR_1_float64;
  kcg_float64 /* @2/Input1/ */ Input1_SinCosR_1_float64;
  kcg_float64 /* @2/_L3/ */ _L3_SinCosR_1_float64;
  kcg_float64 /* @2/_L2/ */ _L2_SinCosR_1_float64;
  kcg_float64 /* @2/_L1/ */ _L1_SinCosR_1_float64;
  kcg_float64 /* angle/ */ angle;
  kcg_float64 /* dist/ */ dist;
  kcg_bool /* _L1/ */ _L1;
  phaseTy /* _L2/ */ _L2;
  obstTy /* _L3/ */ _L3;
  kcg_bool /* _L4/ */ _L4;
  kcg_float64 /* _L7/ */ _L7;
  kcg_float64 /* _L6/ */ _L6;
  positionTy /* _L5/ */ _L5;
  kcg_bool /* _L12/ */ _L12;
  positionTy /* _L11/ */ _L11;
  kcg_bool /* _L15/ */ _L15;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L20/ */ _L20;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_float64 /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  kcg_float64 /* _L28/ */ _L28;
  kcg_float64 /* _L27/ */ _L27;
  kcg_float64 /* _L29/ */ _L29;
  kcg_float64 /* _L30/ */ _L30;
  kcg_float64 /* _L32/ */ _L32;
  kcg_float64 /* _L31/ */ _L31;
  kcg_float64 /* _L33/ */ _L33;
  kcg_float64 /* _L34/ */ _L34;
  kcg_bool /* _L35/ */ _L35;
  kcg_float64 /* _L36/ */ _L36;
  kcg_bool /* _L37/ */ _L37;
  kcg_float64 /* _L38/ */ _L38;
  kcg_bool /* _L39/ */ _L39;
  kcg_float64 /* _L40/ */ _L40;
  kcg_bool /* _L41/ */ _L41;
  kcg_float64 /* _L42/ */ _L42;
  kcg_float64 /* _L43/ */ _L43;
} outC_CollisionAux_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::CollisionAux/ */
extern void CollisionAux_City(
  /* acc/ */
  kcg_bool acc,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacle/ */
  obstTy *obstacle,
  outC_CollisionAux_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CollisionAux_reset_City(outC_CollisionAux_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CollisionAux_init_City(outC_CollisionAux_City *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: City::CollisionAux/
  @1: (math::Abs#1)
  @2: (mathext::SinCosR#1)
*/

#endif /* _CollisionAux_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** CollisionAux_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

