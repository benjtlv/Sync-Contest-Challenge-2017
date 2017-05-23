/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/ModelBasedDesignOfRobotChallenge_KCG66/config.txt
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#include "stddef.h"

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_char
#define kcg_char kcg_char
typedef char kcg_char;
#endif /* kcg_char */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_float32
#define kcg_float32 kcg_float32
typedef float kcg_float32;
#endif /* kcg_float32 */

#ifndef kcg_float64
#define kcg_float64 kcg_float64
typedef double kcg_float64;
#endif /* kcg_float64 */

#ifndef kcg_size
#define kcg_size kcg_size
typedef ptrdiff_t kcg_size;
#endif /* kcg_size */

#ifndef kcg_uint64
#define kcg_uint64 kcg_uint64
typedef unsigned long long kcg_uint64;
#endif /* kcg_uint64 */

#ifndef kcg_uint32
#define kcg_uint32 kcg_uint32
typedef unsigned long kcg_uint32;
#endif /* kcg_uint32 */

#ifndef kcg_uint16
#define kcg_uint16 kcg_uint16
typedef unsigned short kcg_uint16;
#endif /* kcg_uint16 */

#ifndef kcg_uint8
#define kcg_uint8 kcg_uint8
typedef unsigned char kcg_uint8;
#endif /* kcg_uint8 */

#ifndef kcg_int64
#define kcg_int64 kcg_int64
typedef signed long long kcg_int64;
#endif /* kcg_int64 */

#ifndef kcg_int32
#define kcg_int32 kcg_int32
typedef signed long kcg_int32;
#endif /* kcg_int32 */

#ifndef kcg_int16
#define kcg_int16 kcg_int16
typedef signed short kcg_int16;
#endif /* kcg_int16 */

#ifndef kcg_int8
#define kcg_int8 kcg_int8
typedef signed char kcg_int8;
#endif /* kcg_int8 */

#ifndef kcg_lit_float32
#define kcg_lit_float32(kcg_C1) ((kcg_float32) (kcg_C1))
#endif /* kcg_lit_float32 */

#ifndef kcg_lit_float64
#define kcg_lit_float64(kcg_C1) ((kcg_float64) (kcg_C1))
#endif /* kcg_lit_float64 */

#ifndef kcg_lit_size
#define kcg_lit_size(kcg_C1) ((kcg_size) (kcg_C1))
#endif /* kcg_lit_size */

#ifndef kcg_lit_uint64
#define kcg_lit_uint64(kcg_C1) ((kcg_uint64) (kcg_C1))
#endif /* kcg_lit_uint64 */

#ifndef kcg_lit_uint32
#define kcg_lit_uint32(kcg_C1) ((kcg_uint32) (kcg_C1))
#endif /* kcg_lit_uint32 */

#ifndef kcg_lit_uint16
#define kcg_lit_uint16(kcg_C1) ((kcg_uint16) (kcg_C1))
#endif /* kcg_lit_uint16 */

#ifndef kcg_lit_uint8
#define kcg_lit_uint8(kcg_C1) ((kcg_uint8) (kcg_C1))
#endif /* kcg_lit_uint8 */

#ifndef kcg_lit_int64
#define kcg_lit_int64(kcg_C1) ((kcg_int64) (kcg_C1))
#endif /* kcg_lit_int64 */

#ifndef kcg_lit_int32
#define kcg_lit_int32(kcg_C1) ((kcg_int32) (kcg_C1))
#endif /* kcg_lit_int32 */

#ifndef kcg_lit_int16
#define kcg_lit_int16(kcg_C1) ((kcg_int16) (kcg_C1))
#endif /* kcg_lit_int16 */

#ifndef kcg_lit_int8
#define kcg_lit_int8(kcg_C1) ((kcg_int8) (kcg_C1))
#endif /* kcg_lit_int8 */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_lsl_uint64
#define kcg_lsl_uint64(kcg_C1, kcg_C2)                                        \
  ((kcg_uint64) ((kcg_C1) << (kcg_C2)) & 0xffffffffffffffff)
#endif /* kcg_lsl_uint64 */

#ifndef kcg_lsl_uint32
#define kcg_lsl_uint32(kcg_C1, kcg_C2)                                        \
  ((kcg_uint32) ((kcg_C1) << (kcg_C2)) & 0xffffffff)
#endif /* kcg_lsl_uint32 */

#ifndef kcg_lsl_uint16
#define kcg_lsl_uint16(kcg_C1, kcg_C2)                                        \
  ((kcg_uint16) ((kcg_C1) << (kcg_C2)) & 0xffff)
#endif /* kcg_lsl_uint16 */

#ifndef kcg_lsl_uint8
#define kcg_lsl_uint8(kcg_C1, kcg_C2)                                         \
  ((kcg_uint8) ((kcg_C1) << (kcg_C2)) & 0xff)
#endif /* kcg_lsl_uint8 */

#ifndef kcg_lnot_uint64
#define kcg_lnot_uint64(kcg_C1) ((kcg_C1) ^ 0xffffffffffffffff)
#endif /* kcg_lnot_uint64 */

#ifndef kcg_lnot_uint32
#define kcg_lnot_uint32(kcg_C1) ((kcg_C1) ^ 0xffffffff)
#endif /* kcg_lnot_uint32 */

#ifndef kcg_lnot_uint16
#define kcg_lnot_uint16(kcg_C1) ((kcg_C1) ^ 0xffff)
#endif /* kcg_lnot_uint16 */

#ifndef kcg_lnot_uint8
#define kcg_lnot_uint8(kcg_C1) ((kcg_C1) ^ 0xff)
#endif /* kcg_lnot_uint8 */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* truthtables::TruthTableValues/ */
typedef enum kcg_tag_TruthTableValues_truthtables {
  T_truthtables,
  F_truthtables,
  X_truthtables
} TruthTableValues_truthtables;
/* Robot::actionTy/ */
typedef enum kcg_tag_actionTy_Robot {
  go_Robot,
  turn_Robot,
  stop_Robot
} actionTy_Robot;
/* colorTyQ/ */
typedef enum kcg_tag_colorTyQ { redQ, greenQ, amberQ, otherQ } colorTyQ;
/* statusTy/ */
typedef enum kcg_tag_statusTy { Preparing, Running, Arrived, Stopped } statusTy;
/* interTy/ */
typedef enum kcg_tag_interTy { waitVal, haltVal, okVal } interTy;
/* Robot::automatonGoPlus/goPlus: */
typedef enum kcg_tag_SSM_TR_goPlus {
  SSM_TR_no_trans_goPlus,
  SSM_TR_go_stopCat_1_go_goPlus,
  SSM_TR_go_stopLight_2_go_goPlus,
  SSM_TR_stopCat_go_1_stopCat_goPlus,
  SSM_TR_stopLight_go_1_stopLight_goPlus
} SSM_TR_goPlus;
/* Robot::automatonGoPlus/goPlus: */
typedef enum kcg_tag_SSM_ST_goPlus {
  SSM_st_go_goPlus,
  SSM_st_stopCat_goPlus,
  SSM_st_stopLight_goPlus
} SSM_ST_goPlus;
/* Robot::Driver/Robot: */
typedef enum kcg_tag_SSM_TR_Robot {
  SSM_TR_no_trans_Robot,
  SSM_TR_Preparing_Running_1_Preparing_Robot,
  SSM_TR_Running_Stopped_1_Running_Robot,
  SSM_TR_Running_Arrived_2_Running_Robot
} SSM_TR_Robot;
/* Robot::Driver/Robot: */
typedef enum kcg_tag_SSM_ST_Robot {
  SSM_st_Preparing_Robot,
  SSM_st_Running_Robot,
  SSM_st_Arrived_Robot,
  SSM_st_Stopped_Robot
} SSM_ST_Robot;
/* Robot::PhysicalModel/SM1: */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_positionning_on_1_positionning_SM1
} SSM_TR_SM1;
/* Robot::PhysicalModel/SM1: */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_positionning_SM1,
  SSM_st_on_SM1
} SSM_ST_SM1;
typedef kcg_char array_char_7[7];

/* eventTy/ */
typedef struct kcg_tag_eventTy {
  kcg_bool lightRun;
  kcg_bool speedExcess;
  kcg_bool exitRoad;
  kcg_bool collisionEvent;
  kcg_bool dirEvent;
} eventTy;

typedef kcg_float64 array_float64_10[10];

typedef kcg_float64 array_float64_2[2];

typedef array_float64_2 array_float64_2_2[2];

typedef kcg_float64 array_float64_5[5];

/* Robot::wheelsTy/ */
typedef struct kcg_tag_wheelsTy_Robot {
  kcg_float64 left;
  kcg_float64 right;
} wheelsTy_Robot;

/* City::Light/position/, City::TraficLightsDetection/position/, positionTy/ */
typedef struct kcg_tag_positionTy { kcg_float64 x; kcg_float64 y; } positionTy;

/* City::Light/, City::TraficLightsDetection/, trafLTy/ */
typedef struct kcg_tag_trafLTy { positionTy position; colorTyQ light; } trafLTy;

/* City::TrafficLights/, trafLArr/ */
typedef trafLTy trafLArr[5];

/* City::paramObstTy/ */
typedef struct kcg_tag_paramObstTy_City {
  positionTy pos;
  kcg_float64 since;
  kcg_float64 till;
} paramObstTy_City;

/* City::paramObstArr/ */
typedef paramObstTy_City paramObstArr_City[10];

typedef positionTy _3_array[2];

/* obstTy/ */
typedef struct kcg_tag_obstTy { positionTy position; kcg_bool present; } obstTy;

/* City::AllObstacles/,
   City::ObstaclesDetection/,
   City::SmartCityControl/,
   obstArr/ */
typedef obstTy obstArr[10];

/* sigTy/ */
typedef struct kcg_tag_sigTy { trafLArr TLights; obstArr obstacles; } sigTy;

/* Robot::itiElement/ */
typedef struct kcg_tag_itiElement_Robot {
  actionTy_Robot action;
  kcg_float64 param;
} itiElement_Robot;

/* Robot::itiElemArr/ */
typedef itiElement_Robot itiElemArr_Robot[50];

/* phaseTy/ */
typedef struct kcg_tag_phaseTy {
  positionTy position;
  kcg_float64 velocity;
  kcg_float64 heading;
} phaseTy;

typedef phaseTy _2_array[2];

typedef phaseTy array[10];

/* colorTy/ */
typedef struct kcg_tag_colorTy {
  kcg_uint8 red;
  kcg_uint8 green;
  kcg_uint8 blue;
} colorTy;

typedef kcg_int32 array_int32_2[2];

/* City::mapDataTy/ */
typedef struct kcg_tag_mapDataTy_City {
  colorTy color;
  kcg_bool onRoad;
  kcg_int32 maxSpeed;
  kcg_int32 TLnumber;
  kcg_bool TLrequired;
  kcg_float64 dirx;
  kcg_float64 diry;
} mapDataTy_City;

/* sensorsTy/ */
typedef struct kcg_tag_sensorsTy {
  colorTy roadColor;
  colorTy frontColor;
  kcg_int32 sonar;
} sensorsTy;

/* City::paramTLTy/ */
typedef struct kcg_tag_paramTLTy_City {
  positionTy pos;
  kcg_int32 tGreen;
  kcg_int32 tAmber;
  kcg_int32 tRed;
  kcg_int32 tPhase;
} paramTLTy_City;

/* City::paramTLArr/ */
typedef paramTLTy_City paramTLArr_City[5];

#ifndef kcg_copy_phaseTy
#define kcg_copy_phaseTy(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (phaseTy)))
#endif /* kcg_copy_phaseTy */

#ifndef kcg_copy_obstTy
#define kcg_copy_obstTy(kcg_C1, kcg_C2)                                       \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (obstTy)))
#endif /* kcg_copy_obstTy */

#ifndef kcg_copy_itiElement_Robot
#define kcg_copy_itiElement_Robot(kcg_C1, kcg_C2)                             \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (itiElement_Robot)))
#endif /* kcg_copy_itiElement_Robot */

#ifndef kcg_copy_paramTLTy_City
#define kcg_copy_paramTLTy_City(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (paramTLTy_City)))
#endif /* kcg_copy_paramTLTy_City */

#ifndef kcg_copy_positionTy
#define kcg_copy_positionTy(kcg_C1, kcg_C2)                                   \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionTy)))
#endif /* kcg_copy_positionTy */

#ifndef kcg_copy_eventTy
#define kcg_copy_eventTy(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (eventTy)))
#endif /* kcg_copy_eventTy */

#ifndef kcg_copy_sensorsTy
#define kcg_copy_sensorsTy(kcg_C1, kcg_C2)                                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sensorsTy)))
#endif /* kcg_copy_sensorsTy */

#ifndef kcg_copy_colorTy
#define kcg_copy_colorTy(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (colorTy)))
#endif /* kcg_copy_colorTy */

#ifndef kcg_copy_wheelsTy_Robot
#define kcg_copy_wheelsTy_Robot(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (wheelsTy_Robot)))
#endif /* kcg_copy_wheelsTy_Robot */

#ifndef kcg_copy_paramObstTy_City
#define kcg_copy_paramObstTy_City(kcg_C1, kcg_C2)                             \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (paramObstTy_City)))
#endif /* kcg_copy_paramObstTy_City */

#ifndef kcg_copy_trafLTy
#define kcg_copy_trafLTy(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trafLTy)))
#endif /* kcg_copy_trafLTy */

#ifndef kcg_copy_mapDataTy_City
#define kcg_copy_mapDataTy_City(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mapDataTy_City)))
#endif /* kcg_copy_mapDataTy_City */

#ifndef kcg_copy_sigTy
#define kcg_copy_sigTy(kcg_C1, kcg_C2)                                        \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sigTy)))
#endif /* kcg_copy_sigTy */

#ifndef kcg_copy_array
#define kcg_copy_array(kcg_C1, kcg_C2)                                        \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array)))
#endif /* kcg_copy_array */

#ifndef kcg_copy_paramObstArr_City
#define kcg_copy_paramObstArr_City(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (paramObstArr_City)))
#endif /* kcg_copy_paramObstArr_City */

#ifndef kcg_copy_trafLArr
#define kcg_copy_trafLArr(kcg_C1, kcg_C2)                                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (trafLArr)))
#endif /* kcg_copy_trafLArr */

#ifndef kcg_copy__2_array
#define kcg_copy__2_array(kcg_C1, kcg_C2)                                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_2_array)))
#endif /* kcg_copy__2_array */

#ifndef kcg_copy_itiElemArr_Robot
#define kcg_copy_itiElemArr_Robot(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (itiElemArr_Robot)))
#endif /* kcg_copy_itiElemArr_Robot */

#ifndef kcg_copy__3_array
#define kcg_copy__3_array(kcg_C1, kcg_C2)                                     \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (_3_array)))
#endif /* kcg_copy__3_array */

#ifndef kcg_copy_array_float64_2_2
#define kcg_copy_array_float64_2_2(kcg_C1, kcg_C2)                            \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float64_2_2)))
#endif /* kcg_copy_array_float64_2_2 */

#ifndef kcg_copy_obstArr
#define kcg_copy_obstArr(kcg_C1, kcg_C2)                                      \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (obstArr)))
#endif /* kcg_copy_obstArr */

#ifndef kcg_copy_paramTLArr_City
#define kcg_copy_paramTLArr_City(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (paramTLArr_City)))
#endif /* kcg_copy_paramTLArr_City */

#ifndef kcg_copy_array_float64_5
#define kcg_copy_array_float64_5(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float64_5)))
#endif /* kcg_copy_array_float64_5 */

#ifndef kcg_copy_array_char_7
#define kcg_copy_array_char_7(kcg_C1, kcg_C2)                                 \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_7)))
#endif /* kcg_copy_array_char_7 */

#ifndef kcg_copy_array_float64_2
#define kcg_copy_array_float64_2(kcg_C1, kcg_C2)                              \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float64_2)))
#endif /* kcg_copy_array_float64_2 */

#ifndef kcg_copy_array_int32_2
#define kcg_copy_array_int32_2(kcg_C1, kcg_C2)                                \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int32_2)))
#endif /* kcg_copy_array_int32_2 */

#ifndef kcg_copy_array_float64_10
#define kcg_copy_array_float64_10(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_float64_10)))
#endif /* kcg_copy_array_float64_10 */

#ifdef kcg_use_phaseTy
#ifndef kcg_comp_phaseTy
extern kcg_bool kcg_comp_phaseTy(phaseTy *kcg_c1, phaseTy *kcg_c2);
#endif /* kcg_comp_phaseTy */
#endif /* kcg_use_phaseTy */

#ifdef kcg_use_obstTy
#ifndef kcg_comp_obstTy
extern kcg_bool kcg_comp_obstTy(obstTy *kcg_c1, obstTy *kcg_c2);
#endif /* kcg_comp_obstTy */
#endif /* kcg_use_obstTy */

#ifdef kcg_use_itiElement_Robot
#ifndef kcg_comp_itiElement_Robot
extern kcg_bool kcg_comp_itiElement_Robot(
  itiElement_Robot *kcg_c1,
  itiElement_Robot *kcg_c2);
#endif /* kcg_comp_itiElement_Robot */
#endif /* kcg_use_itiElement_Robot */

#ifdef kcg_use_paramTLTy_City
#ifndef kcg_comp_paramTLTy_City
extern kcg_bool kcg_comp_paramTLTy_City(
  paramTLTy_City *kcg_c1,
  paramTLTy_City *kcg_c2);
#endif /* kcg_comp_paramTLTy_City */
#endif /* kcg_use_paramTLTy_City */

#ifdef kcg_use_positionTy
#ifndef kcg_comp_positionTy
extern kcg_bool kcg_comp_positionTy(positionTy *kcg_c1, positionTy *kcg_c2);
#endif /* kcg_comp_positionTy */
#endif /* kcg_use_positionTy */

#ifdef kcg_use_eventTy
#ifndef kcg_comp_eventTy
extern kcg_bool kcg_comp_eventTy(eventTy *kcg_c1, eventTy *kcg_c2);
#endif /* kcg_comp_eventTy */
#endif /* kcg_use_eventTy */

#ifdef kcg_use_sensorsTy
#ifndef kcg_comp_sensorsTy
extern kcg_bool kcg_comp_sensorsTy(sensorsTy *kcg_c1, sensorsTy *kcg_c2);
#endif /* kcg_comp_sensorsTy */
#endif /* kcg_use_sensorsTy */

#ifndef kcg_comp_colorTy
extern kcg_bool kcg_comp_colorTy(colorTy *kcg_c1, colorTy *kcg_c2);
#define kcg_use_colorTy
#endif /* kcg_comp_colorTy */

#ifdef kcg_use_wheelsTy_Robot
#ifndef kcg_comp_wheelsTy_Robot
extern kcg_bool kcg_comp_wheelsTy_Robot(
  wheelsTy_Robot *kcg_c1,
  wheelsTy_Robot *kcg_c2);
#endif /* kcg_comp_wheelsTy_Robot */
#endif /* kcg_use_wheelsTy_Robot */

#ifdef kcg_use_paramObstTy_City
#ifndef kcg_comp_paramObstTy_City
extern kcg_bool kcg_comp_paramObstTy_City(
  paramObstTy_City *kcg_c1,
  paramObstTy_City *kcg_c2);
#endif /* kcg_comp_paramObstTy_City */
#endif /* kcg_use_paramObstTy_City */

#ifdef kcg_use_trafLTy
#ifndef kcg_comp_trafLTy
extern kcg_bool kcg_comp_trafLTy(trafLTy *kcg_c1, trafLTy *kcg_c2);
#endif /* kcg_comp_trafLTy */
#endif /* kcg_use_trafLTy */

#ifdef kcg_use_mapDataTy_City
#ifndef kcg_comp_mapDataTy_City
extern kcg_bool kcg_comp_mapDataTy_City(
  mapDataTy_City *kcg_c1,
  mapDataTy_City *kcg_c2);
#endif /* kcg_comp_mapDataTy_City */
#endif /* kcg_use_mapDataTy_City */

#ifdef kcg_use_sigTy
#ifndef kcg_comp_sigTy
extern kcg_bool kcg_comp_sigTy(sigTy *kcg_c1, sigTy *kcg_c2);
#endif /* kcg_comp_sigTy */
#endif /* kcg_use_sigTy */

#ifdef kcg_use_array
#ifndef kcg_comp_array
extern kcg_bool kcg_comp_array(array *kcg_c1, array *kcg_c2);
#endif /* kcg_comp_array */
#endif /* kcg_use_array */

#ifdef kcg_use_paramObstArr_City
#ifndef kcg_comp_paramObstArr_City
extern kcg_bool kcg_comp_paramObstArr_City(
  paramObstArr_City *kcg_c1,
  paramObstArr_City *kcg_c2);
#endif /* kcg_comp_paramObstArr_City */
#endif /* kcg_use_paramObstArr_City */

#ifdef kcg_use_trafLArr
#ifndef kcg_comp_trafLArr
extern kcg_bool kcg_comp_trafLArr(trafLArr *kcg_c1, trafLArr *kcg_c2);
#endif /* kcg_comp_trafLArr */
#endif /* kcg_use_trafLArr */

#ifdef kcg_use__2_array
#ifndef kcg_comp__2_array
extern kcg_bool kcg_comp__2_array(_2_array *kcg_c1, _2_array *kcg_c2);
#endif /* kcg_comp__2_array */
#endif /* kcg_use__2_array */

#ifdef kcg_use_itiElemArr_Robot
#ifndef kcg_comp_itiElemArr_Robot
extern kcg_bool kcg_comp_itiElemArr_Robot(
  itiElemArr_Robot *kcg_c1,
  itiElemArr_Robot *kcg_c2);
#endif /* kcg_comp_itiElemArr_Robot */
#endif /* kcg_use_itiElemArr_Robot */

#ifdef kcg_use__3_array
#ifndef kcg_comp__3_array
extern kcg_bool kcg_comp__3_array(_3_array *kcg_c1, _3_array *kcg_c2);
#endif /* kcg_comp__3_array */
#endif /* kcg_use__3_array */

#ifdef kcg_use_array_float64_2_2
#ifndef kcg_comp_array_float64_2_2
extern kcg_bool kcg_comp_array_float64_2_2(
  array_float64_2_2 *kcg_c1,
  array_float64_2_2 *kcg_c2);
#endif /* kcg_comp_array_float64_2_2 */
#endif /* kcg_use_array_float64_2_2 */

#ifdef kcg_use_obstArr
#ifndef kcg_comp_obstArr
extern kcg_bool kcg_comp_obstArr(obstArr *kcg_c1, obstArr *kcg_c2);
#endif /* kcg_comp_obstArr */
#endif /* kcg_use_obstArr */

#ifdef kcg_use_paramTLArr_City
#ifndef kcg_comp_paramTLArr_City
extern kcg_bool kcg_comp_paramTLArr_City(
  paramTLArr_City *kcg_c1,
  paramTLArr_City *kcg_c2);
#endif /* kcg_comp_paramTLArr_City */
#endif /* kcg_use_paramTLArr_City */

#ifdef kcg_use_array_float64_5
#ifndef kcg_comp_array_float64_5
extern kcg_bool kcg_comp_array_float64_5(
  array_float64_5 *kcg_c1,
  array_float64_5 *kcg_c2);
#endif /* kcg_comp_array_float64_5 */
#endif /* kcg_use_array_float64_5 */

#ifdef kcg_use_array_char_7
#ifndef kcg_comp_array_char_7
extern kcg_bool kcg_comp_array_char_7(
  array_char_7 *kcg_c1,
  array_char_7 *kcg_c2);
#endif /* kcg_comp_array_char_7 */
#endif /* kcg_use_array_char_7 */

#ifdef kcg_use_array_float64_2
#ifndef kcg_comp_array_float64_2
extern kcg_bool kcg_comp_array_float64_2(
  array_float64_2 *kcg_c1,
  array_float64_2 *kcg_c2);
#endif /* kcg_comp_array_float64_2 */
#endif /* kcg_use_array_float64_2 */

#ifdef kcg_use_array_int32_2
#ifndef kcg_comp_array_int32_2
extern kcg_bool kcg_comp_array_int32_2(
  array_int32_2 *kcg_c1,
  array_int32_2 *kcg_c2);
#endif /* kcg_comp_array_int32_2 */
#endif /* kcg_use_array_int32_2 */

#ifdef kcg_use_array_float64_10
#ifndef kcg_comp_array_float64_10
extern kcg_bool kcg_comp_array_float64_10(
  array_float64_10 *kcg_c1,
  array_float64_10 *kcg_c2);
#endif /* kcg_comp_array_float64_10 */
#endif /* kcg_use_array_float64_10 */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2017-01-22T21:37:34
*************************************************************$ */

