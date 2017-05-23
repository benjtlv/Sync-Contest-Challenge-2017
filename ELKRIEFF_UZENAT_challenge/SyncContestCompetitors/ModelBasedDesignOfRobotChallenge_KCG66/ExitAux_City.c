/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ExitAux_City.h"

/* City::ExitAux/ */
void ExitAux_City(
  /* acc/ */
  kcg_bool acc,
  /* pos/ */
  positionTy *pos,
  /* mapid/ */
  kcg_int32 mapid,
  outC_ExitAux_City *outC)
{
  kcg_int32 noname;
  colorTy _1_noname;
  kcg_int32 _2_noname;
  kcg_bool _3_noname;
  kcg_float64 _4_noname;
  kcg_float64 _5_noname;
  paramTLArr_City _6_noname;

  kcg_copy_positionTy(&outC->_L20, pos);
  /* _L5=(City::MapADT#1)/ */
  MapADT_City(&outC->_L20, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L5, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L19, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_paramTLArr_City(&_6_noname, &outC->_L19);
  outC->_L17 = outC->_L5.dirx;
  _5_noname = outC->_L17;
  outC->_L18 = outC->_L5.diry;
  _4_noname = outC->_L18;
  outC->_L15 = outC->_L5.TLrequired;
  _3_noname = outC->_L15;
  outC->_L14 = outC->_L5.TLnumber;
  _2_noname = outC->_L14;
  outC->_L12 = outC->_L5.onRoad;
  outC->_L1 = acc;
  outC->_L10 = outC->_L1 & outC->_L12;
  outC->res = outC->_L10;
  kcg_copy_colorTy(&outC->_L13, &outC->_L5.color);
  outC->_L11 = outC->_L5.maxSpeed;
  kcg_copy_colorTy(&_1_noname, &outC->_L13);
  noname = outC->_L11;
}

#ifndef KCG_USER_DEFINED_INIT
void ExitAux_init_City(outC_ExitAux_City *outC)
{
  kcg_size idx;

  outC->_L20.x = kcg_lit_float64(0.0);
  outC->_L20.y = kcg_lit_float64(0.0);
  for (idx = 0; idx < 5; idx++) {
    outC->_L19[idx].pos.x = kcg_lit_float64(0.0);
    outC->_L19[idx].pos.y = kcg_lit_float64(0.0);
    outC->_L19[idx].tGreen = kcg_lit_int32(0);
    outC->_L19[idx].tAmber = kcg_lit_int32(0);
    outC->_L19[idx].tRed = kcg_lit_int32(0);
    outC->_L19[idx].tPhase = kcg_lit_int32(0);
  }
  outC->_L18 = kcg_lit_float64(0.0);
  outC->_L17 = kcg_lit_float64(0.0);
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
  outC->_L1 = kcg_true;
  outC->res = kcg_true;
  /* _L5=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ExitAux_reset_City(outC_ExitAux_City *outC)
{
  /* _L5=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** ExitAux_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

