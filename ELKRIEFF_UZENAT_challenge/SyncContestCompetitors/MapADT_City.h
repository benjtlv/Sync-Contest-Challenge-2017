/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/EiDDChallenge/testMap_KCG66/config.txt
** Generation date:  2016-09-02T15:51:41
** Last change date: 2016-09-15
*************************************************************$ */
#ifndef _MapADT_City_H_
#define _MapADT_City_H_

#include "kcg_types.h"

/* ===================== internal types and functions ============== */

#include "map.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  mapDataTy_City  MapData;
  paramTLArr_City ParamsTL;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_MapADT_City;

/* ===========  node initialization and cycle functions  =========== */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void MapADT_reset_City(outC_MapADT_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void MapADT_init_City(outC_MapADT_City *outC);

/* City::MapADT/ */
extern void MapADT_City(
  /* IN  */ positionTy *RobotPos, kcg_int32 id,
  /* OUT */ outC_MapADT_City *outC);


#endif /* _MapADT_City_H_ */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** MapADT_City.dh
** Generation date:  2016-09-02T15:51:41
** Last change date: 2016-09-15
*************************************************************$ */

