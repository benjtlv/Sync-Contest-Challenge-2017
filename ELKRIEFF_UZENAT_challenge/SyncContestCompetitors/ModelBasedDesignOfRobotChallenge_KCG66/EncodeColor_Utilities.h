/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _EncodeColor_Utilities_H_
#define _EncodeColor_Utilities_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  colorTy /* colorRGB/ */ colorRGB;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  colorTyQ /* _L2/ */ _L2;
  colorTy /* _L3/ */ _L3;
  colorTy /* _L4/ */ _L4;
  colorTy /* _L5/ */ _L5;
  colorTy /* _L6/ */ _L6;
  colorTy /* _L7/ */ _L7;
} outC_EncodeColor_Utilities;

/* ===========  node initialization and cycle functions  =========== */
/* Utilities::EncodeColor/ */
extern void EncodeColor_Utilities(
  /* colorQual/ */
  colorTyQ colorQual,
  outC_EncodeColor_Utilities *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EncodeColor_reset_Utilities(outC_EncodeColor_Utilities *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EncodeColor_init_Utilities(outC_EncodeColor_Utilities *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EncodeColor_Utilities_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EncodeColor_Utilities.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

