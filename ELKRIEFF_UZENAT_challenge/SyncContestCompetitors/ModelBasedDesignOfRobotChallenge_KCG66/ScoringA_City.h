/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */
#ifndef _ScoringA_City_H_
#define _ScoringA_City_H_

#include "kcg_types.h"
#include "count_down_digital_int32.h"
#include "RisingEdge_digital.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* score/ */ score;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L38/ */ _L38;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* _L31=(digital::RisingEdge#5)/ */ Context_RisingEdge_5;
  outC_RisingEdge_digital /* _L9=(digital::RisingEdge#1)/ */ Context_RisingEdge_1;
  outC_RisingEdge_digital /* _L14=(digital::RisingEdge#3)/ */ Context_RisingEdge_3;
  outC_RisingEdge_digital /* _L22=(digital::RisingEdge#4)/ */ Context_RisingEdge_4;
  outC_RisingEdge_digital /* _L48=(digital::RisingEdge#7)/ */ Context_RisingEdge_7;
  outC_count_down_digital_int32 /* _L53=(digital::count_down#1)/ */ Context_count_down_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  statusTy /* _L3/ */ _L3;
  eventTy /* _L4/ */ _L4;
  kcg_bool /* _L8/ */ _L8;
  kcg_bool /* _L7/ */ _L7;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_bool /* _L14/ */ _L14;
  kcg_int32 /* _L15/ */ _L15;
  kcg_int32 /* _L16/ */ _L16;
  kcg_int32 /* _L17/ */ _L17;
  kcg_int32 /* _L18/ */ _L18;
  kcg_int32 /* _L19/ */ _L19;
  kcg_int32 /* _L20/ */ _L20;
  kcg_bool /* _L22/ */ _L22;
  kcg_int32 /* _L23/ */ _L23;
  kcg_int32 /* _L24/ */ _L24;
  kcg_int32 /* _L25/ */ _L25;
  kcg_bool /* _L26/ */ _L26;
  statusTy /* _L27/ */ _L27;
  kcg_int32 /* _L28/ */ _L28;
  kcg_int32 /* _L30/ */ _L30;
  kcg_bool /* _L31/ */ _L31;
  kcg_bool /* _L32/ */ _L32;
  statusTy /* _L33/ */ _L33;
  kcg_int32 /* _L34/ */ _L34;
  kcg_int32 /* _L36/ */ _L36;
  kcg_int32 /* _L37/ */ _L37;
  kcg_bool /* _L39/ */ _L39;
  kcg_int32 /* _L41/ */ _L41;
  kcg_int32 /* _L42/ */ _L42;
  kcg_int32 /* _L43/ */ _L43;
  kcg_int32 /* _L44/ */ _L44;
  kcg_int32 /* _L45/ */ _L45;
  kcg_int32 /* _L46/ */ _L46;
  kcg_int32 /* _L47/ */ _L47;
  kcg_int32 /* _L35/ */ _L35;
  kcg_bool /* _L48/ */ _L48;
  kcg_int32 /* _L51/ */ _L51;
  kcg_int32 /* _L50/ */ _L50;
  kcg_int32 /* _L52/ */ _L52;
  kcg_int32 /* _L53/ */ _L53;
  kcg_int32 /* _L54/ */ _L54;
  kcg_bool /* _L55/ */ _L55;
  kcg_bool /* _L56/ */ _L56;
  kcg_bool /* _L57/ */ _L57;
  kcg_int32 /* _L58/ */ _L58;
  kcg_int32 /* _L59/ */ _L59;
} outC_ScoringA_City;

/* ===========  node initialization and cycle functions  =========== */
/* City::ScoringA/ */
extern void ScoringA_City(
  /* Events/ */
  eventTy *Events,
  /* RobotStatus/ */
  statusTy RobotStatus,
  outC_ScoringA_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ScoringA_reset_City(outC_ScoringA_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ScoringA_init_City(outC_ScoringA_City *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _ScoringA_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ScoringA_City.h
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

