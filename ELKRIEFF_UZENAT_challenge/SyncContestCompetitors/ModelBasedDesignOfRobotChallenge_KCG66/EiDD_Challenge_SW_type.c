#include <stdlib.h>
#include <stddef.h>
#include <float.h>
#include "kcg_types.h"
#include "SmuTypes.h"
#include "SmuPredefConv.h"
#include "SmuVTable.h"
#include "EiDD_Challenge_SW_type.h"

char strDefaultRealFormat[] = "%.5g"; /* (from .etp) */

#define skip_whitespace(str) while(*str == ' ' || *str == '\t') str++

/****************************************************************
 ** _2_array 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_2_arrayVTable_defined
    extern struct SimTypeVTable *pSim_2_arrayVTable;
  #else 
    struct SimTypeVTable *pSim_2_arrayVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_2_arrayVTable;
#endif

int _2_array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_2_arrayVTable != NULL
        && pSim_2_arrayVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_2_arrayVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, phaseTy_to_string, 2, sizeof(phaseTy), pfnStrAppend, pStrObj);
}

int check__2_array_string(const char *str, char **endptr)
{
    static _2_array rTemp;
    return string_to__2_array(str, &rTemp, endptr);
}

int string_to__2_array(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_2_arrayVTable != NULL) {
        nRet = string_to_VTable(str, pSim_2_arrayVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_phaseTy_Utils, 2, sizeof(phaseTy), endptr);
    }
    return nRet;
}

int is__2_array_double_conversion_allowed()
{
    if (pSim_2_arrayVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_2_arrayVTable);
    }
    return 0;
}

int _2_array_to_double(const void *pValue, double *nValue)
{
    if (pSim_2_arrayVTable != NULL) {
        return VTable_to_double(pValue, pSim_2_arrayVTable, nValue);
    }
    return 0;
}

int is__2_array_long_conversion_allowed()
{
    if (pSim_2_arrayVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_2_arrayVTable);
    }
    return 0;
}

int _2_array_to_long(const void *pValue, long *nValue)
{
    if (pSim_2_arrayVTable != NULL) {
        return VTable_to_long(pValue, pSim_2_arrayVTable, nValue);
    }
    return 0;
}

void compare__2_array(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_2_arrayVTable != NULL
        && pSim_2_arrayVTable->m_version >= Scv612
        && pSim_2_arrayVTable->m_pfnCompare != NULL) {
        if (pSim_2_arrayVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_2_arrayVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_2_arrayVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_phaseTy, 2, sizeof(phaseTy), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__2_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_phaseTy_signature, 2, pfnStrAppend, pStrObj); 
}

int set__2_array_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_phaseTy_default_value(&((phaseTy*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type__2_array_Utils = {
    _2_array_to_string,
    check__2_array_string,
    string_to__2_array,
    is__2_array_double_conversion_allowed,
    _2_array_to_double,
    is__2_array_long_conversion_allowed,
    _2_array_to_long,
    compare__2_array,
    get__2_array_signature,
    set__2_array_default_value,
    sizeof(_2_array)
};

/****************************************************************
 ** _3_array 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSim_3_arrayVTable_defined
    extern struct SimTypeVTable *pSim_3_arrayVTable;
  #else 
    struct SimTypeVTable *pSim_3_arrayVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSim_3_arrayVTable;
#endif

int _3_array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSim_3_arrayVTable != NULL
        && pSim_3_arrayVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSim_3_arrayVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, positionTy_to_string, 2, sizeof(positionTy), pfnStrAppend, pStrObj);
}

int check__3_array_string(const char *str, char **endptr)
{
    static _3_array rTemp;
    return string_to__3_array(str, &rTemp, endptr);
}

int string_to__3_array(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSim_3_arrayVTable != NULL) {
        nRet = string_to_VTable(str, pSim_3_arrayVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_positionTy_Utils, 2, sizeof(positionTy), endptr);
    }
    return nRet;
}

int is__3_array_double_conversion_allowed()
{
    if (pSim_3_arrayVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSim_3_arrayVTable);
    }
    return 0;
}

int _3_array_to_double(const void *pValue, double *nValue)
{
    if (pSim_3_arrayVTable != NULL) {
        return VTable_to_double(pValue, pSim_3_arrayVTable, nValue);
    }
    return 0;
}

int is__3_array_long_conversion_allowed()
{
    if (pSim_3_arrayVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSim_3_arrayVTable);
    }
    return 0;
}

int _3_array_to_long(const void *pValue, long *nValue)
{
    if (pSim_3_arrayVTable != NULL) {
        return VTable_to_long(pValue, pSim_3_arrayVTable, nValue);
    }
    return 0;
}

void compare__3_array(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSim_3_arrayVTable != NULL
        && pSim_3_arrayVTable->m_version >= Scv612
        && pSim_3_arrayVTable->m_pfnCompare != NULL) {
        if (pSim_3_arrayVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSim_3_arrayVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSim_3_arrayVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_positionTy, 2, sizeof(positionTy), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get__3_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_positionTy_signature, 2, pfnStrAppend, pStrObj); 
}

int set__3_array_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_positionTy_default_value(&((positionTy*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type__3_array_Utils = {
    _3_array_to_string,
    check__3_array_string,
    string_to__3_array,
    is__3_array_double_conversion_allowed,
    _3_array_to_double,
    is__3_array_long_conversion_allowed,
    _3_array_to_long,
    compare__3_array,
    get__3_array_signature,
    set__3_array_default_value,
    sizeof(_3_array)
};

/****************************************************************
 ** actionTy_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimactionTy_RobotVTable_defined
    extern struct SimTypeVTable *pSimactionTy_RobotVTable;
  #else 
    struct SimTypeVTable *pSimactionTy_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimactionTy_RobotVTable;
#endif

static SimEnumValUtils actionTy_Robot_values[] = {
    { "Robot::go", go_Robot},
    { "go", go_Robot},
    { "Robot::turn", turn_Robot},
    { "turn", turn_Robot},
    { "Robot::stop", stop_Robot},
    { "stop", stop_Robot},
};
const int actionTy_Robot_nb_values = 6;

int actionTy_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimactionTy_RobotVTable != NULL
        && pSimactionTy_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimactionTy_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(actionTy_Robot*)pValue, actionTy_Robot_values, actionTy_Robot_nb_values, pfnStrAppend, pStrObj); 
}

int check_actionTy_Robot_string(const char *str, char **endptr)
{
    static actionTy_Robot rTemp;
    return string_to_actionTy_Robot(str, &rTemp, endptr);
}

int string_to_actionTy_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimactionTy_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimactionTy_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, actionTy_Robot_values, actionTy_Robot_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(actionTy_Robot*)pValue = (actionTy_Robot)nTemp;
    }
    return nRet;
}

int is_actionTy_Robot_double_conversion_allowed()
{
    if (pSimactionTy_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimactionTy_RobotVTable);
    }
    return 1;
}

int actionTy_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimactionTy_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimactionTy_RobotVTable, nValue);
    }
    *nValue = (double)*((actionTy_Robot*)pValue);
    return 1;
}

int is_actionTy_Robot_long_conversion_allowed()
{
    if (pSimactionTy_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimactionTy_RobotVTable);
    }
    return 1;
}

int actionTy_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimactionTy_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimactionTy_RobotVTable, nValue);
    }
    *nValue = (long)*((actionTy_Robot*)pValue);
    return 1;
}

void compare_actionTy_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimactionTy_RobotVTable != NULL
        && pSimactionTy_RobotVTable->m_version >= Scv612
        && pSimactionTy_RobotVTable->m_pfnCompare != NULL) {
        if (pSimactionTy_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimactionTy_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimactionTy_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(actionTy_Robot*)pValue1), (int)(*(actionTy_Robot*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_actionTy_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(actionTy_Robot_values, actionTy_Robot_nb_values, pfnStrAppend, pStrObj);
}

int set_actionTy_Robot_default_value(void *pValue)
{
    *(actionTy_Robot*)pValue = go_Robot;
    return 1;
}

SimTypeUtils _Type_actionTy_Robot_Utils = {
    actionTy_Robot_to_string,
    check_actionTy_Robot_string,
    string_to_actionTy_Robot,
    is_actionTy_Robot_double_conversion_allowed,
    actionTy_Robot_to_double,
    is_actionTy_Robot_long_conversion_allowed,
    actionTy_Robot_to_long,
    compare_actionTy_Robot,
    get_actionTy_Robot_signature,
    set_actionTy_Robot_default_value,
    sizeof(actionTy_Robot)
};

/****************************************************************
 ** array 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarrayVTable_defined
    extern struct SimTypeVTable *pSimarrayVTable;
  #else 
    struct SimTypeVTable *pSimarrayVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarrayVTable;
#endif

int array_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarrayVTable != NULL
        && pSimarrayVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarrayVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, phaseTy_to_string, 10, sizeof(phaseTy), pfnStrAppend, pStrObj);
}

int check_array_string(const char *str, char **endptr)
{
    static array rTemp;
    return string_to_array(str, &rTemp, endptr);
}

int string_to_array(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarrayVTable != NULL) {
        nRet = string_to_VTable(str, pSimarrayVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_phaseTy_Utils, 10, sizeof(phaseTy), endptr);
    }
    return nRet;
}

int is_array_double_conversion_allowed()
{
    if (pSimarrayVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarrayVTable);
    }
    return 0;
}

int array_to_double(const void *pValue, double *nValue)
{
    if (pSimarrayVTable != NULL) {
        return VTable_to_double(pValue, pSimarrayVTable, nValue);
    }
    return 0;
}

int is_array_long_conversion_allowed()
{
    if (pSimarrayVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarrayVTable);
    }
    return 0;
}

int array_to_long(const void *pValue, long *nValue)
{
    if (pSimarrayVTable != NULL) {
        return VTable_to_long(pValue, pSimarrayVTable, nValue);
    }
    return 0;
}

void compare_array(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarrayVTable != NULL
        && pSimarrayVTable->m_version >= Scv612
        && pSimarrayVTable->m_pfnCompare != NULL) {
        if (pSimarrayVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarrayVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarrayVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_phaseTy, 10, sizeof(phaseTy), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_phaseTy_signature, 10, pfnStrAppend, pStrObj); 
}

int set_array_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_phaseTy_default_value(&((phaseTy*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_Utils = {
    array_to_string,
    check_array_string,
    string_to_array,
    is_array_double_conversion_allowed,
    array_to_double,
    is_array_long_conversion_allowed,
    array_to_long,
    compare_array,
    get_array_signature,
    set_array_default_value,
    sizeof(array)
};

/****************************************************************
 ** array_char_7 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_char_7VTable_defined
    extern struct SimTypeVTable *pSimarray_char_7VTable;
  #else 
    struct SimTypeVTable *pSimarray_char_7VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_char_7VTable;
#endif

int array_char_7_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_char_7VTable != NULL
        && pSimarray_char_7VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_char_7VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    if (pConverter->m_bDisplayStrings)
        return pConverter->m_pfnCharArrayToString(pValue, kcg_char_to_string, 7, sizeof(kcg_char), pfnStrAppend, pStrObj, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
    else
        return pConverter->m_pfnArrayToString(pValue, kcg_char_to_string, 7, sizeof(kcg_char), pfnStrAppend, pStrObj);
}

int check_array_char_7_string(const char *str, char **endptr)
{
    static array_char_7 rTemp;
    return string_to_array_char_7(str, &rTemp, endptr);
}

int string_to_array_char_7(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_char_7VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_char_7VTable, pValue, endptr);
    }
    if (nRet == 0) {
        if (*str == '"')
            nRet = pConverter->m_pfnStringToCharArray(str, pValue, &_Type_kcg_char_Utils, 7, sizeof(kcg_char), endptr, pConverter->m_bStringsPadding, pConverter->m_cStringsPaddingChar);
        else
            nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_char_Utils, 7, sizeof(kcg_char), endptr);
    }
    return nRet;
}

int is_array_char_7_double_conversion_allowed()
{
    if (pSimarray_char_7VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_char_7VTable);
    }
    return 0;
}

int array_char_7_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_char_7VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_char_7VTable, nValue);
    }
    return 0;
}

int is_array_char_7_long_conversion_allowed()
{
    if (pSimarray_char_7VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_char_7VTable);
    }
    return 0;
}

int array_char_7_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_char_7VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_char_7VTable, nValue);
    }
    return 0;
}

void compare_array_char_7(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_char_7VTable != NULL
        && pSimarray_char_7VTable->m_version >= Scv612
        && pSimarray_char_7VTable->m_pfnCompare != NULL) {
        if (pSimarray_char_7VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_char_7VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_char_7VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_char, 7, sizeof(kcg_char), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_char_7_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_char_signature, 7, pfnStrAppend, pStrObj); 
}

int set_array_char_7_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 7; i++)
        set_kcg_char_default_value(&((kcg_char*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_char_7_Utils = {
    array_char_7_to_string,
    check_array_char_7_string,
    string_to_array_char_7,
    is_array_char_7_double_conversion_allowed,
    array_char_7_to_double,
    is_array_char_7_long_conversion_allowed,
    array_char_7_to_long,
    compare_array_char_7,
    get_array_char_7_signature,
    set_array_char_7_default_value,
    sizeof(array_char_7)
};

/****************************************************************
 ** array_float64_10 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_float64_10VTable_defined
    extern struct SimTypeVTable *pSimarray_float64_10VTable;
  #else 
    struct SimTypeVTable *pSimarray_float64_10VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_float64_10VTable;
#endif

int array_float64_10_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_float64_10VTable != NULL
        && pSimarray_float64_10VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_float64_10VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_float64_to_string, 10, sizeof(kcg_float64), pfnStrAppend, pStrObj);
}

int check_array_float64_10_string(const char *str, char **endptr)
{
    static array_float64_10 rTemp;
    return string_to_array_float64_10(str, &rTemp, endptr);
}

int string_to_array_float64_10(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_float64_10VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_float64_10VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_float64_Utils, 10, sizeof(kcg_float64), endptr);
    }
    return nRet;
}

int is_array_float64_10_double_conversion_allowed()
{
    if (pSimarray_float64_10VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_float64_10VTable);
    }
    return 0;
}

int array_float64_10_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_float64_10VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_float64_10VTable, nValue);
    }
    return 0;
}

int is_array_float64_10_long_conversion_allowed()
{
    if (pSimarray_float64_10VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_float64_10VTable);
    }
    return 0;
}

int array_float64_10_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_float64_10VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_float64_10VTable, nValue);
    }
    return 0;
}

void compare_array_float64_10(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_float64_10VTable != NULL
        && pSimarray_float64_10VTable->m_version >= Scv612
        && pSimarray_float64_10VTable->m_pfnCompare != NULL) {
        if (pSimarray_float64_10VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_float64_10VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_float64_10VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_float64, 10, sizeof(kcg_float64), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_float64_10_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_float64_signature, 10, pfnStrAppend, pStrObj); 
}

int set_array_float64_10_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_kcg_float64_default_value(&((kcg_float64*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_float64_10_Utils = {
    array_float64_10_to_string,
    check_array_float64_10_string,
    string_to_array_float64_10,
    is_array_float64_10_double_conversion_allowed,
    array_float64_10_to_double,
    is_array_float64_10_long_conversion_allowed,
    array_float64_10_to_long,
    compare_array_float64_10,
    get_array_float64_10_signature,
    set_array_float64_10_default_value,
    sizeof(array_float64_10)
};

/****************************************************************
 ** array_float64_2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_float64_2VTable_defined
    extern struct SimTypeVTable *pSimarray_float64_2VTable;
  #else 
    struct SimTypeVTable *pSimarray_float64_2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_float64_2VTable;
#endif

int array_float64_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_float64_2VTable != NULL
        && pSimarray_float64_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_float64_2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_float64_to_string, 2, sizeof(kcg_float64), pfnStrAppend, pStrObj);
}

int check_array_float64_2_string(const char *str, char **endptr)
{
    static array_float64_2 rTemp;
    return string_to_array_float64_2(str, &rTemp, endptr);
}

int string_to_array_float64_2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_float64_2VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_float64_2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_float64_Utils, 2, sizeof(kcg_float64), endptr);
    }
    return nRet;
}

int is_array_float64_2_double_conversion_allowed()
{
    if (pSimarray_float64_2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_float64_2VTable);
    }
    return 0;
}

int array_float64_2_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_float64_2VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_float64_2VTable, nValue);
    }
    return 0;
}

int is_array_float64_2_long_conversion_allowed()
{
    if (pSimarray_float64_2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_float64_2VTable);
    }
    return 0;
}

int array_float64_2_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_float64_2VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_float64_2VTable, nValue);
    }
    return 0;
}

void compare_array_float64_2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_float64_2VTable != NULL
        && pSimarray_float64_2VTable->m_version >= Scv612
        && pSimarray_float64_2VTable->m_pfnCompare != NULL) {
        if (pSimarray_float64_2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_float64_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_float64_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_float64, 2, sizeof(kcg_float64), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_float64_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_float64_signature, 2, pfnStrAppend, pStrObj); 
}

int set_array_float64_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_float64_default_value(&((kcg_float64*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_float64_2_Utils = {
    array_float64_2_to_string,
    check_array_float64_2_string,
    string_to_array_float64_2,
    is_array_float64_2_double_conversion_allowed,
    array_float64_2_to_double,
    is_array_float64_2_long_conversion_allowed,
    array_float64_2_to_long,
    compare_array_float64_2,
    get_array_float64_2_signature,
    set_array_float64_2_default_value,
    sizeof(array_float64_2)
};

/****************************************************************
 ** array_float64_2_2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_float64_2_2VTable_defined
    extern struct SimTypeVTable *pSimarray_float64_2_2VTable;
  #else 
    struct SimTypeVTable *pSimarray_float64_2_2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_float64_2_2VTable;
#endif

int array_float64_2_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_float64_2_2VTable != NULL
        && pSimarray_float64_2_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_float64_2_2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, array_float64_2_to_string, 2, sizeof(array_float64_2), pfnStrAppend, pStrObj);
}

int check_array_float64_2_2_string(const char *str, char **endptr)
{
    static array_float64_2_2 rTemp;
    return string_to_array_float64_2_2(str, &rTemp, endptr);
}

int string_to_array_float64_2_2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_float64_2_2VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_float64_2_2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_array_float64_2_Utils, 2, sizeof(array_float64_2), endptr);
    }
    return nRet;
}

int is_array_float64_2_2_double_conversion_allowed()
{
    if (pSimarray_float64_2_2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_float64_2_2VTable);
    }
    return 0;
}

int array_float64_2_2_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_float64_2_2VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_float64_2_2VTable, nValue);
    }
    return 0;
}

int is_array_float64_2_2_long_conversion_allowed()
{
    if (pSimarray_float64_2_2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_float64_2_2VTable);
    }
    return 0;
}

int array_float64_2_2_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_float64_2_2VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_float64_2_2VTable, nValue);
    }
    return 0;
}

void compare_array_float64_2_2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_float64_2_2VTable != NULL
        && pSimarray_float64_2_2VTable->m_version >= Scv612
        && pSimarray_float64_2_2VTable->m_pfnCompare != NULL) {
        if (pSimarray_float64_2_2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_float64_2_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_float64_2_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_array_float64_2, 2, sizeof(array_float64_2), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_float64_2_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_array_float64_2_signature, 2, pfnStrAppend, pStrObj); 
}

int set_array_float64_2_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_array_float64_2_default_value(&((array_float64_2*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_float64_2_2_Utils = {
    array_float64_2_2_to_string,
    check_array_float64_2_2_string,
    string_to_array_float64_2_2,
    is_array_float64_2_2_double_conversion_allowed,
    array_float64_2_2_to_double,
    is_array_float64_2_2_long_conversion_allowed,
    array_float64_2_2_to_long,
    compare_array_float64_2_2,
    get_array_float64_2_2_signature,
    set_array_float64_2_2_default_value,
    sizeof(array_float64_2_2)
};

/****************************************************************
 ** array_float64_5 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_float64_5VTable_defined
    extern struct SimTypeVTable *pSimarray_float64_5VTable;
  #else 
    struct SimTypeVTable *pSimarray_float64_5VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_float64_5VTable;
#endif

int array_float64_5_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_float64_5VTable != NULL
        && pSimarray_float64_5VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_float64_5VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_float64_to_string, 5, sizeof(kcg_float64), pfnStrAppend, pStrObj);
}

int check_array_float64_5_string(const char *str, char **endptr)
{
    static array_float64_5 rTemp;
    return string_to_array_float64_5(str, &rTemp, endptr);
}

int string_to_array_float64_5(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_float64_5VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_float64_5VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_float64_Utils, 5, sizeof(kcg_float64), endptr);
    }
    return nRet;
}

int is_array_float64_5_double_conversion_allowed()
{
    if (pSimarray_float64_5VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_float64_5VTable);
    }
    return 0;
}

int array_float64_5_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_float64_5VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_float64_5VTable, nValue);
    }
    return 0;
}

int is_array_float64_5_long_conversion_allowed()
{
    if (pSimarray_float64_5VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_float64_5VTable);
    }
    return 0;
}

int array_float64_5_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_float64_5VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_float64_5VTable, nValue);
    }
    return 0;
}

void compare_array_float64_5(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_float64_5VTable != NULL
        && pSimarray_float64_5VTable->m_version >= Scv612
        && pSimarray_float64_5VTable->m_pfnCompare != NULL) {
        if (pSimarray_float64_5VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_float64_5VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_float64_5VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_float64, 5, sizeof(kcg_float64), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_float64_5_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_float64_signature, 5, pfnStrAppend, pStrObj); 
}

int set_array_float64_5_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_kcg_float64_default_value(&((kcg_float64*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_float64_5_Utils = {
    array_float64_5_to_string,
    check_array_float64_5_string,
    string_to_array_float64_5,
    is_array_float64_5_double_conversion_allowed,
    array_float64_5_to_double,
    is_array_float64_5_long_conversion_allowed,
    array_float64_5_to_long,
    compare_array_float64_5,
    get_array_float64_5_signature,
    set_array_float64_5_default_value,
    sizeof(array_float64_5)
};

/****************************************************************
 ** array_int32_2 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimarray_int32_2VTable_defined
    extern struct SimTypeVTable *pSimarray_int32_2VTable;
  #else 
    struct SimTypeVTable *pSimarray_int32_2VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimarray_int32_2VTable;
#endif

int array_int32_2_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimarray_int32_2VTable != NULL
        && pSimarray_int32_2VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimarray_int32_2VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, kcg_int32_to_string, 2, sizeof(kcg_int32), pfnStrAppend, pStrObj);
}

int check_array_int32_2_string(const char *str, char **endptr)
{
    static array_int32_2 rTemp;
    return string_to_array_int32_2(str, &rTemp, endptr);
}

int string_to_array_int32_2(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimarray_int32_2VTable != NULL) {
        nRet = string_to_VTable(str, pSimarray_int32_2VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_kcg_int32_Utils, 2, sizeof(kcg_int32), endptr);
    }
    return nRet;
}

int is_array_int32_2_double_conversion_allowed()
{
    if (pSimarray_int32_2VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimarray_int32_2VTable);
    }
    return 0;
}

int array_int32_2_to_double(const void *pValue, double *nValue)
{
    if (pSimarray_int32_2VTable != NULL) {
        return VTable_to_double(pValue, pSimarray_int32_2VTable, nValue);
    }
    return 0;
}

int is_array_int32_2_long_conversion_allowed()
{
    if (pSimarray_int32_2VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimarray_int32_2VTable);
    }
    return 0;
}

int array_int32_2_to_long(const void *pValue, long *nValue)
{
    if (pSimarray_int32_2VTable != NULL) {
        return VTable_to_long(pValue, pSimarray_int32_2VTable, nValue);
    }
    return 0;
}

void compare_array_int32_2(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimarray_int32_2VTable != NULL
        && pSimarray_int32_2VTable->m_version >= Scv612
        && pSimarray_int32_2VTable->m_pfnCompare != NULL) {
        if (pSimarray_int32_2VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimarray_int32_2VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimarray_int32_2VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_kcg_int32, 2, sizeof(kcg_int32), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_array_int32_2_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_kcg_int32_signature, 2, pfnStrAppend, pStrObj); 
}

int set_array_int32_2_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 2; i++)
        set_kcg_int32_default_value(&((kcg_int32*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_array_int32_2_Utils = {
    array_int32_2_to_string,
    check_array_int32_2_string,
    string_to_array_int32_2,
    is_array_int32_2_double_conversion_allowed,
    array_int32_2_to_double,
    is_array_int32_2_long_conversion_allowed,
    array_int32_2_to_long,
    compare_array_int32_2,
    get_array_int32_2_signature,
    set_array_int32_2_default_value,
    sizeof(array_int32_2)
};

/****************************************************************
 ** colorTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimcolorTyVTable_defined
    extern struct SimTypeVTable *pSimcolorTyVTable;
  #else 
    struct SimTypeVTable *pSimcolorTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimcolorTyVTable;
#endif

static SimFieldUtils colorTy_fields[] = {
    {"red", offsetof(colorTy,red), &_Type_kcg_uint8_Utils},
    {"green", offsetof(colorTy,green), &_Type_kcg_uint8_Utils},
    {"blue", offsetof(colorTy,blue), &_Type_kcg_uint8_Utils},
};

int colorTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimcolorTyVTable != NULL
        && pSimcolorTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcolorTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, colorTy_fields, 3, pfnStrAppend, pStrObj);
}

int check_colorTy_string(const char *str, char **endptr)
{
    static colorTy rTemp;
    return string_to_colorTy(str, &rTemp, endptr);
}

int string_to_colorTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimcolorTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimcolorTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, colorTy_fields, 3, endptr);
    }
    return nRet;
}

int is_colorTy_double_conversion_allowed()
{
    if (pSimcolorTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimcolorTyVTable);
    }
    return 0;
}

int colorTy_to_double(const void *pValue, double *nValue)
{
    if (pSimcolorTyVTable != NULL) {
        return VTable_to_double(pValue, pSimcolorTyVTable, nValue);
    }
    return 0;
}

int is_colorTy_long_conversion_allowed()
{
    if (pSimcolorTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimcolorTyVTable);
    }
    return 0;
}

int colorTy_to_long(const void *pValue, long *nValue)
{
    if (pSimcolorTyVTable != NULL) {
        return VTable_to_long(pValue, pSimcolorTyVTable, nValue);
    }
    return 0;
}

void compare_colorTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimcolorTyVTable != NULL
        && pSimcolorTyVTable->m_version >= Scv612
        && pSimcolorTyVTable->m_pfnCompare != NULL) {
        if (pSimcolorTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimcolorTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimcolorTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, colorTy_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_colorTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(colorTy_fields, 3, pfnStrAppend, pStrObj);
}

int set_colorTy_default_value(void *pValue)
{
    set_kcg_uint8_default_value(&(((colorTy*)pValue)->red));
    set_kcg_uint8_default_value(&(((colorTy*)pValue)->green));
    set_kcg_uint8_default_value(&(((colorTy*)pValue)->blue));
    return 1;
}

SimTypeUtils _Type_colorTy_Utils = {
    colorTy_to_string,
    check_colorTy_string,
    string_to_colorTy,
    is_colorTy_double_conversion_allowed,
    colorTy_to_double,
    is_colorTy_long_conversion_allowed,
    colorTy_to_long,
    compare_colorTy,
    get_colorTy_signature,
    set_colorTy_default_value,
    sizeof(colorTy)
};

/****************************************************************
 ** colorTyQ 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimcolorTyQVTable_defined
    extern struct SimTypeVTable *pSimcolorTyQVTable;
  #else 
    struct SimTypeVTable *pSimcolorTyQVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimcolorTyQVTable;
#endif

static SimEnumValUtils colorTyQ_values[] = {
    { "redQ", redQ},
    { "redQ", redQ},
    { "greenQ", greenQ},
    { "greenQ", greenQ},
    { "amberQ", amberQ},
    { "amberQ", amberQ},
    { "otherQ", otherQ},
    { "otherQ", otherQ},
};
const int colorTyQ_nb_values = 8;

int colorTyQ_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimcolorTyQVTable != NULL
        && pSimcolorTyQVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimcolorTyQVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(colorTyQ*)pValue, colorTyQ_values, colorTyQ_nb_values, pfnStrAppend, pStrObj); 
}

int check_colorTyQ_string(const char *str, char **endptr)
{
    static colorTyQ rTemp;
    return string_to_colorTyQ(str, &rTemp, endptr);
}

int string_to_colorTyQ(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimcolorTyQVTable != NULL) {
        nRet = string_to_VTable(str, pSimcolorTyQVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, colorTyQ_values, colorTyQ_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(colorTyQ*)pValue = (colorTyQ)nTemp;
    }
    return nRet;
}

int is_colorTyQ_double_conversion_allowed()
{
    if (pSimcolorTyQVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimcolorTyQVTable);
    }
    return 1;
}

int colorTyQ_to_double(const void *pValue, double *nValue)
{
    if (pSimcolorTyQVTable != NULL) {
        return VTable_to_double(pValue, pSimcolorTyQVTable, nValue);
    }
    *nValue = (double)*((colorTyQ*)pValue);
    return 1;
}

int is_colorTyQ_long_conversion_allowed()
{
    if (pSimcolorTyQVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimcolorTyQVTable);
    }
    return 1;
}

int colorTyQ_to_long(const void *pValue, long *nValue)
{
    if (pSimcolorTyQVTable != NULL) {
        return VTable_to_long(pValue, pSimcolorTyQVTable, nValue);
    }
    *nValue = (long)*((colorTyQ*)pValue);
    return 1;
}

void compare_colorTyQ(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimcolorTyQVTable != NULL
        && pSimcolorTyQVTable->m_version >= Scv612
        && pSimcolorTyQVTable->m_pfnCompare != NULL) {
        if (pSimcolorTyQVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimcolorTyQVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimcolorTyQVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(colorTyQ*)pValue1), (int)(*(colorTyQ*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_colorTyQ_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(colorTyQ_values, colorTyQ_nb_values, pfnStrAppend, pStrObj);
}

int set_colorTyQ_default_value(void *pValue)
{
    *(colorTyQ*)pValue = redQ;
    return 1;
}

SimTypeUtils _Type_colorTyQ_Utils = {
    colorTyQ_to_string,
    check_colorTyQ_string,
    string_to_colorTyQ,
    is_colorTyQ_double_conversion_allowed,
    colorTyQ_to_double,
    is_colorTyQ_long_conversion_allowed,
    colorTyQ_to_long,
    compare_colorTyQ,
    get_colorTyQ_signature,
    set_colorTyQ_default_value,
    sizeof(colorTyQ)
};

/****************************************************************
 ** eventTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimeventTyVTable_defined
    extern struct SimTypeVTable *pSimeventTyVTable;
  #else 
    struct SimTypeVTable *pSimeventTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimeventTyVTable;
#endif

static SimFieldUtils eventTy_fields[] = {
    {"lightRun", offsetof(eventTy,lightRun), &_Type_kcg_bool_Utils},
    {"speedExcess", offsetof(eventTy,speedExcess), &_Type_kcg_bool_Utils},
    {"exitRoad", offsetof(eventTy,exitRoad), &_Type_kcg_bool_Utils},
    {"collisionEvent", offsetof(eventTy,collisionEvent), &_Type_kcg_bool_Utils},
    {"dirEvent", offsetof(eventTy,dirEvent), &_Type_kcg_bool_Utils},
};

int eventTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimeventTyVTable != NULL
        && pSimeventTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimeventTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, eventTy_fields, 5, pfnStrAppend, pStrObj);
}

int check_eventTy_string(const char *str, char **endptr)
{
    static eventTy rTemp;
    return string_to_eventTy(str, &rTemp, endptr);
}

int string_to_eventTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimeventTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimeventTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, eventTy_fields, 5, endptr);
    }
    return nRet;
}

int is_eventTy_double_conversion_allowed()
{
    if (pSimeventTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimeventTyVTable);
    }
    return 0;
}

int eventTy_to_double(const void *pValue, double *nValue)
{
    if (pSimeventTyVTable != NULL) {
        return VTable_to_double(pValue, pSimeventTyVTable, nValue);
    }
    return 0;
}

int is_eventTy_long_conversion_allowed()
{
    if (pSimeventTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimeventTyVTable);
    }
    return 0;
}

int eventTy_to_long(const void *pValue, long *nValue)
{
    if (pSimeventTyVTable != NULL) {
        return VTable_to_long(pValue, pSimeventTyVTable, nValue);
    }
    return 0;
}

void compare_eventTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimeventTyVTable != NULL
        && pSimeventTyVTable->m_version >= Scv612
        && pSimeventTyVTable->m_pfnCompare != NULL) {
        if (pSimeventTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimeventTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimeventTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, eventTy_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_eventTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(eventTy_fields, 5, pfnStrAppend, pStrObj);
}

int set_eventTy_default_value(void *pValue)
{
    set_kcg_bool_default_value(&(((eventTy*)pValue)->lightRun));
    set_kcg_bool_default_value(&(((eventTy*)pValue)->speedExcess));
    set_kcg_bool_default_value(&(((eventTy*)pValue)->exitRoad));
    set_kcg_bool_default_value(&(((eventTy*)pValue)->collisionEvent));
    set_kcg_bool_default_value(&(((eventTy*)pValue)->dirEvent));
    return 1;
}

SimTypeUtils _Type_eventTy_Utils = {
    eventTy_to_string,
    check_eventTy_string,
    string_to_eventTy,
    is_eventTy_double_conversion_allowed,
    eventTy_to_double,
    is_eventTy_long_conversion_allowed,
    eventTy_to_long,
    compare_eventTy,
    get_eventTy_signature,
    set_eventTy_default_value,
    sizeof(eventTy)
};

/****************************************************************
 ** interTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSiminterTyVTable_defined
    extern struct SimTypeVTable *pSiminterTyVTable;
  #else 
    struct SimTypeVTable *pSiminterTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSiminterTyVTable;
#endif

static SimEnumValUtils interTy_values[] = {
    { "waitVal", waitVal},
    { "waitVal", waitVal},
    { "haltVal", haltVal},
    { "haltVal", haltVal},
    { "okVal", okVal},
    { "okVal", okVal},
};
const int interTy_nb_values = 6;

int interTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSiminterTyVTable != NULL
        && pSiminterTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSiminterTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(interTy*)pValue, interTy_values, interTy_nb_values, pfnStrAppend, pStrObj); 
}

int check_interTy_string(const char *str, char **endptr)
{
    static interTy rTemp;
    return string_to_interTy(str, &rTemp, endptr);
}

int string_to_interTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSiminterTyVTable != NULL) {
        nRet = string_to_VTable(str, pSiminterTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, interTy_values, interTy_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(interTy*)pValue = (interTy)nTemp;
    }
    return nRet;
}

int is_interTy_double_conversion_allowed()
{
    if (pSiminterTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSiminterTyVTable);
    }
    return 1;
}

int interTy_to_double(const void *pValue, double *nValue)
{
    if (pSiminterTyVTable != NULL) {
        return VTable_to_double(pValue, pSiminterTyVTable, nValue);
    }
    *nValue = (double)*((interTy*)pValue);
    return 1;
}

int is_interTy_long_conversion_allowed()
{
    if (pSiminterTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSiminterTyVTable);
    }
    return 1;
}

int interTy_to_long(const void *pValue, long *nValue)
{
    if (pSiminterTyVTable != NULL) {
        return VTable_to_long(pValue, pSiminterTyVTable, nValue);
    }
    *nValue = (long)*((interTy*)pValue);
    return 1;
}

void compare_interTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSiminterTyVTable != NULL
        && pSiminterTyVTable->m_version >= Scv612
        && pSiminterTyVTable->m_pfnCompare != NULL) {
        if (pSiminterTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSiminterTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSiminterTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(interTy*)pValue1), (int)(*(interTy*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_interTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(interTy_values, interTy_nb_values, pfnStrAppend, pStrObj);
}

int set_interTy_default_value(void *pValue)
{
    *(interTy*)pValue = waitVal;
    return 1;
}

SimTypeUtils _Type_interTy_Utils = {
    interTy_to_string,
    check_interTy_string,
    string_to_interTy,
    is_interTy_double_conversion_allowed,
    interTy_to_double,
    is_interTy_long_conversion_allowed,
    interTy_to_long,
    compare_interTy,
    get_interTy_signature,
    set_interTy_default_value,
    sizeof(interTy)
};

/****************************************************************
 ** itiElemArr_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimitiElemArr_RobotVTable_defined
    extern struct SimTypeVTable *pSimitiElemArr_RobotVTable;
  #else 
    struct SimTypeVTable *pSimitiElemArr_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimitiElemArr_RobotVTable;
#endif

int itiElemArr_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimitiElemArr_RobotVTable != NULL
        && pSimitiElemArr_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimitiElemArr_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, itiElement_Robot_to_string, 50, sizeof(itiElement_Robot), pfnStrAppend, pStrObj);
}

int check_itiElemArr_Robot_string(const char *str, char **endptr)
{
    static itiElemArr_Robot rTemp;
    return string_to_itiElemArr_Robot(str, &rTemp, endptr);
}

int string_to_itiElemArr_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimitiElemArr_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimitiElemArr_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_itiElement_Robot_Utils, 50, sizeof(itiElement_Robot), endptr);
    }
    return nRet;
}

int is_itiElemArr_Robot_double_conversion_allowed()
{
    if (pSimitiElemArr_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimitiElemArr_RobotVTable);
    }
    return 0;
}

int itiElemArr_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimitiElemArr_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimitiElemArr_RobotVTable, nValue);
    }
    return 0;
}

int is_itiElemArr_Robot_long_conversion_allowed()
{
    if (pSimitiElemArr_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimitiElemArr_RobotVTable);
    }
    return 0;
}

int itiElemArr_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimitiElemArr_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimitiElemArr_RobotVTable, nValue);
    }
    return 0;
}

void compare_itiElemArr_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimitiElemArr_RobotVTable != NULL
        && pSimitiElemArr_RobotVTable->m_version >= Scv612
        && pSimitiElemArr_RobotVTable->m_pfnCompare != NULL) {
        if (pSimitiElemArr_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimitiElemArr_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimitiElemArr_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_itiElement_Robot, 50, sizeof(itiElement_Robot), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_itiElemArr_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_itiElement_Robot_signature, 50, pfnStrAppend, pStrObj); 
}

int set_itiElemArr_Robot_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 50; i++)
        set_itiElement_Robot_default_value(&((itiElement_Robot*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_itiElemArr_Robot_Utils = {
    itiElemArr_Robot_to_string,
    check_itiElemArr_Robot_string,
    string_to_itiElemArr_Robot,
    is_itiElemArr_Robot_double_conversion_allowed,
    itiElemArr_Robot_to_double,
    is_itiElemArr_Robot_long_conversion_allowed,
    itiElemArr_Robot_to_long,
    compare_itiElemArr_Robot,
    get_itiElemArr_Robot_signature,
    set_itiElemArr_Robot_default_value,
    sizeof(itiElemArr_Robot)
};

/****************************************************************
 ** itiElement_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimitiElement_RobotVTable_defined
    extern struct SimTypeVTable *pSimitiElement_RobotVTable;
  #else 
    struct SimTypeVTable *pSimitiElement_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimitiElement_RobotVTable;
#endif

static SimFieldUtils itiElement_Robot_fields[] = {
    {"action", offsetof(itiElement_Robot,action), &_Type_actionTy_Robot_Utils},
    {"param", offsetof(itiElement_Robot,param), &_Type_kcg_float64_Utils},
};

int itiElement_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimitiElement_RobotVTable != NULL
        && pSimitiElement_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimitiElement_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, itiElement_Robot_fields, 2, pfnStrAppend, pStrObj);
}

int check_itiElement_Robot_string(const char *str, char **endptr)
{
    static itiElement_Robot rTemp;
    return string_to_itiElement_Robot(str, &rTemp, endptr);
}

int string_to_itiElement_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimitiElement_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimitiElement_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, itiElement_Robot_fields, 2, endptr);
    }
    return nRet;
}

int is_itiElement_Robot_double_conversion_allowed()
{
    if (pSimitiElement_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimitiElement_RobotVTable);
    }
    return 0;
}

int itiElement_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimitiElement_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimitiElement_RobotVTable, nValue);
    }
    return 0;
}

int is_itiElement_Robot_long_conversion_allowed()
{
    if (pSimitiElement_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimitiElement_RobotVTable);
    }
    return 0;
}

int itiElement_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimitiElement_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimitiElement_RobotVTable, nValue);
    }
    return 0;
}

void compare_itiElement_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimitiElement_RobotVTable != NULL
        && pSimitiElement_RobotVTable->m_version >= Scv612
        && pSimitiElement_RobotVTable->m_pfnCompare != NULL) {
        if (pSimitiElement_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimitiElement_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimitiElement_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, itiElement_Robot_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_itiElement_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(itiElement_Robot_fields, 2, pfnStrAppend, pStrObj);
}

int set_itiElement_Robot_default_value(void *pValue)
{
    set_actionTy_Robot_default_value(&(((itiElement_Robot*)pValue)->action));
    set_kcg_float64_default_value(&(((itiElement_Robot*)pValue)->param));
    return 1;
}

SimTypeUtils _Type_itiElement_Robot_Utils = {
    itiElement_Robot_to_string,
    check_itiElement_Robot_string,
    string_to_itiElement_Robot,
    is_itiElement_Robot_double_conversion_allowed,
    itiElement_Robot_to_double,
    is_itiElement_Robot_long_conversion_allowed,
    itiElement_Robot_to_long,
    compare_itiElement_Robot,
    get_itiElement_Robot_signature,
    set_itiElement_Robot_default_value,
    sizeof(itiElement_Robot)
};

/****************************************************************
 ** kcg_bool 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimBoolVTable_defined
    extern struct SimTypeVTable *pSimBoolVTable;
  #else 
    struct SimTypeVTable *pSimBoolVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimBoolVTable;
#endif

int kcg_bool_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return pfnStrAppend(*(char**)pSimBoolVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_bool_to_string(*((kcg_bool*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_bool_string(const char *str, char **endptr)
{
    static kcg_bool rTemp;
    return string_to_kcg_bool(str, &rTemp, endptr);
}

int string_to_kcg_bool(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static SimBool rTemp;
    skip_whitespace(str);
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimBoolVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimBoolVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_bool*)pValue = (rTemp == SbTrue)? kcg_true : kcg_false;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_bool(str, (kcg_bool*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_bool_double_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_double(const void *pValue, double *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_double(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1.0 : 0.0;
    return 1;
}

int is_kcg_bool_long_conversion_allowed()
{
    if (pSimBoolVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimBoolVTable);
    }
    return 1;
}

int kcg_bool_to_long(const void *pValue, long *nValue)
{
    if (pSimBoolVTable != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimBoolVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value = (*((const kcg_bool*)pValue) == kcg_true)? SbTrue : SbFalse;
            return VTable_to_long(&value, pSimBoolVTable, nValue);
        }
    }
    *nValue = *((kcg_bool*)pValue) == kcg_true ? 1 : 0;
    return 1;
}

void compare_kcg_bool(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimBoolVTable != NULL
        && pSimBoolVTable->m_version >= Scv612
        && pSimBoolVTable->m_pfnCompare != NULL) {
        if (pSimBoolVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimBoolVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            SimBool value1 = (*((const kcg_bool*)pValue1) == kcg_true)? SbTrue : SbFalse;
            SimBool value2 = (*((const kcg_bool*)pValue2) == kcg_true)? SbTrue : SbFalse;
            pSimBoolVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_bool(pResult, *((kcg_bool*)pValue1), *((kcg_bool*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_bool_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("B", pStrObj);
}

int set_kcg_bool_default_value(void *pValue)
{
    *(kcg_bool*)pValue = kcg_false;
    return 1;
}

SimTypeUtils _Type_kcg_bool_Utils = {
    kcg_bool_to_string,
    check_kcg_bool_string,
    string_to_kcg_bool,
    is_kcg_bool_double_conversion_allowed,
    kcg_bool_to_double,
    is_kcg_bool_long_conversion_allowed,
    kcg_bool_to_long,
    compare_kcg_bool,
    get_kcg_bool_signature,
    set_kcg_bool_default_value,
    sizeof(kcg_bool)
};

/****************************************************************
 ** kcg_char 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimCharVTable_defined
    extern struct SimTypeVTable *pSimCharVTable;
  #else 
    struct SimTypeVTable *pSimCharVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimCharVTable;
#endif

int kcg_char_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return pfnStrAppend(*(char**)pSimCharVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_char_to_string(*((kcg_char*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_char_string(const char *str, char **endptr)
{
    static kcg_char rTemp;
    return string_to_kcg_char(str, &rTemp, endptr);
}

int string_to_kcg_char(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static char rTemp;
    skip_whitespace(str);
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimCharVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimCharVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_char*)pValue = (kcg_char)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_char(str, (kcg_char*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_char_double_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_double(const void *pValue, double *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_double(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_char*)pValue);
    return 1;
}

int is_kcg_char_long_conversion_allowed()
{
    if (pSimCharVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimCharVTable);
    }
    return 1;
}

int kcg_char_to_long(const void *pValue, long *nValue)
{
    if (pSimCharVTable != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimCharVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value = (char)(*(const kcg_char*)pValue);
            return VTable_to_long(&value, pSimCharVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_char*)pValue);
    return 1;
}

void compare_kcg_char(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimCharVTable != NULL
        && pSimCharVTable->m_version >= Scv612
        && pSimCharVTable->m_pfnCompare != NULL) {
        if (pSimCharVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimCharVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            char value1 = (char)(*(const kcg_char*)pValue1);
            char value2 = (char)(*(const kcg_char*)pValue2);
            pSimCharVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_char(pResult, *((kcg_char*)pValue1), *((kcg_char*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_char_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("C", pStrObj);
}

int set_kcg_char_default_value(void *pValue)
{
    *(kcg_char*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_char_Utils = {
    kcg_char_to_string,
    check_kcg_char_string,
    string_to_kcg_char,
    is_kcg_char_double_conversion_allowed,
    kcg_char_to_double,
    is_kcg_char_long_conversion_allowed,
    kcg_char_to_long,
    compare_kcg_char,
    get_kcg_char_signature,
    set_kcg_char_default_value,
    sizeof(kcg_char)
};

/****************************************************************
 ** kcg_float32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat32VTable_defined
    extern struct SimTypeVTable *pSimFloat32VTable;
  #else 
    struct SimTypeVTable *pSimFloat32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat32VTable;
#endif

int kcg_float32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float32_to_string(*((kcg_float32*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float32_string(const char *str, char **endptr)
{
    static kcg_float32 rTemp;
    return string_to_kcg_float32(str, &rTemp, endptr);
}

int string_to_kcg_float32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat32VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float32(str, (kcg_float32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float32_double_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (double)*((kcg_float32*)pValue);
    return 1;
}

int is_kcg_float32_long_conversion_allowed()
{
    if (pSimFloat32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat32VTable);
    }
    return 1;
}

int kcg_float32_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat32VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat32VTable, nValue);
    }
    *nValue = (long)*((kcg_float32*)pValue);
    return 1;
}

void compare_kcg_float32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    SimTolerance defaultTol = {FLT_MIN, 0};
    if (!pTol)
        pTol = &defaultTol;
    if (pSimFloat32VTable != NULL
        && pSimFloat32VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat32VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat32VTable != NULL && pTol == &defaultTol
               && pSimFloat32VTable->m_version >= Scv612
               && pSimFloat32VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float32(pResult, *((kcg_float32*)pValue1), *((kcg_float32*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F32", pStrObj);
}

int set_kcg_float32_default_value(void *pValue)
{
    *(kcg_float32*)pValue = 0.0;
    return 1;
}

SimTypeUtils _Type_kcg_float32_Utils = {
    kcg_float32_to_string,
    check_kcg_float32_string,
    string_to_kcg_float32,
    is_kcg_float32_double_conversion_allowed,
    kcg_float32_to_double,
    is_kcg_float32_long_conversion_allowed,
    kcg_float32_to_long,
    compare_kcg_float32,
    get_kcg_float32_signature,
    set_kcg_float32_default_value,
    sizeof(kcg_float32)
};

/****************************************************************
 ** kcg_float64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimFloat64VTable_defined
    extern struct SimTypeVTable *pSimFloat64VTable;
  #else 
    struct SimTypeVTable *pSimFloat64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimFloat64VTable;
#endif

int kcg_float64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimFloat64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_float64_to_string(*((kcg_float64*)pValue), pConverter->m_RealFormat, pfnStrAppend, pStrObj);
}

int check_kcg_float64_string(const char *str, char **endptr)
{
    static kcg_float64 rTemp;
    return string_to_kcg_float64(str, &rTemp, endptr);
}

int string_to_kcg_float64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimFloat64VTable != NULL) {
        nRet = string_to_VTable(str, pSimFloat64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_float64(str, (kcg_float64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_float64_double_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_double(const void *pValue, double *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_double(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (double)*((kcg_float64*)pValue);
    return 1;
}

int is_kcg_float64_long_conversion_allowed()
{
    if (pSimFloat64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimFloat64VTable);
    }
    return 1;
}

int kcg_float64_to_long(const void *pValue, long *nValue)
{
    if (pSimFloat64VTable != NULL) {
        return VTable_to_long(pValue, pSimFloat64VTable, nValue);
    }
    *nValue = (long)*((kcg_float64*)pValue);
    return 1;
}

void compare_kcg_float64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    SimTolerance defaultTol = {DBL_MIN, 0};
    if (!pTol)
        pTol = &defaultTol;
    if (pSimFloat64VTable != NULL
        && pSimFloat64VTable->m_pfnCompareWithTol != NULL ) {
        /* Customized comparison with tolerance (R15 and higher): */
        unitResult = pSimFloat64VTable->m_pfnCompareWithTol(pResult, pValue1, pValue2, pTol);
    } else if (pSimFloat64VTable != NULL && pTol == &defaultTol
               && pSimFloat64VTable->m_version >= Scv612
               && pSimFloat64VTable->m_pfnCompare != NULL) {
        /* Customized comparison without tolerance: */
        unitResult = pSimFloat64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison (with/without tolerance): */
        unitResult = predef_compare_kcg_float64(pResult, *((kcg_float64*)pValue1), *((kcg_float64*)pValue2), pTol);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_float64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("F64", pStrObj);
}

int set_kcg_float64_default_value(void *pValue)
{
    *(kcg_float64*)pValue = 0.0;
    return 1;
}

SimTypeUtils _Type_kcg_float64_Utils = {
    kcg_float64_to_string,
    check_kcg_float64_string,
    string_to_kcg_float64,
    is_kcg_float64_double_conversion_allowed,
    kcg_float64_to_double,
    is_kcg_float64_long_conversion_allowed,
    kcg_float64_to_long,
    compare_kcg_float64,
    get_kcg_float64_signature,
    set_kcg_float64_default_value,
    sizeof(kcg_float64)
};

/****************************************************************
 ** kcg_int16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt16VTable_defined
    extern struct SimTypeVTable *pSimInt16VTable;
  #else 
    struct SimTypeVTable *pSimInt16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt16VTable;
#endif

int kcg_int16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int16_to_string(*((kcg_int16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int16_string(const char *str, char **endptr)
{
    static kcg_int16 rTemp;
    return string_to_kcg_int16(str, &rTemp, endptr);
}

int string_to_kcg_int16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt16VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int16(str, (kcg_int16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int16_double_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_double(const void *pValue, double *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_double(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (double)*((kcg_int16*)pValue);
    return 1;
}

int is_kcg_int16_long_conversion_allowed()
{
    if (pSimInt16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt16VTable);
    }
    return 1;
}

int kcg_int16_to_long(const void *pValue, long *nValue)
{
    if (pSimInt16VTable != NULL) {
        return VTable_to_long(pValue, pSimInt16VTable, nValue);
    }
    *nValue = (long)*((kcg_int16*)pValue);
    return 1;
}

void compare_kcg_int16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt16VTable != NULL
        && pSimInt16VTable->m_version >= Scv612
        && pSimInt16VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int16(pResult, *((kcg_int16*)pValue1), *((kcg_int16*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I16", pStrObj);
}

int set_kcg_int16_default_value(void *pValue)
{
    *(kcg_int16*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int16_Utils = {
    kcg_int16_to_string,
    check_kcg_int16_string,
    string_to_kcg_int16,
    is_kcg_int16_double_conversion_allowed,
    kcg_int16_to_double,
    is_kcg_int16_long_conversion_allowed,
    kcg_int16_to_long,
    compare_kcg_int16,
    get_kcg_int16_signature,
    set_kcg_int16_default_value,
    sizeof(kcg_int16)
};

/****************************************************************
 ** kcg_int32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt32VTable_defined
    extern struct SimTypeVTable *pSimInt32VTable;
  #else 
    struct SimTypeVTable *pSimInt32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt32VTable;
#endif

int kcg_int32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int32_to_string(*((kcg_int32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int32_string(const char *str, char **endptr)
{
    static kcg_int32 rTemp;
    return string_to_kcg_int32(str, &rTemp, endptr);
}

int string_to_kcg_int32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt32VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int32(str, (kcg_int32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int32_double_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_double(const void *pValue, double *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_double(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (double)*((kcg_int32*)pValue);
    return 1;
}

int is_kcg_int32_long_conversion_allowed()
{
    if (pSimInt32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt32VTable);
    }
    return 1;
}

int kcg_int32_to_long(const void *pValue, long *nValue)
{
    if (pSimInt32VTable != NULL) {
        return VTable_to_long(pValue, pSimInt32VTable, nValue);
    }
    *nValue = (long)*((kcg_int32*)pValue);
    return 1;
}

void compare_kcg_int32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt32VTable != NULL
        && pSimInt32VTable->m_version >= Scv612
        && pSimInt32VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int32(pResult, *((kcg_int32*)pValue1), *((kcg_int32*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I32", pStrObj);
}

int set_kcg_int32_default_value(void *pValue)
{
    *(kcg_int32*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int32_Utils = {
    kcg_int32_to_string,
    check_kcg_int32_string,
    string_to_kcg_int32,
    is_kcg_int32_double_conversion_allowed,
    kcg_int32_to_double,
    is_kcg_int32_long_conversion_allowed,
    kcg_int32_to_long,
    compare_kcg_int32,
    get_kcg_int32_signature,
    set_kcg_int32_default_value,
    sizeof(kcg_int32)
};

/****************************************************************
 ** kcg_int64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt64VTable_defined
    extern struct SimTypeVTable *pSimInt64VTable;
  #else 
    struct SimTypeVTable *pSimInt64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt64VTable;
#endif

int kcg_int64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int64_to_string(*((kcg_int64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int64_string(const char *str, char **endptr)
{
    static kcg_int64 rTemp;
    return string_to_kcg_int64(str, &rTemp, endptr);
}

int string_to_kcg_int64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt64VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int64(str, (kcg_int64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int64_double_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_double(const void *pValue, double *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_double(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (double)*((kcg_int64*)pValue);
    return 1;
}

int is_kcg_int64_long_conversion_allowed()
{
    if (pSimInt64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt64VTable);
    }
    return 1;
}

int kcg_int64_to_long(const void *pValue, long *nValue)
{
    if (pSimInt64VTable != NULL) {
        return VTable_to_long(pValue, pSimInt64VTable, nValue);
    }
    *nValue = (long)*((kcg_int64*)pValue);
    return 1;
}

void compare_kcg_int64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt64VTable != NULL
        && pSimInt64VTable->m_version >= Scv612
        && pSimInt64VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int64(pResult, *((kcg_int64*)pValue1), *((kcg_int64*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I64", pStrObj);
}

int set_kcg_int64_default_value(void *pValue)
{
    *(kcg_int64*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int64_Utils = {
    kcg_int64_to_string,
    check_kcg_int64_string,
    string_to_kcg_int64,
    is_kcg_int64_double_conversion_allowed,
    kcg_int64_to_double,
    is_kcg_int64_long_conversion_allowed,
    kcg_int64_to_long,
    compare_kcg_int64,
    get_kcg_int64_signature,
    set_kcg_int64_default_value,
    sizeof(kcg_int64)
};

/****************************************************************
 ** kcg_int8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimInt8VTable_defined
    extern struct SimTypeVTable *pSimInt8VTable;
  #else 
    struct SimTypeVTable *pSimInt8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimInt8VTable;
#endif

int kcg_int8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimInt8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_int8_to_string(*((kcg_int8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_int8_string(const char *str, char **endptr)
{
    static kcg_int8 rTemp;
    return string_to_kcg_int8(str, &rTemp, endptr);
}

int string_to_kcg_int8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimInt8VTable != NULL) {
        nRet = string_to_VTable(str, pSimInt8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_int8(str, (kcg_int8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_int8_double_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_double(const void *pValue, double *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_double(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (double)*((kcg_int8*)pValue);
    return 1;
}

int is_kcg_int8_long_conversion_allowed()
{
    if (pSimInt8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimInt8VTable);
    }
    return 1;
}

int kcg_int8_to_long(const void *pValue, long *nValue)
{
    if (pSimInt8VTable != NULL) {
        return VTable_to_long(pValue, pSimInt8VTable, nValue);
    }
    *nValue = (long)*((kcg_int8*)pValue);
    return 1;
}

void compare_kcg_int8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimInt8VTable != NULL
        && pSimInt8VTable->m_version >= Scv612
        && pSimInt8VTable->m_pfnCompare != NULL) {
        unitResult = pSimInt8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_int8(pResult, *((kcg_int8*)pValue1), *((kcg_int8*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_int8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("I8", pStrObj);
}

int set_kcg_int8_default_value(void *pValue)
{
    *(kcg_int8*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_int8_Utils = {
    kcg_int8_to_string,
    check_kcg_int8_string,
    string_to_kcg_int8,
    is_kcg_int8_double_conversion_allowed,
    kcg_int8_to_double,
    is_kcg_int8_long_conversion_allowed,
    kcg_int8_to_long,
    compare_kcg_int8,
    get_kcg_int8_signature,
    set_kcg_int8_default_value,
    sizeof(kcg_int8)
};

/****************************************************************
 ** kcg_size 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSizeVTable_defined
    extern struct SimTypeVTable *pSimSizeVTable;
  #else 
    struct SimTypeVTable *pSimSizeVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSizeVTable;
#endif

int kcg_size_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> variable to VTable function: */
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, pValue), pStrObj);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return pfnStrAppend(*(char**)pSimSizeVTable->m_pfnToType(SptString, &value), pStrObj);
        }
    }
    return predef_kcg_size_to_string(*((kcg_size*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_size_string(const char *str, char **endptr)
{
    static kcg_size rTemp;
    return string_to_kcg_size(str, &rTemp, endptr);
}

int string_to_kcg_size(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    static size_t rTemp;
    skip_whitespace(str);
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: VTable function must return a kcg_<type> *variable: */
            nRet = string_to_VTable(str, pSimSizeVTable, pValue, endptr);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            nRet = string_to_VTable(str, pSimSizeVTable, &rTemp, endptr);
            if (nRet != 0) {
                *(kcg_size*)pValue = (kcg_size)rTemp;
            }
        }
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_size(str, (kcg_size*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_size_double_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_double(const void *pValue, double *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_double(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_double(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (double)*((kcg_size*)pValue);
    return 1;
}

int is_kcg_size_long_conversion_allowed()
{
    if (pSimSizeVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSizeVTable);
    }
    return 1;
}

int kcg_size_to_long(const void *pValue, long *nValue)
{
    if (pSimSizeVTable != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            return VTable_to_long(pValue, pSimSizeVTable, nValue);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value = (size_t)(*(const kcg_size*)pValue);
            return VTable_to_long(&value, pSimSizeVTable, nValue);
        }
    }
    *nValue = (long)*((kcg_size*)pValue);
    return 1;
}

void compare_kcg_size(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSizeVTable != NULL
        && pSimSizeVTable->m_version >= Scv612
        && pSimSizeVTable->m_pfnCompare != NULL) {
        if (pSimSizeVTable->m_version >= Scv65) {
            /* R15 and higher: pass kcg_<type> * to VTable function: */
            unitResult = pSimSizeVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: pass a standard C typed variable to VTable function: */
            size_t value1 = (size_t)(*(const kcg_size*)pValue1);
            size_t value2 = (size_t)(*(const kcg_size*)pValue2);
            pSimSizeVTable->m_pfnCompare(&unitResult, &value1, &value2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_size(pResult, *((kcg_size*)pValue1), *((kcg_size*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_size_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("S", pStrObj);
}

int set_kcg_size_default_value(void *pValue)
{
    *(kcg_size*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_size_Utils = {
    kcg_size_to_string,
    check_kcg_size_string,
    string_to_kcg_size,
    is_kcg_size_double_conversion_allowed,
    kcg_size_to_double,
    is_kcg_size_long_conversion_allowed,
    kcg_size_to_long,
    compare_kcg_size,
    get_kcg_size_signature,
    set_kcg_size_default_value,
    sizeof(kcg_size)
};

/****************************************************************
 ** kcg_uint16 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint16VTable_defined
    extern struct SimTypeVTable *pSimUint16VTable;
  #else 
    struct SimTypeVTable *pSimUint16VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint16VTable;
#endif

int kcg_uint16_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint16VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint16_to_string(*((kcg_uint16*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint16_string(const char *str, char **endptr)
{
    static kcg_uint16 rTemp;
    return string_to_kcg_uint16(str, &rTemp, endptr);
}

int string_to_kcg_uint16(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint16VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint16VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint16(str, (kcg_uint16*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint16_double_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_double(const void *pValue, double *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_double(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (double)*((kcg_uint16*)pValue);
    return 1;
}

int is_kcg_uint16_long_conversion_allowed()
{
    if (pSimUint16VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint16VTable);
    }
    return 1;
}

int kcg_uint16_to_long(const void *pValue, long *nValue)
{
    if (pSimUint16VTable != NULL) {
        return VTable_to_long(pValue, pSimUint16VTable, nValue);
    }
    *nValue = (long)*((kcg_uint16*)pValue);
    return 1;
}

void compare_kcg_uint16(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint16VTable != NULL
        && pSimUint16VTable->m_version >= Scv612
        && pSimUint16VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint16VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint16(pResult, *((kcg_uint16*)pValue1), *((kcg_uint16*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint16_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI16", pStrObj);
}

int set_kcg_uint16_default_value(void *pValue)
{
    *(kcg_uint16*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint16_Utils = {
    kcg_uint16_to_string,
    check_kcg_uint16_string,
    string_to_kcg_uint16,
    is_kcg_uint16_double_conversion_allowed,
    kcg_uint16_to_double,
    is_kcg_uint16_long_conversion_allowed,
    kcg_uint16_to_long,
    compare_kcg_uint16,
    get_kcg_uint16_signature,
    set_kcg_uint16_default_value,
    sizeof(kcg_uint16)
};

/****************************************************************
 ** kcg_uint32 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint32VTable_defined
    extern struct SimTypeVTable *pSimUint32VTable;
  #else 
    struct SimTypeVTable *pSimUint32VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint32VTable;
#endif

int kcg_uint32_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint32VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint32_to_string(*((kcg_uint32*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint32_string(const char *str, char **endptr)
{
    static kcg_uint32 rTemp;
    return string_to_kcg_uint32(str, &rTemp, endptr);
}

int string_to_kcg_uint32(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint32VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint32VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint32(str, (kcg_uint32*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint32_double_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_double(const void *pValue, double *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_double(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (double)*((kcg_uint32*)pValue);
    return 1;
}

int is_kcg_uint32_long_conversion_allowed()
{
    if (pSimUint32VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint32VTable);
    }
    return 1;
}

int kcg_uint32_to_long(const void *pValue, long *nValue)
{
    if (pSimUint32VTable != NULL) {
        return VTable_to_long(pValue, pSimUint32VTable, nValue);
    }
    *nValue = (long)*((kcg_uint32*)pValue);
    return 1;
}

void compare_kcg_uint32(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint32VTable != NULL
        && pSimUint32VTable->m_version >= Scv612
        && pSimUint32VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint32VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint32(pResult, *((kcg_uint32*)pValue1), *((kcg_uint32*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint32_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI32", pStrObj);
}

int set_kcg_uint32_default_value(void *pValue)
{
    *(kcg_uint32*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint32_Utils = {
    kcg_uint32_to_string,
    check_kcg_uint32_string,
    string_to_kcg_uint32,
    is_kcg_uint32_double_conversion_allowed,
    kcg_uint32_to_double,
    is_kcg_uint32_long_conversion_allowed,
    kcg_uint32_to_long,
    compare_kcg_uint32,
    get_kcg_uint32_signature,
    set_kcg_uint32_default_value,
    sizeof(kcg_uint32)
};

/****************************************************************
 ** kcg_uint64 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint64VTable_defined
    extern struct SimTypeVTable *pSimUint64VTable;
  #else 
    struct SimTypeVTable *pSimUint64VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint64VTable;
#endif

int kcg_uint64_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint64VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint64_to_string(*((kcg_uint64*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint64_string(const char *str, char **endptr)
{
    static kcg_uint64 rTemp;
    return string_to_kcg_uint64(str, &rTemp, endptr);
}

int string_to_kcg_uint64(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint64VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint64VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint64(str, (kcg_uint64*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint64_double_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_double(const void *pValue, double *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_double(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (double)*((kcg_uint64*)pValue);
    return 1;
}

int is_kcg_uint64_long_conversion_allowed()
{
    if (pSimUint64VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint64VTable);
    }
    return 1;
}

int kcg_uint64_to_long(const void *pValue, long *nValue)
{
    if (pSimUint64VTable != NULL) {
        return VTable_to_long(pValue, pSimUint64VTable, nValue);
    }
    *nValue = (long)*((kcg_uint64*)pValue);
    return 1;
}

void compare_kcg_uint64(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint64VTable != NULL
        && pSimUint64VTable->m_version >= Scv612
        && pSimUint64VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint64VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint64(pResult, *((kcg_uint64*)pValue1), *((kcg_uint64*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint64_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI64", pStrObj);
}

int set_kcg_uint64_default_value(void *pValue)
{
    *(kcg_uint64*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint64_Utils = {
    kcg_uint64_to_string,
    check_kcg_uint64_string,
    string_to_kcg_uint64,
    is_kcg_uint64_double_conversion_allowed,
    kcg_uint64_to_double,
    is_kcg_uint64_long_conversion_allowed,
    kcg_uint64_to_long,
    compare_kcg_uint64,
    get_kcg_uint64_signature,
    set_kcg_uint64_default_value,
    sizeof(kcg_uint64)
};

/****************************************************************
 ** kcg_uint8 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimUint8VTable_defined
    extern struct SimTypeVTable *pSimUint8VTable;
  #else 
    struct SimTypeVTable *pSimUint8VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimUint8VTable;
#endif

int kcg_uint8_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimUint8VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return predef_kcg_uint8_to_string(*((kcg_uint8*)pValue), pfnStrAppend, pStrObj);
}

int check_kcg_uint8_string(const char *str, char **endptr)
{
    static kcg_uint8 rTemp;
    return string_to_kcg_uint8(str, &rTemp, endptr);
}

int string_to_kcg_uint8(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimUint8VTable != NULL) {
        nRet = string_to_VTable(str, pSimUint8VTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = predef_string_to_kcg_uint8(str, (kcg_uint8*)pValue, endptr);
    }
    return nRet;
}

int is_kcg_uint8_double_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_double(const void *pValue, double *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_double(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (double)*((kcg_uint8*)pValue);
    return 1;
}

int is_kcg_uint8_long_conversion_allowed()
{
    if (pSimUint8VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimUint8VTable);
    }
    return 1;
}

int kcg_uint8_to_long(const void *pValue, long *nValue)
{
    if (pSimUint8VTable != NULL) {
        return VTable_to_long(pValue, pSimUint8VTable, nValue);
    }
    *nValue = (long)*((kcg_uint8*)pValue);
    return 1;
}

void compare_kcg_uint8(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimUint8VTable != NULL
        && pSimUint8VTable->m_version >= Scv612
        && pSimUint8VTable->m_pfnCompare != NULL) {
        unitResult = pSimUint8VTable->m_pfnCompare(pResult, pValue1, pValue2);
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_kcg_uint8(pResult, *((kcg_uint8*)pValue1), *((kcg_uint8*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_kcg_uint8_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pfnStrAppend("UI8", pStrObj);
}

int set_kcg_uint8_default_value(void *pValue)
{
    *(kcg_uint8*)pValue = 0;
    return 1;
}

SimTypeUtils _Type_kcg_uint8_Utils = {
    kcg_uint8_to_string,
    check_kcg_uint8_string,
    string_to_kcg_uint8,
    is_kcg_uint8_double_conversion_allowed,
    kcg_uint8_to_double,
    is_kcg_uint8_long_conversion_allowed,
    kcg_uint8_to_long,
    compare_kcg_uint8,
    get_kcg_uint8_signature,
    set_kcg_uint8_default_value,
    sizeof(kcg_uint8)
};

/****************************************************************
 ** mapDataTy_City 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimmapDataTy_CityVTable_defined
    extern struct SimTypeVTable *pSimmapDataTy_CityVTable;
  #else 
    struct SimTypeVTable *pSimmapDataTy_CityVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimmapDataTy_CityVTable;
#endif

static SimFieldUtils mapDataTy_City_fields[] = {
    {"color", offsetof(mapDataTy_City,color), &_Type_colorTy_Utils},
    {"onRoad", offsetof(mapDataTy_City,onRoad), &_Type_kcg_bool_Utils},
    {"maxSpeed", offsetof(mapDataTy_City,maxSpeed), &_Type_kcg_int32_Utils},
    {"TLnumber", offsetof(mapDataTy_City,TLnumber), &_Type_kcg_int32_Utils},
    {"TLrequired", offsetof(mapDataTy_City,TLrequired), &_Type_kcg_bool_Utils},
    {"dirx", offsetof(mapDataTy_City,dirx), &_Type_kcg_float64_Utils},
    {"diry", offsetof(mapDataTy_City,diry), &_Type_kcg_float64_Utils},
};

int mapDataTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimmapDataTy_CityVTable != NULL
        && pSimmapDataTy_CityVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimmapDataTy_CityVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, mapDataTy_City_fields, 7, pfnStrAppend, pStrObj);
}

int check_mapDataTy_City_string(const char *str, char **endptr)
{
    static mapDataTy_City rTemp;
    return string_to_mapDataTy_City(str, &rTemp, endptr);
}

int string_to_mapDataTy_City(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimmapDataTy_CityVTable != NULL) {
        nRet = string_to_VTable(str, pSimmapDataTy_CityVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, mapDataTy_City_fields, 7, endptr);
    }
    return nRet;
}

int is_mapDataTy_City_double_conversion_allowed()
{
    if (pSimmapDataTy_CityVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimmapDataTy_CityVTable);
    }
    return 0;
}

int mapDataTy_City_to_double(const void *pValue, double *nValue)
{
    if (pSimmapDataTy_CityVTable != NULL) {
        return VTable_to_double(pValue, pSimmapDataTy_CityVTable, nValue);
    }
    return 0;
}

int is_mapDataTy_City_long_conversion_allowed()
{
    if (pSimmapDataTy_CityVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimmapDataTy_CityVTable);
    }
    return 0;
}

int mapDataTy_City_to_long(const void *pValue, long *nValue)
{
    if (pSimmapDataTy_CityVTable != NULL) {
        return VTable_to_long(pValue, pSimmapDataTy_CityVTable, nValue);
    }
    return 0;
}

void compare_mapDataTy_City(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimmapDataTy_CityVTable != NULL
        && pSimmapDataTy_CityVTable->m_version >= Scv612
        && pSimmapDataTy_CityVTable->m_pfnCompare != NULL) {
        if (pSimmapDataTy_CityVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimmapDataTy_CityVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimmapDataTy_CityVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, mapDataTy_City_fields, 7, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_mapDataTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(mapDataTy_City_fields, 7, pfnStrAppend, pStrObj);
}

int set_mapDataTy_City_default_value(void *pValue)
{
    set_colorTy_default_value(&(((mapDataTy_City*)pValue)->color));
    set_kcg_bool_default_value(&(((mapDataTy_City*)pValue)->onRoad));
    set_kcg_int32_default_value(&(((mapDataTy_City*)pValue)->maxSpeed));
    set_kcg_int32_default_value(&(((mapDataTy_City*)pValue)->TLnumber));
    set_kcg_bool_default_value(&(((mapDataTy_City*)pValue)->TLrequired));
    set_kcg_float64_default_value(&(((mapDataTy_City*)pValue)->dirx));
    set_kcg_float64_default_value(&(((mapDataTy_City*)pValue)->diry));
    return 1;
}

SimTypeUtils _Type_mapDataTy_City_Utils = {
    mapDataTy_City_to_string,
    check_mapDataTy_City_string,
    string_to_mapDataTy_City,
    is_mapDataTy_City_double_conversion_allowed,
    mapDataTy_City_to_double,
    is_mapDataTy_City_long_conversion_allowed,
    mapDataTy_City_to_long,
    compare_mapDataTy_City,
    get_mapDataTy_City_signature,
    set_mapDataTy_City_default_value,
    sizeof(mapDataTy_City)
};

/****************************************************************
 ** obstArr 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimobstArrVTable_defined
    extern struct SimTypeVTable *pSimobstArrVTable;
  #else 
    struct SimTypeVTable *pSimobstArrVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimobstArrVTable;
#endif

int obstArr_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimobstArrVTable != NULL
        && pSimobstArrVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimobstArrVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, obstTy_to_string, 10, sizeof(obstTy), pfnStrAppend, pStrObj);
}

int check_obstArr_string(const char *str, char **endptr)
{
    static obstArr rTemp;
    return string_to_obstArr(str, &rTemp, endptr);
}

int string_to_obstArr(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimobstArrVTable != NULL) {
        nRet = string_to_VTable(str, pSimobstArrVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_obstTy_Utils, 10, sizeof(obstTy), endptr);
    }
    return nRet;
}

int is_obstArr_double_conversion_allowed()
{
    if (pSimobstArrVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimobstArrVTable);
    }
    return 0;
}

int obstArr_to_double(const void *pValue, double *nValue)
{
    if (pSimobstArrVTable != NULL) {
        return VTable_to_double(pValue, pSimobstArrVTable, nValue);
    }
    return 0;
}

int is_obstArr_long_conversion_allowed()
{
    if (pSimobstArrVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimobstArrVTable);
    }
    return 0;
}

int obstArr_to_long(const void *pValue, long *nValue)
{
    if (pSimobstArrVTable != NULL) {
        return VTable_to_long(pValue, pSimobstArrVTable, nValue);
    }
    return 0;
}

void compare_obstArr(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimobstArrVTable != NULL
        && pSimobstArrVTable->m_version >= Scv612
        && pSimobstArrVTable->m_pfnCompare != NULL) {
        if (pSimobstArrVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimobstArrVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimobstArrVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_obstTy, 10, sizeof(obstTy), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_obstArr_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_obstTy_signature, 10, pfnStrAppend, pStrObj); 
}

int set_obstArr_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_obstTy_default_value(&((obstTy*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_obstArr_Utils = {
    obstArr_to_string,
    check_obstArr_string,
    string_to_obstArr,
    is_obstArr_double_conversion_allowed,
    obstArr_to_double,
    is_obstArr_long_conversion_allowed,
    obstArr_to_long,
    compare_obstArr,
    get_obstArr_signature,
    set_obstArr_default_value,
    sizeof(obstArr)
};

/****************************************************************
 ** obstTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimobstTyVTable_defined
    extern struct SimTypeVTable *pSimobstTyVTable;
  #else 
    struct SimTypeVTable *pSimobstTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimobstTyVTable;
#endif

static SimFieldUtils obstTy_fields[] = {
    {"position", offsetof(obstTy,position), &_Type_positionTy_Utils},
    {"present", offsetof(obstTy,present), &_Type_kcg_bool_Utils},
};

int obstTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimobstTyVTable != NULL
        && pSimobstTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimobstTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, obstTy_fields, 2, pfnStrAppend, pStrObj);
}

int check_obstTy_string(const char *str, char **endptr)
{
    static obstTy rTemp;
    return string_to_obstTy(str, &rTemp, endptr);
}

int string_to_obstTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimobstTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimobstTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, obstTy_fields, 2, endptr);
    }
    return nRet;
}

int is_obstTy_double_conversion_allowed()
{
    if (pSimobstTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimobstTyVTable);
    }
    return 0;
}

int obstTy_to_double(const void *pValue, double *nValue)
{
    if (pSimobstTyVTable != NULL) {
        return VTable_to_double(pValue, pSimobstTyVTable, nValue);
    }
    return 0;
}

int is_obstTy_long_conversion_allowed()
{
    if (pSimobstTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimobstTyVTable);
    }
    return 0;
}

int obstTy_to_long(const void *pValue, long *nValue)
{
    if (pSimobstTyVTable != NULL) {
        return VTable_to_long(pValue, pSimobstTyVTable, nValue);
    }
    return 0;
}

void compare_obstTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimobstTyVTable != NULL
        && pSimobstTyVTable->m_version >= Scv612
        && pSimobstTyVTable->m_pfnCompare != NULL) {
        if (pSimobstTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimobstTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimobstTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, obstTy_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_obstTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(obstTy_fields, 2, pfnStrAppend, pStrObj);
}

int set_obstTy_default_value(void *pValue)
{
    set_positionTy_default_value(&(((obstTy*)pValue)->position));
    set_kcg_bool_default_value(&(((obstTy*)pValue)->present));
    return 1;
}

SimTypeUtils _Type_obstTy_Utils = {
    obstTy_to_string,
    check_obstTy_string,
    string_to_obstTy,
    is_obstTy_double_conversion_allowed,
    obstTy_to_double,
    is_obstTy_long_conversion_allowed,
    obstTy_to_long,
    compare_obstTy,
    get_obstTy_signature,
    set_obstTy_default_value,
    sizeof(obstTy)
};

/****************************************************************
 ** paramObstArr_City 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimparamObstArr_CityVTable_defined
    extern struct SimTypeVTable *pSimparamObstArr_CityVTable;
  #else 
    struct SimTypeVTable *pSimparamObstArr_CityVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimparamObstArr_CityVTable;
#endif

int paramObstArr_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimparamObstArr_CityVTable != NULL
        && pSimparamObstArr_CityVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimparamObstArr_CityVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, paramObstTy_City_to_string, 10, sizeof(paramObstTy_City), pfnStrAppend, pStrObj);
}

int check_paramObstArr_City_string(const char *str, char **endptr)
{
    static paramObstArr_City rTemp;
    return string_to_paramObstArr_City(str, &rTemp, endptr);
}

int string_to_paramObstArr_City(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimparamObstArr_CityVTable != NULL) {
        nRet = string_to_VTable(str, pSimparamObstArr_CityVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_paramObstTy_City_Utils, 10, sizeof(paramObstTy_City), endptr);
    }
    return nRet;
}

int is_paramObstArr_City_double_conversion_allowed()
{
    if (pSimparamObstArr_CityVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimparamObstArr_CityVTable);
    }
    return 0;
}

int paramObstArr_City_to_double(const void *pValue, double *nValue)
{
    if (pSimparamObstArr_CityVTable != NULL) {
        return VTable_to_double(pValue, pSimparamObstArr_CityVTable, nValue);
    }
    return 0;
}

int is_paramObstArr_City_long_conversion_allowed()
{
    if (pSimparamObstArr_CityVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimparamObstArr_CityVTable);
    }
    return 0;
}

int paramObstArr_City_to_long(const void *pValue, long *nValue)
{
    if (pSimparamObstArr_CityVTable != NULL) {
        return VTable_to_long(pValue, pSimparamObstArr_CityVTable, nValue);
    }
    return 0;
}

void compare_paramObstArr_City(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimparamObstArr_CityVTable != NULL
        && pSimparamObstArr_CityVTable->m_version >= Scv612
        && pSimparamObstArr_CityVTable->m_pfnCompare != NULL) {
        if (pSimparamObstArr_CityVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimparamObstArr_CityVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimparamObstArr_CityVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_paramObstTy_City, 10, sizeof(paramObstTy_City), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_paramObstArr_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_paramObstTy_City_signature, 10, pfnStrAppend, pStrObj); 
}

int set_paramObstArr_City_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 10; i++)
        set_paramObstTy_City_default_value(&((paramObstTy_City*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_paramObstArr_City_Utils = {
    paramObstArr_City_to_string,
    check_paramObstArr_City_string,
    string_to_paramObstArr_City,
    is_paramObstArr_City_double_conversion_allowed,
    paramObstArr_City_to_double,
    is_paramObstArr_City_long_conversion_allowed,
    paramObstArr_City_to_long,
    compare_paramObstArr_City,
    get_paramObstArr_City_signature,
    set_paramObstArr_City_default_value,
    sizeof(paramObstArr_City)
};

/****************************************************************
 ** paramObstTy_City 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimparamObstTy_CityVTable_defined
    extern struct SimTypeVTable *pSimparamObstTy_CityVTable;
  #else 
    struct SimTypeVTable *pSimparamObstTy_CityVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimparamObstTy_CityVTable;
#endif

static SimFieldUtils paramObstTy_City_fields[] = {
    {"pos", offsetof(paramObstTy_City,pos), &_Type_positionTy_Utils},
    {"since", offsetof(paramObstTy_City,since), &_Type_kcg_float64_Utils},
    {"till", offsetof(paramObstTy_City,till), &_Type_kcg_float64_Utils},
};

int paramObstTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimparamObstTy_CityVTable != NULL
        && pSimparamObstTy_CityVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimparamObstTy_CityVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, paramObstTy_City_fields, 3, pfnStrAppend, pStrObj);
}

int check_paramObstTy_City_string(const char *str, char **endptr)
{
    static paramObstTy_City rTemp;
    return string_to_paramObstTy_City(str, &rTemp, endptr);
}

int string_to_paramObstTy_City(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimparamObstTy_CityVTable != NULL) {
        nRet = string_to_VTable(str, pSimparamObstTy_CityVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, paramObstTy_City_fields, 3, endptr);
    }
    return nRet;
}

int is_paramObstTy_City_double_conversion_allowed()
{
    if (pSimparamObstTy_CityVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimparamObstTy_CityVTable);
    }
    return 0;
}

int paramObstTy_City_to_double(const void *pValue, double *nValue)
{
    if (pSimparamObstTy_CityVTable != NULL) {
        return VTable_to_double(pValue, pSimparamObstTy_CityVTable, nValue);
    }
    return 0;
}

int is_paramObstTy_City_long_conversion_allowed()
{
    if (pSimparamObstTy_CityVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimparamObstTy_CityVTable);
    }
    return 0;
}

int paramObstTy_City_to_long(const void *pValue, long *nValue)
{
    if (pSimparamObstTy_CityVTable != NULL) {
        return VTable_to_long(pValue, pSimparamObstTy_CityVTable, nValue);
    }
    return 0;
}

void compare_paramObstTy_City(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimparamObstTy_CityVTable != NULL
        && pSimparamObstTy_CityVTable->m_version >= Scv612
        && pSimparamObstTy_CityVTable->m_pfnCompare != NULL) {
        if (pSimparamObstTy_CityVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimparamObstTy_CityVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimparamObstTy_CityVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, paramObstTy_City_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_paramObstTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(paramObstTy_City_fields, 3, pfnStrAppend, pStrObj);
}

int set_paramObstTy_City_default_value(void *pValue)
{
    set_positionTy_default_value(&(((paramObstTy_City*)pValue)->pos));
    set_kcg_float64_default_value(&(((paramObstTy_City*)pValue)->since));
    set_kcg_float64_default_value(&(((paramObstTy_City*)pValue)->till));
    return 1;
}

SimTypeUtils _Type_paramObstTy_City_Utils = {
    paramObstTy_City_to_string,
    check_paramObstTy_City_string,
    string_to_paramObstTy_City,
    is_paramObstTy_City_double_conversion_allowed,
    paramObstTy_City_to_double,
    is_paramObstTy_City_long_conversion_allowed,
    paramObstTy_City_to_long,
    compare_paramObstTy_City,
    get_paramObstTy_City_signature,
    set_paramObstTy_City_default_value,
    sizeof(paramObstTy_City)
};

/****************************************************************
 ** paramTLArr_City 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimparamTLArr_CityVTable_defined
    extern struct SimTypeVTable *pSimparamTLArr_CityVTable;
  #else 
    struct SimTypeVTable *pSimparamTLArr_CityVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimparamTLArr_CityVTable;
#endif

int paramTLArr_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimparamTLArr_CityVTable != NULL
        && pSimparamTLArr_CityVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimparamTLArr_CityVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, paramTLTy_City_to_string, 5, sizeof(paramTLTy_City), pfnStrAppend, pStrObj);
}

int check_paramTLArr_City_string(const char *str, char **endptr)
{
    static paramTLArr_City rTemp;
    return string_to_paramTLArr_City(str, &rTemp, endptr);
}

int string_to_paramTLArr_City(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimparamTLArr_CityVTable != NULL) {
        nRet = string_to_VTable(str, pSimparamTLArr_CityVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_paramTLTy_City_Utils, 5, sizeof(paramTLTy_City), endptr);
    }
    return nRet;
}

int is_paramTLArr_City_double_conversion_allowed()
{
    if (pSimparamTLArr_CityVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimparamTLArr_CityVTable);
    }
    return 0;
}

int paramTLArr_City_to_double(const void *pValue, double *nValue)
{
    if (pSimparamTLArr_CityVTable != NULL) {
        return VTable_to_double(pValue, pSimparamTLArr_CityVTable, nValue);
    }
    return 0;
}

int is_paramTLArr_City_long_conversion_allowed()
{
    if (pSimparamTLArr_CityVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimparamTLArr_CityVTable);
    }
    return 0;
}

int paramTLArr_City_to_long(const void *pValue, long *nValue)
{
    if (pSimparamTLArr_CityVTable != NULL) {
        return VTable_to_long(pValue, pSimparamTLArr_CityVTable, nValue);
    }
    return 0;
}

void compare_paramTLArr_City(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimparamTLArr_CityVTable != NULL
        && pSimparamTLArr_CityVTable->m_version >= Scv612
        && pSimparamTLArr_CityVTable->m_pfnCompare != NULL) {
        if (pSimparamTLArr_CityVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimparamTLArr_CityVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimparamTLArr_CityVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_paramTLTy_City, 5, sizeof(paramTLTy_City), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_paramTLArr_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_paramTLTy_City_signature, 5, pfnStrAppend, pStrObj); 
}

int set_paramTLArr_City_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_paramTLTy_City_default_value(&((paramTLTy_City*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_paramTLArr_City_Utils = {
    paramTLArr_City_to_string,
    check_paramTLArr_City_string,
    string_to_paramTLArr_City,
    is_paramTLArr_City_double_conversion_allowed,
    paramTLArr_City_to_double,
    is_paramTLArr_City_long_conversion_allowed,
    paramTLArr_City_to_long,
    compare_paramTLArr_City,
    get_paramTLArr_City_signature,
    set_paramTLArr_City_default_value,
    sizeof(paramTLArr_City)
};

/****************************************************************
 ** paramTLTy_City 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimparamTLTy_CityVTable_defined
    extern struct SimTypeVTable *pSimparamTLTy_CityVTable;
  #else 
    struct SimTypeVTable *pSimparamTLTy_CityVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimparamTLTy_CityVTable;
#endif

static SimFieldUtils paramTLTy_City_fields[] = {
    {"pos", offsetof(paramTLTy_City,pos), &_Type_positionTy_Utils},
    {"tGreen", offsetof(paramTLTy_City,tGreen), &_Type_kcg_int32_Utils},
    {"tAmber", offsetof(paramTLTy_City,tAmber), &_Type_kcg_int32_Utils},
    {"tRed", offsetof(paramTLTy_City,tRed), &_Type_kcg_int32_Utils},
    {"tPhase", offsetof(paramTLTy_City,tPhase), &_Type_kcg_int32_Utils},
};

int paramTLTy_City_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimparamTLTy_CityVTable != NULL
        && pSimparamTLTy_CityVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimparamTLTy_CityVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, paramTLTy_City_fields, 5, pfnStrAppend, pStrObj);
}

int check_paramTLTy_City_string(const char *str, char **endptr)
{
    static paramTLTy_City rTemp;
    return string_to_paramTLTy_City(str, &rTemp, endptr);
}

int string_to_paramTLTy_City(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimparamTLTy_CityVTable != NULL) {
        nRet = string_to_VTable(str, pSimparamTLTy_CityVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, paramTLTy_City_fields, 5, endptr);
    }
    return nRet;
}

int is_paramTLTy_City_double_conversion_allowed()
{
    if (pSimparamTLTy_CityVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimparamTLTy_CityVTable);
    }
    return 0;
}

int paramTLTy_City_to_double(const void *pValue, double *nValue)
{
    if (pSimparamTLTy_CityVTable != NULL) {
        return VTable_to_double(pValue, pSimparamTLTy_CityVTable, nValue);
    }
    return 0;
}

int is_paramTLTy_City_long_conversion_allowed()
{
    if (pSimparamTLTy_CityVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimparamTLTy_CityVTable);
    }
    return 0;
}

int paramTLTy_City_to_long(const void *pValue, long *nValue)
{
    if (pSimparamTLTy_CityVTable != NULL) {
        return VTable_to_long(pValue, pSimparamTLTy_CityVTable, nValue);
    }
    return 0;
}

void compare_paramTLTy_City(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimparamTLTy_CityVTable != NULL
        && pSimparamTLTy_CityVTable->m_version >= Scv612
        && pSimparamTLTy_CityVTable->m_pfnCompare != NULL) {
        if (pSimparamTLTy_CityVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimparamTLTy_CityVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimparamTLTy_CityVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, paramTLTy_City_fields, 5, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_paramTLTy_City_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(paramTLTy_City_fields, 5, pfnStrAppend, pStrObj);
}

int set_paramTLTy_City_default_value(void *pValue)
{
    set_positionTy_default_value(&(((paramTLTy_City*)pValue)->pos));
    set_kcg_int32_default_value(&(((paramTLTy_City*)pValue)->tGreen));
    set_kcg_int32_default_value(&(((paramTLTy_City*)pValue)->tAmber));
    set_kcg_int32_default_value(&(((paramTLTy_City*)pValue)->tRed));
    set_kcg_int32_default_value(&(((paramTLTy_City*)pValue)->tPhase));
    return 1;
}

SimTypeUtils _Type_paramTLTy_City_Utils = {
    paramTLTy_City_to_string,
    check_paramTLTy_City_string,
    string_to_paramTLTy_City,
    is_paramTLTy_City_double_conversion_allowed,
    paramTLTy_City_to_double,
    is_paramTLTy_City_long_conversion_allowed,
    paramTLTy_City_to_long,
    compare_paramTLTy_City,
    get_paramTLTy_City_signature,
    set_paramTLTy_City_default_value,
    sizeof(paramTLTy_City)
};

/****************************************************************
 ** phaseTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimphaseTyVTable_defined
    extern struct SimTypeVTable *pSimphaseTyVTable;
  #else 
    struct SimTypeVTable *pSimphaseTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimphaseTyVTable;
#endif

static SimFieldUtils phaseTy_fields[] = {
    {"position", offsetof(phaseTy,position), &_Type_positionTy_Utils},
    {"velocity", offsetof(phaseTy,velocity), &_Type_kcg_float64_Utils},
    {"heading", offsetof(phaseTy,heading), &_Type_kcg_float64_Utils},
};

int phaseTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimphaseTyVTable != NULL
        && pSimphaseTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimphaseTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, phaseTy_fields, 3, pfnStrAppend, pStrObj);
}

int check_phaseTy_string(const char *str, char **endptr)
{
    static phaseTy rTemp;
    return string_to_phaseTy(str, &rTemp, endptr);
}

int string_to_phaseTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimphaseTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimphaseTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, phaseTy_fields, 3, endptr);
    }
    return nRet;
}

int is_phaseTy_double_conversion_allowed()
{
    if (pSimphaseTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimphaseTyVTable);
    }
    return 0;
}

int phaseTy_to_double(const void *pValue, double *nValue)
{
    if (pSimphaseTyVTable != NULL) {
        return VTable_to_double(pValue, pSimphaseTyVTable, nValue);
    }
    return 0;
}

int is_phaseTy_long_conversion_allowed()
{
    if (pSimphaseTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimphaseTyVTable);
    }
    return 0;
}

int phaseTy_to_long(const void *pValue, long *nValue)
{
    if (pSimphaseTyVTable != NULL) {
        return VTable_to_long(pValue, pSimphaseTyVTable, nValue);
    }
    return 0;
}

void compare_phaseTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimphaseTyVTable != NULL
        && pSimphaseTyVTable->m_version >= Scv612
        && pSimphaseTyVTable->m_pfnCompare != NULL) {
        if (pSimphaseTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimphaseTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimphaseTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, phaseTy_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_phaseTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(phaseTy_fields, 3, pfnStrAppend, pStrObj);
}

int set_phaseTy_default_value(void *pValue)
{
    set_positionTy_default_value(&(((phaseTy*)pValue)->position));
    set_kcg_float64_default_value(&(((phaseTy*)pValue)->velocity));
    set_kcg_float64_default_value(&(((phaseTy*)pValue)->heading));
    return 1;
}

SimTypeUtils _Type_phaseTy_Utils = {
    phaseTy_to_string,
    check_phaseTy_string,
    string_to_phaseTy,
    is_phaseTy_double_conversion_allowed,
    phaseTy_to_double,
    is_phaseTy_long_conversion_allowed,
    phaseTy_to_long,
    compare_phaseTy,
    get_phaseTy_signature,
    set_phaseTy_default_value,
    sizeof(phaseTy)
};

/****************************************************************
 ** positionTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimpositionTyVTable_defined
    extern struct SimTypeVTable *pSimpositionTyVTable;
  #else 
    struct SimTypeVTable *pSimpositionTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimpositionTyVTable;
#endif

static SimFieldUtils positionTy_fields[] = {
    {"x", offsetof(positionTy,x), &_Type_kcg_float64_Utils},
    {"y", offsetof(positionTy,y), &_Type_kcg_float64_Utils},
};

int positionTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimpositionTyVTable != NULL
        && pSimpositionTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimpositionTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, positionTy_fields, 2, pfnStrAppend, pStrObj);
}

int check_positionTy_string(const char *str, char **endptr)
{
    static positionTy rTemp;
    return string_to_positionTy(str, &rTemp, endptr);
}

int string_to_positionTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimpositionTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimpositionTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, positionTy_fields, 2, endptr);
    }
    return nRet;
}

int is_positionTy_double_conversion_allowed()
{
    if (pSimpositionTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimpositionTyVTable);
    }
    return 0;
}

int positionTy_to_double(const void *pValue, double *nValue)
{
    if (pSimpositionTyVTable != NULL) {
        return VTable_to_double(pValue, pSimpositionTyVTable, nValue);
    }
    return 0;
}

int is_positionTy_long_conversion_allowed()
{
    if (pSimpositionTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimpositionTyVTable);
    }
    return 0;
}

int positionTy_to_long(const void *pValue, long *nValue)
{
    if (pSimpositionTyVTable != NULL) {
        return VTable_to_long(pValue, pSimpositionTyVTable, nValue);
    }
    return 0;
}

void compare_positionTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimpositionTyVTable != NULL
        && pSimpositionTyVTable->m_version >= Scv612
        && pSimpositionTyVTable->m_pfnCompare != NULL) {
        if (pSimpositionTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimpositionTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimpositionTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, positionTy_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_positionTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(positionTy_fields, 2, pfnStrAppend, pStrObj);
}

int set_positionTy_default_value(void *pValue)
{
    set_kcg_float64_default_value(&(((positionTy*)pValue)->x));
    set_kcg_float64_default_value(&(((positionTy*)pValue)->y));
    return 1;
}

SimTypeUtils _Type_positionTy_Utils = {
    positionTy_to_string,
    check_positionTy_string,
    string_to_positionTy,
    is_positionTy_double_conversion_allowed,
    positionTy_to_double,
    is_positionTy_long_conversion_allowed,
    positionTy_to_long,
    compare_positionTy,
    get_positionTy_signature,
    set_positionTy_default_value,
    sizeof(positionTy)
};

/****************************************************************
 ** sensorsTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsensorsTyVTable_defined
    extern struct SimTypeVTable *pSimsensorsTyVTable;
  #else 
    struct SimTypeVTable *pSimsensorsTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsensorsTyVTable;
#endif

static SimFieldUtils sensorsTy_fields[] = {
    {"roadColor", offsetof(sensorsTy,roadColor), &_Type_colorTy_Utils},
    {"frontColor", offsetof(sensorsTy,frontColor), &_Type_colorTy_Utils},
    {"sonar", offsetof(sensorsTy,sonar), &_Type_kcg_int32_Utils},
};

int sensorsTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsensorsTyVTable != NULL
        && pSimsensorsTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsensorsTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sensorsTy_fields, 3, pfnStrAppend, pStrObj);
}

int check_sensorsTy_string(const char *str, char **endptr)
{
    static sensorsTy rTemp;
    return string_to_sensorsTy(str, &rTemp, endptr);
}

int string_to_sensorsTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsensorsTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimsensorsTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sensorsTy_fields, 3, endptr);
    }
    return nRet;
}

int is_sensorsTy_double_conversion_allowed()
{
    if (pSimsensorsTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsensorsTyVTable);
    }
    return 0;
}

int sensorsTy_to_double(const void *pValue, double *nValue)
{
    if (pSimsensorsTyVTable != NULL) {
        return VTable_to_double(pValue, pSimsensorsTyVTable, nValue);
    }
    return 0;
}

int is_sensorsTy_long_conversion_allowed()
{
    if (pSimsensorsTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsensorsTyVTable);
    }
    return 0;
}

int sensorsTy_to_long(const void *pValue, long *nValue)
{
    if (pSimsensorsTyVTable != NULL) {
        return VTable_to_long(pValue, pSimsensorsTyVTable, nValue);
    }
    return 0;
}

void compare_sensorsTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsensorsTyVTable != NULL
        && pSimsensorsTyVTable->m_version >= Scv612
        && pSimsensorsTyVTable->m_pfnCompare != NULL) {
        if (pSimsensorsTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsensorsTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsensorsTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sensorsTy_fields, 3, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sensorsTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sensorsTy_fields, 3, pfnStrAppend, pStrObj);
}

int set_sensorsTy_default_value(void *pValue)
{
    set_colorTy_default_value(&(((sensorsTy*)pValue)->roadColor));
    set_colorTy_default_value(&(((sensorsTy*)pValue)->frontColor));
    set_kcg_int32_default_value(&(((sensorsTy*)pValue)->sonar));
    return 1;
}

SimTypeUtils _Type_sensorsTy_Utils = {
    sensorsTy_to_string,
    check_sensorsTy_string,
    string_to_sensorsTy,
    is_sensorsTy_double_conversion_allowed,
    sensorsTy_to_double,
    is_sensorsTy_long_conversion_allowed,
    sensorsTy_to_long,
    compare_sensorsTy,
    get_sensorsTy_signature,
    set_sensorsTy_default_value,
    sizeof(sensorsTy)
};

/****************************************************************
 ** sigTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimsigTyVTable_defined
    extern struct SimTypeVTable *pSimsigTyVTable;
  #else 
    struct SimTypeVTable *pSimsigTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimsigTyVTable;
#endif

static SimFieldUtils sigTy_fields[] = {
    {"TLights", offsetof(sigTy,TLights), &_Type_trafLArr_Utils},
    {"obstacles", offsetof(sigTy,obstacles), &_Type_obstArr_Utils},
};

int sigTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimsigTyVTable != NULL
        && pSimsigTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimsigTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, sigTy_fields, 2, pfnStrAppend, pStrObj);
}

int check_sigTy_string(const char *str, char **endptr)
{
    static sigTy rTemp;
    return string_to_sigTy(str, &rTemp, endptr);
}

int string_to_sigTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimsigTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimsigTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, sigTy_fields, 2, endptr);
    }
    return nRet;
}

int is_sigTy_double_conversion_allowed()
{
    if (pSimsigTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimsigTyVTable);
    }
    return 0;
}

int sigTy_to_double(const void *pValue, double *nValue)
{
    if (pSimsigTyVTable != NULL) {
        return VTable_to_double(pValue, pSimsigTyVTable, nValue);
    }
    return 0;
}

int is_sigTy_long_conversion_allowed()
{
    if (pSimsigTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimsigTyVTable);
    }
    return 0;
}

int sigTy_to_long(const void *pValue, long *nValue)
{
    if (pSimsigTyVTable != NULL) {
        return VTable_to_long(pValue, pSimsigTyVTable, nValue);
    }
    return 0;
}

void compare_sigTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimsigTyVTable != NULL
        && pSimsigTyVTable->m_version >= Scv612
        && pSimsigTyVTable->m_pfnCompare != NULL) {
        if (pSimsigTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimsigTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimsigTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, sigTy_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_sigTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(sigTy_fields, 2, pfnStrAppend, pStrObj);
}

int set_sigTy_default_value(void *pValue)
{
    set_trafLArr_default_value(&(((sigTy*)pValue)->TLights));
    set_obstArr_default_value(&(((sigTy*)pValue)->obstacles));
    return 1;
}

SimTypeUtils _Type_sigTy_Utils = {
    sigTy_to_string,
    check_sigTy_string,
    string_to_sigTy,
    is_sigTy_double_conversion_allowed,
    sigTy_to_double,
    is_sigTy_long_conversion_allowed,
    sigTy_to_long,
    compare_sigTy,
    get_sigTy_signature,
    set_sigTy_default_value,
    sizeof(sigTy)
};

/****************************************************************
 ** SSM_ST_goPlus 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_goPlusVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_goPlusVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_goPlusVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_goPlusVTable;
#endif

static SimEnumValUtils SSM_ST_goPlus_values[] = {
    { "go", SSM_st_go_goPlus},
    { "go", SSM_st_go_goPlus},
    { "stopCat", SSM_st_stopCat_goPlus},
    { "stopCat", SSM_st_stopCat_goPlus},
    { "stopLight", SSM_st_stopLight_goPlus},
    { "stopLight", SSM_st_stopLight_goPlus},
};
const int SSM_ST_goPlus_nb_values = 6;

int SSM_ST_goPlus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_goPlusVTable != NULL
        && pSimSSM_ST_goPlusVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_goPlusVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_goPlus*)pValue, SSM_ST_goPlus_values, SSM_ST_goPlus_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_goPlus_string(const char *str, char **endptr)
{
    static SSM_ST_goPlus rTemp;
    return string_to_SSM_ST_goPlus(str, &rTemp, endptr);
}

int string_to_SSM_ST_goPlus(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_goPlusVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_goPlusVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_goPlus_values, SSM_ST_goPlus_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_goPlus*)pValue = (SSM_ST_goPlus)nTemp;
    }
    return nRet;
}

int is_SSM_ST_goPlus_double_conversion_allowed()
{
    if (pSimSSM_ST_goPlusVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_goPlusVTable);
    }
    return 1;
}

int SSM_ST_goPlus_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_goPlusVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_goPlusVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_goPlus*)pValue);
    return 1;
}

int is_SSM_ST_goPlus_long_conversion_allowed()
{
    if (pSimSSM_ST_goPlusVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_goPlusVTable);
    }
    return 1;
}

int SSM_ST_goPlus_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_goPlusVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_goPlusVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_goPlus*)pValue);
    return 1;
}

void compare_SSM_ST_goPlus(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_goPlusVTable != NULL
        && pSimSSM_ST_goPlusVTable->m_version >= Scv612
        && pSimSSM_ST_goPlusVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_goPlusVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_goPlusVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_goPlusVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_goPlus*)pValue1), (int)(*(SSM_ST_goPlus*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_goPlus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_goPlus_values, SSM_ST_goPlus_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_ST_goPlus_default_value(void *pValue)
{
    *(SSM_ST_goPlus*)pValue = SSM_st_go_goPlus;
    return 1;
}

SimTypeUtils _Type_SSM_ST_goPlus_Utils = {
    SSM_ST_goPlus_to_string,
    check_SSM_ST_goPlus_string,
    string_to_SSM_ST_goPlus,
    is_SSM_ST_goPlus_double_conversion_allowed,
    SSM_ST_goPlus_to_double,
    is_SSM_ST_goPlus_long_conversion_allowed,
    SSM_ST_goPlus_to_long,
    compare_SSM_ST_goPlus,
    get_SSM_ST_goPlus_signature,
    set_SSM_ST_goPlus_default_value,
    sizeof(SSM_ST_goPlus)
};

/****************************************************************
 ** SSM_ST_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_RobotVTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_RobotVTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_RobotVTable;
#endif

static SimEnumValUtils SSM_ST_Robot_values[] = {
    { "Preparing", SSM_st_Preparing_Robot},
    { "Preparing", SSM_st_Preparing_Robot},
    { "Running", SSM_st_Running_Robot},
    { "Running", SSM_st_Running_Robot},
    { "Arrived", SSM_st_Arrived_Robot},
    { "Arrived", SSM_st_Arrived_Robot},
    { "Stopped", SSM_st_Stopped_Robot},
    { "Stopped", SSM_st_Stopped_Robot},
};
const int SSM_ST_Robot_nb_values = 8;

int SSM_ST_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_RobotVTable != NULL
        && pSimSSM_ST_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_Robot*)pValue, SSM_ST_Robot_values, SSM_ST_Robot_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_Robot_string(const char *str, char **endptr)
{
    static SSM_ST_Robot rTemp;
    return string_to_SSM_ST_Robot(str, &rTemp, endptr);
}

int string_to_SSM_ST_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_Robot_values, SSM_ST_Robot_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_Robot*)pValue = (SSM_ST_Robot)nTemp;
    }
    return nRet;
}

int is_SSM_ST_Robot_double_conversion_allowed()
{
    if (pSimSSM_ST_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_RobotVTable);
    }
    return 1;
}

int SSM_ST_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_RobotVTable, nValue);
    }
    *nValue = (double)*((SSM_ST_Robot*)pValue);
    return 1;
}

int is_SSM_ST_Robot_long_conversion_allowed()
{
    if (pSimSSM_ST_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_RobotVTable);
    }
    return 1;
}

int SSM_ST_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_RobotVTable, nValue);
    }
    *nValue = (long)*((SSM_ST_Robot*)pValue);
    return 1;
}

void compare_SSM_ST_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_RobotVTable != NULL
        && pSimSSM_ST_RobotVTable->m_version >= Scv612
        && pSimSSM_ST_RobotVTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_Robot*)pValue1), (int)(*(SSM_ST_Robot*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_Robot_values, SSM_ST_Robot_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_ST_Robot_default_value(void *pValue)
{
    *(SSM_ST_Robot*)pValue = SSM_st_Preparing_Robot;
    return 1;
}

SimTypeUtils _Type_SSM_ST_Robot_Utils = {
    SSM_ST_Robot_to_string,
    check_SSM_ST_Robot_string,
    string_to_SSM_ST_Robot,
    is_SSM_ST_Robot_double_conversion_allowed,
    SSM_ST_Robot_to_double,
    is_SSM_ST_Robot_long_conversion_allowed,
    SSM_ST_Robot_to_long,
    compare_SSM_ST_Robot,
    get_SSM_ST_Robot_signature,
    set_SSM_ST_Robot_default_value,
    sizeof(SSM_ST_Robot)
};

/****************************************************************
 ** SSM_ST_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_ST_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_ST_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_ST_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_ST_SM1VTable;
#endif

static SimEnumValUtils SSM_ST_SM1_values[] = {
    { "positionning", SSM_st_positionning_SM1},
    { "positionning", SSM_st_positionning_SM1},
    { "on", SSM_st_on_SM1},
    { "on", SSM_st_on_SM1},
};
const int SSM_ST_SM1_nb_values = 4;

int SSM_ST_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_ST_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_ST_SM1*)pValue, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_ST_SM1_string(const char *str, char **endptr)
{
    static SSM_ST_SM1 rTemp;
    return string_to_SSM_ST_SM1(str, &rTemp, endptr);
}

int string_to_SSM_ST_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_ST_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_ST_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_ST_SM1_values, SSM_ST_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_ST_SM1*)pValue = (SSM_ST_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_ST_SM1_double_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_ST_SM1*)pValue);
    return 1;
}

int is_SSM_ST_SM1_long_conversion_allowed()
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_ST_SM1VTable);
    }
    return 1;
}

int SSM_ST_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_ST_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_ST_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_ST_SM1*)pValue);
    return 1;
}

void compare_SSM_ST_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_ST_SM1VTable != NULL
        && pSimSSM_ST_SM1VTable->m_version >= Scv612
        && pSimSSM_ST_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_ST_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_ST_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_ST_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_ST_SM1*)pValue1), (int)(*(SSM_ST_SM1*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_ST_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_ST_SM1_values, SSM_ST_SM1_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_ST_SM1_default_value(void *pValue)
{
    *(SSM_ST_SM1*)pValue = SSM_st_positionning_SM1;
    return 1;
}

SimTypeUtils _Type_SSM_ST_SM1_Utils = {
    SSM_ST_SM1_to_string,
    check_SSM_ST_SM1_string,
    string_to_SSM_ST_SM1,
    is_SSM_ST_SM1_double_conversion_allowed,
    SSM_ST_SM1_to_double,
    is_SSM_ST_SM1_long_conversion_allowed,
    SSM_ST_SM1_to_long,
    compare_SSM_ST_SM1,
    get_SSM_ST_SM1_signature,
    set_SSM_ST_SM1_default_value,
    sizeof(SSM_ST_SM1)
};

/****************************************************************
 ** SSM_TR_goPlus 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_goPlusVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_goPlusVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_goPlusVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_goPlusVTable;
#endif

static SimEnumValUtils SSM_TR_goPlus_values[] = {
    { "SSM_TR_no_trans_goPlus", SSM_TR_no_trans_goPlus},
    { "SSM_TR_no_trans_goPlus", SSM_TR_no_trans_goPlus},
    { "SSM_TR_go_stopCat_1_go_goPlus", SSM_TR_go_stopCat_1_go_goPlus},
    { "SSM_TR_go_stopCat_1_go_goPlus", SSM_TR_go_stopCat_1_go_goPlus},
    { "SSM_TR_go_stopLight_2_go_goPlus", SSM_TR_go_stopLight_2_go_goPlus},
    { "SSM_TR_go_stopLight_2_go_goPlus", SSM_TR_go_stopLight_2_go_goPlus},
    { "SSM_TR_stopCat_go_1_stopCat_goPlus", SSM_TR_stopCat_go_1_stopCat_goPlus},
    { "SSM_TR_stopCat_go_1_stopCat_goPlus", SSM_TR_stopCat_go_1_stopCat_goPlus},
    { "SSM_TR_stopLight_go_1_stopLight_goPlus", SSM_TR_stopLight_go_1_stopLight_goPlus},
    { "SSM_TR_stopLight_go_1_stopLight_goPlus", SSM_TR_stopLight_go_1_stopLight_goPlus},
};
const int SSM_TR_goPlus_nb_values = 10;

int SSM_TR_goPlus_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_goPlusVTable != NULL
        && pSimSSM_TR_goPlusVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_goPlusVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_goPlus*)pValue, SSM_TR_goPlus_values, SSM_TR_goPlus_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_goPlus_string(const char *str, char **endptr)
{
    static SSM_TR_goPlus rTemp;
    return string_to_SSM_TR_goPlus(str, &rTemp, endptr);
}

int string_to_SSM_TR_goPlus(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_goPlusVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_goPlusVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_goPlus_values, SSM_TR_goPlus_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_goPlus*)pValue = (SSM_TR_goPlus)nTemp;
    }
    return nRet;
}

int is_SSM_TR_goPlus_double_conversion_allowed()
{
    if (pSimSSM_TR_goPlusVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_goPlusVTable);
    }
    return 1;
}

int SSM_TR_goPlus_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_goPlusVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_goPlusVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_goPlus*)pValue);
    return 1;
}

int is_SSM_TR_goPlus_long_conversion_allowed()
{
    if (pSimSSM_TR_goPlusVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_goPlusVTable);
    }
    return 1;
}

int SSM_TR_goPlus_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_goPlusVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_goPlusVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_goPlus*)pValue);
    return 1;
}

void compare_SSM_TR_goPlus(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_goPlusVTable != NULL
        && pSimSSM_TR_goPlusVTable->m_version >= Scv612
        && pSimSSM_TR_goPlusVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_goPlusVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_goPlusVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_goPlusVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_goPlus*)pValue1), (int)(*(SSM_TR_goPlus*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_goPlus_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_goPlus_values, SSM_TR_goPlus_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_TR_goPlus_default_value(void *pValue)
{
    *(SSM_TR_goPlus*)pValue = SSM_TR_no_trans_goPlus;
    return 1;
}

SimTypeUtils _Type_SSM_TR_goPlus_Utils = {
    SSM_TR_goPlus_to_string,
    check_SSM_TR_goPlus_string,
    string_to_SSM_TR_goPlus,
    is_SSM_TR_goPlus_double_conversion_allowed,
    SSM_TR_goPlus_to_double,
    is_SSM_TR_goPlus_long_conversion_allowed,
    SSM_TR_goPlus_to_long,
    compare_SSM_TR_goPlus,
    get_SSM_TR_goPlus_signature,
    set_SSM_TR_goPlus_default_value,
    sizeof(SSM_TR_goPlus)
};

/****************************************************************
 ** SSM_TR_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_RobotVTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_RobotVTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_RobotVTable;
#endif

static SimEnumValUtils SSM_TR_Robot_values[] = {
    { "SSM_TR_no_trans_Robot", SSM_TR_no_trans_Robot},
    { "SSM_TR_no_trans_Robot", SSM_TR_no_trans_Robot},
    { "SSM_TR_Preparing_Running_1_Preparing_Robot", SSM_TR_Preparing_Running_1_Preparing_Robot},
    { "SSM_TR_Preparing_Running_1_Preparing_Robot", SSM_TR_Preparing_Running_1_Preparing_Robot},
    { "SSM_TR_Running_Stopped_1_Running_Robot", SSM_TR_Running_Stopped_1_Running_Robot},
    { "SSM_TR_Running_Stopped_1_Running_Robot", SSM_TR_Running_Stopped_1_Running_Robot},
    { "SSM_TR_Running_Arrived_2_Running_Robot", SSM_TR_Running_Arrived_2_Running_Robot},
    { "SSM_TR_Running_Arrived_2_Running_Robot", SSM_TR_Running_Arrived_2_Running_Robot},
};
const int SSM_TR_Robot_nb_values = 8;

int SSM_TR_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_RobotVTable != NULL
        && pSimSSM_TR_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_Robot*)pValue, SSM_TR_Robot_values, SSM_TR_Robot_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_Robot_string(const char *str, char **endptr)
{
    static SSM_TR_Robot rTemp;
    return string_to_SSM_TR_Robot(str, &rTemp, endptr);
}

int string_to_SSM_TR_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_Robot_values, SSM_TR_Robot_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_Robot*)pValue = (SSM_TR_Robot)nTemp;
    }
    return nRet;
}

int is_SSM_TR_Robot_double_conversion_allowed()
{
    if (pSimSSM_TR_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_RobotVTable);
    }
    return 1;
}

int SSM_TR_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_RobotVTable, nValue);
    }
    *nValue = (double)*((SSM_TR_Robot*)pValue);
    return 1;
}

int is_SSM_TR_Robot_long_conversion_allowed()
{
    if (pSimSSM_TR_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_RobotVTable);
    }
    return 1;
}

int SSM_TR_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_RobotVTable, nValue);
    }
    *nValue = (long)*((SSM_TR_Robot*)pValue);
    return 1;
}

void compare_SSM_TR_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_RobotVTable != NULL
        && pSimSSM_TR_RobotVTable->m_version >= Scv612
        && pSimSSM_TR_RobotVTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_Robot*)pValue1), (int)(*(SSM_TR_Robot*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_Robot_values, SSM_TR_Robot_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_TR_Robot_default_value(void *pValue)
{
    *(SSM_TR_Robot*)pValue = SSM_TR_no_trans_Robot;
    return 1;
}

SimTypeUtils _Type_SSM_TR_Robot_Utils = {
    SSM_TR_Robot_to_string,
    check_SSM_TR_Robot_string,
    string_to_SSM_TR_Robot,
    is_SSM_TR_Robot_double_conversion_allowed,
    SSM_TR_Robot_to_double,
    is_SSM_TR_Robot_long_conversion_allowed,
    SSM_TR_Robot_to_long,
    compare_SSM_TR_Robot,
    get_SSM_TR_Robot_signature,
    set_SSM_TR_Robot_default_value,
    sizeof(SSM_TR_Robot)
};

/****************************************************************
 ** SSM_TR_SM1 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimSSM_TR_SM1VTable_defined
    extern struct SimTypeVTable *pSimSSM_TR_SM1VTable;
  #else 
    struct SimTypeVTable *pSimSSM_TR_SM1VTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimSSM_TR_SM1VTable;
#endif

static SimEnumValUtils SSM_TR_SM1_values[] = {
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_no_trans_SM1", SSM_TR_no_trans_SM1},
    { "SSM_TR_positionning_on_1_positionning_SM1", SSM_TR_positionning_on_1_positionning_SM1},
    { "SSM_TR_positionning_on_1_positionning_SM1", SSM_TR_positionning_on_1_positionning_SM1},
};
const int SSM_TR_SM1_nb_values = 4;

int SSM_TR_SM1_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimSSM_TR_SM1VTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(SSM_TR_SM1*)pValue, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj); 
}

int check_SSM_TR_SM1_string(const char *str, char **endptr)
{
    static SSM_TR_SM1 rTemp;
    return string_to_SSM_TR_SM1(str, &rTemp, endptr);
}

int string_to_SSM_TR_SM1(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimSSM_TR_SM1VTable != NULL) {
        nRet = string_to_VTable(str, pSimSSM_TR_SM1VTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, SSM_TR_SM1_values, SSM_TR_SM1_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(SSM_TR_SM1*)pValue = (SSM_TR_SM1)nTemp;
    }
    return nRet;
}

int is_SSM_TR_SM1_double_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_double(const void *pValue, double *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_double(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (double)*((SSM_TR_SM1*)pValue);
    return 1;
}

int is_SSM_TR_SM1_long_conversion_allowed()
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimSSM_TR_SM1VTable);
    }
    return 1;
}

int SSM_TR_SM1_to_long(const void *pValue, long *nValue)
{
    if (pSimSSM_TR_SM1VTable != NULL) {
        return VTable_to_long(pValue, pSimSSM_TR_SM1VTable, nValue);
    }
    *nValue = (long)*((SSM_TR_SM1*)pValue);
    return 1;
}

void compare_SSM_TR_SM1(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimSSM_TR_SM1VTable != NULL
        && pSimSSM_TR_SM1VTable->m_version >= Scv612
        && pSimSSM_TR_SM1VTable->m_pfnCompare != NULL) {
        if (pSimSSM_TR_SM1VTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimSSM_TR_SM1VTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimSSM_TR_SM1VTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(SSM_TR_SM1*)pValue1), (int)(*(SSM_TR_SM1*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_SSM_TR_SM1_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(SSM_TR_SM1_values, SSM_TR_SM1_nb_values, pfnStrAppend, pStrObj);
}

int set_SSM_TR_SM1_default_value(void *pValue)
{
    *(SSM_TR_SM1*)pValue = SSM_TR_no_trans_SM1;
    return 1;
}

SimTypeUtils _Type_SSM_TR_SM1_Utils = {
    SSM_TR_SM1_to_string,
    check_SSM_TR_SM1_string,
    string_to_SSM_TR_SM1,
    is_SSM_TR_SM1_double_conversion_allowed,
    SSM_TR_SM1_to_double,
    is_SSM_TR_SM1_long_conversion_allowed,
    SSM_TR_SM1_to_long,
    compare_SSM_TR_SM1,
    get_SSM_TR_SM1_signature,
    set_SSM_TR_SM1_default_value,
    sizeof(SSM_TR_SM1)
};

/****************************************************************
 ** statusTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimstatusTyVTable_defined
    extern struct SimTypeVTable *pSimstatusTyVTable;
  #else 
    struct SimTypeVTable *pSimstatusTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimstatusTyVTable;
#endif

static SimEnumValUtils statusTy_values[] = {
    { "Preparing", Preparing},
    { "Preparing", Preparing},
    { "Running", Running},
    { "Running", Running},
    { "Arrived", Arrived},
    { "Arrived", Arrived},
    { "Stopped", Stopped},
    { "Stopped", Stopped},
};
const int statusTy_nb_values = 8;

int statusTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimstatusTyVTable != NULL
        && pSimstatusTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimstatusTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(statusTy*)pValue, statusTy_values, statusTy_nb_values, pfnStrAppend, pStrObj); 
}

int check_statusTy_string(const char *str, char **endptr)
{
    static statusTy rTemp;
    return string_to_statusTy(str, &rTemp, endptr);
}

int string_to_statusTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimstatusTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimstatusTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, statusTy_values, statusTy_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(statusTy*)pValue = (statusTy)nTemp;
    }
    return nRet;
}

int is_statusTy_double_conversion_allowed()
{
    if (pSimstatusTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimstatusTyVTable);
    }
    return 1;
}

int statusTy_to_double(const void *pValue, double *nValue)
{
    if (pSimstatusTyVTable != NULL) {
        return VTable_to_double(pValue, pSimstatusTyVTable, nValue);
    }
    *nValue = (double)*((statusTy*)pValue);
    return 1;
}

int is_statusTy_long_conversion_allowed()
{
    if (pSimstatusTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimstatusTyVTable);
    }
    return 1;
}

int statusTy_to_long(const void *pValue, long *nValue)
{
    if (pSimstatusTyVTable != NULL) {
        return VTable_to_long(pValue, pSimstatusTyVTable, nValue);
    }
    *nValue = (long)*((statusTy*)pValue);
    return 1;
}

void compare_statusTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimstatusTyVTable != NULL
        && pSimstatusTyVTable->m_version >= Scv612
        && pSimstatusTyVTable->m_pfnCompare != NULL) {
        if (pSimstatusTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimstatusTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimstatusTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(statusTy*)pValue1), (int)(*(statusTy*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_statusTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(statusTy_values, statusTy_nb_values, pfnStrAppend, pStrObj);
}

int set_statusTy_default_value(void *pValue)
{
    *(statusTy*)pValue = Preparing;
    return 1;
}

SimTypeUtils _Type_statusTy_Utils = {
    statusTy_to_string,
    check_statusTy_string,
    string_to_statusTy,
    is_statusTy_double_conversion_allowed,
    statusTy_to_double,
    is_statusTy_long_conversion_allowed,
    statusTy_to_long,
    compare_statusTy,
    get_statusTy_signature,
    set_statusTy_default_value,
    sizeof(statusTy)
};

/****************************************************************
 ** trafLArr 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtrafLArrVTable_defined
    extern struct SimTypeVTable *pSimtrafLArrVTable;
  #else 
    struct SimTypeVTable *pSimtrafLArrVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtrafLArrVTable;
#endif

int trafLArr_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtrafLArrVTable != NULL
        && pSimtrafLArrVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtrafLArrVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnArrayToString(pValue, trafLTy_to_string, 5, sizeof(trafLTy), pfnStrAppend, pStrObj);
}

int check_trafLArr_string(const char *str, char **endptr)
{
    static trafLArr rTemp;
    return string_to_trafLArr(str, &rTemp, endptr);
}

int string_to_trafLArr(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtrafLArrVTable != NULL) {
        nRet = string_to_VTable(str, pSimtrafLArrVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToArray(str, pValue, &_Type_trafLTy_Utils, 5, sizeof(trafLTy), endptr);
    }
    return nRet;
}

int is_trafLArr_double_conversion_allowed()
{
    if (pSimtrafLArrVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtrafLArrVTable);
    }
    return 0;
}

int trafLArr_to_double(const void *pValue, double *nValue)
{
    if (pSimtrafLArrVTable != NULL) {
        return VTable_to_double(pValue, pSimtrafLArrVTable, nValue);
    }
    return 0;
}

int is_trafLArr_long_conversion_allowed()
{
    if (pSimtrafLArrVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtrafLArrVTable);
    }
    return 0;
}

int trafLArr_to_long(const void *pValue, long *nValue)
{
    if (pSimtrafLArrVTable != NULL) {
        return VTable_to_long(pValue, pSimtrafLArrVTable, nValue);
    }
    return 0;
}

void compare_trafLArr(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtrafLArrVTable != NULL
        && pSimtrafLArrVTable->m_version >= Scv612
        && pSimtrafLArrVTable->m_pfnCompare != NULL) {
        if (pSimtrafLArrVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtrafLArrVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtrafLArrVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnArrayComparison(pResult, pValue1, pValue2, 
                compare_trafLTy, 5, sizeof(trafLTy), pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_trafLArr_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetArraySignature(get_trafLTy_signature, 5, pfnStrAppend, pStrObj); 
}

int set_trafLArr_default_value(void *pValue)
{
    int i;
    for (i = 0; i < 5; i++)
        set_trafLTy_default_value(&((trafLTy*)pValue)[i]);
    return 1;
}

SimTypeUtils _Type_trafLArr_Utils = {
    trafLArr_to_string,
    check_trafLArr_string,
    string_to_trafLArr,
    is_trafLArr_double_conversion_allowed,
    trafLArr_to_double,
    is_trafLArr_long_conversion_allowed,
    trafLArr_to_long,
    compare_trafLArr,
    get_trafLArr_signature,
    set_trafLArr_default_value,
    sizeof(trafLArr)
};

/****************************************************************
 ** trafLTy 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimtrafLTyVTable_defined
    extern struct SimTypeVTable *pSimtrafLTyVTable;
  #else 
    struct SimTypeVTable *pSimtrafLTyVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimtrafLTyVTable;
#endif

static SimFieldUtils trafLTy_fields[] = {
    {"position", offsetof(trafLTy,position), &_Type_positionTy_Utils},
    {"light", offsetof(trafLTy,light), &_Type_colorTyQ_Utils},
};

int trafLTy_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimtrafLTyVTable != NULL
        && pSimtrafLTyVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimtrafLTyVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, trafLTy_fields, 2, pfnStrAppend, pStrObj);
}

int check_trafLTy_string(const char *str, char **endptr)
{
    static trafLTy rTemp;
    return string_to_trafLTy(str, &rTemp, endptr);
}

int string_to_trafLTy(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimtrafLTyVTable != NULL) {
        nRet = string_to_VTable(str, pSimtrafLTyVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, trafLTy_fields, 2, endptr);
    }
    return nRet;
}

int is_trafLTy_double_conversion_allowed()
{
    if (pSimtrafLTyVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimtrafLTyVTable);
    }
    return 0;
}

int trafLTy_to_double(const void *pValue, double *nValue)
{
    if (pSimtrafLTyVTable != NULL) {
        return VTable_to_double(pValue, pSimtrafLTyVTable, nValue);
    }
    return 0;
}

int is_trafLTy_long_conversion_allowed()
{
    if (pSimtrafLTyVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimtrafLTyVTable);
    }
    return 0;
}

int trafLTy_to_long(const void *pValue, long *nValue)
{
    if (pSimtrafLTyVTable != NULL) {
        return VTable_to_long(pValue, pSimtrafLTyVTable, nValue);
    }
    return 0;
}

void compare_trafLTy(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimtrafLTyVTable != NULL
        && pSimtrafLTyVTable->m_version >= Scv612
        && pSimtrafLTyVTable->m_pfnCompare != NULL) {
        if (pSimtrafLTyVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimtrafLTyVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimtrafLTyVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, trafLTy_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_trafLTy_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(trafLTy_fields, 2, pfnStrAppend, pStrObj);
}

int set_trafLTy_default_value(void *pValue)
{
    set_positionTy_default_value(&(((trafLTy*)pValue)->position));
    set_colorTyQ_default_value(&(((trafLTy*)pValue)->light));
    return 1;
}

SimTypeUtils _Type_trafLTy_Utils = {
    trafLTy_to_string,
    check_trafLTy_string,
    string_to_trafLTy,
    is_trafLTy_double_conversion_allowed,
    trafLTy_to_double,
    is_trafLTy_long_conversion_allowed,
    trafLTy_to_long,
    compare_trafLTy,
    get_trafLTy_signature,
    set_trafLTy_default_value,
    sizeof(trafLTy)
};

/****************************************************************
 ** TruthTableValues_truthtables 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimTruthTableValues_truthtablesVTable_defined
    extern struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable;
  #else 
    struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimTruthTableValues_truthtablesVTable;
#endif

static SimEnumValUtils TruthTableValues_truthtables_values[] = {
    { "truthtables::T", T_truthtables},
    { "T", T_truthtables},
    { "truthtables::F", F_truthtables},
    { "F", F_truthtables},
    { "truthtables::X", X_truthtables},
    { "X", X_truthtables},
};
const int TruthTableValues_truthtables_nb_values = 6;

int TruthTableValues_truthtables_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimTruthTableValues_truthtablesVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnEnumToString(*(TruthTableValues_truthtables*)pValue, TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, pfnStrAppend, pStrObj); 
}

int check_TruthTableValues_truthtables_string(const char *str, char **endptr)
{
    static TruthTableValues_truthtables rTemp;
    return string_to_TruthTableValues_truthtables(str, &rTemp, endptr);
}

int string_to_TruthTableValues_truthtables(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        nRet = string_to_VTable(str, pSimTruthTableValues_truthtablesVTable, pValue, endptr);
    }
    if (nRet == 0) {
        int nTemp = 0;
        nRet = pConverter->m_pfnStringToEnum(str, &nTemp, TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, endptr);
        if (pValue != NULL && nRet != 0)
            *(TruthTableValues_truthtables*)pValue = (TruthTableValues_truthtables)nTemp;
    }
    return nRet;
}

int is_TruthTableValues_truthtables_double_conversion_allowed()
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimTruthTableValues_truthtablesVTable);
    }
    return 1;
}

int TruthTableValues_truthtables_to_double(const void *pValue, double *nValue)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return VTable_to_double(pValue, pSimTruthTableValues_truthtablesVTable, nValue);
    }
    *nValue = (double)*((TruthTableValues_truthtables*)pValue);
    return 1;
}

int is_TruthTableValues_truthtables_long_conversion_allowed()
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimTruthTableValues_truthtablesVTable);
    }
    return 1;
}

int TruthTableValues_truthtables_to_long(const void *pValue, long *nValue)
{
    if (pSimTruthTableValues_truthtablesVTable != NULL) {
        return VTable_to_long(pValue, pSimTruthTableValues_truthtablesVTable, nValue);
    }
    *nValue = (long)*((TruthTableValues_truthtables*)pValue);
    return 1;
}

void compare_TruthTableValues_truthtables(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimTruthTableValues_truthtablesVTable != NULL
        && pSimTruthTableValues_truthtablesVTable->m_version >= Scv612
        && pSimTruthTableValues_truthtablesVTable->m_pfnCompare != NULL) {
        if (pSimTruthTableValues_truthtablesVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimTruthTableValues_truthtablesVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimTruthTableValues_truthtablesVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        unitResult = predef_compare_enum(pResult, (int)(*(TruthTableValues_truthtables*)pValue1), (int)(*(TruthTableValues_truthtables*)pValue2));
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_TruthTableValues_truthtables_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetEnumSignature(TruthTableValues_truthtables_values, TruthTableValues_truthtables_nb_values, pfnStrAppend, pStrObj);
}

int set_TruthTableValues_truthtables_default_value(void *pValue)
{
    *(TruthTableValues_truthtables*)pValue = T_truthtables;
    return 1;
}

SimTypeUtils _Type_TruthTableValues_truthtables_Utils = {
    TruthTableValues_truthtables_to_string,
    check_TruthTableValues_truthtables_string,
    string_to_TruthTableValues_truthtables,
    is_TruthTableValues_truthtables_double_conversion_allowed,
    TruthTableValues_truthtables_to_double,
    is_TruthTableValues_truthtables_long_conversion_allowed,
    TruthTableValues_truthtables_to_long,
    compare_TruthTableValues_truthtables,
    get_TruthTableValues_truthtables_signature,
    set_TruthTableValues_truthtables_default_value,
    sizeof(TruthTableValues_truthtables)
};

/****************************************************************
 ** wheelsTy_Robot 
 ****************************************************************/

#ifdef __cplusplus
  #ifdef pSimwheelsTy_RobotVTable_defined
    extern struct SimTypeVTable *pSimwheelsTy_RobotVTable;
  #else 
    struct SimTypeVTable *pSimwheelsTy_RobotVTable = NULL;
  #endif
#else
  struct SimTypeVTable *pSimwheelsTy_RobotVTable;
#endif

static SimFieldUtils wheelsTy_Robot_fields[] = {
    {"left", offsetof(wheelsTy_Robot,left), &_Type_kcg_float64_Utils},
    {"right", offsetof(wheelsTy_Robot,right), &_Type_kcg_float64_Utils},
};

int wheelsTy_Robot_to_string(const void *pValue, PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    if (pSimwheelsTy_RobotVTable != NULL
        && pSimwheelsTy_RobotVTable->m_pfnGetConvInfo(SptString, SptNone) == 1) {
       return pfnStrAppend(*(char**)pSimwheelsTy_RobotVTable->m_pfnToType(SptString, pValue), pStrObj);
    }
    return pConverter->m_pfnStructureToString(pValue, wheelsTy_Robot_fields, 2, pfnStrAppend, pStrObj);
}

int check_wheelsTy_Robot_string(const char *str, char **endptr)
{
    static wheelsTy_Robot rTemp;
    return string_to_wheelsTy_Robot(str, &rTemp, endptr);
}

int string_to_wheelsTy_Robot(const char *str, void *pValue, char **endptr)
{
    int nRet = 0;
    skip_whitespace(str);
    if (pSimwheelsTy_RobotVTable != NULL) {
        nRet = string_to_VTable(str, pSimwheelsTy_RobotVTable, pValue, endptr);
    }
    if (nRet == 0) {
        nRet = pConverter->m_pfnStringToStructure(str, pValue, wheelsTy_Robot_fields, 2, endptr);
    }
    return nRet;
}

int is_wheelsTy_Robot_double_conversion_allowed()
{
    if (pSimwheelsTy_RobotVTable != NULL) {
        return is_VTable_double_conversion_allowed(pSimwheelsTy_RobotVTable);
    }
    return 0;
}

int wheelsTy_Robot_to_double(const void *pValue, double *nValue)
{
    if (pSimwheelsTy_RobotVTable != NULL) {
        return VTable_to_double(pValue, pSimwheelsTy_RobotVTable, nValue);
    }
    return 0;
}

int is_wheelsTy_Robot_long_conversion_allowed()
{
    if (pSimwheelsTy_RobotVTable != NULL) {
        return is_VTable_long_conversion_allowed(pSimwheelsTy_RobotVTable);
    }
    return 0;
}

int wheelsTy_Robot_to_long(const void *pValue, long *nValue)
{
    if (pSimwheelsTy_RobotVTable != NULL) {
        return VTable_to_long(pValue, pSimwheelsTy_RobotVTable, nValue);
    }
    return 0;
}

void compare_wheelsTy_Robot(int *pResult, const void *pValue1, const void *pValue2, SimTolerance *pTol, const char *pszPath, PFN_STR_LIST_APPEND pfnStrListAppend, void *pListErrPaths)
{
    int unitResult = 0;
    /* Customized comparison */
    if (pSimwheelsTy_RobotVTable != NULL
        && pSimwheelsTy_RobotVTable->m_version >= Scv612
        && pSimwheelsTy_RobotVTable->m_pfnCompare != NULL) {
        if (pSimwheelsTy_RobotVTable->m_version >= Scv65) {
            /* R15 and higher: VTable Compare function shall UPDATE *pResult global flag (*pResult |= SIM_CMP_RES_LT/...): */
            unitResult = pSimwheelsTy_RobotVTable->m_pfnCompare(pResult, pValue1, pValue2);
        } else {
            /* Before R15: VTable Compare function shall SET *pResult global flag (*pResult = -1/1/0): */
            pSimwheelsTy_RobotVTable->m_pfnCompare(&unitResult, pValue1, pValue2);
            updateCompareResult(unitResult, pResult);
        }
    } else {
        /* Predefined comparison */
        pConverter->m_pfnStructureComparison(pResult, pValue1, pValue2, wheelsTy_Robot_fields, 2, pTol, pszPath, pfnStrListAppend, pListErrPaths);
    }
    if (unitResult != 0 && pfnStrListAppend != NULL && pszPath != NULL && *pszPath != 0 && pListErrPaths != NULL)
        pfnStrListAppend(pszPath, pListErrPaths);
}

int get_wheelsTy_Robot_signature(PFN_STR_APPEND pfnStrAppend, void *pStrObj)
{
    return pConverter->m_pfnGetStructureSignature(wheelsTy_Robot_fields, 2, pfnStrAppend, pStrObj);
}

int set_wheelsTy_Robot_default_value(void *pValue)
{
    set_kcg_float64_default_value(&(((wheelsTy_Robot*)pValue)->left));
    set_kcg_float64_default_value(&(((wheelsTy_Robot*)pValue)->right));
    return 1;
}

SimTypeUtils _Type_wheelsTy_Robot_Utils = {
    wheelsTy_Robot_to_string,
    check_wheelsTy_Robot_string,
    string_to_wheelsTy_Robot,
    is_wheelsTy_Robot_double_conversion_allowed,
    wheelsTy_Robot_to_double,
    is_wheelsTy_Robot_long_conversion_allowed,
    wheelsTy_Robot_to_long,
    compare_wheelsTy_Robot,
    get_wheelsTy_Robot_signature,
    set_wheelsTy_Robot_default_value,
    sizeof(wheelsTy_Robot)
};

