/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScoringA_City.h"

/* City::ScoringA/ */
void ScoringA_City(
  /* Events/ */
  eventTy *Events,
  /* RobotStatus/ */
  statusTy RobotStatus,
  outC_ScoringA_City *outC)
{
  outC->_L59 = kcg_lit_int32(0);
  outC->_L58 = kcg_lit_int32(0);
  kcg_copy_eventTy(&outC->_L4, Events);
  outC->_L39 = outC->_L4.dirEvent;
  outC->_L55 = !outC->_L39;
  outC->_L54 = kcg_lit_int32(20);
  /* _L53=(digital::count_down#1)/ */
  count_down_digital_int32(outC->_L55, outC->_L54, &outC->Context_count_down_1);
  outC->_L53 = outC->Context_count_down_1.cpt_int32;
  outC->_L57 = outC->_L53 < outC->_L59;
  outC->_L56 = outC->_L58 == outC->_L53;
  outC->_L52 = kcg_lit_int32(-2000);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L5 = outC->_L4.collisionEvent;
  /* _L48=(digital::RisingEdge#7)/ */
  RisingEdge_digital(outC->_L5, &outC->Context_RisingEdge_7);
  outC->_L48 = outC->Context_RisingEdge_7.RE_Output;
  /* _L50= */
  if (outC->_L48) {
    outC->_L50 = outC->_L52;
  }
  else {
    outC->_L50 = outC->_L51;
  }
  outC->_L35 = kcg_lit_int32(1000);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(-10);
  /* _L42= */
  if (outC->_L57) {
    outC->_L42 = outC->_L45;
  }
  else {
    outC->_L42 = outC->_L46;
  }
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(-500);
  /* _L41= */
  if (outC->_L56) {
    outC->_L41 = outC->_L43;
  }
  else {
    outC->_L41 = outC->_L44;
  }
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(-5000);
  outC->_L6 = outC->_L4.exitRoad;
  /* _L22=(digital::RisingEdge#4)/ */
  RisingEdge_digital(outC->_L6, &outC->Context_RisingEdge_4);
  outC->_L22 = outC->Context_RisingEdge_4.RE_Output;
  /* _L23= */
  if (outC->_L22) {
    outC->_L23 = outC->_L24;
  }
  else {
    outC->_L23 = outC->_L25;
  }
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(-2);
  outC->_L7 = outC->_L4.speedExcess;
  /* _L18= */
  if (outC->_L7) {
    outC->_L18 = outC->_L19;
  }
  else {
    outC->_L18 = outC->_L20;
  }
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(-100);
  /* _L14=(digital::RisingEdge#3)/ */
  RisingEdge_digital(outC->_L7, &outC->Context_RisingEdge_3);
  outC->_L14 = outC->Context_RisingEdge_3.RE_Output;
  /* _L15= */
  if (outC->_L14) {
    outC->_L15 = outC->_L16;
  }
  else {
    outC->_L15 = outC->_L17;
  }
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(-500);
  outC->_L8 = outC->_L4.lightRun;
  /* _L9=(digital::RisingEdge#1)/ */
  RisingEdge_digital(outC->_L8, &outC->Context_RisingEdge_1);
  outC->_L9 = outC->Context_RisingEdge_1.RE_Output;
  /* _L10= */
  if (outC->_L9) {
    outC->_L10 = outC->_L11;
  }
  else {
    outC->_L10 = outC->_L12;
  }
  outC->_L47 = outC->_L10 + outC->_L15 + outC->_L18 + outC->_L23 + outC->_L50 +
    outC->_L41 + outC->_L42;
  /* _L37= */
  if (outC->init) {
    outC->_L37 = kcg_lit_int32(10000);
  }
  else {
    outC->_L37 = outC->_L38;
  }
  outC->_L30 = kcg_lit_int32(0);
  outC->_L27 = Running;
  outC->_L3 = RobotStatus;
  outC->_L26 = outC->_L3 == outC->_L27;
  /* _L28= */
  if (outC->_L26) {
    outC->_L28 = outC->_L47;
  }
  else {
    outC->_L28 = outC->_L30;
  }
  outC->_L36 = kcg_lit_int32(0);
  outC->_L33 = Arrived;
  outC->_L32 = outC->_L33 == outC->_L3;
  /* _L31=(digital::RisingEdge#5)/ */
  RisingEdge_digital(outC->_L32, &outC->Context_RisingEdge_5);
  outC->_L31 = outC->Context_RisingEdge_5.RE_Output;
  /* _L34= */
  if (outC->_L31) {
    outC->_L34 = outC->_L35;
  }
  else {
    outC->_L34 = outC->_L36;
  }
  outC->_L38 = outC->_L37 + outC->_L34 + outC->_L28;
  outC->score = outC->_L38;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void ScoringA_init_City(outC_ScoringA_City *outC)
{
  outC->_L59 = kcg_lit_int32(0);
  outC->_L58 = kcg_lit_int32(0);
  outC->_L57 = kcg_true;
  outC->_L56 = kcg_true;
  outC->_L55 = kcg_true;
  outC->_L54 = kcg_lit_int32(0);
  outC->_L53 = kcg_lit_int32(0);
  outC->_L52 = kcg_lit_int32(0);
  outC->_L50 = kcg_lit_int32(0);
  outC->_L51 = kcg_lit_int32(0);
  outC->_L48 = kcg_true;
  outC->_L35 = kcg_lit_int32(0);
  outC->_L47 = kcg_lit_int32(0);
  outC->_L46 = kcg_lit_int32(0);
  outC->_L45 = kcg_lit_int32(0);
  outC->_L44 = kcg_lit_int32(0);
  outC->_L43 = kcg_lit_int32(0);
  outC->_L42 = kcg_lit_int32(0);
  outC->_L41 = kcg_lit_int32(0);
  outC->_L39 = kcg_true;
  outC->_L37 = kcg_lit_int32(0);
  outC->_L36 = kcg_lit_int32(0);
  outC->_L34 = kcg_lit_int32(0);
  outC->_L33 = Preparing;
  outC->_L32 = kcg_true;
  outC->_L31 = kcg_true;
  outC->_L30 = kcg_lit_int32(0);
  outC->_L28 = kcg_lit_int32(0);
  outC->_L27 = Preparing;
  outC->_L26 = kcg_true;
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_lit_int32(0);
  outC->_L23 = kcg_lit_int32(0);
  outC->_L22 = kcg_true;
  outC->_L20 = kcg_lit_int32(0);
  outC->_L19 = kcg_lit_int32(0);
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_lit_int32(0);
  outC->_L15 = kcg_lit_int32(0);
  outC->_L14 = kcg_true;
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L8 = kcg_true;
  outC->_L4.lightRun = kcg_true;
  outC->_L4.speedExcess = kcg_true;
  outC->_L4.exitRoad = kcg_true;
  outC->_L4.collisionEvent = kcg_true;
  outC->_L4.dirEvent = kcg_true;
  outC->_L3 = Preparing;
  outC->_L38 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->score = kcg_lit_int32(0);
  /* _L31=(digital::RisingEdge#5)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_5);
  /* _L9=(digital::RisingEdge#1)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_1);
  /* _L14=(digital::RisingEdge#3)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_3);
  /* _L22=(digital::RisingEdge#4)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_4);
  /* _L48=(digital::RisingEdge#7)/ */
  RisingEdge_init_digital(&outC->Context_RisingEdge_7);
  /* _L53=(digital::count_down#1)/ */
  count_down_init_digital_int32(&outC->Context_count_down_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ScoringA_reset_City(outC_ScoringA_City *outC)
{
  outC->init = kcg_true;
  /* _L31=(digital::RisingEdge#5)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_5);
  /* _L9=(digital::RisingEdge#1)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_1);
  /* _L14=(digital::RisingEdge#3)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_3);
  /* _L22=(digital::RisingEdge#4)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_4);
  /* _L48=(digital::RisingEdge#7)/ */
  RisingEdge_reset_digital(&outC->Context_RisingEdge_7);
  /* _L53=(digital::count_down#1)/ */
  count_down_reset_digital_int32(&outC->Context_count_down_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ScoringA_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

