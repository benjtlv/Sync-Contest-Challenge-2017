/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CarGeometry_Robot.h"

/* Robot::CarGeometry/ */
void CarGeometry_Robot(
  /* phase/ */
  phaseTy *phase,
  /* vec/ */
  array_float64_2 *vec,
  outC_CarGeometry_Robot *outC)
{
  kcg_float64 noname;

  kcg_copy_phaseTy(&outC->_L1, phase);
  kcg_copy_positionTy(&outC->_L18, &outC->_L1.position);
  /* _L26=(Utilities::pos2vec#1)/ */
  pos2vec_Utilities(&outC->_L18, &outC->Context_pos2vec_1);
  kcg_copy_array_float64_2(&outC->_L26, &outC->Context_pos2vec_1.vec);
  outC->_L20 = outC->_L1.heading;
  /* _L22=(Utilities::RotMatrix#1)/ */
  RotMatrix_Utilities(outC->_L20, &outC->Context_RotMatrix_1);
  kcg_copy_array_float64_2_2(&outC->_L22, &outC->Context_RotMatrix_1.res);
  kcg_copy_array_float64_2(&outC->_L43, vec);
  /* _L24=(vect::MatVectProd#1)/ */
  MatVectProd_vect_float64_2_2(
    &outC->_L22,
    &outC->_L43,
    &outC->Context_MatVectProd_1);
  kcg_copy_array_float64_2(
    &outC->_L24,
    &outC->Context_MatVectProd_1.R_float64_2_2);
  /* _L25=(vect::VectAdd#1)/ */
  VectAdd_vect_float64_2(&outC->_L26, &outC->_L24, &outC->Context_VectAdd_1);
  kcg_copy_array_float64_2(&outC->_L25, &outC->Context_VectAdd_1.W_float64_2);
  /* _L27=(Utilities::vec2pos#1)/ */
  vec2pos_Utilities(&outC->_L25, &outC->Context_vec2pos_1);
  kcg_copy_positionTy(&outC->_L27, &outC->Context_vec2pos_1.pos);
  kcg_copy_phaseTy(&outC->_L45, &outC->_L1);
  if (kcg_true) {
    kcg_copy_positionTy(&outC->_L45.position, &outC->_L27);
  }
  kcg_copy_phaseTy(&outC->newphase, &outC->_L45);
  kcg_copy_positionTy(&outC->newpos, &outC->_L27);
  outC->_L19 = outC->_L1.velocity;
  noname = outC->_L19;
}

#ifndef KCG_USER_DEFINED_INIT
void CarGeometry_init_Robot(outC_CarGeometry_Robot *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;

  outC->_L45.position.x = kcg_lit_float64(0.0);
  outC->_L45.position.y = kcg_lit_float64(0.0);
  outC->_L45.velocity = kcg_lit_float64(0.0);
  outC->_L45.heading = kcg_lit_float64(0.0);
  for (idx = 0; idx < 2; idx++) {
    outC->_L43[idx] = kcg_lit_float64(0.0);
  }
  outC->_L27.x = kcg_lit_float64(0.0);
  outC->_L27.y = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 2; idx1++) {
    outC->_L26[idx1] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 2; idx2++) {
    outC->_L25[idx2] = kcg_lit_float64(0.0);
  }
  for (idx3 = 0; idx3 < 2; idx3++) {
    outC->_L24[idx3] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 2; idx5++) {
    for (idx4 = 0; idx4 < 2; idx4++) {
      outC->_L22[idx5][idx4] = kcg_lit_float64(0.0);
    }
  }
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18.x = kcg_lit_float64(0.0);
  outC->_L18.y = kcg_lit_float64(0.0);
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->newphase.position.x = kcg_lit_float64(0.0);
  outC->newphase.position.y = kcg_lit_float64(0.0);
  outC->newphase.velocity = kcg_lit_float64(0.0);
  outC->newphase.heading = kcg_lit_float64(0.0);
  outC->newpos.x = kcg_lit_float64(0.0);
  outC->newpos.y = kcg_lit_float64(0.0);
  /* _L27=(Utilities::vec2pos#1)/ */
  vec2pos_init_Utilities(&outC->Context_vec2pos_1);
  /* _L25=(vect::VectAdd#1)/ */
  VectAdd_init_vect_float64_2(&outC->Context_VectAdd_1);
  /* _L24=(vect::MatVectProd#1)/ */
  MatVectProd_init_vect_float64_2_2(&outC->Context_MatVectProd_1);
  /* _L22=(Utilities::RotMatrix#1)/ */
  RotMatrix_init_Utilities(&outC->Context_RotMatrix_1);
  /* _L26=(Utilities::pos2vec#1)/ */
  pos2vec_init_Utilities(&outC->Context_pos2vec_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CarGeometry_reset_Robot(outC_CarGeometry_Robot *outC)
{
  /* _L27=(Utilities::vec2pos#1)/ */
  vec2pos_reset_Utilities(&outC->Context_vec2pos_1);
  /* _L25=(vect::VectAdd#1)/ */
  VectAdd_reset_vect_float64_2(&outC->Context_VectAdd_1);
  /* _L24=(vect::MatVectProd#1)/ */
  MatVectProd_reset_vect_float64_2_2(&outC->Context_MatVectProd_1);
  /* _L22=(Utilities::RotMatrix#1)/ */
  RotMatrix_reset_Utilities(&outC->Context_RotMatrix_1);
  /* _L26=(Utilities::pos2vec#1)/ */
  pos2vec_reset_Utilities(&outC->Context_pos2vec_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** CarGeometry_Robot.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

