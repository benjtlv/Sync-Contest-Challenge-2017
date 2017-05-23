/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Speed_City.h"

/* City::Speed/ */
void Speed_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Speed_City *outC)
{
  colorTy noname;
  kcg_bool _1_noname;
  kcg_float64 _2_noname;
  kcg_bool _3_noname;
  kcg_int32 _4_noname;
  kcg_float64 _5_noname;
  kcg_float64 _6_noname;
  paramTLArr_City _7_noname;

  kcg_copy_phaseTy(&outC->_L1, RobotPhase);
  kcg_copy_positionTy(&outC->_L4, &outC->_L1.position);
  /* _L5=(City::MapADT#1)/ */
  MapADT_City(&outC->_L4, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L5, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L18, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_paramTLArr_City(&_7_noname, &outC->_L18);
  outC->_L17 = outC->_L5.diry;
  _6_noname = outC->_L17;
  outC->_L16 = outC->_L5.dirx;
  _5_noname = outC->_L16;
  outC->_L14 = outC->_L5.TLnumber;
  _4_noname = outC->_L14;
  outC->_L15 = outC->_L5.TLrequired;
  _3_noname = outC->_L15;
  kcg_copy_colorTy(&outC->_L13, &outC->_L5.color);
  outC->_L12 = outC->_L5.onRoad;
  outC->_L11 = outC->_L5.maxSpeed;
  outC->_L2 = outC->_L1.heading;
  _2_noname = outC->_L2;
  _1_noname = outC->_L12;
  kcg_copy_colorTy(&noname, &outC->_L13);
  outC->_L3 = outC->_L1.velocity;
  outC->_L9 = /* _L9= */(kcg_float64) outC->_L11;
  outC->_L10 = outC->_L9 < outC->_L3;
  outC->speedExcess = outC->_L10;
}

#ifndef KCG_USER_DEFINED_INIT
void Speed_init_City(outC_Speed_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    outC->_L18[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L18[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L18[idx].tGreen = kcg_lit_int32(0);
    outC->_L18[idx].tAmber = kcg_lit_int32(0);
    outC->_L18[idx].tRed = kcg_lit_int32(0);
    outC->_L18[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L17 = kcg_lit_float64(0.0);
  outC->_L16 = kcg_lit_float64(0.0);
  outC->_L15 = kcg_true;
  outC->_L14 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L12 = kcg_true;
  outC->_L13.red = kcg_lit_uint8(0);
  outC->_L13.green = kcg_lit_uint8(0);
  outC->_L13.blue = kcg_lit_uint8(0);
  outC->_L5.color.red = kcg_lit_uint8(0);
  outC->_L5.color.green = kcg_lit_uint8(0);
  outC->_L5.color.blue = kcg_lit_uint8(0);
  outC->_L5.onRoad = kcg_true;
  outC->_L5.maxSpeed = kcg_lit_int32(0);
  outC->_L5.TLnumber = kcg_lit_int32(0);
  outC->_L5.TLrequired = kcg_true;
  outC->_L5.dirx = kcg_lit_float64(0.0);
  outC->_L5.diry = kcg_lit_float64(0.0);
  outC->_L10 = kcg_true;
  outC->_L9 = kcg_lit_float64(0.0);
  outC->_L2 = kcg_lit_float64(0.0);
  outC->_L3 = kcg_lit_float64(0.0);
  outC->_L4.x = kcg_lit_float64(0.0);
  outC->_L4.y = kcg_lit_float64(0.0);
  outC->_L1.position.x = kcg_lit_float64(0.0);
  outC->_L1.position.y = kcg_lit_float64(0.0);
  outC->_L1.velocity = kcg_lit_float64(0.0);
  outC->_L1.heading = kcg_lit_float64(0.0);
  outC->speedExcess = kcg_true;
  /* _L5=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Speed_reset_City(outC_Speed_City *outC)
{
  /* _L5=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Speed_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

