/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScoringB_City.h"

/* City::ScoringB/ */
void ScoringB_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  outC_ScoringB_City *outC)
{
  positionTy noname;

  outC->_L25 = kcg_lit_float64(1.);
  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  outC->_L3 = outC->_L1.velocity;
  outC->_L24 = outC->_L3 >= outC->_L25;
  outC->_L23 = kcg_lit_float64(1000.);
  outC->_L19 = kcg_lit_float64(1.);
  /* _L16=(Utilities::UpTime#1)/ */
  UpTime_Utilities(outC->_L3, TIMESTEP, &outC->Context_UpTime_1);
  outC->_L16 = outC->Context_UpTime_1.t;
  outC->_L18 = outC->_L16 + outC->_L19;
  outC->_L4 = outC->_L1.heading;
  /* _L17=(Utilities::Variation#1)/ */
  Variation_Utilities(
    outC->_L24,
    outC->_L4,
    TIMESTEP,
    &outC->Context_Variation_1);
  outC->_L17 = outC->Context_Variation_1.varX;
  outC->_L20 = outC->_L17 / outC->_L18;
  outC->_L21 = outC->_L23 - outC->_L20;
  outC->_L22 = /* _L22= */(kcg_int32) outC->_L21;
  kcg_copy_positionTy(&outC->_L2, &outC->_L1.position);
  kcg_copy_positionTy(&noname, &outC->_L2);
  outC->score = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void ScoringB_init_City(outC_ScoringB_City *outC)
{
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_true;
  outC->_L23 = kcg_lit_float64(0.0);
  outC->_L22 = kcg_lit_int32(0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L2.x = kcg_lit_float64(0.0);
  outC->_L2.y = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4 = kcg_lit_float64(0.0);
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->score = kcg_lit_int32(0);
  /* _L17=(Utilities::Variation#1)/ */
  Variation_init_Utilities(&outC->Context_Variation_1);
  /* _L16=(Utilities::UpTime#1)/ */
  UpTime_init_Utilities(&outC->Context_UpTime_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ScoringB_reset_City(outC_ScoringB_City *outC)
{
  /* _L17=(Utilities::Variation#1)/ */
  Variation_reset_Utilities(&outC->Context_Variation_1);
  /* _L16=(Utilities::UpTime#1)/ */
  UpTime_reset_Utilities(&outC->Context_UpTime_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ScoringB_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

