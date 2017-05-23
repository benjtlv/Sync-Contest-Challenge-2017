/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/challenge/EiDDChallenge/testIti_KCG66/config.txt
** Generation date: 2016-09-13T11:08:46
*************************************************************$ */
#ifndef _readIti_Robot_H_
#define _readIti_Robot_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  itiElemArr_Robot /* itinerary/ */ itinerary;
  /* -------------  insert eventual inits and memories  -------------- */
} outC_readIti_Robot;

/** Constants */
#define ITI_NUMBER 10	/* number of itineraries stored in memory */
#define ITI_SIZE   50   /* size of each itinerary, fixed in kcg_types.h */

/** Global store */
extern itiElemArr_Robot itineraries[ITI_NUMBER];

/* ===========  node initialization and cycle functions  =========== */
/* Robot::readIti/ */
extern void readIti_Robot(/* IN  */ kcg_int32 id,
			  /* OUT */ outC_readIti_Robot *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void readIti_reset_Robot(outC_readIti_Robot *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void readIti_init_Robot(outC_readIti_Robot *outC);



#endif /* _readIti_Robot_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** readIti_Robot.dh
** Generation date: 2016-09-13T11:08:46
*************************************************************$ */

