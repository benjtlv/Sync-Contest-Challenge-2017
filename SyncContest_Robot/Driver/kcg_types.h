/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/benja/Desktop/ELKRIEFF_UZENAT_challenge/SyncContestCompetitors/Robot__Driver_KCG66/config.txt
** Generation date: 2017-02-02T15:02:31
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

/* Robot::actionTy/ */
typedef enum kcg_tag_actionTy_Robot {
  go_Robot,
  turn_Robot,
  stop_Robot
} actionTy_Robot;
/* interTy/ */
typedef enum kcg_tag_interTy { waitVal, haltVal, okVal } interTy;
/* statusTy/ */
typedef enum kcg_tag_statusTy { Preparing, Running, Arrived, Stopped } statusTy;
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
/* Robot::wheelsTy/ */
typedef struct kcg_tag_wheelsTy_Robot {
  kcg_float64 left;
  kcg_float64 right;
} wheelsTy_Robot;

/* Robot::itiElement/ */
typedef struct kcg_tag_itiElement_Robot {
  actionTy_Robot action;
  kcg_float64 param;
} itiElement_Robot;

/* Robot::itiElemArr/ */
typedef itiElement_Robot itiElemArr_Robot[50];

/* colorTy/ */
typedef struct kcg_tag_colorTy {
  kcg_int16 red;
  kcg_int16 green;
  kcg_int16 blue;
} colorTy;

/* sensorsTy/ */
typedef struct kcg_tag_sensorsTy {
  colorTy roadColor;
  colorTy frontColor;
  kcg_int32 sonar;
} sensorsTy;

#ifndef kcg_copy_sensorsTy
#define kcg_copy_sensorsTy(kcg_C1, kcg_C2)                                    \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sensorsTy)))
#endif /* kcg_copy_sensorsTy */

#ifndef kcg_copy_colorTy
#define kcg_copy_colorTy(kcg_C1, kcg_C2)                                      \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (colorTy)))
#endif /* kcg_copy_colorTy */

#ifndef kcg_copy_itiElement_Robot
#define kcg_copy_itiElement_Robot(kcg_C1, kcg_C2)                             \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (itiElement_Robot)))
#endif /* kcg_copy_itiElement_Robot */

#ifndef kcg_copy_wheelsTy_Robot
#define kcg_copy_wheelsTy_Robot(kcg_C1, kcg_C2)                               \
  (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (wheelsTy_Robot)))
#endif /* kcg_copy_wheelsTy_Robot */

#ifndef kcg_copy_itiElemArr_Robot
#define kcg_copy_itiElemArr_Robot(kcg_C1, kcg_C2)                             \
  (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (itiElemArr_Robot)))
#endif /* kcg_copy_itiElemArr_Robot */

#ifdef kcg_use_sensorsTy
#ifndef kcg_comp_sensorsTy
extern kcg_bool kcg_comp_sensorsTy(sensorsTy *kcg_c1, sensorsTy *kcg_c2);
#endif /* kcg_comp_sensorsTy */
#endif /* kcg_use_sensorsTy */

#ifdef kcg_use_colorTy
#ifndef kcg_comp_colorTy
extern kcg_bool kcg_comp_colorTy(colorTy *kcg_c1, colorTy *kcg_c2);
#endif /* kcg_comp_colorTy */
#endif /* kcg_use_colorTy */

#ifdef kcg_use_itiElement_Robot
#ifndef kcg_comp_itiElement_Robot
extern kcg_bool kcg_comp_itiElement_Robot(
  itiElement_Robot *kcg_c1,
  itiElement_Robot *kcg_c2);
#endif /* kcg_comp_itiElement_Robot */
#endif /* kcg_use_itiElement_Robot */

#ifdef kcg_use_wheelsTy_Robot
#ifndef kcg_comp_wheelsTy_Robot
extern kcg_bool kcg_comp_wheelsTy_Robot(
  wheelsTy_Robot *kcg_c1,
  wheelsTy_Robot *kcg_c2);
#endif /* kcg_comp_wheelsTy_Robot */
#endif /* kcg_use_wheelsTy_Robot */

#ifdef kcg_use_itiElemArr_Robot
#ifndef kcg_comp_itiElemArr_Robot
extern kcg_bool kcg_comp_itiElemArr_Robot(
  itiElemArr_Robot *kcg_c1,
  itiElemArr_Robot *kcg_c2);
#endif /* kcg_comp_itiElemArr_Robot */
#endif /* kcg_use_itiElemArr_Robot */

#endif /* _KCG_TYPES_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** kcg_types.h
** Generation date: 2017-02-02T15:02:31
*************************************************************$ */

