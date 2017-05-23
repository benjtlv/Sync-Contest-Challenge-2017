/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Light_City.h"

/* City::Light/ */
void Light_City(
  /* trafLights/ */
  trafLArr *trafLights,
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* mapid/ */
  kcg_int32 mapid,
  outC_Light_City *outC)
{
  positionTy noname;
  kcg_float64 _1_noname;
  kcg_bool _2_noname;
  kcg_int32 _3_noname;
  colorTy _4_noname;
  kcg_float64 _5_noname;
  kcg_float64 _6_noname;
  paramTLArr_City _7_noname;

  kcg_copy_phaseTy(&outC->_L6, RobotPhase);
  kcg_copy_positionTy(&outC->_L10, &outC->_L6.position);
  /* _L5=(City::MapADT#1)/ */
  MapADT_City(&outC->_L10, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L5, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L27, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_paramTLArr_City(&_7_noname, &outC->_L27);
  outC->_L26 = outC->_L5.diry;
  _6_noname = outC->_L26;
  outC->_L25 = outC->_L5.dirx;
  _5_noname = outC->_L25;
  outC->_L24 = kcg_lit_float64(0.01);
  outC->_L11 = outC->_L6.velocity;
  outC->_L23 = outC->_L11 > outC->_L24;
  outC->_L19 = outC->_L5.TLrequired;
  outC->_L21 = redQ;
  outC->_L18 = outC->_L5.TLnumber;
  kcg_copy_trafLArr(&outC->_L8, trafLights);
  if ((kcg_lit_int32(0) <= outC->_L18) & (outC->_L18 < kcg_lit_int32(5))) {
    kcg_copy_trafLTy(&outC->_L4, &outC->_L8[outC->_L18]);
  }
  else {
    outC->_L4.position.x = kcg_lit_float64(0.);
    outC->_L4.position.y = kcg_lit_float64(0.);
    outC->_L4.light = otherQ;
  }
  outC->_L29 = outC->_L4.light;
  outC->_L20 = outC->_L29 == outC->_L21;
  outC->_L22 = outC->_L20 & outC->_L19 & outC->_L23;
  kcg_copy_colorTy(&outC->_L15, &outC->_L5.color);
  outC->_L16 = outC->_L5.onRoad;
  outC->_L17 = outC->_L5.maxSpeed;
  kcg_copy_positionTy(&outC->_L13, &outC->_L4.position);
  outC->_L12 = outC->_L6.heading;
  kcg_copy_colorTy(&_4_noname, &outC->_L15);
  _3_noname = outC->_L17;
  _2_noname = outC->_L16;
  _1_noname = outC->_L12;
  kcg_copy_positionTy(&noname, &outC->_L13);
  outC->lightRun = outC->_L22;
}

#ifndef KCG_USER_DEFINED_INIT
void Light_init_City(outC_Light_City *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L29 = redQ;
  for (idx = 0; idx < 5; idx++) {
    outC->_L27[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L27[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L27[idx].tGreen = kcg_lit_int32(0);
    outC->_L27[idx].tAmber = kcg_lit_int32(0);
    outC->_L27[idx].tRed = kcg_lit_int32(0);
    outC->_L27[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L26 = kcg_lit_float64(0.0);
  outC->_L25 = kcg_lit_float64(0.0);
  outC->_L24 = kcg_lit_float64(0.0);
  outC->_L23 = kcg_true;
  outC->_L22 = kcg_true;
  outC->_L21 = redQ;
  outC->_L20 = kcg_true;
  outC->_L4.position.x = kcg_lit_float64(0.0);
  outC->_L4.position.y = kcg_lit_float64(0.0);
  outC->_L4.light = redQ;
  outC->_L5.color.red = kcg_lit_uint8(0);
  outC->_L5.color.green = kcg_lit_uint8(0);
  outC->_L5.color.blue = kcg_lit_uint8(0);
  outC->_L5.onRoad = kcg_true;
  outC->_L5.maxSpeed = kcg_lit_int32(0);
  outC->_L5.TLnumber = kcg_lit_int32(0);
  outC->_L5.TLrequired = kcg_true;
  outC->_L5.dirx = kcg_lit_float64(0.0);
  outC->_L5.diry = kcg_lit_float64(0.0);
  outC->_L6.position.x = kcg_lit_float64(0.0);
  outC->_L6.position.y = kcg_lit_float64(0.0);
  outC->_L6.velocity = kcg_lit_float64(0.0);
  outC->_L6.heading = kcg_lit_float64(0.0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L8[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L8[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L8[idx1].light = redQ;
  }
  outC->_L12 = kcg_lit_float64(0.0);
  outC->_L11 = kcg_lit_float64(0.0);
  outC->_L10.x = kcg_lit_float64(0.0);
  outC->_L10.y = kcg_lit_float64(0.0);
  outC->_L13.x = kcg_lit_float64(0.0);
  outC->_L13.y = kcg_lit_float64(0.0);
  outC->_L19 = kcg_true;
  outC->_L18 = kcg_lit_int32(0);
  outC->_L17 = kcg_lit_int32(0);
  outC->_L16 = kcg_true;
  outC->_L15.red = kcg_lit_uint8(0);
  outC->_L15.green = kcg_lit_uint8(0);
  outC->_L15.blue = kcg_lit_uint8(0);
  outC->lightRun = kcg_true;
  /* _L5=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Light_reset_City(outC_Light_City *outC)
{
  /* _L5=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Light_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

