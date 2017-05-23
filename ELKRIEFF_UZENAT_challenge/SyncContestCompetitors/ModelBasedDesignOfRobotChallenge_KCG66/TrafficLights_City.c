/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrafficLights_City.h"

/* City::TrafficLights/ */
void TrafficLights_City(
  /* time/ */
  kcg_float64 time,
  /* mapid/ */
  kcg_int32 mapid,
  outC_TrafficLights_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  mapDataTy_City noname;

  outC->_L30 = time;
  /* _L31/ */
  for (idx = 0; idx < 5; idx++) {
    outC->_L31[idx] = outC->_L30;
  }
  outC->_L29 = kcg_lit_float64(0.);
  outC->_L28.x = outC->_L29;
  outC->_L28.y = outC->_L29;
  /* _L26=(City::MapADT#1)/ */
  MapADT_City(&outC->_L28, mapid, &outC->Context_MapADT_1);
  kcg_copy_mapDataTy_City(&outC->_L26, &outC->Context_MapADT_1.MapData);
  kcg_copy_paramTLArr_City(&outC->_L27, &outC->Context_MapADT_1.ParamsTL);
  kcg_copy_mapDataTy_City(&noname, &outC->_L26);
  /* _L11= */
  for (idx1 = 0; idx1 < 5; idx1++) {
    /* _L11=(City::OneTL#1)/ */
    OneTL_City(
      &outC->_L27[idx1],
      outC->_L31[idx1],
      &outC->Context_OneTL_1[idx1]);
    kcg_copy_trafLTy(&outC->_L11[idx1], &outC->Context_OneTL_1[idx1].trafL);
  }
  kcg_copy_trafLArr(&outC->allLights, &outC->_L11);
}

#ifndef KCG_USER_DEFINED_INIT
void TrafficLights_init_City(outC_TrafficLights_City *outC)
{
  kcg_size idx;
  kcg_size idx1;
  kcg_size idx2;
  kcg_size idx3;
  kcg_size idx4;

  for (idx1 = 0; idx1 < 5; idx1++) {
    outC->_L31[idx1] = kcg_lit_float64(0.0);
  }
  outC->_L30 = kcg_lit_float64(0.0);
  outC->_L29 = kcg_lit_float64(0.0);
  outC->_L28.x = kcg_lit_float64(0.0);
  outC->_L28.y = kcg_lit_float64(0.0);
  outC->_L26.color.red = kcg_lit_uint8(0);
  outC->_L26.color.green = kcg_lit_uint8(0);
  outC->_L26.color.blue = kcg_lit_uint8(0);
  outC->_L26.onRoad = kcg_true;
  outC->_L26.maxSpeed = kcg_lit_int32(0);
  outC->_L26.TLnumber = kcg_lit_int32(0);
  outC->_L26.TLrequired = kcg_true;
  outC->_L26.dirx = kcg_lit_float64(0.0);
  outC->_L26.diry = kcg_lit_float64(0.0);
  for (idx2 = 0; idx2 < 5; idx2++) {
    outC->_L27[idx2].pos.x = kcg_lit_float64(0.0);
    outC->_L27[idx2].pos.y = kcg_lit_float64(0.0);
    outC->_L27[idx2].tGreen = kcg_lit_int32(0);
    outC->_L27[idx2].tAmber = kcg_lit_int32(0);
    outC->_L27[idx2].tRed = kcg_lit_int32(0);
    outC->_L27[idx2].tPhase = kcg_lit_int32(0);
  }
  for (idx3 = 0; idx3 < 5; idx3++) {
    outC->_L11[idx3].position.x = kcg_lit_float64(0.0);
    outC->_L11[idx3].position.y = kcg_lit_float64(0.0);
    outC->_L11[idx3].light = redQ;
  }
  for (idx4 = 0; idx4 < 5; idx4++) {
    outC->allLights[idx4].position.x = kcg_lit_float64(0.0);
    outC->allLights[idx4].position.y = kcg_lit_float64(0.0);
    outC->allLights[idx4].light = redQ;
  }
  for (idx = 0; idx < 5; idx++) {
    /* _L11=(City::OneTL#1)/ */ OneTL_init_City(&outC->Context_OneTL_1[idx]);
  }
  /* _L26=(City::MapADT#1)/ */ MapADT_init_City(&outC->Context_MapADT_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void TrafficLights_reset_City(outC_TrafficLights_City *outC)
{
  kcg_size idx;

  for (idx = 0; idx < 5; idx++) {
    /* _L11=(City::OneTL#1)/ */ OneTL_reset_City(&outC->Context_OneTL_1[idx]);
  }
  /* _L26=(City::MapADT#1)/ */ MapADT_reset_City(&outC->Context_MapADT_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** TrafficLights_City.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

