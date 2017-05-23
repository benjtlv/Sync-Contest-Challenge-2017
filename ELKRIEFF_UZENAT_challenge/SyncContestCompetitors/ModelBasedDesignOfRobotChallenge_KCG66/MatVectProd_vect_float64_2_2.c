/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MatVectProd_vect_float64_2_2.h"

/* vect::MatVectProd/ */
void MatVectProd_vect_float64_2_2(
  /* A/ */
  array_float64_2_2 *A_float64_2_2,
  /* V/ */
  array_float64_2 *V_float64_2_2,
  outC_MatVectProd_vect_float64_2_2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx_ScalProd_1;
  kcg_float64 acc_ScalProd_1;
  kcg_size _2_idx_ScalProd_1;

  kcg_copy_array_float64_2(&outC->_L2_float64_2_2, V_float64_2_2);
  /* _L4/ */
  for (idx = 0; idx < 2; idx++) {
    kcg_copy_array_float64_2(&outC->_L4_float64_2_2[idx], &outC->_L2_float64_2_2);
  }
  kcg_copy_array_float64_2_2(&outC->_L1_float64_2_2, A_float64_2_2);
  /* _L7= */
  for (idx1 = 0; idx1 < 2; idx1++) {
    kcg_copy_array_float64_2(
      &outC->_L2_ScalProd_1_float64_2[idx1],
      &outC->_L1_float64_2_2[idx1]);
    kcg_copy_array_float64_2(
      &outC->_L3_ScalProd_1_float64_2[idx1],
      &outC->_L4_float64_2_2[idx1]);
    /* @1/_L7= */
    for (_2_idx_ScalProd_1 = 0; _2_idx_ScalProd_1 < 2; _2_idx_ScalProd_1++) {
      outC->_L7_ScalProd_1_float64_2[idx1][_2_idx_ScalProd_1] =
        outC->_L2_ScalProd_1_float64_2[idx1][_2_idx_ScalProd_1] *
        outC->_L3_ScalProd_1_float64_2[idx1][_2_idx_ScalProd_1];
    }
    outC->_L4_ScalProd_1_float64_2[idx1] = kcg_lit_float64(0.);
    outC->_L6_ScalProd_1_float64_2[idx1] = outC->_L4_ScalProd_1_float64_2[idx1];
    /* @1/_L6= */
    for (idx_ScalProd_1 = 0; idx_ScalProd_1 < 2; idx_ScalProd_1++) {
      acc_ScalProd_1 = outC->_L6_ScalProd_1_float64_2[idx1];
      outC->_L6_ScalProd_1_float64_2[idx1] = acc_ScalProd_1 +
        outC->_L7_ScalProd_1_float64_2[idx1][idx_ScalProd_1];
    }
    outC->_L7_float64_2_2[idx1] = outC->_L6_ScalProd_1_float64_2[idx1];
  }
  kcg_copy_array_float64_2(&outC->R_float64_2_2, &outC->_L7_float64_2_2);
}

#ifndef KCG_USER_DEFINED_INIT
void MatVectProd_init_vect_float64_2_2(outC_MatVectProd_vect_float64_2_2 *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;
  kcg_size idx5;
  kcg_size idx6;
  kcg_size idx7;
  kcg_size idx8;
  kcg_size idx9;
  kcg_size idx10;
  kcg_size idx11;
  kcg_size idx12;
  kcg_size idx13;
  kcg_size idx14;

  for (idx = 0; idx < 2; idx++) {
    outC->_L7_float64_2_2[idx] = kcg_lit_float64(0.0);
  }
  for (idx2 = 0; idx2 < 2; idx2++) {
    for (idx1 = 0; idx1 < 2; idx1++) {
      outC->_L4_float64_2_2[idx2][idx1] = kcg_lit_float64(0.0);
    }
  }
  for (idx3 = 0; idx3 < 2; idx3++) {
    outC->_L2_float64_2_2[idx3] = kcg_lit_float64(0.0);
  }
  for (idx5 = 0; idx5 < 2; idx5++) {
    for (idx4 = 0; idx4 < 2; idx4++) {
      outC->_L1_float64_2_2[idx5][idx4] = kcg_lit_float64(0.0);
    }
  }
  for (idx7 = 0; idx7 < 2; idx7++) {
    for (idx6 = 0; idx6 < 2; idx6++) {
      outC->_L2_ScalProd_1_float64_2[idx7][idx6] = kcg_lit_float64(0.0);
    }
  }
  for (idx9 = 0; idx9 < 2; idx9++) {
    for (idx8 = 0; idx8 < 2; idx8++) {
      outC->_L3_ScalProd_1_float64_2[idx9][idx8] = kcg_lit_float64(0.0);
    }
  }
  for (idx10 = 0; idx10 < 2; idx10++) {
    outC->_L4_ScalProd_1_float64_2[idx10] = kcg_lit_float64(0.0);
  }
  for (idx11 = 0; idx11 < 2; idx11++) {
    outC->_L6_ScalProd_1_float64_2[idx11] = kcg_lit_float64(0.0);
  }
  for (idx13 = 0; idx13 < 2; idx13++) {
    for (idx12 = 0; idx12 < 2; idx12++) {
      outC->_L7_ScalProd_1_float64_2[idx13][idx12] = kcg_lit_float64(0.0);
    }
  }
  for (idx14 = 0; idx14 < 2; idx14++) {
    outC->R_float64_2_2[idx14] = kcg_lit_float64(0.0);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void MatVectProd_reset_vect_float64_2_2(outC_MatVectProd_vect_float64_2_2 *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: vect::MatVectProd/
  @1: (vect::ScalProd#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** MatVectProd_vect_float64_2_2.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

