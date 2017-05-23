/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/SyncContest/testObst_KCG66/config.txt
** Generation date: 2016-10-06T14:16:38
*************************************************************$ */
#ifndef _readObstacles_City_H_
#define _readObstacles_City_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  paramObstArr_City /* paramsObst/ */ paramsObst;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_readObstacles_City;

#define OBST_NUMBER 2
extern paramObstArr_City obstacles[OBST_NUMBER];

/* ===========  node initialization and cycle functions  =========== */
/* City::readObstacles/ */
extern void readObstacles_City(outC_readObstacles_City *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void readObstacles_reset_City(outC_readObstacles_City *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void readObstacles_init_City(outC_readObstacles_City *outC);



#endif /* _readObstacles_City_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** readObstacles_City.dh
** Generation date: 2016-10-06T14:16:38
*************************************************************$ */

