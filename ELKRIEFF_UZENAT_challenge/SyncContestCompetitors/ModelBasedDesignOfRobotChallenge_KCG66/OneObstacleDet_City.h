/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _OneObstacleDet_City_H_
#define _OneObstacleDet_City_H_

#include "kcg_types.h"
#include "AngleDist_Utilities.h"
#include "Normalize_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* accnew/ */ accnew;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Normalize_Utilities /* _L18=(Utilities::Normalize#1)/ */ Context_Normalize_1;
  outC_AngleDist_Utilities /* _L15=(Utilities::AngleDist#1)/ */ Context_AngleDist_1;
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
  kcg_int32 /* @2/Mi_Output/ */ Mi_Output_Min_3_int32;
  kcg_int32 /* @2/I2/ */ I2_Min_3_int32;
  kcg_int32 /* @2/I1/ */ I1_Min_3_int32;
  kcg_bool /* @2/_L25/ */ _L25_Min_3_int32;
  kcg_int32 /* @2/_L24/ */ _L24_Min_3_int32;
  kcg_int32 /* @2/_L22/ */ _L22_Min_3_int32;
  kcg_int32 /* @2/_L21/ */ _L21_Min_3_int32;
  kcg_float64 /* _L5/ */ _L5;
  kcg_float64 /* _L4/ */ _L4;
  positionTy /* _L3/ */ _L3;
  kcg_float64 /* _L16/ */ _L16;
  kcg_float64 /* _L15/ */ _L15;
  kcg_float64 /* _L17/ */ _L17;
  kcg_float64 /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L21/ */ _L21;
  kcg_float64 /* _L23/ */ _L23;
  kcg_bool /* _L24/ */ _L24;
  kcg_bool /* _L28/ */ _L28;
  kcg_bool /* _L29/ */ _L29;
  kcg_int32 /* _L30/ */ _L30;
  kcg_int32 /* _L32/ */ _L32;
  phaseTy /* _L1/ */ _L1;
  kcg_int32 /* _L33/ */ _L33;
  obstTy /* _L36/ */ _L36;
  kcg_bool /* _L38/ */ _L38;
  positionTy /* _L37/ */ _L37;
  kcg_int32 /* _L46/ */ _L46;
  kcg_int32 /* _L45/ */ _L45;
  kcg_float64 /* _L47/ */ _L47;
  kcg_float64 /* _L48/ */ _L48;
} outC_OneObstacleDet_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::OneObstacleDet/ */
extern void OneObstacleDet_City(
  /* acc/ */
  kcg_int32 acc,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* obstacle/ */
  obstTy *obstacle,
  outC_OneObstacleDet_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void OneObstacleDet_reset_City(outC_OneObstacleDet_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void OneObstacleDet_init_City(outC_OneObstacleDet_City *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: City::OneObstacleDet/
  @1: (math::Abs#1)
  @2: (math::Min#3)
*/

#endif /* _OneObstacleDet_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** OneObstacleDet_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

