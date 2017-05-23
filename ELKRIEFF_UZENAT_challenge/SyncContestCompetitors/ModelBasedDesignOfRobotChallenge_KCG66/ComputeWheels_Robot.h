/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _ComputeWheels_Robot_H_
#define _ComputeWheels_Robot_H_

#include "kcg_types.h"
#include "PIDControler_Robot.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  wheelsTy_Robot /* wheels/ */ wheels;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_PIDControler_Robot /* _L159=(Robot::PIDControler#3)/ */ Context_PIDControler_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* IfBlock1:else: */ else_clock_IfBlock1;
  kcg_bool /* IfBlock1: */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_float64 /* IfBlock1:then:_L21/ */ _L21_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L20/ */ _L20_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L19/ */ _L19_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L18/ */ _L18_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L9/ */ _L9_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L10/ */ _L10_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L11/ */ _L11_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L12/ */ _L12_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L13/ */ _L13_then_IfBlock1;
  wheelsTy_Robot /* IfBlock1:then:_L15/ */ _L15_then_IfBlock1;
  kcg_float64 /* IfBlock1:then:_L17/ */ _L17_then_IfBlock1;
  wheelsTy_Robot /* IfBlock1:else:else:_L1/ */ _L1_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:_L4/ */ _L4_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:_L5/ */ _L5_else_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:else:_L6/ */ _L6_else_else_IfBlock1;
  wheelsTy_Robot /* IfBlock1:else:then:_L10/ */ _L10_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L9/ */ _L9_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L8/ */ _L8_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L6/ */ _L6_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L5/ */ _L5_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L4/ */ _L4_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L3/ */ _L3_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L11/ */ _L11_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L12/ */ _L12_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L16/ */ _L16_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L17/ */ _L17_then_else_IfBlock1;
  kcg_float64 /* IfBlock1:else:then:_L18/ */ _L18_then_else_IfBlock1;
  kcg_float64 /* epsilon/ */ epsilon;
  kcg_float64 /* localSpeed/ */ localSpeed;
  wheelsTy_Robot /* localWheels/ */ localWheels;
  kcg_float64 /* _L159/ */ _L159;
  colorTy /* _L161/ */ _L161;
  wheelsTy_Robot /* _L163/ */ _L163;
  kcg_float64 /* _L164/ */ _L164;
} outC_ComputeWheels_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::ComputeWheels/ */
extern void ComputeWheels_Robot(
  /* roadColor/ */
  colorTy *roadColor,
  /* speed/ */
  kcg_float64 speed,
  outC_ComputeWheels_Robot *outC);

extern void ComputeWheels_reset_Robot(outC_ComputeWheels_Robot *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void ComputeWheels_init_Robot(outC_ComputeWheels_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ComputeWheels_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ComputeWheels_Robot.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

