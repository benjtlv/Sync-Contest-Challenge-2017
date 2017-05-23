/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/Robot__Driver_KCG66/config.txt
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_itiElemArr_Robot
kcg_bool kcg_comp_itiElemArr_Robot(
  itiElemArr_Robot *kcg_c1,
  itiElemArr_Robot *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ && kcg_comp_itiElement_Robot(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_itiElemArr_Robot */

#ifdef kcg_use_sensorsTy
kcg_bool kcg_comp_sensorsTy(sensorsTy *kcg_c1, sensorsTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->sonar == kcg_c2->sonar;
  kcg_equ = kcg_equ && kcg_comp_colorTy(&kcg_c1->frontColor, &kcg_c2->frontColor);
  kcg_equ = kcg_equ && kcg_comp_colorTy(&kcg_c1->roadColor, &kcg_c2->roadColor);
  return kcg_equ;
}
#endif /* kcg_use_sensorsTy */

#ifdef kcg_use_colorTy
kcg_bool kcg_comp_colorTy(colorTy *kcg_c1, colorTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->blue == kcg_c2->blue;
  kcg_equ = kcg_equ && kcg_c1->green == kcg_c2->green;
  kcg_equ = kcg_equ && kcg_c1->red == kcg_c2->red;
  return kcg_equ;
}
#endif /* kcg_use_colorTy */

#ifdef kcg_use_itiElement_Robot
kcg_bool kcg_comp_itiElement_Robot(
  itiElement_Robot *kcg_c1,
  itiElement_Robot *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->param == kcg_c2->param;
  kcg_equ = kcg_equ && kcg_c1->action == kcg_c2->action;
  return kcg_equ;
}
#endif /* kcg_use_itiElement_Robot */

#ifdef kcg_use_wheelsTy_Robot
kcg_bool kcg_comp_wheelsTy_Robot(wheelsTy_Robot *kcg_c1, wheelsTy_Robot *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ && kcg_c1->right == kcg_c2->right;
  kcg_equ = kcg_equ && kcg_c1->left == kcg_c2->left;
  return kcg_equ;
}
#endif /* kcg_use_wheelsTy_Robot */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

