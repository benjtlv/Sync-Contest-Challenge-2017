/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WrongDir_City.h"

/* City::WrongDir/ */
void WrongDir_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_WrongDir_City *outC)
{
  kcg_float64 noname;
  colorTy _1_noname;
  kcg_bool _2_noname;
  kcg_int32 _3_noname;
  kcg_int32 _4_noname;
  kcg_bool _5_noname;
  paramTLArr_City _6_noname;

  outC->_L16 = PI / kcg_lit_float64(180.);
  kcg_copy_phaseTy(&outC->_L11, RobotPhase);
  outC->_L10 = outC->_L11.heading;
  outC->_L15 = outC->_L10 * outC->_L16;
  outC->Input1_SinCosR_1_float64 = outC->_L15;
  outC->_L1_SinCosR_1_float64 = outC->Input1_SinCosR_1_float64;
  outC->_L3_SinCosR_1_float64 = /* @1/_L3=(mathext::CosR#1)/ */
    CosR64_mathext_mathextimpl(outC->_L1_SinCosR_1_float64);
  outC->Output2_SinCosR_1_float64 = outC->_L3_SinCosR_1_float64;
  outC->_L2_SinCosR_1_float64 = /* @1/_L2=(mathext::SinR#1)/ */
    SinR64_mathext_mathextimpl(outC->_L1_SinCosR_1_float64);
  outC->Output1_SinCosR_1_float64 = outC->_L2_SinCosR_1_float64;
  kcg_copy_positionTy(&outC->_L8, &outC->_L11.position);
  /* _L12=(City::MapADT#1)/ */
  MapADT_City(&outC->_L8, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L12, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L23, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_paramTLArr_City(&_6_noname, &outC->_L23);
  outC->_L5 = outC->_L12.TLrequired;
  _5_noname = outC->_L5;
  outC->_L4 = outC->_L12.TLnumber;
  _4_noname = outC->_L4;
  outC->_L3 = outC->_L12.maxSpeed;
  _3_noname = outC->_L3;
  outC->_L2 = outC->_L12.onRoad;
  _2_noname = outC->_L2;
  kcg_copy_colorTy(&outC->_L1, &outC->_L12.color);
  kcg_copy_colorTy(&_1_noname, &outC->_L1);
  outC->_L22 = kcg_lit_float64(-0.1);
  outC->_L6 = outC->_L12.dirx;
  outC->_L14 = outC->Output2_SinCosR_1_float64;
  outC->_L17 = outC->_L14 * outC->_L6;
  outC->_L13 = outC->Output1_SinCosR_1_float64;
  outC->_L7 = outC->_L12.diry;
  outC->_L18 = outC->_L7 * outC->_L13;
  outC->_L21 = outC->_L18 + outC->_L17;
  outC->_L20 = outC->_L21 < outC->_L22;
  outC->wrong = outC->_L20;
  outC->_L9 = outC->_L11.velocity;
  noname = outC->_L9;
}

#ifndef KCG_USER_DEFINED_INIT
void WrongDir_init_City(outC_WrongDir_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    outC->_L23[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L23[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L23[idx].tGreen = kcg_lit_int32(0);
    outC->_L23[idx].tAmber = kcg_lit_int32(0);
    outC->_L23[idx].tRed = kcg_lit_int32(0);
    outC->_L23[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L22 = kcg_lit_float64(0.0);
  outC->_L21 = kcg_lit_float64(0.0);
  outC->_L20 = kcg_true;
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_lit_float64(0.0);
  outC->_L14 = kcg_lit_float64(0.0);
  outC->_L13 = kcg_lit_float64(0.0);
  outC->_L7 = kcg_lit_float64(0.0);
  outC->_L6 = kcg_lit_float64(0.0);
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->_L2 = kcg_true;
  outC->_L1.red = kcg_lit_uint8(0);
  outC->_L1.green = kcg_lit_uint8(0);
  outC->_L1.blue = kcg_lit_uint8(0);
  outC->_L10 = kcg_lit_float64(0.0);
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L8.x = kcg_lit_float64(0.0);
  outC->_L8.y = kcg_lit_float64(0.0);
  outC->_L11.position.x = kcg_lit_float64(0.0);
  outC->_L11.position.y = kcg_lit_float64(0.0);
  outC->_L11.velocity = kcg_lit_float64(0.0);
  outC->_L11.heading = kcg_lit_float64(0.0);
  outC->_L12.color.red = kcg_lit_uint8(0);
  outC->_L12.color.green = kcg_lit_uint8(0);
  outC->_L12.color.blue = kcg_lit_uint8(0);
  outC->_L12.onRoad = kcg_true;
  outC->_L12.maxSpeed = kcg_lit_int32(0);
  outC->_L12.TLnumber = kcg_lit_int32(0);
  outC->_L12.TLrequired = kcg_true;
  outC->_L12.dirx = kcg_lit_float64(0.0);
  outC->_L12.diry = kcg_lit_float64(0.0);
  outC->_L1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->_L2_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->_L3_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Input1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Output1_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->Output2_SinCosR_1_float64 = kcg_lit_float64(0.0);
  outC->wrong = kcg_true;
  /* _L12=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void WrongDir_reset_City(outC_WrongDir_City *outC)
{
  /* _L12=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/*
  Expanded instances for: City::WrongDir/
  @1: (mathext::SinCosR#1)
*/

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** WrongDir_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

