/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T15:19:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CompareColors_Utilities.h"

/* Utilities::CompareColors/ */
kcg_float64 CompareColors_Utilities(
  /* _L1/, col1/ */
  colorTy *col1,
  /* _L2/, col2/ */
  colorTy *col2)
{
  /* _L25/, correlation/ */
  kcg_float64 correlation;

  correlation = (/* _L4= */(kcg_float64) (*col1).red * /* _L9= */(kcg_float64)
        (*col2).red + /* _L8= */(kcg_float64) (*col1).green *
      /* _L13= */(kcg_float64) (*col2).green + /* _L3= */(kcg_float64)
        (*col1).blue * /* _L14= */(kcg_float64) (*col2).blue) /
    (/* _L18=(mathext::SqrtR#1)/ */
      SqrtR64_mathext_mathextimpl(
        /* _L4= */(kcg_float64) (*col1).red * /* _L4= */(kcg_float64) (*col1).red +
        /* _L8= */(kcg_float64) (*col1).green * /* _L8= */(kcg_float64) (*col1).green +
        /* _L3= */(kcg_float64) (*col1).blue * /* _L3= */(kcg_float64) (*col1).blue) *
      /* _L19=(mathext::SqrtR#2)/ */
      SqrtR64_mathext_mathextimpl(
        /* _L9= */(kcg_float64) (*col2).red * /* _L9= */(kcg_float64) (*col2).red +
        /* _L13= */(kcg_float64) (*col2).green * /* _L13= */(kcg_float64)
          (*col2).green + /* _L14= */(kcg_float64) (*col2).blue *
        /* _L14= */(kcg_float64) (*col2).blue));
  return correlation;
}



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** CompareColors_Utilities.c
** Generation date: 2017-01-22T15:19:47
*************************************************************$ */

