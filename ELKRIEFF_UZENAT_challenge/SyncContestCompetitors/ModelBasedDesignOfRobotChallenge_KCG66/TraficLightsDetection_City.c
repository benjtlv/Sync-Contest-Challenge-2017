/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TraficLightsDetection_City.h"

/* City::TraficLightsDetection/ */
void TraficLightsDetection_City(
  /* RobotPhase/ */
  phaseTy *RobotPhase,
  /* TLights/ */
  trafLArr *TLights,
  /* mapid/ */
  kcg_int32 mapid,
  outC_TraficLightsDetection_City *outC)
{
  kcg_float64 noname;
  positionTy _1_noname;
  kcg_float64 _2_noname;
  kcg_bool _3_noname;
  colorTy _4_noname;
  kcg_bool _5_noname;
  kcg_int32 _6_noname;
  kcg_float64 _7_noname;
  kcg_float64 _8_noname;
  paramTLArr_City _9_noname;

  kcg_copy_phaseTy(&outC->_L21, RobotPhase);
  kcg_copy_positionTy(&outC->_L18, &outC->_L21.position);
  /* _L22=(City::MapADT#2)/ */
  MapADT_City(&outC->_L18, mapid, &outC->Context_MapADT_2);
  kcg_copy_mapDataTy_City(&outC->_L22, &outC->Context_MapADT_2.MapData);
  kcg_copy_paramTLArr_City(&outC->_L35, &outC->Context_MapADT_2.ParamsTL);
  kcg_copy_paramTLArr_City(&_9_noname, &outC->_L35);
  outC->_L34 = outC->_L22.diry;
  _8_noname = outC->_L34;
  outC->_L33 = outC->_L22.dirx;
  _7_noname = outC->_L33;
  outC->_L26 = outC->_L22.TLnumber;
  kcg_copy_trafLArr(&outC->_L2, TLights);
  if ((kcg_lit_int32(0) <= outC->_L26) & (outC->_L26 < kcg_lit_int32(5))) {
    kcg_copy_trafLTy(&outC->_L28, &outC->_L2[outC->_L26]);
  }
  else {
    outC->_L28.position.x = kcg_lit_float64(0.);
    outC->_L28.position.y = kcg_lit_float64(0.);
    outC->_L28.light = otherQ;
  }
  outC->_L37 = outC->_L28.light;
  /* _L32=(Utilities::EncodeColor#1)/ */
  EncodeColor_Utilities(outC->_L37, &outC->Context_EncodeColor_1);
  kcg_copy_colorTy(&outC->_L32, &outC->Context_EncodeColor_1.colorRGB);
  outC->_L25 = outC->_L22.maxSpeed;
  _6_noname = outC->_L25;
  outC->_L24 = outC->_L22.onRoad;
  _5_noname = outC->_L24;
  kcg_copy_colorTy(&outC->_L23, &outC->_L22.color);
  kcg_copy_colorTy(&_4_noname, &outC->_L23);
  outC->_L27 = outC->_L22.TLrequired;
  _3_noname = outC->_L27;
  kcg_copy_positionTy(&outC->_L30, &outC->_L28.position);
  outC->_L20 = outC->_L21.heading;
  _2_noname = outC->_L20;
  outC->_L19 = outC->_L21.velocity;
  kcg_copy_positionTy(&_1_noname, &outC->_L30);
  noname = outC->_L19;
  kcg_copy_colorTy(&outC->lightsColor, &outC->_L32);
}

#ifndef KCG_USER_DEFINED_INIT
void TraficLightsDetection_init_City(outC_TraficLightsDetection_City *outC)
{
  kcg_size idx;
  kcg_size idx1;

  outC->_L37 = redQ;
  for (idx = 0; idx < 5; idx++) {
    outC->_L35[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L35[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L35[idx].tGreen = kcg_lit_int32(0);
    outC->_L35[idx].tAmber = kcg_lit_int32(0);
    outC->_L35[idx].tRed = kcg_lit_int32(0);
    outC->_L35[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L34 = kcg_lit_float64(0.0);
  outC->_L33 = kcg_lit_float64(0.0);
  outC->_L32.red = kcg_lit_uint8(0);
  outC->_L32.green = kcg_lit_uint8(0);
  outC->_L32.blue = kcg_lit_uint8(0);
  outC->_L30.x = kcg_lit_float64(0.0);
  outC->_L30.y = kcg_lit_float64(0.0);
  outC->_L28.position.x = kcg_lit_float64(0.0);
  outC->_L28.position.y = kcg_lit_float64(0.0);
  outC->_L28.light = redQ;
  outC->_L20 = kcg_lit_float64(0.0);
  outC->_L19 = kcg_lit_float64(0.0);
  outC->_L18.x = kcg_lit_float64(0.0);
  outC->_L18.y = kcg_lit_float64(0.0);
  outC->_L21.position.x = kcg_lit_float64(0.0);
  outC->_L21.position.y = kcg_lit_float64(0.0);
  outC->_L21.velocity = kcg_lit_float64(0.0);
  outC->_L21.heading = kcg_lit_float64(0.0);
  outC->_L22.color.red = kcg_lit_uint8(0);
  outC->_L22.color.green = kcg_lit_uint8(0);
  outC->_L22.color.blue = kcg_lit_uint8(0);
  outC->_L22.onRoad = kcg_true;
  outC->_L22.maxSpeed = kcg_lit_int32(0);
  outC->_L22.TLnumber = kcg_lit_int32(0);
  outC->_L22.TLrequired = kcg_true;
  outC->_L22.dirx = kcg_lit_float64(0.0);
  outC->_L22.diry = kcg_lit_float64(0.0);
  outC->_L27 = kcg_true;
  outC->_L26 = kcg_lit_int32(0);
  outC->_L25 = kcg_lit_int32(0);
  outC->_L24 = kcg_true;
  outC->_L23.red = kcg_lit_uint8(0);
  outC->_L23.green = kcg_lit_uint8(0);
  outC->_L23.blue = kcg_lit_uint8(0);
  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L2[idx1].position.x = kcg_lit_float64(0.0);
    outC->_L2[idx1].position.y = kcg_lit_float64(0.0);
    outC->_L2[idx1].light = redQ;
  }
  outC->lightsColor.red = kcg_lit_uint8(0);
  outC->lightsColor.green = kcg_lit_uint8(0);
  outC->lightsColor.blue = kcg_lit_uint8(0);
  /* _L32=(Utilities::EncodeColor#1)/ */
  EncodeColor_init_Utilities(&outC->Context_EncodeColor_1);
  /* _L22=(City::MapADT#2)/ */ MapADT_init_City(&outC->Context_MapADT_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TraficLightsDetection_reset_City(outC_TraficLightsDetection_City *outC)
{
  /* _L32=(Utilities::EncodeColor#1)/ */
  EncodeColor_reset_Utilities(&outC->Context_EncodeColor_1);
  /* _L22=(City::MapADT#2)/ */ MapADT_reset_City(&outC->Context_MapADT_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TraficLightsDetection_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

