/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/EiDDChallenge/testIti_KCG66/config.txt
** Generation date: 2016-09-13T11:08:46
*************************************************************$ */

#include "kcg_types.h"
#include "kcg_consts.h"
//#include "kcg_sensors.h"
#include "readIti_Robot.h"

#include <stdio.h>

#define error printf

/** Global array of itineraries */
itiElemArr_Robot itineraries[ITI_NUMBER];

/** Read all itineraries in files inputs/<n>.iti 
 *  Store them in global data.
 *  @param outC  the first (00) itinerary read
 */
void readIti(int id);
void readIti_init_Robot(/* OUT */ outC_readIti_Robot *outC)
{
  for (int i = 0; i < ITI_NUMBER; i++)
    readIti(i);

  kcg_copy_itiElemArr_Robot(outC->itinerary, itineraries[0]);
  return;
}

void
readIti(int id) {

  if (id < 0 || id >= ITI_NUMBER)
    return;

  itiElemArr_Robot* iti = &(itineraries[id]);

  char fname[200];
  sprintf(fname, "%s/%02d.iti", DIR_INPUTS, id);
  FILE *fp = fopen(fname, "r");
  if (fp == NULL) {
    error("Error 0 [readIti]: 'DIR_INPUTS/%02d.map' file not found!\n default input.\n",
          id);
    for(int i = 0; i < ITISIZE; i++){
      (*iti)[i].action=stop_Robot;
      (*iti)[i].param=0.0;
    }
    return;
  }
  
  char buf[5];
  float par;
  int done = 0;
  
  for(int i=0; i<ITISIZE; i++){
    int ret = fscanf(fp," %s %f", buf, &par);
    if (ret == EOF) 
      done = 1;
    if (done == 0) {
      if (strcmp(buf,"go")==0)
	(*iti)[i].action=go_Robot;
      else if (strcmp(buf,"turn")==0)
	(*iti)[i].action=turn_Robot;
      else
	(*iti)[i].action=stop_Robot;
      (*iti)[i].param=par;
    }
    else /* done */ {
      (*iti)[i].action=stop_Robot;
      (*iti)[i].param=0.0;
    }
  }
  /* close the read file */
  fclose(fp);	
  return;
}


/** Return the itinerary with index @code{id} in global @code{itineraries}
 */
void readIti_Robot(/* IN  */ kcg_int32 id,
		   /* OUT */ outC_readIti_Robot *outC)
{
  if (id < 0 || id >= ITI_NUMBER) {
    kcg_copy_itiElemArr_Robot(outC->itinerary, itineraries[0]);
    return;
  }
  kcg_copy_itiElemArr_Robot(outC->itinerary, itineraries[id]);
  return;
}

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void readIti_reset_Robot(outC_readIti_Robot *outC)
{
  readIti_init_Robot(outC);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** readIti_Robot.dc
** Generation date: 2016-09-13T11:08:46
*************************************************************$ */

