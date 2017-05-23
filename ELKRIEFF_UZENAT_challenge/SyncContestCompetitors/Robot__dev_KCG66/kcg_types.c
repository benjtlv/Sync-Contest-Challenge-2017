/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/challenge/SyncContestCompetitors/Robot__dev_KCG66/config.txt
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_paramObstArr_City
kcg_bool kcg_comp_paramObstArr_City(
  paramObstArr_City *kcg_c1,
  paramObstArr_City *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_paramObstTy_City(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_paramObstArr_City */

#ifdef kcg_use_trafLArr
kcg_bool kcg_comp_trafLArr(trafLArr *kcg_c1, trafLArr *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trafLTy(&(*kcg_c1)[kcg_ci], &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_trafLArr */

#ifdef kcg_use_itiElemArr_Robot
kcg_bool kcg_comp_itiElemArr_Robot(
  itiElemArr_Robot *kcg_c1,
  itiElemArr_Robot *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_itiElement_Robot(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_itiElemArr_Robot */

#ifdef kcg_use_obstArr
kcg_bool kcg_comp_obstArr(obstArr *kcg_c1, obstArr *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_obstTy(&(*kcg_c1)[kcg_ci], &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_obstArr */

#ifdef kcg_use_paramTLArr_City
kcg_bool kcg_comp_paramTLArr_City(
  paramTLArr_City *kcg_c1,
  paramTLArr_City *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_paramTLTy_City(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_paramTLArr_City */

#ifdef kcg_use_array_char_7
kcg_bool kcg_comp_array_char_7(array_char_7 *kcg_c1, array_char_7 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_size kcg_ci;

  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_7 */

#ifdef kcg_use_phaseTy
kcg_bool kcg_comp_phaseTy(phaseTy *kcg_c1, phaseTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->heading == kcg_c2->heading);
  kcg_equ = kcg_equ & (kcg_c1->velocity == kcg_c2->velocity);
  kcg_equ = kcg_equ & kcg_comp_positionTy(&kcg_c1->position, &kcg_c2->position);
  return kcg_equ;
}
#endif /* kcg_use_phaseTy */

#ifdef kcg_use_obstTy
kcg_bool kcg_comp_obstTy(obstTy *kcg_c1, obstTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  kcg_equ = kcg_equ & kcg_comp_positionTy(&kcg_c1->position, &kcg_c2->position);
  return kcg_equ;
}
#endif /* kcg_use_obstTy */

#ifdef kcg_use_paramTLTy_City
kcg_bool kcg_comp_paramTLTy_City(paramTLTy_City *kcg_c1, paramTLTy_City *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->tPhase == kcg_c2->tPhase);
  kcg_equ = kcg_equ & (kcg_c1->tRed == kcg_c2->tRed);
  kcg_equ = kcg_equ & (kcg_c1->tAmber == kcg_c2->tAmber);
  kcg_equ = kcg_equ & (kcg_c1->tGreen == kcg_c2->tGreen);
  kcg_equ = kcg_equ & kcg_comp_positionTy(&kcg_c1->pos, &kcg_c2->pos);
  return kcg_equ;
}
#endif /* kcg_use_paramTLTy_City */

#ifdef kcg_use_positionTy
kcg_bool kcg_comp_positionTy(positionTy *kcg_c1, positionTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->y == kcg_c2->y);
  kcg_equ = kcg_equ & (kcg_c1->x == kcg_c2->x);
  return kcg_equ;
}
#endif /* kcg_use_positionTy */

#ifdef kcg_use_eventTy
kcg_bool kcg_comp_eventTy(eventTy *kcg_c1, eventTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dirEvent == kcg_c2->dirEvent);
  kcg_equ = kcg_equ & (kcg_c1->collisionEvent == kcg_c2->collisionEvent);
  kcg_equ = kcg_equ & (kcg_c1->exitRoad == kcg_c2->exitRoad);
  kcg_equ = kcg_equ & (kcg_c1->speedExcess == kcg_c2->speedExcess);
  kcg_equ = kcg_equ & (kcg_c1->lightRun == kcg_c2->lightRun);
  return kcg_equ;
}
#endif /* kcg_use_eventTy */

#ifdef kcg_use_sensorsTy
kcg_bool kcg_comp_sensorsTy(sensorsTy *kcg_c1, sensorsTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->sonar == kcg_c2->sonar);
  kcg_equ = kcg_equ & kcg_comp_colorTy(&kcg_c1->frontColor, &kcg_c2->frontColor);
  kcg_equ = kcg_equ & kcg_comp_colorTy(&kcg_c1->roadColor, &kcg_c2->roadColor);
  return kcg_equ;
}
#endif /* kcg_use_sensorsTy */

#ifdef kcg_use_colorTy
kcg_bool kcg_comp_colorTy(colorTy *kcg_c1, colorTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->blue == kcg_c2->blue);
  kcg_equ = kcg_equ & (kcg_c1->green == kcg_c2->green);
  kcg_equ = kcg_equ & (kcg_c1->red == kcg_c2->red);
  return kcg_equ;
}
#endif /* kcg_use_colorTy */

#ifdef kcg_use_wheelsTy_Robot
kcg_bool kcg_comp_wheelsTy_Robot(wheelsTy_Robot *kcg_c1, wheelsTy_Robot *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->right == kcg_c2->right);
  kcg_equ = kcg_equ & (kcg_c1->left == kcg_c2->left);
  return kcg_equ;
}
#endif /* kcg_use_wheelsTy_Robot */

#ifdef kcg_use_itiElement_Robot
kcg_bool kcg_comp_itiElement_Robot(
  itiElement_Robot *kcg_c1,
  itiElement_Robot *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->param == kcg_c2->param);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  return kcg_equ;
}
#endif /* kcg_use_itiElement_Robot */

#ifdef kcg_use_paramObstTy_City
kcg_bool kcg_comp_paramObstTy_City(
  paramObstTy_City *kcg_c1,
  paramObstTy_City *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->till == kcg_c2->till);
  kcg_equ = kcg_equ & (kcg_c1->since == kcg_c2->since);
  kcg_equ = kcg_equ & kcg_comp_positionTy(&kcg_c1->pos, &kcg_c2->pos);
  return kcg_equ;
}
#endif /* kcg_use_paramObstTy_City */

#ifdef kcg_use_trafLTy
kcg_bool kcg_comp_trafLTy(trafLTy *kcg_c1, trafLTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->light == kcg_c2->light);
  kcg_equ = kcg_equ & kcg_comp_positionTy(&kcg_c1->position, &kcg_c2->position);
  return kcg_equ;
}
#endif /* kcg_use_trafLTy */

#ifdef kcg_use_mapDataTy_City
kcg_bool kcg_comp_mapDataTy_City(mapDataTy_City *kcg_c1, mapDataTy_City *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->diry == kcg_c2->diry);
  kcg_equ = kcg_equ & (kcg_c1->dirx == kcg_c2->dirx);
  kcg_equ = kcg_equ & (kcg_c1->TLrequired == kcg_c2->TLrequired);
  kcg_equ = kcg_equ & (kcg_c1->TLnumber == kcg_c2->TLnumber);
  kcg_equ = kcg_equ & (kcg_c1->maxSpeed == kcg_c2->maxSpeed);
  kcg_equ = kcg_equ & (kcg_c1->onRoad == kcg_c2->onRoad);
  kcg_equ = kcg_equ & kcg_comp_colorTy(&kcg_c1->color, &kcg_c2->color);
  return kcg_equ;
}
#endif /* kcg_use_mapDataTy_City */

#ifdef kcg_use_sigTy
kcg_bool kcg_comp_sigTy(sigTy *kcg_c1, sigTy *kcg_c2)
{
  kcg_bool kcg_equ;

  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_obstArr(&kcg_c1->obstacles, &kcg_c2->obstacles);
  kcg_equ = kcg_equ & kcg_comp_trafLArr(&kcg_c1->TLights, &kcg_c2->TLights);
  return kcg_equ;
}
#endif /* kcg_use_sigTy */

/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.c
** Generation date: 2017-01-18T22:10:02
*************************************************************$ */

