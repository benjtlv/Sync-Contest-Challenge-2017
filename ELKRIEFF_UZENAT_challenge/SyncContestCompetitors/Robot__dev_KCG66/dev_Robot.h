/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/Robot__dev_KCG66/config.txt
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */
#ifndef _dev_Robot_H_
#define _dev_Robot_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct { colorTy /* _L1/, color/ */ color; } inC_dev_Robot;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_float64 /* _L12/, d/ */ d;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_dev_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::dev/ */
extern void dev_Robot(inC_dev_Robot *inC, outC_dev_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void dev_reset_Robot(outC_dev_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void dev_init_Robot(outC_dev_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _dev_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** dev_Robot.h
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */

