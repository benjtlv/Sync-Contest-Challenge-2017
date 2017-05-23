/* EiDD_Challenge_SW_mapping.c */

#include <stddef.h>

#include "SmuTypes.h"
#include "SmuMapping.h"
#include "EiDD_Challenge_SW_type.h"
#include "EiDD_Challenge_SW_mapping.h"

/* iterators */
extern const MappingIterator iter_array_7;
extern const MappingIterator iter_array_50;
extern const MappingIterator iter_array_10;
extern const MappingIterator iter_array_2;
extern const MappingIterator iter_array_5;
extern const MappingIterator iter_map_2;
extern const MappingIterator iter_fold_2;
extern const MappingIterator iter_fold_10;
extern const MappingIterator iter_map_10;
extern const MappingIterator iter_map_5;
const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
const MappingIterator iter_array_50 = { "array", 50, 50, NULL};
const MappingIterator iter_array_10 = { "array", 10, 10, NULL};
const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
const MappingIterator iter_map_2 = { "map", 2, 2, NULL};
const MappingIterator iter_fold_2 = { "fold", 2, 2, NULL};
const MappingIterator iter_fold_10 = { "fold", 10, 10, NULL};
const MappingIterator iter_map_10 = { "map", 10, 10, NULL};
const MappingIterator iter_map_5 = { "map", 5, 5, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_TR_goPlus_SSM_TR_stopLight_go_1_stopLight_goPlus (void* pHandle) { return (*(SSM_TR_goPlus*)pHandle == SSM_TR_stopLight_go_1_stopLight_goPlus); }
static int isActive_SSM_ST_goPlus_SSM_st_stopLight_goPlus (void* pHandle) { return (*(SSM_ST_goPlus*)pHandle == SSM_st_stopLight_goPlus); }
static int isActive_SSM_TR_goPlus_SSM_TR_stopCat_go_1_stopCat_goPlus (void* pHandle) { return (*(SSM_TR_goPlus*)pHandle == SSM_TR_stopCat_go_1_stopCat_goPlus); }
static int isActive_SSM_ST_goPlus_SSM_st_stopCat_goPlus (void* pHandle) { return (*(SSM_ST_goPlus*)pHandle == SSM_st_stopCat_goPlus); }
static int isActive_SSM_TR_goPlus_SSM_TR_go_stopLight_2_go_goPlus (void* pHandle) { return (*(SSM_TR_goPlus*)pHandle == SSM_TR_go_stopLight_2_go_goPlus); }
static int isActive_SSM_TR_goPlus_SSM_TR_go_stopCat_1_go_goPlus (void* pHandle) { return (*(SSM_TR_goPlus*)pHandle == SSM_TR_go_stopCat_1_go_goPlus); }
static int isActive_SSM_ST_goPlus_SSM_st_go_goPlus (void* pHandle) { return (*(SSM_ST_goPlus*)pHandle == SSM_st_go_goPlus); }
static int isActive_actionTy_Robot_stop_Robot (void* pHandle) { return (*(actionTy_Robot*)pHandle == stop_Robot); }
static int isActive_actionTy_Robot_turn_Robot (void* pHandle) { return (*(actionTy_Robot*)pHandle == turn_Robot); }
static int isActive_actionTy_Robot_go_Robot (void* pHandle) { return (*(actionTy_Robot*)pHandle == go_Robot); }
static int isActive_SSM_ST_SM1_SSM_st_on_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_on_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_positionning_on_1_positionning_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_positionning_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_positionning_SM1); }
static int isActive_SSM_ST_Robot_SSM_st_Stopped_Robot (void* pHandle) { return (*(SSM_ST_Robot*)pHandle == SSM_st_Stopped_Robot); }
static int isActive_SSM_ST_Robot_SSM_st_Arrived_Robot (void* pHandle) { return (*(SSM_ST_Robot*)pHandle == SSM_st_Arrived_Robot); }
static int isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot (void* pHandle) { return (*(SSM_TR_Robot*)pHandle == SSM_TR_Running_Arrived_2_Running_Robot); }
static int isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot (void* pHandle) { return (*(SSM_TR_Robot*)pHandle == SSM_TR_Running_Stopped_1_Running_Robot); }
static int isActive_SSM_ST_Robot_SSM_st_Running_Robot (void* pHandle) { return (*(SSM_ST_Robot*)pHandle == SSM_st_Running_Robot); }
static int isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot (void* pHandle) { return (*(SSM_TR_Robot*)pHandle == SSM_TR_Preparing_Running_1_Preparing_Robot); }
static int isActive_SSM_ST_Robot_SSM_st_Preparing_Robot (void* pHandle) { return (*(SSM_ST_Robot*)pHandle == SSM_st_Preparing_Robot); }

/* forward declarations */
#define MAP_DECL(ident, nb) extern const MappingEntry ident##_entries[nb]; extern const MappingScope ident
MAP_DECL(scope_139, 1);
MAP_DECL(scope_138, 5);
MAP_DECL(scope_137, 1);
MAP_DECL(scope_136, 1);
MAP_DECL(scope_135, 1);
MAP_DECL(scope_134, 1);
MAP_DECL(scope_133, 2);
MAP_DECL(scope_132, 2);
MAP_DECL(scope_131, 2);
MAP_DECL(scope_130, 1);
MAP_DECL(scope_129, 3);
MAP_DECL(scope_128, 1);
MAP_DECL(scope_127, 1);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 1);
MAP_DECL(scope_124, 2);
MAP_DECL(scope_123, 2);
MAP_DECL(scope_122, 1);
MAP_DECL(scope_121, 3);
MAP_DECL(scope_120, 1);
MAP_DECL(scope_119, 1);
MAP_DECL(scope_118, 3);
MAP_DECL(scope_117, 1);
MAP_DECL(scope_116, 7);
MAP_DECL(scope_115, 3);
MAP_DECL(scope_114, 5);
MAP_DECL(scope_113, 1);
MAP_DECL(scope_112, 46);
MAP_DECL(scope_111, 7);
MAP_DECL(scope_110, 11);
MAP_DECL(scope_109, 12);
MAP_DECL(scope_108, 4);
MAP_DECL(scope_107, 3);
MAP_DECL(scope_106, 3);
MAP_DECL(scope_105, 12);
MAP_DECL(scope_104, 7);
MAP_DECL(scope_103, 15);
MAP_DECL(scope_102, 7);
MAP_DECL(scope_101, 4);
MAP_DECL(scope_100, 38);
MAP_DECL(scope_99, 1);
MAP_DECL(scope_98, 2);
MAP_DECL(scope_97, 1);
MAP_DECL(scope_96, 2);
MAP_DECL(scope_95, 1);
MAP_DECL(scope_94, 1);
MAP_DECL(scope_93, 8);
MAP_DECL(scope_90, 10);
MAP_DECL(scope_89, 12);
MAP_DECL(scope_88, 5);
MAP_DECL(scope_87, 7);
MAP_DECL(scope_86, 5);
MAP_DECL(scope_85, 6);
MAP_DECL(scope_84, 29);
MAP_DECL(scope_83, 14);
MAP_DECL(scope_82, 5);
MAP_DECL(scope_81, 6);
MAP_DECL(scope_80, 43);
MAP_DECL(scope_79, 12);
MAP_DECL(scope_78, 4);
MAP_DECL(scope_77, 5);
MAP_DECL(scope_76, 4);
MAP_DECL(scope_75, 5);
MAP_DECL(scope_74, 6);
MAP_DECL(scope_73, 5);
MAP_DECL(scope_72, 10);
MAP_DECL(scope_71, 24);
MAP_DECL(scope_70, 7);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 6);
MAP_DECL(scope_67, 8);
MAP_DECL(scope_66, 4);
MAP_DECL(scope_65, 11);
MAP_DECL(scope_64, 1);
MAP_DECL(scope_63, 10);
MAP_DECL(scope_62, 2);
MAP_DECL(scope_61, 1);
MAP_DECL(scope_60, 1);
MAP_DECL(scope_59, 1);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 3);
MAP_DECL(scope_56, 5);
MAP_DECL(scope_55, 32);
MAP_DECL(scope_54, 21);
MAP_DECL(scope_53, 7);
MAP_DECL(scope_52, 15);
MAP_DECL(scope_51, 5);
MAP_DECL(scope_50, 5);
MAP_DECL(scope_49, 25);
MAP_DECL(scope_48, 24);
MAP_DECL(scope_47, 17);
MAP_DECL(scope_46, 12);
MAP_DECL(scope_45, 7);
MAP_DECL(scope_44, 11);
MAP_DECL(scope_43, 5);
MAP_DECL(scope_42, 5);
MAP_DECL(scope_41, 8);
MAP_DECL(scope_40, 12);
MAP_DECL(scope_39, 14);
MAP_DECL(scope_38, 18);
MAP_DECL(scope_37, 34);
MAP_DECL(scope_36, 10);
MAP_DECL(scope_35, 10);
MAP_DECL(scope_34, 6);
MAP_DECL(scope_33, 22);
MAP_DECL(scope_32, 6);
MAP_DECL(scope_31, 12);
MAP_DECL(scope_30, 7);
MAP_DECL(scope_29, 10);
MAP_DECL(scope_28, 13);
MAP_DECL(scope_27, 19);
MAP_DECL(scope_26, 5);
MAP_DECL(scope_25, 42);
MAP_DECL(scope_24, 1);
MAP_DECL(scope_23, 12);
MAP_DECL(scope_20, 9);
MAP_DECL(scope_19, 9);
MAP_DECL(scope_18, 2);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 1);
MAP_DECL(scope_14, 6);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 3);
MAP_DECL(scope_9, 11);
MAP_DECL(scope_8, 11);
MAP_DECL(scope_7, 16);
MAP_DECL(scope_6, 63);
MAP_DECL(scope_5, 17);
MAP_DECL(scope_4, 1);
MAP_DECL(scope_3, 16);
MAP_DECL(scope_2, 12);
MAP_DECL(scope_1, 38);
MAP_DECL(scope_0, 1);

/* array_char_7 */
const MappingEntry scope_139_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_char), 0, &_Type_kcg_char_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_139 = {
  "array_char_7",
  scope_139_entries, 1,
};

/* eventTy */
const MappingEntry scope_138_entries[5] = {
  /* 0 */ { MAP_FIELD, ".collisionEvent", NULL, sizeof(kcg_bool), offsetof(eventTy, collisionEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".dirEvent", NULL, sizeof(kcg_bool), offsetof(eventTy, dirEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".exitRoad", NULL, sizeof(kcg_bool), offsetof(eventTy, exitRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".lightRun", NULL, sizeof(kcg_bool), offsetof(eventTy, lightRun), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0},
  /* 4 */ { MAP_FIELD, ".speedExcess", NULL, sizeof(kcg_bool), offsetof(eventTy, speedExcess), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_138 = {
  "eventTy",
  scope_138_entries, 5,
};

/* array_float64_10 */
const MappingEntry scope_137_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_137 = {
  "array_float64_10",
  scope_137_entries, 1,
};

/* array_float64_2 */
const MappingEntry scope_136_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_136 = {
  "array_float64_2",
  scope_136_entries, 1,
};

/* array_float64_2_2 */
const MappingEntry scope_135_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(array_float64_2), 0, &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 0}
};
const MappingScope scope_135 = {
  "array_float64_2_2",
  scope_135_entries, 1,
};

/* array_float64_5 */
const MappingEntry scope_134_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_float64), 0, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_134 = {
  "array_float64_5",
  scope_134_entries, 1,
};

/* wheelsTy_Robot */
const MappingEntry scope_133_entries[2] = {
  /* 0 */ { MAP_FIELD, ".left", NULL, sizeof(kcg_float64), offsetof(wheelsTy_Robot, left), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".right", NULL, sizeof(kcg_float64), offsetof(wheelsTy_Robot, right), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_133 = {
  "wheelsTy_Robot",
  scope_133_entries, 2,
};

/* positionTy */
const MappingEntry scope_132_entries[2] = {
  /* 0 */ { MAP_FIELD, ".x", NULL, sizeof(kcg_float64), offsetof(positionTy, x), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".y", NULL, sizeof(kcg_float64), offsetof(positionTy, y), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_132 = {
  "positionTy",
  scope_132_entries, 2,
};

/* trafLTy */
const MappingEntry scope_131_entries[2] = {
  /* 0 */ { MAP_FIELD, ".light", NULL, sizeof(colorTyQ), offsetof(trafLTy, light), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(trafLTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0}
};
const MappingScope scope_131 = {
  "trafLTy",
  scope_131_entries, 2,
};

/* trafLArr */
const MappingEntry scope_130_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(trafLTy), 0, &_Type_trafLTy_Utils, NULL, NULL, &scope_131, 1, 0}
};
const MappingScope scope_130 = {
  "trafLArr",
  scope_130_entries, 1,
};

/* paramObstTy_City */
const MappingEntry scope_129_entries[3] = {
  /* 0 */ { MAP_FIELD, ".pos", NULL, sizeof(positionTy), offsetof(paramObstTy_City, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 1 */ { MAP_FIELD, ".since", NULL, sizeof(kcg_float64), offsetof(paramObstTy_City, since), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".till", NULL, sizeof(kcg_float64), offsetof(paramObstTy_City, till), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2}
};
const MappingScope scope_129 = {
  "paramObstTy_City",
  scope_129_entries, 3,
};

/* paramObstArr_City */
const MappingEntry scope_128_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(paramObstTy_City), 0, &_Type_paramObstTy_City_Utils, NULL, NULL, &scope_129, 1, 0}
};
const MappingScope scope_128 = {
  "paramObstArr_City",
  scope_128_entries, 1,
};

/* _3_array */
const MappingEntry scope_127_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(positionTy), 0, &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0}
};
const MappingScope scope_127 = {
  "_3_array",
  scope_127_entries, 1,
};

/* obstTy */
const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(obstTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 1 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(obstTy, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_126 = {
  "obstTy",
  scope_126_entries, 2,
};

/* obstArr */
const MappingEntry scope_125_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(obstTy), 0, &_Type_obstTy_Utils, NULL, NULL, &scope_126, 1, 0}
};
const MappingScope scope_125 = {
  "obstArr",
  scope_125_entries, 1,
};

/* sigTy */
const MappingEntry scope_124_entries[2] = {
  /* 0 */ { MAP_FIELD, ".TLights", NULL, sizeof(trafLArr), offsetof(sigTy, TLights), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 0},
  /* 1 */ { MAP_FIELD, ".obstacles", NULL, sizeof(obstArr), offsetof(sigTy, obstacles), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 1}
};
const MappingScope scope_124 = {
  "sigTy",
  scope_124_entries, 2,
};

/* itiElement_Robot */
const MappingEntry scope_123_entries[2] = {
  /* 0 */ { MAP_FIELD, ".action", NULL, sizeof(actionTy_Robot), offsetof(itiElement_Robot, action), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".param", NULL, sizeof(kcg_float64), offsetof(itiElement_Robot, param), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_123 = {
  "itiElement_Robot",
  scope_123_entries, 2,
};

/* itiElemArr_Robot */
const MappingEntry scope_122_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_50, sizeof(itiElement_Robot), 0, &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_123, 1, 0}
};
const MappingScope scope_122 = {
  "itiElemArr_Robot",
  scope_122_entries, 1,
};

/* phaseTy */
const MappingEntry scope_121_entries[3] = {
  /* 0 */ { MAP_FIELD, ".heading", NULL, sizeof(kcg_float64), offsetof(phaseTy, heading), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".position", NULL, sizeof(positionTy), offsetof(phaseTy, position), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 2 */ { MAP_FIELD, ".velocity", NULL, sizeof(kcg_float64), offsetof(phaseTy, velocity), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_121 = {
  "phaseTy",
  scope_121_entries, 3,
};

/* _2_array */
const MappingEntry scope_120_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(phaseTy), 0, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 0}
};
const MappingScope scope_120 = {
  "_2_array",
  scope_120_entries, 1,
};

/* array */
const MappingEntry scope_119_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(phaseTy), 0, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 0}
};
const MappingScope scope_119 = {
  "array",
  scope_119_entries, 1,
};

/* colorTy */
const MappingEntry scope_118_entries[3] = {
  /* 0 */ { MAP_FIELD, ".blue", NULL, sizeof(kcg_uint8), offsetof(colorTy, blue), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".green", NULL, sizeof(kcg_uint8), offsetof(colorTy, green), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".red", NULL, sizeof(kcg_uint8), offsetof(colorTy, red), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_118 = {
  "colorTy",
  scope_118_entries, 3,
};

/* array_int32_2 */
const MappingEntry scope_117_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int32), 0, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0}
};
const MappingScope scope_117 = {
  "array_int32_2",
  scope_117_entries, 1,
};

/* mapDataTy_City */
const MappingEntry scope_116_entries[7] = {
  /* 0 */ { MAP_FIELD, ".TLnumber", NULL, sizeof(kcg_int32), offsetof(mapDataTy_City, TLnumber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".TLrequired", NULL, sizeof(kcg_bool), offsetof(mapDataTy_City, TLrequired), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".color", NULL, sizeof(colorTy), offsetof(mapDataTy_City, color), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 0},
  /* 3 */ { MAP_FIELD, ".dirx", NULL, sizeof(kcg_float64), offsetof(mapDataTy_City, dirx), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".diry", NULL, sizeof(kcg_float64), offsetof(mapDataTy_City, diry), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".maxSpeed", NULL, sizeof(kcg_int32), offsetof(mapDataTy_City, maxSpeed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".onRoad", NULL, sizeof(kcg_bool), offsetof(mapDataTy_City, onRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_116 = {
  "mapDataTy_City",
  scope_116_entries, 7,
};

/* sensorsTy */
const MappingEntry scope_115_entries[3] = {
  /* 0 */ { MAP_FIELD, ".frontColor", NULL, sizeof(colorTy), offsetof(sensorsTy, frontColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 1},
  /* 1 */ { MAP_FIELD, ".roadColor", NULL, sizeof(colorTy), offsetof(sensorsTy, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 0},
  /* 2 */ { MAP_FIELD, ".sonar", NULL, sizeof(kcg_int32), offsetof(sensorsTy, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2}
};
const MappingScope scope_115 = {
  "sensorsTy",
  scope_115_entries, 3,
};

/* paramTLTy_City */
const MappingEntry scope_114_entries[5] = {
  /* 0 */ { MAP_FIELD, ".pos", NULL, sizeof(positionTy), offsetof(paramTLTy_City, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 1 */ { MAP_FIELD, ".tAmber", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tAmber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".tGreen", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tGreen), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".tPhase", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tPhase), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".tRed", NULL, sizeof(kcg_int32), offsetof(paramTLTy_City, tRed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3}
};
const MappingScope scope_114 = {
  "paramTLTy_City",
  scope_114_entries, 5,
};

/* paramTLArr_City */
const MappingEntry scope_113_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(paramTLTy_City), 0, &_Type_paramTLTy_City_Utils, NULL, NULL, &scope_114, 1, 0}
};
const MappingScope scope_113 = {
  "paramTLArr_City",
  scope_113_entries, 1,
};

/* Robot::PIDControler/ PIDControler_Robot */
const MappingEntry scope_112_entries[46] = {
  /* 0 */ { MAP_LOCAL, "@kcg59", NULL, sizeof(kcg_bool), offsetof(outC_PIDControler_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg60", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L62), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg61", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L62), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg62", NULL, sizeof(kcg_bool), offsetof(outC_PIDControler_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_INSTANCE, "Robot::isGreen 1", NULL, sizeof(outC_isGreen_Robot), offsetof(outC_PIDControler_Robot, Context_isGreen_1), NULL, NULL, NULL, &scope_102, 1, 5},
  /* 5 */ { MAP_INSTANCE, "Robot::isRed 1", NULL, sizeof(outC_isRed_Robot), offsetof(outC_PIDControler_Robot, Context_isRed_1), NULL, NULL, NULL, &scope_104, 1, 6},
  /* 6 */ { MAP_INSTANCE, "Utilities::Integrator 1", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PIDControler_Robot, Context_Integrator_1), NULL, NULL, NULL, &scope_39, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_PIDControler_Robot, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, _L19), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, _L21), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, _L23), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, _L24), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L41), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L42), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L44), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 34},
  /* 19 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L48), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33},
  /* 20 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L49), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32},
  /* 21 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_uint8), offsetof(outC_PIDControler_Robot, _L50), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 29},
  /* 22 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_uint8), offsetof(outC_PIDControler_Robot, _L51), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 30},
  /* 23 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_uint8), offsetof(outC_PIDControler_Robot, _L52), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 31},
  /* 24 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L53), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28},
  /* 25 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L54), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27},
  /* 26 */ { MAP_LOCAL, "_L55", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, _L55), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 26},
  /* 27 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L56), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25},
  /* 28 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24},
  /* 29 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L58), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23},
  /* 30 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L59), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22},
  /* 31 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L60), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21},
  /* 32 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L61), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20},
  /* 33 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L62), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L63), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 36},
  /* 35 */ { MAP_LOCAL, "_L64", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 37},
  /* 36 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L65), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 38},
  /* 37 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L67), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 39},
  /* 38 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L69), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 40},
  /* 39 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L70), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 41},
  /* 40 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, _L71), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 42},
  /* 41 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_bool), offsetof(outC_PIDControler_Robot, _L72), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43},
  /* 42 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_bool), offsetof(outC_PIDControler_Robot, _L73), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44},
  /* 43 */ { MAP_LOCAL, "dev", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, dev), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 44 */ { MAP_OUTPUT, "epsilon", NULL, sizeof(kcg_float64), offsetof(outC_PIDControler_Robot, epsilon), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 45},
  /* 45 */ { MAP_LOCAL, "errorColor", NULL, sizeof(colorTy), offsetof(outC_PIDControler_Robot, errorColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 8}
};
const MappingScope scope_112 = {
  "Robot::PIDControler/ PIDControler_Robot",
  scope_112_entries, 46,
};

/* mathext::HypotR/ HypotR_mathext_float64 */
const MappingEntry scope_111_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "HypotR_O", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, HypotR_O_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L3_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L4_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L5_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_HypotR_mathext_float64, _L6_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5}
};
const MappingScope scope_111 = {
  "mathext::HypotR/ HypotR_mathext_float64",
  scope_111_entries, 7,
};

/* Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:then: */
const MappingEntry scope_110_entries[11] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L10_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L11_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L12_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L13_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, _L15_then_IfBlock1), &_Type_wheelsTy_Robot_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, &scope_133, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L17_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L18_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L19_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L20_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L21_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L9_then_IfBlock1), &_Type_kcg_float64_Utils, &scope_106_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6}
};
const MappingScope scope_110 = {
  "Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:then:",
  scope_110_entries, 11,
};

/* Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else:then: */
const MappingEntry scope_109_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, _L10_then_else_IfBlock1), &_Type_wheelsTy_Robot_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, &scope_133, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L11_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L12_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L16_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L17_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L18_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L3_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L4_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L5_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L6_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L8_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 2},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L9_then_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
const MappingScope scope_109 = {
  "Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else:then:",
  scope_109_entries, 12,
};

/* Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else:else: */
const MappingEntry scope_108_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, _L1_else_else_IfBlock1), &_Type_wheelsTy_Robot_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, &scope_133, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L4_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L5_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L6_else_else_IfBlock1), &_Type_kcg_float64_Utils, &scope_107_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 3}
};
const MappingScope scope_108 = {
  "Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else:else:",
  scope_108_entries, 4,
};

/* Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else: */
const MappingEntry scope_107_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_ComputeWheels_Robot, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_107_entries[0], isActive_kcg_bool_kcg_false, &scope_108, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_107_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
const MappingScope scope_107 = {
  "Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:else:",
  scope_107_entries, 3,
};

/* Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1: */
const MappingEntry scope_106_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_ComputeWheels_Robot, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_106_entries[0], isActive_kcg_bool_kcg_false, &scope_107, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_106_entries[0], isActive_kcg_bool_kcg_true, &scope_110, 1, 2}
};
const MappingScope scope_106 = {
  "Robot::ComputeWheels/ ComputeWheels_RobotIfBlock1:",
  scope_106_entries, 3,
};

/* Robot::ComputeWheels/ ComputeWheels_Robot */
const MappingEntry scope_105_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg57", NULL, sizeof(kcg_bool), offsetof(outC_ComputeWheels_Robot, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_105_entries[1], isActive_kcg_bool_kcg_false, NULL, 0, 9},
  /* 1 */ { MAP_LOCAL, "@kcg58", NULL, sizeof(kcg_bool), offsetof(outC_ComputeWheels_Robot, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 10},
  /* 2 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_106, 1, 1},
  /* 3 */ { MAP_INSTANCE, "Robot::PIDControler 3", NULL, sizeof(outC_PIDControler_Robot), offsetof(outC_ComputeWheels_Robot, Context_PIDControler_3), NULL, NULL, NULL, &scope_112, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L159", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L159), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L161", NULL, sizeof(colorTy), offsetof(outC_ComputeWheels_Robot, _L161), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L163", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, _L163), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L164", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, _L164), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "epsilon", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, epsilon), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_LOCAL, "localSpeed", NULL, sizeof(kcg_float64), offsetof(outC_ComputeWheels_Robot, localSpeed), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "localWheels", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, localWheels), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 4},
  /* 11 */ { MAP_OUTPUT, "wheels", NULL, sizeof(wheelsTy_Robot), offsetof(outC_ComputeWheels_Robot, wheels), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 11}
};
const MappingScope scope_105 = {
  "Robot::ComputeWheels/ ComputeWheels_Robot",
  scope_105_entries, 12,
};

/* Robot::isRed/ isRed_Robot */
const MappingEntry scope_104_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_isRed_Robot, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_isRed_Robot, _L2), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_uint8), offsetof(outC_isRed_Robot, _L3), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), offsetof(outC_isRed_Robot, _L4), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_uint8), offsetof(outC_isRed_Robot, _L5), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_isRed_Robot, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 0},
  /* 6 */ { MAP_OUTPUT, "is_red", NULL, sizeof(kcg_bool), offsetof(outC_isRed_Robot, is_red), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_104 = {
  "Robot::isRed/ isRed_Robot",
  scope_104_entries, 7,
};

/* Utilities::AngleDist/ AngleDist_Utilities */
const MappingEntry scope_103_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(positionTy), offsetof(outC_AngleDist_Utilities, _L1), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_AngleDist_Utilities, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_OUTPUT, "angle", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, angle), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_OUTPUT, "dist", NULL, sizeof(kcg_float64), offsetof(outC_AngleDist_Utilities, dist), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_INSTANCE, "mathext::HypotR 1", NULL, sizeof(outC_HypotR_mathext_float64), offsetof(outC_AngleDist_Utilities, Context_HypotR_1), NULL, NULL, NULL, &scope_111, 1, 0}
};
const MappingScope scope_103 = {
  "Utilities::AngleDist/ AngleDist_Utilities",
  scope_103_entries, 15,
};

/* Robot::isGreen/ isGreen_Robot */
const MappingEntry scope_102_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_isGreen_Robot, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_uint8), offsetof(outC_isGreen_Robot, _L4), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_uint8), offsetof(outC_isGreen_Robot, _L5), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_uint8), offsetof(outC_isGreen_Robot, _L6), &_Type_kcg_uint8_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_isGreen_Robot, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L9", NULL, sizeof(colorTy), offsetof(outC_isGreen_Robot, _L9), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 5},
  /* 6 */ { MAP_OUTPUT, "is_green", NULL, sizeof(kcg_bool), offsetof(outC_isGreen_Robot, is_green), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_102 = {
  "Robot::isGreen/ isGreen_Robot",
  scope_102_entries, 7,
};

/* Robot::addOne/ addOne_Robot */
const MappingEntry scope_101_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_addOne_Robot, _L1), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_addOne_Robot, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_addOne_Robot, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "newIndex", NULL, sizeof(kcg_int32), offsetof(outC_addOne_Robot, newIndex), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3}
};
const MappingScope scope_101 = {
  "Robot::addOne/ addOne_Robot",
  scope_101_entries, 4,
};

/* Robot::TurnControlleur/ TurnControlleur_Robot */
const MappingEntry scope_100_entries[38] = {
  /* 0 */ { MAP_LOCAL, "@kcg53", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg54", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg55", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg56", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(wheelsTy_Robot), offsetof(outC_TurnControlleur_Robot, _L19), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L35), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L37), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L38), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20},
  /* 18 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22},
  /* 20 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L41), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23},
  /* 21 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L44), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L45), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26},
  /* 24 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L46), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27},
  /* 25 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28},
  /* 26 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L48), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29},
  /* 27 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L49), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30},
  /* 28 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 29 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L51), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32},
  /* 30 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L55), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33},
  /* 31 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 32 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 35},
  /* 33 */ { MAP_LOCAL, "coefRot", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, coefRot), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 34 */ { MAP_LOCAL, "dureeRotation", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, dureeRotation), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 35 */ { MAP_OUTPUT, "speed", NULL, sizeof(wheelsTy_Robot), offsetof(outC_TurnControlleur_Robot, speed), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 37},
  /* 36 */ { MAP_OUTPUT, "stop", NULL, sizeof(kcg_bool), offsetof(outC_TurnControlleur_Robot, stop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "x", NULL, sizeof(kcg_float64), offsetof(outC_TurnControlleur_Robot, x), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_100 = {
  "Robot::TurnControlleur/ TurnControlleur_Robot",
  scope_100_entries, 38,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopLight:<1 */
const MappingEntry scope_99_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_stopLight_go_1_stopLight_goPlus, NULL, 1, 0}
};
const MappingScope scope_99 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopLight:<1",
  scope_99_entries, 1,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopLight: */
const MappingEntry scope_98_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_stopLight_go_1_stopLight_goPlus, &scope_99, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, _L1_stopLight_goPlus), &_Type_kcg_float64_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_stopLight_goPlus, NULL, 1, 0}
};
const MappingScope scope_98 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopLight:",
  scope_98_entries, 2,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopCat:<1 */
const MappingEntry scope_97_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_stopCat_go_1_stopCat_goPlus, NULL, 1, 0}
};
const MappingScope scope_97 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopCat:<1",
  scope_97_entries, 1,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopCat: */
const MappingEntry scope_96_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_stopCat_go_1_stopCat_goPlus, &scope_97, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, _L1_stopCat_goPlus), &_Type_kcg_float64_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_stopCat_goPlus, NULL, 1, 0}
};
const MappingScope scope_96 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:stopCat:",
  scope_96_entries, 2,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go:<2 */
const MappingEntry scope_95_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_go_stopLight_2_go_goPlus, NULL, 1, 0}
};
const MappingScope scope_95 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go:<2",
  scope_95_entries, 1,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go:<1 */
const MappingEntry scope_94_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_go_stopCat_1_go_goPlus, NULL, 1, 0}
};
const MappingScope scope_94 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go:<1",
  scope_94_entries, 1,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go: */
const MappingEntry scope_93_entries[8] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_go_stopCat_1_go_goPlus, &scope_94, 1, 6},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_90_entries[1], isActive_SSM_TR_goPlus_SSM_TR_go_stopLight_2_go_goPlus, &scope_95, 1, 7},
  /* 2 */ { MAP_INSTANCE, "Robot::ComputeWheels 3", NULL, sizeof(outC_ComputeWheels_Robot), offsetof(outC_automatonGoPlus_Robot, Context_ComputeWheels_3), NULL, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, &scope_105, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, _L1_go_goPlus), &_Type_kcg_float64_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, _L15_go_goPlus), &_Type_kcg_float64_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, _L16_go_goPlus), &_Type_kcg_float64_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(wheelsTy_Robot), offsetof(outC_automatonGoPlus_Robot, _L18_go_goPlus), &_Type_wheelsTy_Robot_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, &scope_133, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_automatonGoPlus_Robot, _L2_go_goPlus), &_Type_colorTy_Utils, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, &scope_118, 1, 2}
};
const MappingScope scope_93 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:go:",
  scope_93_entries, 8,
};

/* Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus: */
const MappingEntry scope_90_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_state_act), &_Type_SSM_ST_goPlus_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_fired_strong), &_Type_SSM_TR_goPlus_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_fired), &_Type_SSM_TR_goPlus_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_state_nxt), &_Type_SSM_ST_goPlus_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, goPlus_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, goPlus_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_state_sel), &_Type_SSM_ST_goPlus_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "go:", NULL, 0, 0, NULL, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_go_goPlus, &scope_93, 1, 7},
  /* 8 */ { MAP_STATE, "stopCat:", NULL, 0, 0, NULL, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_stopCat_goPlus, &scope_96, 1, 8},
  /* 9 */ { MAP_STATE, "stopLight:", NULL, 0, 0, NULL, &scope_90_entries[0], isActive_SSM_ST_goPlus_SSM_st_stopLight_goPlus, &scope_98, 1, 9}
};
const MappingScope scope_90 = {
  "Robot::automatonGoPlus/ automatonGoPlus_RobotgoPlus:",
  scope_90_entries, 10,
};

/* Robot::automatonGoPlus/ automatonGoPlus_Robot */
const MappingEntry scope_89_entries[12] = {
  /* 0 */ { MAP_LOCAL, "@kcg52", NULL, sizeof(SSM_ST_goPlus), offsetof(outC_automatonGoPlus_Robot, goPlus_state_act), &_Type_SSM_ST_goPlus_Utils, NULL, NULL, NULL, 0, 9},
  /* 1 */ { MAP_INSTANCE, "Robot::isGreen 2", NULL, sizeof(outC_isGreen_Robot), offsetof(outC_automatonGoPlus_Robot, Context_isGreen_2), NULL, NULL, NULL, &scope_102, 1, 0},
  /* 2 */ { MAP_INSTANCE, "Robot::isRed 1", NULL, sizeof(outC_isRed_Robot), offsetof(outC_automatonGoPlus_Robot, Context_isRed_1), NULL, NULL, NULL, &scope_104, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_automatonGoPlus_Robot, _L2), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(colorTy), offsetof(outC_automatonGoPlus_Robot, _L3), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_AUTOMATON, "goPlus:", NULL, 0, 0, NULL, NULL, NULL, &scope_90, 1, 2},
  /* 8 */ { MAP_LOCAL, "isGreen", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, isGreen), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "isRed", NULL, sizeof(kcg_bool), offsetof(outC_automatonGoPlus_Robot, isRed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_OUTPUT, "speedL", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, speedL), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_OUTPUT, "speedR", NULL, sizeof(kcg_float64), offsetof(outC_automatonGoPlus_Robot, speedR), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11}
};
const MappingScope scope_89 = {
  "Robot::automatonGoPlus/ automatonGoPlus_Robot",
  scope_89_entries, 12,
};

/* Robot::undressItElem/ undressItElem_Robot */
const MappingEntry scope_88_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(itiElement_Robot), offsetof(outC_undressItElem_Robot, _L1), &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_123, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_undressItElem_Robot, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L8", NULL, sizeof(actionTy_Robot), offsetof(outC_undressItElem_Robot, _L8), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_OUTPUT, "action", NULL, sizeof(actionTy_Robot), offsetof(outC_undressItElem_Robot, action), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "value", NULL, sizeof(kcg_float64), offsetof(outC_undressItElem_Robot, value), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_88 = {
  "Robot::undressItElem/ undressItElem_Robot",
  scope_88_entries, 5,
};

/* Utilities::EncodeColor/ EncodeColor_Utilities */
const MappingEntry scope_87_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTyQ), offsetof(outC_EncodeColor_Utilities, _L2), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L3), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L5), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, _L7), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 5},
  /* 6 */ { MAP_OUTPUT, "colorRGB", NULL, sizeof(colorTy), offsetof(outC_EncodeColor_Utilities, colorRGB), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 6}
};
const MappingScope scope_87 = {
  "Utilities::EncodeColor/ EncodeColor_Utilities",
  scope_87_entries, 7,
};

/* City::OneObstacleDet/ OneObstacleDet_Citymath::Min 3/ */
const MappingEntry scope_86_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, Mi_Output_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L21_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L22_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L24_Min_3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L25_Min_3_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_86 = {
  "City::OneObstacleDet/ OneObstacleDet_Citymath::Min 3/",
  scope_86_entries, 5,
};

/* City::OneObstacleDet/ OneObstacleDet_Citymath::Abs 1/ */
const MappingEntry scope_85_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5}
};
const MappingScope scope_85 = {
  "City::OneObstacleDet/ OneObstacleDet_Citymath::Abs 1/",
  scope_85_entries, 6,
};

/* City::OneObstacleDet/ OneObstacleDet_City */
const MappingEntry scope_84_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "Utilities::AngleDist 1", NULL, sizeof(outC_AngleDist_Utilities), offsetof(outC_OneObstacleDet_City, Context_AngleDist_1), NULL, NULL, NULL, &scope_103, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_OneObstacleDet_City, Context_Normalize_1), NULL, NULL, NULL, &scope_40, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_OneObstacleDet_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 19},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L28), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L29), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(positionTy), offsetof(outC_OneObstacleDet_City, _L3), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18},
  /* 16 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(obstTy), offsetof(outC_OneObstacleDet_City, _L36), &_Type_obstTy_Utils, NULL, NULL, &scope_126, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(positionTy), offsetof(outC_OneObstacleDet_City, _L37), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 23},
  /* 19 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacleDet_City, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 21 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 25},
  /* 22 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, _L46), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 24},
  /* 23 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L47), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26},
  /* 24 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L48), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27},
  /* 25 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacleDet_City, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 26 */ { MAP_OUTPUT, "accnew", NULL, sizeof(kcg_int32), offsetof(outC_OneObstacleDet_City, accnew), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 28},
  /* 27 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_85, 1, 2},
  /* 28 */ { MAP_EXPANDED, "math::Min 3", NULL, 0, 0, NULL, NULL, NULL, &scope_86, 1, 3}
};
const MappingScope scope_84 = {
  "City::OneObstacleDet/ OneObstacleDet_City",
  scope_84_entries, 29,
};

/* City::ExitAux/ ExitAux_City */
const MappingEntry scope_83_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_ExitAux_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_ExitAux_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(colorTy), offsetof(outC_ExitAux_City, _L13), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int32), offsetof(outC_ExitAux_City, _L14), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ExitAux_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ExitAux_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(paramTLArr_City), offsetof(outC_ExitAux_City, _L19), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(positionTy), offsetof(outC_ExitAux_City, _L20), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_ExitAux_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 3},
  /* 13 */ { MAP_OUTPUT, "res", NULL, sizeof(kcg_bool), offsetof(outC_ExitAux_City, res), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13}
};
const MappingScope scope_83 = {
  "City::ExitAux/ ExitAux_City",
  scope_83_entries, 14,
};

/* City::CollisionAux/ CollisionAux_Citymathext::SinCosR 1/ */
const MappingEntry scope_82_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, Output1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, Output2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L3_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_82 = {
  "City::CollisionAux/ CollisionAux_Citymathext::SinCosR 1/",
  scope_82_entries, 5,
};

/* City::CollisionAux/ CollisionAux_Citymath::Abs 1/ */
const MappingEntry scope_81_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5}
};
const MappingScope scope_81 = {
  "City::CollisionAux/ CollisionAux_Citymath::Abs 1/",
  scope_81_entries, 6,
};

/* City::CollisionAux/ CollisionAux_City */
const MappingEntry scope_80_entries[43] = {
  /* 0 */ { MAP_INSTANCE, "Utilities::AngleDist 1", NULL, sizeof(outC_AngleDist_Utilities), offsetof(outC_CollisionAux_City, Context_AngleDist_1), NULL, NULL, NULL, &scope_103, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_CollisionAux_City, Context_Normalize_1), NULL, NULL, NULL, &scope_40, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(positionTy), offsetof(outC_CollisionAux_City, _L11), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 14},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_CollisionAux_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 23},
  /* 15 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 16 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26},
  /* 17 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L28), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25},
  /* 18 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27},
  /* 19 */ { MAP_LOCAL, "_L3", NULL, sizeof(obstTy), offsetof(outC_CollisionAux_City, _L3), &_Type_obstTy_Utils, NULL, NULL, &scope_126, 1, 8},
  /* 20 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28},
  /* 21 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L31), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30},
  /* 22 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L32), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29},
  /* 23 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 31},
  /* 24 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32},
  /* 25 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 26 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L36), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 34},
  /* 27 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L37), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 28 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L38), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 36},
  /* 29 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 37},
  /* 30 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 31 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L40), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 38},
  /* 32 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 33 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L42), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 40},
  /* 34 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L43), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 41},
  /* 35 */ { MAP_LOCAL, "_L5", NULL, sizeof(positionTy), offsetof(outC_CollisionAux_City, _L5), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 12},
  /* 36 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 37 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 38 */ { MAP_OUTPUT, "accnew", NULL, sizeof(kcg_bool), offsetof(outC_CollisionAux_City, accnew), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 39 */ { MAP_LOCAL, "angle", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, angle), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 40 */ { MAP_LOCAL, "dist", NULL, sizeof(kcg_float64), offsetof(outC_CollisionAux_City, dist), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 41 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_81, 1, 1},
  /* 42 */ { MAP_EXPANDED, "mathext::SinCosR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_82, 1, 3}
};
const MappingScope scope_80 = {
  "City::CollisionAux/ CollisionAux_City",
  scope_80_entries, 43,
};

/* math::RoundFloor/ RoundFloor_math_float64 */
const MappingEntry scope_79_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "RF_Output", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, RF_Output_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_RoundFloor_math_float64, _L24_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L25_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L26_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L30_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L31_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L32_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L33_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int32), offsetof(outC_RoundFloor_math_float64, _L38_float64), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_float64), offsetof(outC_RoundFloor_math_float64, _L41_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_bool), offsetof(outC_RoundFloor_math_float64, _L43_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10}
};
const MappingScope scope_79 = {
  "math::RoundFloor/ RoundFloor_math_float64",
  scope_79_entries, 12,
};

/* Utilities::vec2pos/ vec2pos_Utilities */
const MappingEntry scope_78_entries[4] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_vec2pos_Utilities, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_vec2pos_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_vec2pos_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_OUTPUT, "pos", NULL, sizeof(positionTy), offsetof(outC_vec2pos_Utilities, pos), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 3}
};
const MappingScope scope_78 = {
  "Utilities::vec2pos/ vec2pos_Utilities",
  scope_78_entries, 4,
};

/* Utilities::pos2vec/ pos2vec_Utilities */
const MappingEntry scope_77_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(positionTy), offsetof(outC_pos2vec_Utilities, _L1), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_pos2vec_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_pos2vec_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(array_float64_2), offsetof(outC_pos2vec_Utilities, _L6), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 3},
  /* 4 */ { MAP_OUTPUT, "vec", NULL, sizeof(array_float64_2), offsetof(outC_pos2vec_Utilities, vec), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 4}
};
const MappingScope scope_77 = {
  "Utilities::pos2vec/ pos2vec_Utilities",
  scope_77_entries, 5,
};

/* vect::VectAdd/ VectAdd_vect_float64_2 */
const MappingEntry scope_76_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "W", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, W_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 3},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L2_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_float64_2), offsetof(outC_VectAdd_vect_float64_2, _L3_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 2}
};
const MappingScope scope_76 = {
  "vect::VectAdd/ VectAdd_vect_float64_2",
  scope_76_entries, 4,
};

/* vect::MatVectProd/ MatVectProd_vect_float64_2_2vect::ScalProd 1/ */
const MappingEntry scope_75_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L2_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L3_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_MatVectProd_vect_float64_2_2, _L4_ScalProd_1_float64_2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_MatVectProd_vect_float64_2_2, _L6_ScalProd_1_float64_2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L7_ScalProd_1_float64_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 4}
};
const MappingScope scope_75 = {
  "vect::MatVectProd/ MatVectProd_vect_float64_2_2vect::ScalProd 1/",
  scope_75_entries, 5,
};

/* vect::MatVectProd/ MatVectProd_vect_float64_2_2 */
const MappingEntry scope_74_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "R", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, R_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(array_float64_2_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L1_float64_2_2), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L2_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(array_float64_2_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L4_float64_2_2), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(array_float64_2), offsetof(outC_MatVectProd_vect_float64_2_2, _L7_float64_2_2), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 4},
  /* 5 */ { MAP_EXPANDED, "vect::ScalProd 1", &iter_map_2, 0, 0, NULL, NULL, NULL, &scope_75, 1, 0}
};
const MappingScope scope_74 = {
  "vect::MatVectProd/ MatVectProd_vect_float64_2_2",
  scope_74_entries, 6,
};

/* Utilities::RotMatrix/ RotMatrix_Utilitiesmathext::SinCosR 2/ */
const MappingEntry scope_73_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, Output1_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, Output2_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L1_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L2_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L3_SinCosR_2_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_73 = {
  "Utilities::RotMatrix/ RotMatrix_Utilitiesmathext::SinCosR 2/",
  scope_73_entries, 5,
};

/* Utilities::RotMatrix/ RotMatrix_Utilities */
const MappingEntry scope_72_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(array_float64_2_2), offsetof(outC_RotMatrix_Utilities, _L19), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 8},
  /* 6 */ { MAP_LOCAL, "co", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, co), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_EXPANDED, "mathext::SinCosR 2", NULL, 0, 0, NULL, NULL, NULL, &scope_73, 1, 0},
  /* 8 */ { MAP_OUTPUT, "res", NULL, sizeof(array_float64_2_2), offsetof(outC_RotMatrix_Utilities, res), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 9},
  /* 9 */ { MAP_LOCAL, "si", NULL, sizeof(kcg_float64), offsetof(outC_RotMatrix_Utilities, si), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1}
};
const MappingScope scope_72 = {
  "Utilities::RotMatrix/ RotMatrix_Utilities",
  scope_72_entries, 10,
};

/* Robot::instrPlus/ instrPlus_Robot */
const MappingEntry scope_71_entries[24] = {
  /* 0 */ { MAP_LOCAL, "@kcg48", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg49", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg50", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg51", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_INSTANCE, "Robot::addOne 2", NULL, sizeof(outC_addOne_Robot), offsetof(outC_instrPlus_Robot, Context_addOne_2), NULL, NULL, NULL, &scope_101, 1, 4},
  /* 5 */ { MAP_INSTANCE, "Robot::isGreen 1", NULL, sizeof(outC_isGreen_Robot), offsetof(outC_instrPlus_Robot, Context_isGreen_1), NULL, NULL, NULL, &scope_102, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(colorTy), offsetof(outC_instrPlus_Robot, _L11), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_instrPlus_Robot, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), offsetof(outC_instrPlus_Robot, _L15), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L30), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L38), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L40), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L42), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_instrPlus_Robot, _L44), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_instrPlus_Robot, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L46), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L47), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, _L51), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "cond", NULL, sizeof(kcg_bool), offsetof(outC_instrPlus_Robot, cond), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 23 */ { MAP_OUTPUT, "newIndex", NULL, sizeof(kcg_int32), offsetof(outC_instrPlus_Robot, newIndex), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23}
};
const MappingScope scope_71 = {
  "Robot::instrPlus/ instrPlus_Robot",
  scope_71_entries, 24,
};

/* Robot::undressSensorTy/ undressSensorTy_Robot */
const MappingEntry scope_70_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(sensorsTy), offsetof(outC_undressSensorTy_Robot, _L1), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_undressSensorTy_Robot, _L2), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(colorTy), offsetof(outC_undressSensorTy_Robot, _L3), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_undressSensorTy_Robot, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 1},
  /* 4 */ { MAP_OUTPUT, "frontColor", NULL, sizeof(colorTy), offsetof(outC_undressSensorTy_Robot, frontColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 5},
  /* 5 */ { MAP_OUTPUT, "roadColor", NULL, sizeof(colorTy), offsetof(outC_undressSensorTy_Robot, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 4},
  /* 6 */ { MAP_OUTPUT, "sonar", NULL, sizeof(kcg_int32), offsetof(outC_undressSensorTy_Robot, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_70 = {
  "Robot::undressSensorTy/ undressSensorTy_Robot",
  scope_70_entries, 7,
};

/* Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:stop: */
const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L1_stop_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_stop_Robot, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_actionOnWheels_Robot, _L3_stop_WhenBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_actionTy_Robot_stop_Robot, NULL, 1, 1}
};
const MappingScope scope_69 = {
  "Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:stop:",
  scope_69_entries, 2,
};

/* Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:turn: */
const MappingEntry scope_68_entries[6] = {
  /* 0 */ { MAP_INSTANCE, "Robot::TurnControlleur 2", NULL, sizeof(outC_TurnControlleur_Robot), offsetof(outC_actionOnWheels_Robot, Context_TurnControlleur_2), NULL, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, &scope_100, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L1_turn_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L16_turn_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L17_turn_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_actionOnWheels_Robot, _L20_turn_WhenBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L21", NULL, sizeof(wheelsTy_Robot), offsetof(outC_actionOnWheels_Robot, _L21_turn_WhenBlock1), &_Type_wheelsTy_Robot_Utils, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, &scope_133, 1, 4}
};
const MappingScope scope_68 = {
  "Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:turn:",
  scope_68_entries, 6,
};

/* Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:go: */
const MappingEntry scope_67_entries[8] = {
  /* 0 */ { MAP_INSTANCE, "Robot::automatonGoPlus 1", NULL, sizeof(outC_automatonGoPlus_Robot), offsetof(outC_actionOnWheels_Robot, Context_automatonGoPlus_1), NULL, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, &scope_89, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_actionOnWheels_Robot, _L10_go_WhenBlock1), &_Type_kcg_bool_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L15", NULL, sizeof(colorTy), offsetof(outC_actionOnWheels_Robot, _L15_go_WhenBlock1), &_Type_colorTy_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, &scope_118, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L18_go_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L19_go_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(colorTy), offsetof(outC_actionOnWheels_Robot, _L20_go_WhenBlock1), &_Type_colorTy_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, &scope_118, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int32), offsetof(outC_actionOnWheels_Robot, _L21_go_WhenBlock1), &_Type_kcg_int32_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L4_go_WhenBlock1), &_Type_kcg_float64_Utils, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, NULL, 1, 1}
};
const MappingScope scope_67 = {
  "Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:go:",
  scope_67_entries, 8,
};

/* Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1: */
const MappingEntry scope_66_entries[4] = {
  /* 0 */ { MAP_LOCAL, "@active_branch", NULL, sizeof(actionTy_Robot), offsetof(outC_actionOnWheels_Robot, WhenBlock1_clock), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_MATCH, "go:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_actionTy_Robot_go_Robot, &scope_67, 1, 1},
  /* 2 */ { MAP_MATCH, "stop:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_actionTy_Robot_stop_Robot, &scope_69, 1, 3},
  /* 3 */ { MAP_MATCH, "turn:", NULL, 0, 0, NULL, &scope_66_entries[0], isActive_actionTy_Robot_turn_Robot, &scope_68, 1, 2}
};
const MappingScope scope_66 = {
  "Robot::actionOnWheels/ actionOnWheels_RobotWhenBlock1:",
  scope_66_entries, 4,
};

/* Robot::actionOnWheels/ actionOnWheels_Robot */
const MappingEntry scope_65_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@kcg47", NULL, sizeof(actionTy_Robot), offsetof(outC_actionOnWheels_Robot, WhenBlock1_clock), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "Robot::undressItElem 1", NULL, sizeof(outC_undressItElem_Robot), offsetof(outC_actionOnWheels_Robot, Context_undressItElem_1), NULL, NULL, NULL, &scope_88, 1, 0},
  /* 2 */ { MAP_WHEN, "WhenBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_66, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(itiElement_Robot), offsetof(outC_actionOnWheels_Robot, _L1), &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_123, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(actionTy_Robot), offsetof(outC_actionOnWheels_Robot, _L2), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "act", NULL, sizeof(actionTy_Robot), offsetof(outC_actionOnWheels_Robot, act), &_Type_actionTy_Robot_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_OUTPUT, "finTurn", NULL, sizeof(kcg_bool), offsetof(outC_actionOnWheels_Robot, finTurn), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_OUTPUT, "speedL", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, speedL), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_OUTPUT, "speedR", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, speedR), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "val", NULL, sizeof(kcg_float64), offsetof(outC_actionOnWheels_Robot, val), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2}
};
const MappingScope scope_65 = {
  "Robot::actionOnWheels/ actionOnWheels_Robot",
  scope_65_entries, 11,
};

/* City::readObstacles/ readObstacles_City */
const MappingEntry scope_64_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "paramsObst", NULL, sizeof(paramObstArr_City), offsetof(outC_readObstacles_City, paramsObst), &_Type_paramObstArr_City_Utils, NULL, NULL, &scope_128, 1, 0}
};
const MappingScope scope_64 = {
  "City::readObstacles/ readObstacles_City",
  scope_64_entries, 1,
};

/* City::OneObstacle/ OneObstacle_City */
const MappingEntry scope_63_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(paramObstTy_City), offsetof(outC_OneObstacle_City, _L2), &_Type_paramObstTy_City_Utils, NULL, NULL, &scope_129, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_OneObstacle_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_OneObstacle_City, _L27), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L29", NULL, sizeof(obstTy), offsetof(outC_OneObstacle_City, _L29), &_Type_obstTy_Utils, NULL, NULL, &scope_126, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(positionTy), offsetof(outC_OneObstacle_City, _L9), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 2},
  /* 9 */ { MAP_OUTPUT, "obstacle", NULL, sizeof(obstTy), offsetof(outC_OneObstacle_City, obstacle), &_Type_obstTy_Utils, NULL, NULL, &scope_126, 1, 9}
};
const MappingScope scope_63 = {
  "City::OneObstacle/ OneObstacle_City",
  scope_63_entries, 10,
};

/* City::MapADT/ MapADT_City */
const MappingEntry scope_62_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "MapData", NULL, sizeof(mapDataTy_City), offsetof(outC_MapADT_City, MapData), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 0},
  /* 1 */ { MAP_OUTPUT, "ParamsTL", NULL, sizeof(paramTLArr_City), offsetof(outC_MapADT_City, ParamsTL), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 1}
};
const MappingScope scope_62 = {
  "City::MapADT/ MapADT_City",
  scope_62_entries, 2,
};

/* City::OneTL/ OneTL_CityIfBlock1:then: */
const MappingEntry scope_61_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L1_then_IfBlock1), &_Type_colorTyQ_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
const MappingScope scope_61 = {
  "City::OneTL/ OneTL_CityIfBlock1:then:",
  scope_61_entries, 1,
};

/* City::OneTL/ OneTL_CityIfBlock1:else:then: */
const MappingEntry scope_60_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L2_then_else_IfBlock1), &_Type_colorTyQ_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0}
};
const MappingScope scope_60 = {
  "City::OneTL/ OneTL_CityIfBlock1:else:then:",
  scope_60_entries, 1,
};

/* City::OneTL/ OneTL_CityIfBlock1:else:else: */
const MappingEntry scope_59_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L1_else_else_IfBlock1), &_Type_colorTyQ_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
const MappingScope scope_59 = {
  "City::OneTL/ OneTL_CityIfBlock1:else:else:",
  scope_59_entries, 1,
};

/* City::OneTL/ OneTL_CityIfBlock1:else: */
const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_false, &scope_59, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_true, &scope_60, 1, 2}
};
const MappingScope scope_58 = {
  "City::OneTL/ OneTL_CityIfBlock1:else:",
  scope_58_entries, 3,
};

/* City::OneTL/ OneTL_CityIfBlock1: */
const MappingEntry scope_57_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_false, &scope_58, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_true, &scope_61, 1, 2}
};
const MappingScope scope_57 = {
  "City::OneTL/ OneTL_CityIfBlock1:",
  scope_57_entries, 3,
};

/* City::OneTL/ OneTL_Citymath::Max 1/ */
const MappingEntry scope_56_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Ma_Output", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, Ma_Output_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L1_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L2_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, _L3_Max_1_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L4_Max_1_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_56 = {
  "City::OneTL/ OneTL_Citymath::Max 1/",
  scope_56_entries, 5,
};

/* City::OneTL/ OneTL_City */
const MappingEntry scope_55_entries[32] = {
  /* 0 */ { MAP_LOCAL, "@kcg45", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, else_clock_IfBlock1), &_Type_kcg_bool_Utils, &scope_55_entries[1], isActive_kcg_bool_kcg_false, NULL, 0, 29},
  /* 1 */ { MAP_LOCAL, "@kcg46", NULL, sizeof(kcg_bool), offsetof(outC_OneTL_City, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 30},
  /* 2 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_57, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L25", NULL, sizeof(trafLTy), offsetof(outC_OneTL_City, _L25), &_Type_trafLTy_Utils, NULL, NULL, &scope_131, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L28", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, _L28), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L30", NULL, sizeof(paramTLTy_City), offsetof(outC_OneTL_City, _L30), &_Type_paramTLTy_City_Utils, NULL, NULL, &scope_114, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L31", NULL, sizeof(positionTy), offsetof(outC_OneTL_City, _L31), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 16},
  /* 7 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L33), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14},
  /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L35), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17},
  /* 12 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L44), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18},
  /* 13 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L47), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L50), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L51), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L54), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L55), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_float64), offsetof(outC_OneTL_City, _L57), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L58), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L59), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, _L60), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "cpt", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, cpt), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 24 */ { MAP_LOCAL, "light", NULL, sizeof(colorTyQ), offsetof(outC_OneTL_City, light), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 4},
  /* 25 */ { MAP_EXPANDED, "math::Max 1", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 0},
  /* 26 */ { MAP_LOCAL, "period", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, period), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 27 */ { MAP_LOCAL, "tAmber", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tAmber), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6},
  /* 28 */ { MAP_LOCAL, "tGreen", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tGreen), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5},
  /* 29 */ { MAP_LOCAL, "tPhase", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tPhase), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 30 */ { MAP_LOCAL, "tRed", NULL, sizeof(kcg_int32), offsetof(outC_OneTL_City, tRed), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7},
  /* 31 */ { MAP_OUTPUT, "trafL", NULL, sizeof(trafLTy), offsetof(outC_OneTL_City, trafL), &_Type_trafLTy_Utils, NULL, NULL, &scope_131, 1, 31}
};
const MappingScope scope_55 = {
  "City::OneTL/ OneTL_City",
  scope_55_entries, 32,
};

/* City::TraficLightsDetection/ TraficLightsDetection_City */
const MappingEntry scope_54_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 2", NULL, sizeof(outC_MapADT_City), offsetof(outC_TraficLightsDetection_City, Context_MapADT_2), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Utilities::EncodeColor 1", NULL, sizeof(outC_EncodeColor_Utilities), offsetof(outC_TraficLightsDetection_City, Context_EncodeColor_1), NULL, NULL, NULL, &scope_87, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L18", NULL, sizeof(positionTy), offsetof(outC_TraficLightsDetection_City, _L18), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(trafLArr), offsetof(outC_TraficLightsDetection_City, _L2), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L21", NULL, sizeof(phaseTy), offsetof(outC_TraficLightsDetection_City, _L21), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(mapDataTy_City), offsetof(outC_TraficLightsDetection_City, _L22), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L23", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, _L23), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_TraficLightsDetection_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_TraficLightsDetection_City, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int32), offsetof(outC_TraficLightsDetection_City, _L26), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), offsetof(outC_TraficLightsDetection_City, _L27), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 13 */ { MAP_LOCAL, "_L28", NULL, sizeof(trafLTy), offsetof(outC_TraficLightsDetection_City, _L28), &_Type_trafLTy_Utils, NULL, NULL, &scope_131, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L30", NULL, sizeof(positionTy), offsetof(outC_TraficLightsDetection_City, _L30), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, _L32), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L33), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_TraficLightsDetection_City, _L34), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L35", NULL, sizeof(paramTLArr_City), offsetof(outC_TraficLightsDetection_City, _L35), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L37", NULL, sizeof(colorTyQ), offsetof(outC_TraficLightsDetection_City, _L37), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 19},
  /* 20 */ { MAP_OUTPUT, "lightsColor", NULL, sizeof(colorTy), offsetof(outC_TraficLightsDetection_City, lightsColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 20}
};
const MappingScope scope_54 = {
  "City::TraficLightsDetection/ TraficLightsDetection_City",
  scope_54_entries, 21,
};

/* City::ObstaclesDetection/ ObstaclesDetection_City */
const MappingEntry scope_53_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "City::OneObstacleDet 3", &iter_fold_10, sizeof(outC_OneObstacleDet_City), offsetof(outC_ObstaclesDetection_City, Context_OneObstacleDet_3), NULL, NULL, NULL, &scope_84, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(obstArr), offsetof(outC_ObstaclesDetection_City, _L13), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, _L16), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_ObstaclesDetection_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(array), offsetof(outC_ObstaclesDetection_City, _L6), &_Type_array_Utils, NULL, NULL, &scope_119, 1, 2},
  /* 6 */ { MAP_OUTPUT, "sonar", NULL, sizeof(kcg_int32), offsetof(outC_ObstaclesDetection_City, sonar), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_53 = {
  "City::ObstaclesDetection/ ObstaclesDetection_City",
  scope_53_entries, 7,
};

/* City::GroundColorDetection/ GroundColorDetection_City */
const MappingEntry scope_52_entries[15] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_GroundColorDetection_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_GroundColorDetection_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_GroundColorDetection_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(paramTLArr_City), offsetof(outC_GroundColorDetection_City, _L13), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_GroundColorDetection_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(positionTy), offsetof(outC_GroundColorDetection_City, _L4), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_GroundColorDetection_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int32), offsetof(outC_GroundColorDetection_City, _L6), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_GroundColorDetection_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(colorTy), offsetof(outC_GroundColorDetection_City, _L8), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int32), offsetof(outC_GroundColorDetection_City, _L9), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9},
  /* 14 */ { MAP_OUTPUT, "roadColor", NULL, sizeof(colorTy), offsetof(outC_GroundColorDetection_City, roadColor), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 14}
};
const MappingScope scope_52 = {
  "City::GroundColorDetection/ GroundColorDetection_City",
  scope_52_entries, 15,
};

/* City::AgregateSensors/ AgregateSensors_City */
const MappingEntry scope_51_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_AgregateSensors_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_AgregateSensors_City, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(colorTy), offsetof(outC_AgregateSensors_City, _L2), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_AgregateSensors_City, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(sensorsTy), offsetof(outC_AgregateSensors_City, _L5), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 3}
};
const MappingScope scope_51 = {
  "City::AgregateSensors/ AgregateSensors_City",
  scope_51_entries, 5,
};

/* City::WrongDir/ WrongDir_Citymathext::SinCosR 1/ */
const MappingEntry scope_50_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, Output1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, Output2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L1_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L2_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L3_SinCosR_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_50 = {
  "City::WrongDir/ WrongDir_Citymathext::SinCosR 1/",
  scope_50_entries, 5,
};

/* City::WrongDir/ WrongDir_City */
const MappingEntry scope_49_entries[25] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_WrongDir_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(colorTy), offsetof(outC_WrongDir_City, _L1), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(phaseTy), offsetof(outC_WrongDir_City, _L11), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(mapDataTy_City), offsetof(outC_WrongDir_City, _L12), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L22), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22},
  /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(paramTLArr_City), offsetof(outC_WrongDir_City, _L23), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 23},
  /* 16 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_WrongDir_City, _L3), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_WrongDir_City, _L4), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 20 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 21 */ { MAP_LOCAL, "_L8", NULL, sizeof(positionTy), offsetof(outC_WrongDir_City, _L8), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 4},
  /* 22 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_WrongDir_City, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 23 */ { MAP_EXPANDED, "mathext::SinCosR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 1},
  /* 24 */ { MAP_OUTPUT, "wrong", NULL, sizeof(kcg_bool), offsetof(outC_WrongDir_City, wrong), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24}
};
const MappingScope scope_49 = {
  "City::WrongDir/ WrongDir_City",
  scope_49_entries, 25,
};

/* City::Light/ Light_City */
const MappingEntry scope_48_entries[24] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_Light_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(positionTy), offsetof(outC_Light_City, _L10), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(positionTy), offsetof(outC_Light_City, _L13), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(colorTy), offsetof(outC_Light_City, _L15), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), offsetof(outC_Light_City, _L17), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), offsetof(outC_Light_City, _L18), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L19), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L20), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L21", NULL, sizeof(colorTyQ), offsetof(outC_Light_City, _L21), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, _L23), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L24), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 16 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_Light_City, _L26), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 20},
  /* 17 */ { MAP_LOCAL, "_L27", NULL, sizeof(paramTLArr_City), offsetof(outC_Light_City, _L27), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 21},
  /* 18 */ { MAP_LOCAL, "_L29", NULL, sizeof(colorTyQ), offsetof(outC_Light_City, _L29), &_Type_colorTyQ_Utils, NULL, NULL, NULL, 1, 22},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(trafLTy), offsetof(outC_Light_City, _L4), &_Type_trafLTy_Utils, NULL, NULL, &scope_131, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_Light_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 12},
  /* 21 */ { MAP_LOCAL, "_L6", NULL, sizeof(phaseTy), offsetof(outC_Light_City, _L6), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 11},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(trafLArr), offsetof(outC_Light_City, _L8), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 10},
  /* 23 */ { MAP_OUTPUT, "lightRun", NULL, sizeof(kcg_bool), offsetof(outC_Light_City, lightRun), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23}
};
const MappingScope scope_48 = {
  "City::Light/ Light_City",
  scope_48_entries, 24,
};

/* City::Speed/ Speed_City */
const MappingEntry scope_47_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_Speed_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_Speed_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_Speed_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(colorTy), offsetof(outC_Speed_City, _L13), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int32), offsetof(outC_Speed_City, _L14), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(paramTLArr_City), offsetof(outC_Speed_City, _L18), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(positionTy), offsetof(outC_Speed_City, _L4), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(mapDataTy_City), offsetof(outC_Speed_City, _L5), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Speed_City, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_OUTPUT, "speedExcess", NULL, sizeof(kcg_bool), offsetof(outC_Speed_City, speedExcess), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16}
};
const MappingScope scope_47 = {
  "City::Speed/ Speed_City",
  scope_47_entries, 17,
};

/* City::Exit/ Exit_City */
const MappingEntry scope_46_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "City::ExitAux 1", &iter_fold_2, sizeof(outC_ExitAux_City), offsetof(outC_Exit_City, Context_ExitAux_1), NULL, NULL, NULL, &scope_83, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Robot::CarGeometry 1", &iter_map_2, sizeof(outC_CarGeometry_Robot), offsetof(outC_Exit_City, Context_CarGeometry_1), NULL, NULL, NULL, &scope_38, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L15), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(array_int32_2), offsetof(outC_Exit_City, _L22), &_Type_array_int32_2_Utils, NULL, NULL, &scope_117, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(phaseTy), offsetof(outC_Exit_City, _L23), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(_3_array), offsetof(outC_Exit_City, _L24), &_Type__3_array_Utils, NULL, NULL, &scope_127, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L27", NULL, sizeof(_2_array), offsetof(outC_Exit_City, _L27), &_Type__2_array_Utils, NULL, NULL, &scope_120, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L28", NULL, sizeof(array_float64_2_2), offsetof(outC_Exit_City, _L28), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L29", NULL, sizeof(_2_array), offsetof(outC_Exit_City, _L29), &_Type__2_array_Utils, NULL, NULL, &scope_120, 1, 10},
  /* 11 */ { MAP_OUTPUT, "exitRoad", NULL, sizeof(kcg_bool), offsetof(outC_Exit_City, exitRoad), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11}
};
const MappingScope scope_46 = {
  "City::Exit/ Exit_City",
  scope_46_entries, 12,
};

/* City::Collision/ Collision_City */
const MappingEntry scope_45_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "City::CollisionAux 1", &iter_fold_10, sizeof(outC_CollisionAux_City), offsetof(outC_Collision_City, Context_CollisionAux_1), NULL, NULL, NULL, &scope_80, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_Collision_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(obstArr), offsetof(outC_Collision_City, _L3), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(array), offsetof(outC_Collision_City, _L5), &_Type_array_Utils, NULL, NULL, &scope_119, 1, 5},
  /* 6 */ { MAP_OUTPUT, "collisionEvent", NULL, sizeof(kcg_bool), offsetof(outC_Collision_City, collisionEvent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6}
};
const MappingScope scope_45 = {
  "City::Collision/ Collision_City",
  scope_45_entries, 7,
};

/* City::AgregateEvents/ AgregateEvents_City */
const MappingEntry scope_44_entries[11] = {
  /* 0 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(eventTy), offsetof(outC_AgregateEvents_City, _L1), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L10), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L11), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(interTy), offsetof(outC_AgregateEvents_City, _L12), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_AgregateEvents_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 10 */ { MAP_OUTPUT, "events", NULL, sizeof(eventTy), offsetof(outC_AgregateEvents_City, events), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 9}
};
const MappingScope scope_44 = {
  "City::AgregateEvents/ AgregateEvents_City",
  scope_44_entries, 11,
};

/* Utilities::Bound/ Bound_Utilitiesmath::Min 1/ */
const MappingEntry scope_43_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, Mi_Output_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L21_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L22_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L24_Min_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Bound_Utilities, _L25_Min_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_43 = {
  "Utilities::Bound/ Bound_Utilitiesmath::Min 1/",
  scope_43_entries, 5,
};

/* Utilities::Bound/ Bound_Utilitiesmath::Max 1/ */
const MappingEntry scope_42_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Ma_Output", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, Ma_Output_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L1_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L2_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Bound_Utilities, _L3_Max_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L4_Max_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_42 = {
  "Utilities::Bound/ Bound_Utilitiesmath::Max 1/",
  scope_42_entries, 5,
};

/* Utilities::Bound/ Bound_Utilities */
const MappingEntry scope_41_entries[8] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_EXPANDED, "math::Max 1", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 0},
  /* 6 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 1},
  /* 7 */ { MAP_OUTPUT, "xb", NULL, sizeof(kcg_float64), offsetof(outC_Bound_Utilities, xb), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7}
};
const MappingScope scope_41 = {
  "Utilities::Bound/ Bound_Utilities",
  scope_41_entries, 8,
};

/* Utilities::Normalize/ Normalize_Utilities */
const MappingEntry scope_40_entries[12] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L10), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_Normalize_Utilities, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_INSTANCE, "math::RoundFloor 1", NULL, sizeof(outC_RoundFloor_math_float64), offsetof(outC_Normalize_Utilities, Context_RoundFloor_1), NULL, NULL, NULL, &scope_79, 1, 0},
  /* 11 */ { MAP_OUTPUT, "normal", NULL, sizeof(kcg_float64), offsetof(outC_Normalize_Utilities, normal), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11}
};
const MappingScope scope_40 = {
  "Utilities::Normalize/ Normalize_Utilities",
  scope_40_entries, 12,
};

/* Utilities::Integrator/ Integrator_Utilities */
const MappingEntry scope_39_entries[14] = {
  /* 0 */ { MAP_LOCAL, "@kcg41", NULL, sizeof(kcg_bool), offsetof(outC_Integrator_Utilities, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg42", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg43", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg44", NULL, sizeof(kcg_bool), offsetof(outC_Integrator_Utilities, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L12), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_OUTPUT, "result", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, result), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_LOCAL, "s", NULL, sizeof(kcg_float64), offsetof(outC_Integrator_Utilities, s), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_39 = {
  "Utilities::Integrator/ Integrator_Utilities",
  scope_39_entries, 14,
};

/* Robot::CarGeometry/ CarGeometry_Robot */
const MappingEntry scope_38_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "Utilities::RotMatrix 1", NULL, sizeof(outC_RotMatrix_Utilities), offsetof(outC_CarGeometry_Robot, Context_RotMatrix_1), NULL, NULL, NULL, &scope_72, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Utilities::pos2vec 1", NULL, sizeof(outC_pos2vec_Utilities), offsetof(outC_CarGeometry_Robot, Context_pos2vec_1), NULL, NULL, NULL, &scope_77, 1, 3},
  /* 2 */ { MAP_INSTANCE, "Utilities::vec2pos 1", NULL, sizeof(outC_vec2pos_Utilities), offsetof(outC_CarGeometry_Robot, Context_vec2pos_1), NULL, NULL, NULL, &scope_78, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 5},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, _L18), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_CarGeometry_Robot, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_CarGeometry_Robot, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(array_float64_2_2), offsetof(outC_CarGeometry_Robot, _L22), &_Type_array_float64_2_2_Utils, NULL, NULL, &scope_135, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L24), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L25), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L26), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, _L27), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L43", NULL, sizeof(array_float64_2), offsetof(outC_CarGeometry_Robot, _L43), &_Type_array_float64_2_Utils, NULL, NULL, &scope_136, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L45", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, _L45), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 15},
  /* 14 */ { MAP_OUTPUT, "newphase", NULL, sizeof(phaseTy), offsetof(outC_CarGeometry_Robot, newphase), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 17},
  /* 15 */ { MAP_OUTPUT, "newpos", NULL, sizeof(positionTy), offsetof(outC_CarGeometry_Robot, newpos), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 16},
  /* 16 */ { MAP_INSTANCE, "vect::MatVectProd 1", NULL, sizeof(outC_MatVectProd_vect_float64_2_2), offsetof(outC_CarGeometry_Robot, Context_MatVectProd_1), NULL, NULL, NULL, &scope_74, 1, 1},
  /* 17 */ { MAP_INSTANCE, "vect::VectAdd 1", NULL, sizeof(outC_VectAdd_vect_float64_2), offsetof(outC_CarGeometry_Robot, Context_VectAdd_1), NULL, NULL, NULL, &scope_76, 1, 2}
};
const MappingScope scope_38 = {
  "Robot::CarGeometry/ CarGeometry_Robot",
  scope_38_entries, 18,
};

/* Robot::actionArrayOnWheels/ actionArrayOnWheels_Robot */
const MappingEntry scope_37_entries[34] = {
  /* 0 */ { MAP_LOCAL, "@kcg34", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg35", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L78), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg36", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg37", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, _L93), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "@kcg38", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L78), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 4},
  /* 5 */ { MAP_LOCAL, "@kcg39", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, _L93), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 5},
  /* 6 */ { MAP_LOCAL, "@kcg40", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 6},
  /* 7 */ { MAP_INSTANCE, "Robot::actionOnWheels 3", NULL, sizeof(outC_actionOnWheels_Robot), offsetof(outC_actionArrayOnWheels_Robot, Context_actionOnWheels_3), NULL, NULL, NULL, &scope_65, 1, 7},
  /* 8 */ { MAP_INSTANCE, "Robot::instrPlus 2", NULL, sizeof(outC_instrPlus_Robot), offsetof(outC_actionArrayOnWheels_Robot, Context_instrPlus_2), NULL, NULL, NULL, &scope_71, 1, 9},
  /* 9 */ { MAP_INSTANCE, "Robot::undressSensorTy 1", NULL, sizeof(outC_undressSensorTy_Robot), offsetof(outC_actionArrayOnWheels_Robot, Context_undressSensorTy_1), NULL, NULL, NULL, &scope_70, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(itiElemArr_Robot), offsetof(outC_actionArrayOnWheels_Robot, _L1), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_122, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L100), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 27},
  /* 12 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L101), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 28},
  /* 13 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L102), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 29},
  /* 14 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L103), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 30},
  /* 15 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L104), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 31},
  /* 16 */ { MAP_LOCAL, "_L65", NULL, sizeof(sensorsTy), offsetof(outC_actionArrayOnWheels_Robot, _L65), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L68), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 22},
  /* 18 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L69), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21},
  /* 19 */ { MAP_LOCAL, "_L70", NULL, sizeof(colorTy), offsetof(outC_actionArrayOnWheels_Robot, _L70), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 15},
  /* 20 */ { MAP_LOCAL, "_L71", NULL, sizeof(colorTy), offsetof(outC_actionArrayOnWheels_Robot, _L71), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 14},
  /* 21 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L72), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13},
  /* 22 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L73), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16},
  /* 23 */ { MAP_LOCAL, "_L78", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L78), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L79", NULL, sizeof(itiElement_Robot), offsetof(outC_actionArrayOnWheels_Robot, _L79), &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_123, 1, 18},
  /* 25 */ { MAP_LOCAL, "_L82", NULL, sizeof(itiElement_Robot), offsetof(outC_actionArrayOnWheels_Robot, _L82), &_Type_itiElement_Robot_Utils, NULL, NULL, &scope_123, 1, 19},
  /* 26 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, _L89), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 20},
  /* 27 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, _L93), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 28 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_actionArrayOnWheels_Robot, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 29 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L98), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 25},
  /* 30 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, _L99), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 26},
  /* 31 */ { MAP_LOCAL, "index", NULL, sizeof(kcg_int32), offsetof(outC_actionArrayOnWheels_Robot, index), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10},
  /* 32 */ { MAP_OUTPUT, "speedL", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, speedL), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 32},
  /* 33 */ { MAP_OUTPUT, "speedR", NULL, sizeof(kcg_float64), offsetof(outC_actionArrayOnWheels_Robot, speedR), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33}
};
const MappingScope scope_37 = {
  "Robot::actionArrayOnWheels/ actionArrayOnWheels_Robot",
  scope_37_entries, 34,
};

/* digital::count_down/ count_down_digital_int32 */
const MappingEntry scope_36_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@kcg32", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L4_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg33", NULL, sizeof(kcg_bool), offsetof(outC_count_down_digital_int32, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_count_down_digital_int32, _L1_int32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L13_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L2_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L3_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L4_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L7_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, _L8_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_OUTPUT, "cpt", NULL, sizeof(kcg_int32), offsetof(outC_count_down_digital_int32, cpt_int32), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9}
};
const MappingScope scope_36 = {
  "digital::count_down/ count_down_digital_int32",
  scope_36_entries, 10,
};

/* digital::RisingEdge/ RisingEdge_digital */
const MappingEntry scope_35_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_OUTPUT, "RE_Output", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, RE_Output), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_RisingEdge_digital, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8}
};
const MappingScope scope_35 = {
  "digital::RisingEdge/ RisingEdge_digital",
  scope_35_entries, 10,
};

/* Utilities::Variation/ Variation_Utilitiesmath::Abs 1/ */
const MappingEntry scope_34_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5}
};
const MappingScope scope_34 = {
  "Utilities::Variation/ Variation_Utilitiesmath::Abs 1/",
  scope_34_entries, 6,
};

/* Utilities::Variation/ Variation_Utilities */
const MappingEntry scope_33_entries[22] = {
  /* 0 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 1},
  /* 1 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 2 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 3 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 4},
  /* 4 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 5},
  /* 5 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 6},
  /* 6 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 7 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, every), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 20},
  /* 8 */ { MAP_INSTANCE, "Utilities::Integrator 1", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_Variation_Utilities, Context_Integrator_1), NULL, &scope_33_entries[7], isActive_kcg_bool_kcg_true, &scope_39, 1, 0},
  /* 9 */ { MAP_INSTANCE, "Utilities::Normalize 1", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_Variation_Utilities, Context_Normalize_1), NULL, NULL, NULL, &scope_40, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Variation_Utilities, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L11), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L5), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 8},
  /* 21 */ { MAP_OUTPUT, "varX", NULL, sizeof(kcg_float64), offsetof(outC_Variation_Utilities, varX), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 21}
};
const MappingScope scope_33 = {
  "Utilities::Variation/ Variation_Utilities",
  scope_33_entries, 22,
};

/* Utilities::UpTime/ UpTime_Utilitiesmath::Abs 1/ */
const MappingEntry scope_32_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, A_Output_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_UpTime_Utilities, _L1_Abs_1_float64), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L2_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L3_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L5_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L8_Abs_1_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5}
};
const MappingScope scope_32 = {
  "Utilities::UpTime/ UpTime_Utilitiesmath::Abs 1/",
  scope_32_entries, 6,
};

/* Utilities::UpTime/ UpTime_Utilities */
const MappingEntry scope_31_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "Utilities::Integrator 1", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_UpTime_Utilities, Context_Integrator_1), NULL, NULL, NULL, &scope_39, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L2), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_UpTime_Utilities, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L6), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L7), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L8), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, _L9), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 1},
  /* 11 */ { MAP_OUTPUT, "t", NULL, sizeof(kcg_float64), offsetof(outC_UpTime_Utilities, t), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11}
};
const MappingScope scope_31 = {
  "Utilities::UpTime/ UpTime_Utilities",
  scope_31_entries, 12,
};

/* City::AllObstacles/ AllObstacles_City */
const MappingEntry scope_30_entries[7] = {
  /* 0 */ { MAP_INSTANCE, "City::OneObstacle 1", &iter_map_10, sizeof(outC_OneObstacle_City), offsetof(outC_AllObstacles_City, Context_OneObstacle_1), NULL, NULL, NULL, &scope_63, 1, 0},
  /* 1 */ { MAP_INSTANCE, "City::readObstacles 1", NULL, sizeof(outC_readObstacles_City), offsetof(outC_AllObstacles_City, Context_readObstacles_1), NULL, NULL, NULL, &scope_64, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_AllObstacles_City, _L1), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(array_float64_10), offsetof(outC_AllObstacles_City, _L5), &_Type_array_float64_10_Utils, NULL, NULL, &scope_137, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(obstArr), offsetof(outC_AllObstacles_City, _L6), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(paramObstArr_City), offsetof(outC_AllObstacles_City, _L7), &_Type_paramObstArr_City_Utils, NULL, NULL, &scope_128, 1, 5},
  /* 6 */ { MAP_OUTPUT, "obstacles", NULL, sizeof(obstArr), offsetof(outC_AllObstacles_City, obstacles), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 6}
};
const MappingScope scope_30 = {
  "City::AllObstacles/ AllObstacles_City",
  scope_30_entries, 7,
};

/* City::TrafficLights/ TrafficLights_City */
const MappingEntry scope_29_entries[10] = {
  /* 0 */ { MAP_INSTANCE, "City::MapADT 1", NULL, sizeof(outC_MapADT_City), offsetof(outC_TrafficLights_City, Context_MapADT_1), NULL, NULL, NULL, &scope_62, 1, 1},
  /* 1 */ { MAP_INSTANCE, "City::OneTL 1", &iter_map_5, sizeof(outC_OneTL_City), offsetof(outC_TrafficLights_City, Context_OneTL_1), NULL, NULL, NULL, &scope_55, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(trafLArr), offsetof(outC_TrafficLights_City, _L11), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(mapDataTy_City), offsetof(outC_TrafficLights_City, _L26), &_Type_mapDataTy_City_Utils, NULL, NULL, &scope_116, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(paramTLArr_City), offsetof(outC_TrafficLights_City, _L27), &_Type_paramTLArr_City_Utils, NULL, NULL, &scope_113, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(positionTy), offsetof(outC_TrafficLights_City, _L28), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_TrafficLights_City, _L29), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_TrafficLights_City, _L30), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(array_float64_5), offsetof(outC_TrafficLights_City, _L31), &_Type_array_float64_5_Utils, NULL, NULL, &scope_134, 1, 8},
  /* 9 */ { MAP_OUTPUT, "allLights", NULL, sizeof(trafLArr), offsetof(outC_TrafficLights_City, allLights), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 9}
};
const MappingScope scope_29 = {
  "City::TrafficLights/ TrafficLights_City",
  scope_29_entries, 10,
};

/* City::RobotSensors/ RobotSensors_City */
const MappingEntry scope_28_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "City::AgregateSensors 1", NULL, sizeof(outC_AgregateSensors_City), offsetof(outC_RobotSensors_City, Context_AgregateSensors_1), NULL, NULL, NULL, &scope_51, 1, 0},
  /* 1 */ { MAP_INSTANCE, "City::GroundColorDetection 1", NULL, sizeof(outC_GroundColorDetection_City), offsetof(outC_RobotSensors_City, Context_GroundColorDetection_1), NULL, NULL, NULL, &scope_52, 1, 1},
  /* 2 */ { MAP_INSTANCE, "City::ObstaclesDetection 1", NULL, sizeof(outC_ObstaclesDetection_City), offsetof(outC_RobotSensors_City, Context_ObstaclesDetection_1), NULL, NULL, NULL, &scope_53, 1, 2},
  /* 3 */ { MAP_INSTANCE, "City::TraficLightsDetection 1", NULL, sizeof(outC_TraficLightsDetection_City), offsetof(outC_RobotSensors_City, Context_TraficLightsDetection_1), NULL, NULL, NULL, &scope_54, 1, 3},
  /* 4 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_RobotSensors_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(sensorsTy), offsetof(outC_RobotSensors_City, _L1), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_RobotSensors_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(sigTy), offsetof(outC_RobotSensors_City, _L3), &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(colorTy), offsetof(outC_RobotSensors_City, _L4), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int32), offsetof(outC_RobotSensors_City, _L5), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(colorTy), offsetof(outC_RobotSensors_City, _L6), &_Type_colorTy_Utils, NULL, NULL, &scope_118, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L7", NULL, sizeof(trafLArr), offsetof(outC_RobotSensors_City, _L7), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L8", NULL, sizeof(obstArr), offsetof(outC_RobotSensors_City, _L8), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 10}
};
const MappingScope scope_28 = {
  "City::RobotSensors/ RobotSensors_City",
  scope_28_entries, 13,
};

/* City::EventDetection/ EventDetection_City */
const MappingEntry scope_27_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "City::AgregateEvents 1", NULL, sizeof(outC_AgregateEvents_City), offsetof(outC_EventDetection_City, Context_AgregateEvents_1), NULL, NULL, NULL, &scope_44, 1, 0},
  /* 1 */ { MAP_INSTANCE, "City::Collision 1", NULL, sizeof(outC_Collision_City), offsetof(outC_EventDetection_City, Context_Collision_1), NULL, NULL, NULL, &scope_45, 1, 1},
  /* 2 */ { MAP_INSTANCE, "City::Exit 1", NULL, sizeof(outC_Exit_City), offsetof(outC_EventDetection_City, Context_Exit_1), NULL, NULL, NULL, &scope_46, 1, 2},
  /* 3 */ { MAP_INSTANCE, "City::Light 1", NULL, sizeof(outC_Light_City), offsetof(outC_EventDetection_City, Context_Light_1), NULL, NULL, NULL, &scope_48, 1, 4},
  /* 4 */ { MAP_INSTANCE, "City::Speed 1", NULL, sizeof(outC_Speed_City), offsetof(outC_EventDetection_City, Context_Speed_1), NULL, NULL, NULL, &scope_47, 1, 3},
  /* 5 */ { MAP_INSTANCE, "City::WrongDir 1", NULL, sizeof(outC_WrongDir_City), offsetof(outC_EventDetection_City, Context_WrongDir_1), NULL, NULL, NULL, &scope_49, 1, 5},
  /* 6 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), offsetof(outC_EventDetection_City, Events), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 18},
  /* 7 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_EventDetection_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 17},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(sigTy), offsetof(outC_EventDetection_City, _L1), &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(trafLArr), offsetof(outC_EventDetection_City, _L10), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(obstArr), offsetof(outC_EventDetection_City, _L11), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 15},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(phaseTy), offsetof(outC_EventDetection_City, _L2), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(eventTy), offsetof(outC_EventDetection_City, _L3), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(interTy), offsetof(outC_EventDetection_City, _L4), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_EventDetection_City, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14}
};
const MappingScope scope_27 = {
  "City::EventDetection/ EventDetection_City",
  scope_27_entries, 19,
};

/* Robot::PhysicalModel/ PhysicalModel_RobotSM1:on:mathext::SinCosR 16/ */
const MappingEntry scope_26_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Output1", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, Output1_SinCosR_16_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Output2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, Output2_SinCosR_16_float64), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L1_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L2_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L3_SinCosR_16_float64), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 4}
};
const MappingScope scope_26 = {
  "Robot::PhysicalModel/ PhysicalModel_RobotSM1:on:mathext::SinCosR 16/",
  scope_26_entries, 5,
};

/* Robot::PhysicalModel/ PhysicalModel_RobotSM1:on: */
const MappingEntry scope_25_entries[42] = {
  /* 0 */ { MAP_INSTANCE, "Robot::CarGeometry 2", NULL, sizeof(outC_CarGeometry_Robot), offsetof(outC_PhysicalModel_Robot, Context_CarGeometry_2), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_38, 1, 7},
  /* 1 */ { MAP_INSTANCE, "Utilities::Bound 3", NULL, sizeof(outC_Bound_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Bound_3), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_41, 1, 6},
  /* 2 */ { MAP_INSTANCE, "Utilities::Bound 4", NULL, sizeof(outC_Bound_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Bound_4), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_41, 1, 5},
  /* 3 */ { MAP_INSTANCE, "Utilities::Integrator 4", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_4), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_39, 1, 1},
  /* 4 */ { MAP_INSTANCE, "Utilities::Integrator 5", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_5), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_39, 1, 0},
  /* 5 */ { MAP_INSTANCE, "Utilities::Integrator 7", NULL, sizeof(outC_Integrator_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Integrator_7), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_39, 1, 3},
  /* 6 */ { MAP_INSTANCE, "Utilities::Normalize 3", NULL, sizeof(outC_Normalize_Utilities), offsetof(outC_PhysicalModel_Robot, Context_Normalize_3), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_40, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L13_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L18_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 24},
  /* 9 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L19_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 23},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L2_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 20},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L20_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L21_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 21},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L25_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 27},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L26_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 25},
  /* 15 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L27_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 26},
  /* 16 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L28_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 28},
  /* 17 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L29_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 36},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L30_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 34},
  /* 19 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L31_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 35},
  /* 20 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L32_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 33},
  /* 21 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L33_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 32},
  /* 22 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L34_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 31},
  /* 23 */ { MAP_LOCAL, "_L35", NULL, sizeof(wheelsTy_Robot), offsetof(outC_PhysicalModel_Robot, _L35_on_SM1), &_Type_wheelsTy_Robot_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_133, 1, 30},
  /* 24 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L36_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L4_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 19},
  /* 26 */ { MAP_LOCAL, "_L45", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L45_on_SM1), &_Type_phaseTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_121, 1, 37},
  /* 27 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L46_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 38},
  /* 28 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L47_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 39},
  /* 29 */ { MAP_LOCAL, "_L48", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L48_on_SM1), &_Type_positionTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_132, 1, 40},
  /* 30 */ { MAP_LOCAL, "_L49", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L49_on_SM1), &_Type_phaseTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_121, 1, 41},
  /* 31 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L5_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 18},
  /* 32 */ { MAP_LOCAL, "_L6", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L6_on_SM1), &_Type_positionTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_132, 1, 17},
  /* 33 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L7_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 16},
  /* 34 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L9_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 15},
  /* 35 */ { MAP_LOCAL, "alpha", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, alpha_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 8},
  /* 36 */ { MAP_LOCAL, "co", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, co_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 10},
  /* 37 */ { MAP_EXPANDED, "mathext::SinCosR 16", NULL, 0, 0, NULL, NULL, NULL, &scope_26, 1, 4},
  /* 38 */ { MAP_LOCAL, "si", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, si_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 11},
  /* 39 */ { MAP_LOCAL, "v", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, v_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 9},
  /* 40 */ { MAP_LOCAL, "vLeft", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, vLeft_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 12},
  /* 41 */ { MAP_LOCAL, "vRight", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, vRight_on_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, NULL, 1, 13}
};
const MappingScope scope_25 = {
  "Robot::PhysicalModel/ PhysicalModel_RobotSM1:on:",
  scope_25_entries, 42,
};

/* Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning:<1 */
const MappingEntry scope_24_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_20_entries[2], isActive_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1, NULL, 1, 0}
};
const MappingScope scope_24 = {
  "Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning:<1",
  scope_24_entries, 1,
};

/* Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning: */
const MappingEntry scope_23_entries[12] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_20_entries[2], isActive_SSM_TR_SM1_SSM_TR_positionning_on_1_positionning_SM1, &scope_24, 1, 11},
  /* 1 */ { MAP_INSTANCE, "Robot::CarGeometry 1", NULL, sizeof(outC_CarGeometry_Robot), offsetof(outC_PhysicalModel_Robot, Context_CarGeometry_1), NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_38, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L55", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L55_positionning_SM1), &_Type_phaseTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_121, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L61", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L61_positionning_SM1), &_Type_positionTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_132, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L62", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L62_positionning_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L63_positionning_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L66", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L66_positionning_SM1), &_Type_phaseTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_121, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L67_positionning_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L68", NULL, sizeof(positionTy), offsetof(outC_PhysicalModel_Robot, _L68_positionning_SM1), &_Type_positionTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_132, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L69_positionning_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, _L70_positionning_SM1), &_Type_kcg_float64_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L71", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, _L71_positionning_SM1), &_Type_phaseTy_Utils, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_121, 1, 10}
};
const MappingScope scope_23 = {
  "Robot::PhysicalModel/ PhysicalModel_RobotSM1:positionning:",
  scope_23_entries, 12,
};

/* Robot::PhysicalModel/ PhysicalModel_RobotSM1: */
const MappingEntry scope_20_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_PhysicalModel_Robot, SM1_fired_strong), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), offsetof(outC_PhysicalModel_Robot, SM1_fired), &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_nxt), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_PhysicalModel_Robot, SM1_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_PhysicalModel_Robot, SM1_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_sel), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "on:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_on_SM1, &scope_25, 1, 8},
  /* 8 */ { MAP_STATE, "positionning:", NULL, 0, 0, NULL, &scope_20_entries[0], isActive_SSM_ST_SM1_SSM_st_positionning_SM1, &scope_23, 1, 7}
};
const MappingScope scope_20 = {
  "Robot::PhysicalModel/ PhysicalModel_RobotSM1:",
  scope_20_entries, 9,
};

/* Robot::PhysicalModel/ PhysicalModel_Robot */
const MappingEntry scope_19_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, y0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, x0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, alpha0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(SSM_ST_SM1), offsetof(outC_PhysicalModel_Robot, SM1_state_act), &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 7},
  /* 4 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), offsetof(outC_PhysicalModel_Robot, RobotPhase), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 8},
  /* 5 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 3},
  /* 6 */ { MAP_LOCAL, "alpha0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, alpha0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "x0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, x0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "y0", NULL, sizeof(kcg_float64), offsetof(outC_PhysicalModel_Robot, y0), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4}
};
const MappingScope scope_19 = {
  "Robot::PhysicalModel/ PhysicalModel_Robot",
  scope_19_entries, 9,
};

/* Robot::Driver/ Driver_RobotRobot:Stopped: */
const MappingEntry scope_18_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Stopped_Robot), &_Type_statusTy_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L5_Stopped_Robot), &_Type_wheelsTy_Robot_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, &scope_133, 1, 1}
};
const MappingScope scope_18 = {
  "Robot::Driver/ Driver_RobotRobot:Stopped:",
  scope_18_entries, 2,
};

/* Robot::Driver/ Driver_RobotRobot:Arrived: */
const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Arrived_Robot), &_Type_statusTy_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L11_Arrived_Robot), &_Type_wheelsTy_Robot_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, &scope_133, 1, 1}
};
const MappingScope scope_17 = {
  "Robot::Driver/ Driver_RobotRobot:Arrived:",
  scope_17_entries, 2,
};

/* Robot::Driver/ Driver_RobotRobot:Running:<2 */
const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot, NULL, 1, 0}
};
const MappingScope scope_16 = {
  "Robot::Driver/ Driver_RobotRobot:Running:<2",
  scope_16_entries, 1,
};

/* Robot::Driver/ Driver_RobotRobot:Running:<1 */
const MappingEntry scope_15_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot, NULL, 1, 0}
};
const MappingScope scope_15 = {
  "Robot::Driver/ Driver_RobotRobot:Running:<1",
  scope_15_entries, 1,
};

/* Robot::Driver/ Driver_RobotRobot:Running: */
const MappingEntry scope_14_entries[6] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Running_Stopped_1_Running_Robot, &scope_15, 1, 4},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Running_Arrived_2_Running_Robot, &scope_16, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L3_Running_Robot), &_Type_statusTy_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, _L8_Running_Robot), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L9_Running_Robot), &_Type_wheelsTy_Robot_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_133, 1, 3},
  /* 5 */ { MAP_LOCAL, "arriving", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, arriving_Running_Robot), &_Type_kcg_bool_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, NULL, 1, 0}
};
const MappingScope scope_14 = {
  "Robot::Driver/ Driver_RobotRobot:Running:",
  scope_14_entries, 6,
};

/* Robot::Driver/ Driver_RobotRobot:Preparing:<1 */
const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot, NULL, 1, 0}
};
const MappingScope scope_13 = {
  "Robot::Driver/ Driver_RobotRobot:Preparing:<1",
  scope_13_entries, 1,
};

/* Robot::Driver/ Driver_RobotRobot:Preparing: */
const MappingEntry scope_12_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_9_entries[2], isActive_SSM_TR_Robot_SSM_TR_Preparing_Running_1_Preparing_Robot, &scope_13, 1, 2},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, _L1_Preparing_Robot), &_Type_statusTy_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L11_Preparing_Robot), &_Type_wheelsTy_Robot_Utils, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, &scope_133, 1, 1}
};
const MappingScope scope_12 = {
  "Robot::Driver/ Driver_RobotRobot:Preparing:",
  scope_12_entries, 3,
};

/* Robot::Driver/ Driver_RobotRobot: */
const MappingEntry scope_9_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_act), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_Robot), offsetof(outC_Driver_Robot, Robot_fired_strong), &_Type_SSM_TR_Robot_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_Robot), offsetof(outC_Driver_Robot, Robot_fired), &_Type_SSM_TR_Robot_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_nxt), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, Robot_reset_act), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), offsetof(outC_Driver_Robot, Robot_reset_nxt), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_sel), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "Arrived:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Arrived_Robot, &scope_17, 1, 9},
  /* 8 */ { MAP_STATE, "Preparing:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Preparing_Robot, &scope_12, 1, 7},
  /* 9 */ { MAP_STATE, "Running:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Running_Robot, &scope_14, 1, 8},
  /* 10 */ { MAP_STATE, "Stopped:", NULL, 0, 0, NULL, &scope_9_entries[0], isActive_SSM_ST_Robot_SSM_st_Stopped_Robot, &scope_18, 1, 10}
};
const MappingScope scope_9 = {
  "Robot::Driver/ Driver_RobotRobot:",
  scope_9_entries, 11,
};

/* Robot::Driver/ Driver_Robot */
const MappingEntry scope_8_entries[11] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(SSM_ST_Robot), offsetof(outC_Driver_Robot, Robot_state_act), &_Type_SSM_ST_Robot_Utils, NULL, NULL, NULL, 0, 8},
  /* 1 */ { MAP_AUTOMATON, "Robot:", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 1},
  /* 2 */ { MAP_INSTANCE, "Robot::actionArrayOnWheels 2", NULL, sizeof(outC_actionArrayOnWheels_Robot), offsetof(outC_Driver_Robot, Context_actionArrayOnWheels_2), NULL, NULL, NULL, &scope_37, 1, 0},
  /* 3 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), offsetof(outC_Driver_Robot, RobotStatus), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_OUTPUT, "RotationalSpeed", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, RotationalSpeed), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, _L11), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(itiElemArr_Robot), offsetof(outC_Driver_Robot, _L12), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_122, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(sensorsTy), offsetof(outC_Driver_Robot, _L13), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_Driver_Robot, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_Driver_Robot, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "zero", NULL, sizeof(wheelsTy_Robot), offsetof(outC_Driver_Robot, zero), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 2}
};
const MappingScope scope_8 = {
  "Robot::Driver/ Driver_Robot",
  scope_8_entries, 11,
};

/* City::WallClock/ WallClock_City */
const MappingEntry scope_7_entries[16] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_WallClock_City, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_WallClock_City, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(statusTy), offsetof(outC_WallClock_City, _L1), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L13), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L14), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L15), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 14},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_WallClock_City, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(statusTy), offsetof(outC_WallClock_City, _L4), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int32), offsetof(outC_WallClock_City, _L7), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_OUTPUT, "time", NULL, sizeof(kcg_float64), offsetof(outC_WallClock_City, time), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15}
};
const MappingScope scope_7 = {
  "City::WallClock/ WallClock_City",
  scope_7_entries, 16,
};

/* City::ScoringA/ ScoringA_City */
const MappingEntry scope_6_entries[63] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 1 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 2 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L38), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 1},
  /* 3 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L38), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L10), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 17},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L11), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 18},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L12), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 19},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L15), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 21},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L16), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L17), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L18), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 24},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L19), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 25},
  /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L20), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 26},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L23), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 28},
  /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L24), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 29},
  /* 17 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L25), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 30},
  /* 18 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 19 */ { MAP_LOCAL, "_L27", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L27), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 32},
  /* 20 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L28), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 33},
  /* 21 */ { MAP_LOCAL, "_L3", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L3), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 10},
  /* 22 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L30), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 34},
  /* 23 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 25 */ { MAP_LOCAL, "_L33", NULL, sizeof(statusTy), offsetof(outC_ScoringA_City, _L33), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 37},
  /* 26 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L34), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 38},
  /* 27 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L35), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 50},
  /* 28 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L36), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 39},
  /* 29 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L37), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 40},
  /* 30 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L38), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 41},
  /* 31 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L39), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 32 */ { MAP_LOCAL, "_L4", NULL, sizeof(eventTy), offsetof(outC_ScoringA_City, _L4), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 11},
  /* 33 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L41), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 43},
  /* 34 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L42), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 44},
  /* 35 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L43), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 45},
  /* 36 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L44), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 46},
  /* 37 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L45), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 47},
  /* 38 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L46), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 48},
  /* 39 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L47), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 49},
  /* 40 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L48), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 41 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 42 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L50), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 53},
  /* 43 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L51), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 52},
  /* 44 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L52), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 54},
  /* 45 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L53), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 55},
  /* 46 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L54), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 56},
  /* 47 */ { MAP_LOCAL, "_L55", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L55), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57},
  /* 48 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L56), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 58},
  /* 49 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L57), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 59},
  /* 50 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L58), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 60},
  /* 51 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, _L59), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 61},
  /* 52 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 53 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 54 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 55 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_ScoringA_City, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 56 */ { MAP_INSTANCE, "digital::RisingEdge 1", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_1), NULL, NULL, NULL, &scope_35, 1, 4},
  /* 57 */ { MAP_INSTANCE, "digital::RisingEdge 3", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_3), NULL, NULL, NULL, &scope_35, 1, 5},
  /* 58 */ { MAP_INSTANCE, "digital::RisingEdge 4", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_4), NULL, NULL, NULL, &scope_35, 1, 6},
  /* 59 */ { MAP_INSTANCE, "digital::RisingEdge 5", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_5), NULL, NULL, NULL, &scope_35, 1, 7},
  /* 60 */ { MAP_INSTANCE, "digital::RisingEdge 7", NULL, sizeof(outC_RisingEdge_digital), offsetof(outC_ScoringA_City, Context_RisingEdge_7), NULL, NULL, NULL, &scope_35, 1, 8},
  /* 61 */ { MAP_INSTANCE, "digital::count_down 1", NULL, sizeof(outC_count_down_digital_int32), offsetof(outC_ScoringA_City, Context_count_down_1), NULL, NULL, NULL, &scope_36, 1, 9},
  /* 62 */ { MAP_OUTPUT, "score", NULL, sizeof(kcg_int32), offsetof(outC_ScoringA_City, score), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 62}
};
const MappingScope scope_6 = {
  "City::ScoringA/ ScoringA_City",
  scope_6_entries, 63,
};

/* City::ScoringB/ ScoringB_City */
const MappingEntry scope_5_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "Utilities::UpTime 1", NULL, sizeof(outC_UpTime_Utilities), offsetof(outC_ScoringB_City, Context_UpTime_1), NULL, NULL, NULL, &scope_31, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Utilities::Variation 1", NULL, sizeof(outC_Variation_Utilities), offsetof(outC_ScoringB_City, Context_Variation_1), NULL, NULL, NULL, &scope_33, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_ScoringB_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L16), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L17), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L18), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L19), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(positionTy), offsetof(outC_ScoringB_City, _L2), &_Type_positionTy_Utils, NULL, NULL, &scope_132, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L20), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L21), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), offsetof(outC_ScoringB_City, _L22), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L23), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), offsetof(outC_ScoringB_City, _L24), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L25), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L3), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_float64), offsetof(outC_ScoringB_City, _L4), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 3},
  /* 16 */ { MAP_OUTPUT, "score", NULL, sizeof(kcg_int32), offsetof(outC_ScoringB_City, score), &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 16}
};
const MappingScope scope_5 = {
  "City::ScoringB/ ScoringB_City",
  scope_5_entries, 17,
};

/* Robot::readIti/ readIti_Robot */
const MappingEntry scope_4_entries[1] = {
  /* 0 */ { MAP_OUTPUT, "itinerary", NULL, sizeof(itiElemArr_Robot), offsetof(outC_readIti_Robot, itinerary), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_122, 1, 0}
};
const MappingScope scope_4 = {
  "Robot::readIti/ readIti_Robot",
  scope_4_entries, 1,
};

/* City::SmartCityControl/ SmartCityControl_City */
const MappingEntry scope_3_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "City::AllObstacles 1", NULL, sizeof(outC_AllObstacles_City), offsetof(outC_SmartCityControl_City, Context_AllObstacles_1), NULL, NULL, NULL, &scope_30, 1, 3},
  /* 1 */ { MAP_INSTANCE, "City::EventDetection 1", NULL, sizeof(outC_EventDetection_City), offsetof(outC_SmartCityControl_City, Context_EventDetection_1), NULL, NULL, NULL, &scope_27, 1, 0},
  /* 2 */ { MAP_INSTANCE, "City::RobotSensors 1", NULL, sizeof(outC_RobotSensors_City), offsetof(outC_SmartCityControl_City, Context_RobotSensors_1), NULL, NULL, NULL, &scope_28, 1, 1},
  /* 3 */ { MAP_INSTANCE, "City::TrafficLights 1", NULL, sizeof(outC_TrafficLights_City), offsetof(outC_SmartCityControl_City, Context_TrafficLights_1), NULL, NULL, NULL, &scope_29, 1, 2},
  /* 4 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), offsetof(outC_SmartCityControl_City, Events), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 15},
  /* 5 */ { MAP_OUTPUT, "Interrupt", NULL, sizeof(interTy), offsetof(outC_SmartCityControl_City, Interrupt), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_OUTPUT, "SensorsData", NULL, sizeof(sensorsTy), offsetof(outC_SmartCityControl_City, SensorsData), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 14},
  /* 7 */ { MAP_OUTPUT, "Signalization", NULL, sizeof(sigTy), offsetof(outC_SmartCityControl_City, Signalization), &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(phaseTy), offsetof(outC_SmartCityControl_City, _L1), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(trafLArr), offsetof(outC_SmartCityControl_City, _L11), &_Type_trafLArr_Utils, NULL, NULL, &scope_130, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_float64), offsetof(outC_SmartCityControl_City, _L13), &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(obstArr), offsetof(outC_SmartCityControl_City, _L16), &_Type_obstArr_Utils, NULL, NULL, &scope_125, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L17", NULL, sizeof(sigTy), offsetof(outC_SmartCityControl_City, _L17), &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(interTy), offsetof(outC_SmartCityControl_City, _L2), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 6},
  /* 14 */ { MAP_LOCAL, "_L3", NULL, sizeof(eventTy), offsetof(outC_SmartCityControl_City, _L3), &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 5},
  /* 15 */ { MAP_LOCAL, "_L4", NULL, sizeof(sensorsTy), offsetof(outC_SmartCityControl_City, _L4), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 7}
};
const MappingScope scope_3 = {
  "City::SmartCityControl/ SmartCityControl_City",
  scope_3_entries, 16,
};

/* Robot::IndividualRobotControl/ IndividualRobotControl_Robot */
const MappingEntry scope_2_entries[12] = {
  /* 0 */ { MAP_INSTANCE, "Robot::Driver 1", NULL, sizeof(outC_Driver_Robot), offsetof(outC_IndividualRobotControl_Robot, Context_Driver_1), NULL, NULL, NULL, &scope_8, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Robot::PhysicalModel 1", NULL, sizeof(outC_PhysicalModel_Robot), offsetof(outC_IndividualRobotControl_Robot, Context_PhysicalModel_1), NULL, NULL, NULL, &scope_19, 1, 1},
  /* 2 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, RobotPhase), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 10},
  /* 3 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), offsetof(outC_IndividualRobotControl_Robot, RobotStatus), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_IndividualRobotControl_Robot, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(itiElemArr_Robot), offsetof(outC_IndividualRobotControl_Robot, _L11), &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_122, 1, 9},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(wheelsTy_Robot), offsetof(outC_IndividualRobotControl_Robot, _L4), &_Type_wheelsTy_Robot_Utils, NULL, NULL, &scope_133, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(statusTy), offsetof(outC_IndividualRobotControl_Robot, _L5), &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, _L6), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(sensorsTy), offsetof(outC_IndividualRobotControl_Robot, _L7), &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(interTy), offsetof(outC_IndividualRobotControl_Robot, _L8), &_Type_interTy_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(phaseTy), offsetof(outC_IndividualRobotControl_Robot, _L9), &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 7}
};
const MappingScope scope_2 = {
  "Robot::IndividualRobotControl/ IndividualRobotControl_Robot",
  scope_2_entries, 12,
};

/* ModelBasedDesignOfRobotChallenge/ ModelBasedDesignOfRobotCh */
const MappingEntry scope_1_entries[38] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(interTy), (size_t)&outputs_ctx._L14, &_Type_interTy_Utils, NULL, NULL, NULL, 0, 1},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 2},
  /* 3 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L15, &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 0, 3},
  /* 4 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L15, &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 0, 4},
  /* 5 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(interTy), (size_t)&outputs_ctx._L14, &_Type_interTy_Utils, NULL, NULL, NULL, 0, 5},
  /* 6 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 6},
  /* 7 */ { MAP_INSTANCE, "City::ScoringA 1", NULL, sizeof(outC_ScoringA_City), (size_t)&outputs_ctx.Context_ScoringA_1, NULL, NULL, NULL, &scope_6, 1, 11},
  /* 8 */ { MAP_INSTANCE, "City::ScoringB 1", NULL, sizeof(outC_ScoringB_City), (size_t)&outputs_ctx.Context_ScoringB_1, NULL, NULL, NULL, &scope_5, 1, 10},
  /* 9 */ { MAP_INSTANCE, "City::SmartCityControl 1", NULL, sizeof(outC_SmartCityControl_City), (size_t)&outputs_ctx.Context_SmartCityControl_1, NULL, NULL, NULL, &scope_3, 1, 8},
  /* 10 */ { MAP_INSTANCE, "City::WallClock 1", NULL, sizeof(outC_WallClock_City), (size_t)&outputs_ctx.Context_WallClock_1, NULL, NULL, NULL, &scope_7, 1, 12},
  /* 11 */ { MAP_OUTPUT, "Events", NULL, sizeof(eventTy), (size_t)&outputs_ctx.Events, &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 30},
  /* 12 */ { MAP_INPUT, "InitialPhase", NULL, sizeof(phaseTy), (size_t)&inputs_ctx.InitialPhase, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 34},
  /* 13 */ { MAP_INSTANCE, "Robot::IndividualRobotControl 1", NULL, sizeof(outC_IndividualRobotControl_Robot), (size_t)&outputs_ctx.Context_IndividualRobotControl_1, NULL, NULL, NULL, &scope_2, 1, 7},
  /* 14 */ { MAP_INSTANCE, "Robot::readIti 1", NULL, sizeof(outC_readIti_Robot), (size_t)&outputs_ctx.Context_readIti_1, NULL, NULL, NULL, &scope_4, 1, 9},
  /* 15 */ { MAP_OUTPUT, "RobotPhase", NULL, sizeof(phaseTy), (size_t)&outputs_ctx.RobotPhase, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 27},
  /* 16 */ { MAP_OUTPUT, "RobotStatus", NULL, sizeof(statusTy), (size_t)&outputs_ctx.RobotStatus, &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 28},
  /* 17 */ { MAP_OUTPUT, "Signalization", NULL, sizeof(sigTy), (size_t)&outputs_ctx.Signalization, &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 29},
  /* 18 */ { MAP_LOCAL, "_L11", NULL, sizeof(phaseTy), (size_t)&outputs_ctx._L11, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 15},
  /* 19 */ { MAP_LOCAL, "_L12", NULL, sizeof(statusTy), (size_t)&outputs_ctx._L12, &_Type_statusTy_Utils, NULL, NULL, NULL, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L13", NULL, sizeof(sigTy), (size_t)&outputs_ctx._L13, &_Type_sigTy_Utils, NULL, NULL, &scope_124, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L14", NULL, sizeof(interTy), (size_t)&outputs_ctx._L14, &_Type_interTy_Utils, NULL, NULL, NULL, 1, 18},
  /* 22 */ { MAP_LOCAL, "_L15", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L15, &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L16", NULL, sizeof(eventTy), (size_t)&outputs_ctx._L16, &_Type_eventTy_Utils, NULL, NULL, &scope_138, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L19, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L21", NULL, sizeof(itiElemArr_Robot), (size_t)&outputs_ctx._L21, &_Type_itiElemArr_Robot_Utils, NULL, NULL, &scope_122, 1, 21},
  /* 26 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L22, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 22},
  /* 27 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx._L23, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L25", NULL, sizeof(interTy), (size_t)&outputs_ctx._L25, &_Type_interTy_Utils, NULL, NULL, NULL, 1, 25},
  /* 29 */ { MAP_LOCAL, "_L26", NULL, sizeof(sensorsTy), (size_t)&outputs_ctx._L26, &_Type_sensorsTy_Utils, NULL, NULL, &scope_115, 1, 26},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(phaseTy), (size_t)&outputs_ctx._L7, &_Type_phaseTy_Utils, NULL, NULL, &scope_121, 1, 13},
  /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 32 */ { MAP_INPUT, "itiid", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.itiid, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 37},
  /* 33 */ { MAP_INPUT, "mapid", NULL, sizeof(kcg_int32), (size_t)&inputs_ctx.mapid, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 36},
  /* 34 */ { MAP_OUTPUT, "scoreA", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.scoreA, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 31},
  /* 35 */ { MAP_OUTPUT, "scoreB", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.scoreB, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 32},
  /* 36 */ { MAP_OUTPUT, "time", NULL, sizeof(kcg_float64), (size_t)&outputs_ctx.time, &_Type_kcg_float64_Utils, NULL, NULL, NULL, 1, 33},
  /* 37 */ { MAP_INPUT, "top", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.top, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35}
};
const MappingScope scope_1 = {
  "ModelBasedDesignOfRobotChallenge/ ModelBasedDesignOfRobotCh",
  scope_1_entries, 38,
};

/*  */
const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "ModelBasedDesignOfRobotChallenge", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

