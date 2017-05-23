/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _CarGeometry_Robot_H_
#define _CarGeometry_Robot_H_

#include "kcg_types.h"
#include "vec2pos_Utilities.h"
#include "pos2vec_Utilities.h"
#include "VectAdd_vect_float64_2.h"
#include "MatVectProd_vect_float64_2_2.h"
#include "RotMatrix_Utilities.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionTy /* newpos/ */ newpos;
  phaseTy /* newphase/ */ newphase;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_vec2pos_Utilities /* _L27=(Utilities::vec2pos#1)/ */ Context_vec2pos_1;
  outC_VectAdd_vect_float64_2 /* _L25=(vect::VectAdd#1)/ */ Context_VectAdd_1;
  outC_MatVectProd_vect_float64_2_2 /* _L24=(vect::MatVectProd#1)/ */ Context_MatVectProd_1;
  outC_RotMatrix_Utilities /* _L22=(Utilities::RotMatrix#1)/ */ Context_RotMatrix_1;
  outC_pos2vec_Utilities /* _L26=(Utilities::pos2vec#1)/ */ Context_pos2vec_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  phaseTy /* _L1/ */ _L1;
  positionTy /* _L18/ */ _L18;
  kcg_float64 /* _L19/ */ _L19;
  kcg_float64 /* _L20/ */ _L20;
  array_float64_2_2 /* _L22/ */ _L22;
  array_float64_2 /* _L24/ */ _L24;
  array_float64_2 /* _L25/ */ _L25;
  array_float64_2 /* _L26/ */ _L26;
  positionTy /* _L27/ */ _L27;
  array_float64_2 /* _L43/ */ _L43;
  phaseTy /* _L45/ */ _L45;
} outC_CarGeometry_Robot;

/* ===========  node initialization and cycle functions  =========== */
/* Robot::CarGeometry/ */
extern void CarGeometry_Robot(
  /* phase/ */
  phaseTy *phase,
  /* vec/ */
  array_float64_2 *vec,
  outC_CarGeometry_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void CarGeometry_reset_Robot(outC_CarGeometry_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void CarGeometry_init_Robot(outC_CarGeometry_Robot *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _CarGeometry_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** CarGeometry_Robot.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

