#ifndef EIDD_CHALLENGE_SW_TYPES_CONVERSION
#define EIDD_CHALLENGE_SW_TYPES_CONVERSION

#include "SmuTypes.h"

/****************************************************************
 ** _2_array 
 ****************************************************************/
extern int _2_array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check__2_array_string(const char *str, char **endptr);
extern int string_to__2_array(const char *str, void *pValue, char **endptr);
extern int is__2_array_double_conversion_allowed();
extern int _2_array_to_double(const void *pValue, double *nValue);
extern int is__2_array_long_conversion_allowed();
extern int _2_array_to_long(const void *pValue, long *nValue);
extern void compare__2_array(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get__2_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set__2_array_default_value(void *pValue);
extern SimTypeUtils _Type__2_array_Utils;

/****************************************************************
 ** _3_array 
 ****************************************************************/
extern int _3_array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check__3_array_string(const char *str, char **endptr);
extern int string_to__3_array(const char *str, void *pValue, char **endptr);
extern int is__3_array_double_conversion_allowed();
extern int _3_array_to_double(const void *pValue, double *nValue);
extern int is__3_array_long_conversion_allowed();
extern int _3_array_to_long(const void *pValue, long *nValue);
extern void compare__3_array(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get__3_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set__3_array_default_value(void *pValue);
extern SimTypeUtils _Type__3_array_Utils;

/****************************************************************
 ** actionTy_Robot 
 ****************************************************************/
extern int actionTy_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_actionTy_Robot_string(const char *str, char **endptr);
extern int string_to_actionTy_Robot(const char *str, void *pValue, char **endptr);
extern int is_actionTy_Robot_double_conversion_allowed();
extern int actionTy_Robot_to_double(const void *pValue, double *nValue);
extern int is_actionTy_Robot_long_conversion_allowed();
extern int actionTy_Robot_to_long(const void *pValue, long *nValue);
extern void compare_actionTy_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_actionTy_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_actionTy_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_actionTy_Robot_Utils;

/****************************************************************
 ** array 
 ****************************************************************/
extern int array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_string(const char *str, char **endptr);
extern int string_to_array(const char *str, void *pValue, char **endptr);
extern int is_array_double_conversion_allowed();
extern int array_to_double(const void *pValue, double *nValue);
extern int is_array_long_conversion_allowed();
extern int array_to_long(const void *pValue, long *nValue);
extern void compare_array(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_default_value(void *pValue);
extern SimTypeUtils _Type_array_Utils;

/****************************************************************
 ** array_char_7 
 ****************************************************************/
extern int array_char_7_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_char_7_string(const char *str, char **endptr);
extern int string_to_array_char_7(const char *str, void *pValue, char **endptr);
extern int is_array_char_7_double_conversion_allowed();
extern int array_char_7_to_double(const void *pValue, double *nValue);
extern int is_array_char_7_long_conversion_allowed();
extern int array_char_7_to_long(const void *pValue, long *nValue);
extern void compare_array_char_7(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_char_7_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_char_7_default_value(void *pValue);
extern SimTypeUtils _Type_array_char_7_Utils;

/****************************************************************
 ** array_float64_10 
 ****************************************************************/
extern int array_float64_10_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float64_10_string(const char *str, char **endptr);
extern int string_to_array_float64_10(const char *str, void *pValue, char **endptr);
extern int is_array_float64_10_double_conversion_allowed();
extern int array_float64_10_to_double(const void *pValue, double *nValue);
extern int is_array_float64_10_long_conversion_allowed();
extern int array_float64_10_to_long(const void *pValue, long *nValue);
extern void compare_array_float64_10(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float64_10_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_float64_10_default_value(void *pValue);
extern SimTypeUtils _Type_array_float64_10_Utils;

/****************************************************************
 ** array_float64_2 
 ****************************************************************/
extern int array_float64_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float64_2_string(const char *str, char **endptr);
extern int string_to_array_float64_2(const char *str, void *pValue, char **endptr);
extern int is_array_float64_2_double_conversion_allowed();
extern int array_float64_2_to_double(const void *pValue, double *nValue);
extern int is_array_float64_2_long_conversion_allowed();
extern int array_float64_2_to_long(const void *pValue, long *nValue);
extern void compare_array_float64_2(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float64_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_float64_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_float64_2_Utils;

/****************************************************************
 ** array_float64_2_2 
 ****************************************************************/
extern int array_float64_2_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float64_2_2_string(const char *str, char **endptr);
extern int string_to_array_float64_2_2(const char *str, void *pValue, char **endptr);
extern int is_array_float64_2_2_double_conversion_allowed();
extern int array_float64_2_2_to_double(const void *pValue, double *nValue);
extern int is_array_float64_2_2_long_conversion_allowed();
extern int array_float64_2_2_to_long(const void *pValue, long *nValue);
extern void compare_array_float64_2_2(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float64_2_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_float64_2_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_float64_2_2_Utils;

/****************************************************************
 ** array_float64_5 
 ****************************************************************/
extern int array_float64_5_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_float64_5_string(const char *str, char **endptr);
extern int string_to_array_float64_5(const char *str, void *pValue, char **endptr);
extern int is_array_float64_5_double_conversion_allowed();
extern int array_float64_5_to_double(const void *pValue, double *nValue);
extern int is_array_float64_5_long_conversion_allowed();
extern int array_float64_5_to_long(const void *pValue, long *nValue);
extern void compare_array_float64_5(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_float64_5_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_float64_5_default_value(void *pValue);
extern SimTypeUtils _Type_array_float64_5_Utils;

/****************************************************************
 ** array_int32_2 
 ****************************************************************/
extern int array_int32_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_array_int32_2_string(const char *str, char **endptr);
extern int string_to_array_int32_2(const char *str, void *pValue, char **endptr);
extern int is_array_int32_2_double_conversion_allowed();
extern int array_int32_2_to_double(const void *pValue, double *nValue);
extern int is_array_int32_2_long_conversion_allowed();
extern int array_int32_2_to_long(const void *pValue, long *nValue);
extern void compare_array_int32_2(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_array_int32_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_array_int32_2_default_value(void *pValue);
extern SimTypeUtils _Type_array_int32_2_Utils;

/****************************************************************
 ** colorTy 
 ****************************************************************/
extern int colorTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_colorTy_string(const char *str, char **endptr);
extern int string_to_colorTy(const char *str, void *pValue, char **endptr);
extern int is_colorTy_double_conversion_allowed();
extern int colorTy_to_double(const void *pValue, double *nValue);
extern int is_colorTy_long_conversion_allowed();
extern int colorTy_to_long(const void *pValue, long *nValue);
extern void compare_colorTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_colorTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_colorTy_default_value(void *pValue);
extern SimTypeUtils _Type_colorTy_Utils;

/****************************************************************
 ** colorTyQ 
 ****************************************************************/
extern int colorTyQ_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_colorTyQ_string(const char *str, char **endptr);
extern int string_to_colorTyQ(const char *str, void *pValue, char **endptr);
extern int is_colorTyQ_double_conversion_allowed();
extern int colorTyQ_to_double(const void *pValue, double *nValue);
extern int is_colorTyQ_long_conversion_allowed();
extern int colorTyQ_to_long(const void *pValue, long *nValue);
extern void compare_colorTyQ(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_colorTyQ_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_colorTyQ_default_value(void *pValue);
extern SimTypeUtils _Type_colorTyQ_Utils;

/****************************************************************
 ** eventTy 
 ****************************************************************/
extern int eventTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_eventTy_string(const char *str, char **endptr);
extern int string_to_eventTy(const char *str, void *pValue, char **endptr);
extern int is_eventTy_double_conversion_allowed();
extern int eventTy_to_double(const void *pValue, double *nValue);
extern int is_eventTy_long_conversion_allowed();
extern int eventTy_to_long(const void *pValue, long *nValue);
extern void compare_eventTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_eventTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_eventTy_default_value(void *pValue);
extern SimTypeUtils _Type_eventTy_Utils;

/****************************************************************
 ** interTy 
 ****************************************************************/
extern int interTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_interTy_string(const char *str, char **endptr);
extern int string_to_interTy(const char *str, void *pValue, char **endptr);
extern int is_interTy_double_conversion_allowed();
extern int interTy_to_double(const void *pValue, double *nValue);
extern int is_interTy_long_conversion_allowed();
extern int interTy_to_long(const void *pValue, long *nValue);
extern void compare_interTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_interTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_interTy_default_value(void *pValue);
extern SimTypeUtils _Type_interTy_Utils;

/****************************************************************
 ** itiElemArr_Robot 
 ****************************************************************/
extern int itiElemArr_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_itiElemArr_Robot_string(const char *str, char **endptr);
extern int string_to_itiElemArr_Robot(const char *str, void *pValue, char **endptr);
extern int is_itiElemArr_Robot_double_conversion_allowed();
extern int itiElemArr_Robot_to_double(const void *pValue, double *nValue);
extern int is_itiElemArr_Robot_long_conversion_allowed();
extern int itiElemArr_Robot_to_long(const void *pValue, long *nValue);
extern void compare_itiElemArr_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_itiElemArr_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_itiElemArr_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_itiElemArr_Robot_Utils;

/****************************************************************
 ** itiElement_Robot 
 ****************************************************************/
extern int itiElement_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_itiElement_Robot_string(const char *str, char **endptr);
extern int string_to_itiElement_Robot(const char *str, void *pValue, char **endptr);
extern int is_itiElement_Robot_double_conversion_allowed();
extern int itiElement_Robot_to_double(const void *pValue, double *nValue);
extern int is_itiElement_Robot_long_conversion_allowed();
extern int itiElement_Robot_to_long(const void *pValue, long *nValue);
extern void compare_itiElement_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_itiElement_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_itiElement_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_itiElement_Robot_Utils;

/****************************************************************
 ** kcg_bool 
 ****************************************************************/
extern int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_bool_string(const char *str, char **endptr);
extern int string_to_kcg_bool(const char *str, void *pValue, char **endptr);
extern int is_kcg_bool_double_conversion_allowed();
extern int kcg_bool_to_double(const void *pValue, double *nValue);
extern int is_kcg_bool_long_conversion_allowed();
extern int kcg_bool_to_long(const void *pValue, long *nValue);
extern void compare_kcg_bool(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_bool_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_bool_Utils;

/****************************************************************
 ** kcg_char 
 ****************************************************************/
extern int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_char_string(const char *str, char **endptr);
extern int string_to_kcg_char(const char *str, void *pValue, char **endptr);
extern int is_kcg_char_double_conversion_allowed();
extern int kcg_char_to_double(const void *pValue, double *nValue);
extern int is_kcg_char_long_conversion_allowed();
extern int kcg_char_to_long(const void *pValue, long *nValue);
extern void compare_kcg_char(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_char_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_char_Utils;

/****************************************************************
 ** kcg_float32 
 ****************************************************************/
extern int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float32_string(const char *str, char **endptr);
extern int string_to_kcg_float32(const char *str, void *pValue, char **endptr);
extern int is_kcg_float32_double_conversion_allowed();
extern int kcg_float32_to_double(const void *pValue, double *nValue);
extern int is_kcg_float32_long_conversion_allowed();
extern int kcg_float32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_float32_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_float32_Utils;

/****************************************************************
 ** kcg_float64 
 ****************************************************************/
extern int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_float64_string(const char *str, char **endptr);
extern int string_to_kcg_float64(const char *str, void *pValue, char **endptr);
extern int is_kcg_float64_double_conversion_allowed();
extern int kcg_float64_to_double(const void *pValue, double *nValue);
extern int is_kcg_float64_long_conversion_allowed();
extern int kcg_float64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_float64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_float64_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_float64_Utils;

/****************************************************************
 ** kcg_int16 
 ****************************************************************/
extern int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int16_string(const char *str, char **endptr);
extern int string_to_kcg_int16(const char *str, void *pValue, char **endptr);
extern int is_kcg_int16_double_conversion_allowed();
extern int kcg_int16_to_double(const void *pValue, double *nValue);
extern int is_kcg_int16_long_conversion_allowed();
extern int kcg_int16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int16_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int16_Utils;

/****************************************************************
 ** kcg_int32 
 ****************************************************************/
extern int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int32_string(const char *str, char **endptr);
extern int string_to_kcg_int32(const char *str, void *pValue, char **endptr);
extern int is_kcg_int32_double_conversion_allowed();
extern int kcg_int32_to_double(const void *pValue, double *nValue);
extern int is_kcg_int32_long_conversion_allowed();
extern int kcg_int32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int32_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int32_Utils;

/****************************************************************
 ** kcg_int64 
 ****************************************************************/
extern int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int64_string(const char *str, char **endptr);
extern int string_to_kcg_int64(const char *str, void *pValue, char **endptr);
extern int is_kcg_int64_double_conversion_allowed();
extern int kcg_int64_to_double(const void *pValue, double *nValue);
extern int is_kcg_int64_long_conversion_allowed();
extern int kcg_int64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int64_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int64_Utils;

/****************************************************************
 ** kcg_int8 
 ****************************************************************/
extern int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_int8_string(const char *str, char **endptr);
extern int string_to_kcg_int8(const char *str, void *pValue, char **endptr);
extern int is_kcg_int8_double_conversion_allowed();
extern int kcg_int8_to_double(const void *pValue, double *nValue);
extern int is_kcg_int8_long_conversion_allowed();
extern int kcg_int8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_int8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_int8_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_int8_Utils;

/****************************************************************
 ** kcg_size 
 ****************************************************************/
extern int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_size_string(const char *str, char **endptr);
extern int string_to_kcg_size(const char *str, void *pValue, char **endptr);
extern int is_kcg_size_double_conversion_allowed();
extern int kcg_size_to_double(const void *pValue, double *nValue);
extern int is_kcg_size_long_conversion_allowed();
extern int kcg_size_to_long(const void *pValue, long *nValue);
extern void compare_kcg_size(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_size_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_size_Utils;

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/
extern int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint16_string(const char *str, char **endptr);
extern int string_to_kcg_uint16(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint16_double_conversion_allowed();
extern int kcg_uint16_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint16_long_conversion_allowed();
extern int kcg_uint16_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint16(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint16_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_uint16_Utils;

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/
extern int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint32_string(const char *str, char **endptr);
extern int string_to_kcg_uint32(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint32_double_conversion_allowed();
extern int kcg_uint32_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint32_long_conversion_allowed();
extern int kcg_uint32_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint32(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint32_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_uint32_Utils;

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/
extern int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint64_string(const char *str, char **endptr);
extern int string_to_kcg_uint64(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint64_double_conversion_allowed();
extern int kcg_uint64_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint64_long_conversion_allowed();
extern int kcg_uint64_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint64(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint64_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_uint64_Utils;

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/
extern int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_kcg_uint8_string(const char *str, char **endptr);
extern int string_to_kcg_uint8(const char *str, void *pValue, char **endptr);
extern int is_kcg_uint8_double_conversion_allowed();
extern int kcg_uint8_to_double(const void *pValue, double *nValue);
extern int is_kcg_uint8_long_conversion_allowed();
extern int kcg_uint8_to_long(const void *pValue, long *nValue);
extern void compare_kcg_uint8(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_kcg_uint8_default_value(void *pValue);
extern SimTypeUtils _Type_kcg_uint8_Utils;

/****************************************************************
 ** mapDataTy_City 
 ****************************************************************/
extern int mapDataTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_mapDataTy_City_string(const char *str, char **endptr);
extern int string_to_mapDataTy_City(const char *str, void *pValue, char **endptr);
extern int is_mapDataTy_City_double_conversion_allowed();
extern int mapDataTy_City_to_double(const void *pValue, double *nValue);
extern int is_mapDataTy_City_long_conversion_allowed();
extern int mapDataTy_City_to_long(const void *pValue, long *nValue);
extern void compare_mapDataTy_City(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_mapDataTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_mapDataTy_City_default_value(void *pValue);
extern SimTypeUtils _Type_mapDataTy_City_Utils;

/****************************************************************
 ** obstArr 
 ****************************************************************/
extern int obstArr_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_obstArr_string(const char *str, char **endptr);
extern int string_to_obstArr(const char *str, void *pValue, char **endptr);
extern int is_obstArr_double_conversion_allowed();
extern int obstArr_to_double(const void *pValue, double *nValue);
extern int is_obstArr_long_conversion_allowed();
extern int obstArr_to_long(const void *pValue, long *nValue);
extern void compare_obstArr(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_obstArr_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_obstArr_default_value(void *pValue);
extern SimTypeUtils _Type_obstArr_Utils;

/****************************************************************
 ** obstTy 
 ****************************************************************/
extern int obstTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_obstTy_string(const char *str, char **endptr);
extern int string_to_obstTy(const char *str, void *pValue, char **endptr);
extern int is_obstTy_double_conversion_allowed();
extern int obstTy_to_double(const void *pValue, double *nValue);
extern int is_obstTy_long_conversion_allowed();
extern int obstTy_to_long(const void *pValue, long *nValue);
extern void compare_obstTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_obstTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_obstTy_default_value(void *pValue);
extern SimTypeUtils _Type_obstTy_Utils;

/****************************************************************
 ** paramObstArr_City 
 ****************************************************************/
extern int paramObstArr_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_paramObstArr_City_string(const char *str, char **endptr);
extern int string_to_paramObstArr_City(const char *str, void *pValue, char **endptr);
extern int is_paramObstArr_City_double_conversion_allowed();
extern int paramObstArr_City_to_double(const void *pValue, double *nValue);
extern int is_paramObstArr_City_long_conversion_allowed();
extern int paramObstArr_City_to_long(const void *pValue, long *nValue);
extern void compare_paramObstArr_City(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_paramObstArr_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_paramObstArr_City_default_value(void *pValue);
extern SimTypeUtils _Type_paramObstArr_City_Utils;

/****************************************************************
 ** paramObstTy_City 
 ****************************************************************/
extern int paramObstTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_paramObstTy_City_string(const char *str, char **endptr);
extern int string_to_paramObstTy_City(const char *str, void *pValue, char **endptr);
extern int is_paramObstTy_City_double_conversion_allowed();
extern int paramObstTy_City_to_double(const void *pValue, double *nValue);
extern int is_paramObstTy_City_long_conversion_allowed();
extern int paramObstTy_City_to_long(const void *pValue, long *nValue);
extern void compare_paramObstTy_City(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_paramObstTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_paramObstTy_City_default_value(void *pValue);
extern SimTypeUtils _Type_paramObstTy_City_Utils;

/****************************************************************
 ** paramTLArr_City 
 ****************************************************************/
extern int paramTLArr_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_paramTLArr_City_string(const char *str, char **endptr);
extern int string_to_paramTLArr_City(const char *str, void *pValue, char **endptr);
extern int is_paramTLArr_City_double_conversion_allowed();
extern int paramTLArr_City_to_double(const void *pValue, double *nValue);
extern int is_paramTLArr_City_long_conversion_allowed();
extern int paramTLArr_City_to_long(const void *pValue, long *nValue);
extern void compare_paramTLArr_City(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_paramTLArr_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_paramTLArr_City_default_value(void *pValue);
extern SimTypeUtils _Type_paramTLArr_City_Utils;

/****************************************************************
 ** paramTLTy_City 
 ****************************************************************/
extern int paramTLTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_paramTLTy_City_string(const char *str, char **endptr);
extern int string_to_paramTLTy_City(const char *str, void *pValue, char **endptr);
extern int is_paramTLTy_City_double_conversion_allowed();
extern int paramTLTy_City_to_double(const void *pValue, double *nValue);
extern int is_paramTLTy_City_long_conversion_allowed();
extern int paramTLTy_City_to_long(const void *pValue, long *nValue);
extern void compare_paramTLTy_City(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_paramTLTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_paramTLTy_City_default_value(void *pValue);
extern SimTypeUtils _Type_paramTLTy_City_Utils;

/****************************************************************
 ** phaseTy 
 ****************************************************************/
extern int phaseTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_phaseTy_string(const char *str, char **endptr);
extern int string_to_phaseTy(const char *str, void *pValue, char **endptr);
extern int is_phaseTy_double_conversion_allowed();
extern int phaseTy_to_double(const void *pValue, double *nValue);
extern int is_phaseTy_long_conversion_allowed();
extern int phaseTy_to_long(const void *pValue, long *nValue);
extern void compare_phaseTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_phaseTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_phaseTy_default_value(void *pValue);
extern SimTypeUtils _Type_phaseTy_Utils;

/****************************************************************
 ** positionTy 
 ****************************************************************/
extern int positionTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_positionTy_string(const char *str, char **endptr);
extern int string_to_positionTy(const char *str, void *pValue, char **endptr);
extern int is_positionTy_double_conversion_allowed();
extern int positionTy_to_double(const void *pValue, double *nValue);
extern int is_positionTy_long_conversion_allowed();
extern int positionTy_to_long(const void *pValue, long *nValue);
extern void compare_positionTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_positionTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_positionTy_default_value(void *pValue);
extern SimTypeUtils _Type_positionTy_Utils;

/****************************************************************
 ** sensorsTy 
 ****************************************************************/
extern int sensorsTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_sensorsTy_string(const char *str, char **endptr);
extern int string_to_sensorsTy(const char *str, void *pValue, char **endptr);
extern int is_sensorsTy_double_conversion_allowed();
extern int sensorsTy_to_double(const void *pValue, double *nValue);
extern int is_sensorsTy_long_conversion_allowed();
extern int sensorsTy_to_long(const void *pValue, long *nValue);
extern void compare_sensorsTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_sensorsTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_sensorsTy_default_value(void *pValue);
extern SimTypeUtils _Type_sensorsTy_Utils;

/****************************************************************
 ** sigTy 
 ****************************************************************/
extern int sigTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_sigTy_string(const char *str, char **endptr);
extern int string_to_sigTy(const char *str, void *pValue, char **endptr);
extern int is_sigTy_double_conversion_allowed();
extern int sigTy_to_double(const void *pValue, double *nValue);
extern int is_sigTy_long_conversion_allowed();
extern int sigTy_to_long(const void *pValue, long *nValue);
extern void compare_sigTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_sigTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_sigTy_default_value(void *pValue);
extern SimTypeUtils _Type_sigTy_Utils;

/****************************************************************
 ** SSM_ST_goPlus 
 ****************************************************************/
extern int SSM_ST_goPlus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_goPlus_string(const char *str, char **endptr);
extern int string_to_SSM_ST_goPlus(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_goPlus_double_conversion_allowed();
extern int SSM_ST_goPlus_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_goPlus_long_conversion_allowed();
extern int SSM_ST_goPlus_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_goPlus(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_goPlus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_ST_goPlus_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_goPlus_Utils;

/****************************************************************
 ** SSM_ST_Robot 
 ****************************************************************/
extern int SSM_ST_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_Robot_string(const char *str, char **endptr);
extern int string_to_SSM_ST_Robot(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_Robot_double_conversion_allowed();
extern int SSM_ST_Robot_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_Robot_long_conversion_allowed();
extern int SSM_ST_Robot_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_ST_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_Robot_Utils;

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/
extern int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_ST_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_ST_SM1_double_conversion_allowed();
extern int SSM_ST_SM1_to_double(const void *pValue, double *nValue);
extern int is_SSM_ST_SM1_long_conversion_allowed();
extern int SSM_ST_SM1_to_long(const void *pValue, long *nValue);
extern void compare_SSM_ST_SM1(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_ST_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_ST_SM1_Utils;

/****************************************************************
 ** SSM_TR_goPlus 
 ****************************************************************/
extern int SSM_TR_goPlus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_goPlus_string(const char *str, char **endptr);
extern int string_to_SSM_TR_goPlus(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_goPlus_double_conversion_allowed();
extern int SSM_TR_goPlus_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_goPlus_long_conversion_allowed();
extern int SSM_TR_goPlus_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_goPlus(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_goPlus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_TR_goPlus_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_goPlus_Utils;

/****************************************************************
 ** SSM_TR_Robot 
 ****************************************************************/
extern int SSM_TR_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_Robot_string(const char *str, char **endptr);
extern int string_to_SSM_TR_Robot(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_Robot_double_conversion_allowed();
extern int SSM_TR_Robot_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_Robot_long_conversion_allowed();
extern int SSM_TR_Robot_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_TR_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_Robot_Utils;

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/
extern int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_SSM_TR_SM1_string(const char *str, char **endptr);
extern int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr);
extern int is_SSM_TR_SM1_double_conversion_allowed();
extern int SSM_TR_SM1_to_double(const void *pValue, double *nValue);
extern int is_SSM_TR_SM1_long_conversion_allowed();
extern int SSM_TR_SM1_to_long(const void *pValue, long *nValue);
extern void compare_SSM_TR_SM1(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_SSM_TR_SM1_default_value(void *pValue);
extern SimTypeUtils _Type_SSM_TR_SM1_Utils;

/****************************************************************
 ** statusTy 
 ****************************************************************/
extern int statusTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_statusTy_string(const char *str, char **endptr);
extern int string_to_statusTy(const char *str, void *pValue, char **endptr);
extern int is_statusTy_double_conversion_allowed();
extern int statusTy_to_double(const void *pValue, double *nValue);
extern int is_statusTy_long_conversion_allowed();
extern int statusTy_to_long(const void *pValue, long *nValue);
extern void compare_statusTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_statusTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_statusTy_default_value(void *pValue);
extern SimTypeUtils _Type_statusTy_Utils;

/****************************************************************
 ** trafLArr 
 ****************************************************************/
extern int trafLArr_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_trafLArr_string(const char *str, char **endptr);
extern int string_to_trafLArr(const char *str, void *pValue, char **endptr);
extern int is_trafLArr_double_conversion_allowed();
extern int trafLArr_to_double(const void *pValue, double *nValue);
extern int is_trafLArr_long_conversion_allowed();
extern int trafLArr_to_long(const void *pValue, long *nValue);
extern void compare_trafLArr(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_trafLArr_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_trafLArr_default_value(void *pValue);
extern SimTypeUtils _Type_trafLArr_Utils;

/****************************************************************
 ** trafLTy 
 ****************************************************************/
extern int trafLTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_trafLTy_string(const char *str, char **endptr);
extern int string_to_trafLTy(const char *str, void *pValue, char **endptr);
extern int is_trafLTy_double_conversion_allowed();
extern int trafLTy_to_double(const void *pValue, double *nValue);
extern int is_trafLTy_long_conversion_allowed();
extern int trafLTy_to_long(const void *pValue, long *nValue);
extern void compare_trafLTy(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_trafLTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_trafLTy_default_value(void *pValue);
extern SimTypeUtils _Type_trafLTy_Utils;

/****************************************************************
 ** TruthTableValues_truthtables 
 ****************************************************************/
extern int TruthTableValues_truthtables_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_TruthTableValues_truthtables_string(const char *str, char **endptr);
extern int string_to_TruthTableValues_truthtables(const char *str, void *pValue, char **endptr);
extern int is_TruthTableValues_truthtables_double_conversion_allowed();
extern int TruthTableValues_truthtables_to_double(const void *pValue, double *nValue);
extern int is_TruthTableValues_truthtables_long_conversion_allowed();
extern int TruthTableValues_truthtables_to_long(const void *pValue, long *nValue);
extern void compare_TruthTableValues_truthtables(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_TruthTableValues_truthtables_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_TruthTableValues_truthtables_default_value(void *pValue);
extern SimTypeUtils _Type_TruthTableValues_truthtables_Utils;

/****************************************************************
 ** wheelsTy_Robot 
 ****************************************************************/
extern int wheelsTy_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int check_wheelsTy_Robot_string(const char *str, char **endptr);
extern int string_to_wheelsTy_Robot(const char *str, void *pValue, char **endptr);
extern int is_wheelsTy_Robot_double_conversion_allowed();
extern int wheelsTy_Robot_to_double(const void *pValue, double *nValue);
extern int is_wheelsTy_Robot_long_conversion_allowed();
extern int wheelsTy_Robot_to_long(const void *pValue, long *nValue);
extern void compare_wheelsTy_Robot(int *nStatus, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths);
extern int get_wheelsTy_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj);
extern int set_wheelsTy_Robot_default_value(void *pValue);
extern SimTypeUtils _Type_wheelsTy_Robot_Utils;


#endif /*EIDD_CHALLENGE_SW_TYPES_CONVERSION */
