/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/SyncContest/testObst_KCG66/config.txt
** Generation date: 2016-10-06T14:16:38
*************************************************************$ */

#include "kcg_types.h"
#include "kcg_consts.h"
//#include "kcg_sensors.h"
#include "readObstacles_City.h"

#include <stdio.h>

#define error printf

/** Global array of obstacles */
paramObstArr_City obstacles[OBST_NUMBER];

/** Initialize all obstacles to default value */
void
obs_default(paramObstTy_City* o) {
  o->pos.x = 0.;
  o->pos.y = 0.;
  o->since = -1.;
  o->till = -1.;
}

void
obs_init(paramObstArr_City* obs) {
  if (obs == NULL)
    return;

  for (int i = 0; i < OBSTNUM; i++) {
    obs_default(&((*obs)[i]));
  }
}

/** Read all obstacles in files inputs/<n>.obs
 *  Store them in global data.
 *  @param outC  the first (00) obstacle read
 */
void
readObs(int id) {
  
  if (id < 0 || id >= OBST_NUMBER)
    return;

  paramObstArr_City* obs = &(obstacles[id]);

  char fname[200];
  sprintf(fname, "%s/%02d.obs", DIR_INPUTS, id);
  FILE *fp = fopen(fname, "r");
  if (fp == NULL) {
    error("Error 0 [readObs]: DIR_INPUTS/%02d.obs file not found!\n", id);
    obs_init(obs);
    return;
  }

  int i = 0;
  for(; i < OBSTNUM; i++){
    int ret = fscanf(fp,"%lf %lf %lf %lf",
		    &((*obs)[i].pos.x), &((*obs)[i].pos.y),
		     &((*obs)[i].since), &((*obs)[i].till));
    if (ret == EOF)
      break;
  }
  for (; i < OBSTNUM; i++) {
    obs_default(&((*obs)[i]));
  }
  fclose(fp);
  return;
}

/* City::readObstacles/ */
void readObstacles_City(outC_readObstacles_City *outC)
{
  kcg_copy_paramObstArr_City(outC->paramsObst, obstacles[0]);
  return;
}

void readObstacles_init_City(outC_readObstacles_City *outC)
{
  for (int i = 0; i < OBST_NUMBER; i++)
    readObs(i);

  kcg_copy_paramObstArr_City(outC->paramsObst, obstacles[0]);
  return;
}


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void readObstacles_reset_City(outC_readObstacles_City *outC)
{
  readObstacles_init_City(outC);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** readObstacles_City.dc
** Generation date: 2016-10-06T14:16:38
*************************************************************$ */

