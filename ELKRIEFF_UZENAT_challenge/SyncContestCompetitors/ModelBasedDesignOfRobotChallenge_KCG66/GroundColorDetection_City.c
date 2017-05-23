/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GroundColorDetection_City.h"

/* City::GroundColorDetection/ */
void GroundColorDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_GroundColorDetection_City *outC)
{
  kcg_bool noname;
  kcg_int32 _1_noname;
  kcg_float64 _2_noname;
  kcg_float64 _3_noname;
  kcg_int32 _4_noname;
  kcg_bool _5_noname;
  kcg_float64 _6_noname;
  kcg_float64 _7_noname;
  paramTLArr_City _8_noname;

  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  kcg_copy_positionTy(&outC->_L4, &outC->_L1.position);
  /* _L5=(City::MapADT#1)/ */
  MapADT_City(&outC->_L4, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L5, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L13, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_paramTLArr_City(&_8_noname, &outC->_L13);
  outC->_L12 = outC->_L5.diry;
  _7_noname = outC->_L12;
  outC->_L11 = outC->_L5.dirx;
  _6_noname = outC->_L11;
  outC->_L10 = outC->_L5.TLrequired;
  _5_noname = outC->_L10;
  outC->_L9 = outC->_L5.TLnumber;
  _4_noname = outC->_L9;
  kcg_copy_colorTy(&outC->_L8, &outC->_L5.color);
  outC->_L7 = outC->_L5.onRoad;
  outC->_L6 = outC->_L5.maxSpeed;
  outC->_L2 = outC->_L1.heading;
  _3_noname = outC->_L2;
  outC->_L3 = outC->_L1.velocity;
  _2_noname = outC->_L3;
  _1_noname = outC->_L6;
  noname = outC->_L7;
  kcg_copy_colorTy(&outC->roadColor, &outC->_L8);
}

#ifndef KCG_USER_DEFINED_INIT
void GroundColorDetection_init_City(outC_GroundColorDetection_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    outC->_L13[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L13[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L13[idx].tGreen = kcg_lit_int32(0);
    outC->_L13[idx].tAmber = kcg_lit_int32(0);
    outC->_L13[idx].tRed = kcg_lit_int32(0);
    outC->_L13[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_int32(0);
  outC->_L6 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L8.red = kcg_lit_uint8(0);
  outC->_L8.green = kcg_lit_uint8(0);
  outC->_L8.blue = kcg_lit_uint8(0);
  outC->_L5.color.red = kcg_lit_uint8(0);
  outC->_L5.color.green = kcg_lit_uint8(0);
  outC->_L5.color.blue = kcg_lit_uint8(0);
  outC->_L5.onRoad = kcg_true;
  outC->_L5.maxSpeed = kcg_lit_int32(0);
  outC->_L5.TLnumber = kcg_lit_int32(0);
  outC->_L5.TLrequired = kcg_true;
  outC->_L5.dirx = kcg_lit_float64(0.0);
  outC->_L5.diry = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4.x = kcg_lit_float64(0.0);
  outC->_L4.y = kcg_lit_float64(0.0);
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->roadColor.red = kcg_lit_uint8(0);
  outC->roadColor.green = kcg_lit_uint8(0);
  outC->roadColor.blue = kcg_lit_uint8(0);
  /* _L5=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void GroundColorDetection_reset_City(outC_GroundColorDetection_City *outC)
{
  /* _L5=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** GroundColorDetection_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

