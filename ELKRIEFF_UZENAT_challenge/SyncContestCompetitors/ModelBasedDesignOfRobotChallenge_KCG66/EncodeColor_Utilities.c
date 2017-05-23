/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EncodeColor_Utilities.h"

/* Utilities::EncodeColor/ */
void EncodeColor_Utilities(
  /* colorQual/ */
  colorTyQ colorQual,
  outC_EncodeColor_Utilities *outC)
{
  kcg_copy_colorTy(&outC->_L7, (colorTy *) &GRAY);
  kcg_copy_colorTy(&outC->_L6, (colorTy *) &AMBER);
  kcg_copy_colorTy(&outC->_L5, (colorTy *) &GREEN);
  kcg_copy_colorTy(&outC->_L4, (colorTy *) &RED);
  outC->_L2 = colorQual;
  /* _L3= */
  switch (outC->_L2) {
    case redQ :
      kcg_copy_colorTy(&outC->_L3, &outC->_L4);
      break;
    case greenQ :
      kcg_copy_colorTy(&outC->_L3, &outC->_L5);
      break;
    case amberQ :
      kcg_copy_colorTy(&outC->_L3, &outC->_L6);
      break;
    default :
      kcg_copy_colorTy(&outC->_L3, &outC->_L7);
      break;
  }
  kcg_copy_colorTy(&outC->colorRGB, &outC->_L3);
}

#ifndef KCG_USER_DEFINED_INIT
void EncodeColor_init_Utilities(outC_EncodeColor_Utilities *outC)
{
  outC->_L7.red = kcg_lit_uint8(0);
  outC->_L7.green = kcg_lit_uint8(0);
  outC->_L7.blue = kcg_lit_uint8(0);
  outC->_L6.red = kcg_lit_uint8(0);
  outC->_L6.green = kcg_lit_uint8(0);
  outC->_L6.blue = kcg_lit_uint8(0);
  outC->_L5.red = kcg_lit_uint8(0);
  outC->_L5.green = kcg_lit_uint8(0);
  outC->_L5.blue = kcg_lit_uint8(0);
  outC->_L4.red = kcg_lit_uint8(0);
  outC->_L4.green = kcg_lit_uint8(0);
  outC->_L4.blue = kcg_lit_uint8(0);
  outC->_L3.red = kcg_lit_uint8(0);
  outC->_L3.green = kcg_lit_uint8(0);
  outC->_L3.blue = kcg_lit_uint8(0);
  outC->_L2 = redQ;
  outC->colorRGB.red = kcg_lit_uint8(0);
  outC->colorRGB.green = kcg_lit_uint8(0);
  outC->colorRGB.blue = kcg_lit_uint8(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EncodeColor_reset_Utilities(outC_EncodeColor_Utilities *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EncodeColor_Utilities.c
** Generation date: 2017-01-22T21:37:35
*************************************************************$ */

