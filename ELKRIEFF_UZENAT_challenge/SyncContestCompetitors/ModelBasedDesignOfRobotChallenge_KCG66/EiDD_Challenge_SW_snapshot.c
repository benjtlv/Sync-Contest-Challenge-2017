#include "EiDD_Challenge_SW_snapshot.h"
#include "EiDD_Challenge_SW_type.h"
#include "SmuLib.h"
#include "SmuVTable.h"
#include "stdio.h"

#ifdef _MSC_VER
  #define snprintf _snprintf
#endif

const char* szKcgTraceCheckSum = "2da86448e3a5f3d7590b0f89014a9b50";

/*********************************************
 * Snapshot Save functions
 *********************************************/
int save_var(const char *cpath, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bSuccess = 1;
    SimString strValue;
    SimStringAlloc(&strValue);
    bSuccess &= (pfnTypeToString(pValue, SimStringAppend, &strValue) != 0);
    bSuccess &= (fprintf(snsFile, "%s\t%s\n", SimStringGet(&strValue), cpath) >= 0);
    SimStringFree(&strValue);
    return bSuccess;
}

int save_field(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_TYPE_TO_STRING pfnTypeToString, FILE *snsFile) {
    int bSuccess = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bSuccess = save_var(SimStringGet(&strCPath), pValue, pBaseAddr, pfnTypeToString, snsFile);
    SimStringFree(&strCPath);
    return bSuccess;
}

typedef int(*PFN_SAVE_CONTEXT)(const char *cpath, const void *pValue, const void *pBaseAddr, FILE *snsFile);

int save_context(const char *cpath, const char *proj, const void *pValue, const void *pBaseAddr, PFN_SAVE_CONTEXT pfnSaveContext, FILE *snsFile) {
    int bSuccess = 1;
    SimString strCPath;
    SimStringAlloc(&strCPath);
    SimStringAppend(cpath, &strCPath);
    SimStringAppend(proj, &strCPath);
    bSuccess = pfnSaveContext(SimStringGet(&strCPath), pValue, pBaseAddr, snsFile);
    SimStringFree(&strCPath);
    return bSuccess;
}

int save_inC_ModelBasedDesignOfRobotCh(const char *cpath, const inC_ModelBasedDesignOfRobotCh *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".InitialPhase", (const void *)(&pValue->InitialPhase), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".top", (const void *)(&pValue->top), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".mapid", (const void *)(&pValue->mapid), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".itiid", (const void *)(&pValue->itiid), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_AgregateEvents_City(const char *cpath, const outC_AgregateEvents_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".events", (const void *)(&pValue->events), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Interrupt", (const void *)(&pValue->Interrupt), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_AgregateSensors_City(const char *cpath, const outC_AgregateSensors_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".SensorsData", (const void *)(&pValue->SensorsData), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, sensorsTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_AllObstacles_City(const char *cpath, const outC_AllObstacles_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i0;
    char proj[1024];
    bSuccess &= save_field(cpath, ".obstacles", (const void *)(&pValue->obstacles), pBaseAddr, obstArr_to_string, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        snprintf(proj, 1024, ".Context_OneObstacle_1[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_OneObstacle_1[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_OneObstacle_City, snsFile);
    }
    bSuccess &= save_context(cpath, ".Context_readObstacles_1", (const void *)(&pValue->Context_readObstacles_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_readObstacles_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, array_float64_10_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, paramObstArr_City_to_string, snsFile); 
    return bSuccess;
}

int save_outC_AngleDist_Utilities(const char *cpath, const outC_AngleDist_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".angle", (const void *)(&pValue->angle), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".dist", (const void *)(&pValue->dist), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_HypotR_1", (const void *)(&pValue->Context_HypotR_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_HypotR_mathext_float64, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Bound_Utilities(const char *cpath, const outC_Bound_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".xb", (const void *)(&pValue->xb), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Ma_Output_Max_1_float64", (const void *)(&pValue->Ma_Output_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I2_Max_1_float64", (const void *)(&pValue->I2_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I1_Max_1_float64", (const void *)(&pValue->I1_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_Max_1_float64", (const void *)(&pValue->_L4_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Max_1_float64", (const void *)(&pValue->_L3_Max_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Max_1_float64", (const void *)(&pValue->_L2_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Max_1_float64", (const void *)(&pValue->_L1_Max_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Mi_Output_Min_1_float64", (const void *)(&pValue->Mi_Output_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I2_Min_1_float64", (const void *)(&pValue->I2_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I1_Min_1_float64", (const void *)(&pValue->I1_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25_Min_1_float64", (const void *)(&pValue->_L25_Min_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24_Min_1_float64", (const void *)(&pValue->_L24_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22_Min_1_float64", (const void *)(&pValue->_L22_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_Min_1_float64", (const void *)(&pValue->_L21_Min_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_CarGeometry_Robot(const char *cpath, const outC_CarGeometry_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".newpos", (const void *)(&pValue->newpos), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".newphase", (const void *)(&pValue->newphase), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_vec2pos_1", (const void *)(&pValue->Context_vec2pos_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_vec2pos_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_VectAdd_1", (const void *)(&pValue->Context_VectAdd_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_VectAdd_vect_float64_2, snsFile);
    bSuccess &= save_context(cpath, ".Context_MatVectProd_1", (const void *)(&pValue->Context_MatVectProd_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MatVectProd_vect_float64_2_2, snsFile);
    bSuccess &= save_context(cpath, ".Context_RotMatrix_1", (const void *)(&pValue->Context_RotMatrix_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RotMatrix_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_pos2vec_1", (const void *)(&pValue->Context_pos2vec_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_pos2vec_Utilities, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, phaseTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_CollisionAux_City(const char *cpath, const outC_CollisionAux_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".accnew", (const void *)(&pValue->accnew), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Normalize_1", (const void *)(&pValue->Context_Normalize_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Normalize_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_AngleDist_1", (const void *)(&pValue->Context_AngleDist_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_AngleDist_Utilities, snsFile);
    bSuccess &= save_field(cpath, ".A_Output_Abs_1_float64", (const void *)(&pValue->A_Output_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".A_Input_Abs_1_float64", (const void *)(&pValue->A_Input_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_Abs_1_float64", (const void *)(&pValue->_L8_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_Abs_1_float64", (const void *)(&pValue->_L5_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Abs_1_float64", (const void *)(&pValue->_L3_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Abs_1_float64", (const void *)(&pValue->_L2_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Abs_1_float64", (const void *)(&pValue->_L1_Abs_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output2_SinCosR_1_float64", (const void *)(&pValue->Output2_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output1_SinCosR_1_float64", (const void *)(&pValue->Output1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Input1_SinCosR_1_float64", (const void *)(&pValue->Input1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_SinCosR_1_float64", (const void *)(&pValue->_L3_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_SinCosR_1_float64", (const void *)(&pValue->_L2_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_SinCosR_1_float64", (const void *)(&pValue->_L1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".angle", (const void *)(&pValue->angle), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".dist", (const void *)(&pValue->dist), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, obstTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L36", (const void *)(&pValue->_L36), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38", (const void *)(&pValue->_L38), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L39", (const void *)(&pValue->_L39), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L40", (const void *)(&pValue->_L40), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L41", (const void *)(&pValue->_L41), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L42", (const void *)(&pValue->_L42), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Collision_City(const char *cpath, const outC_Collision_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i0;
    char proj[1024];
    bSuccess &= save_field(cpath, ".collisionEvent", (const void *)(&pValue->collisionEvent), pBaseAddr, kcg_bool_to_string, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        snprintf(proj, 1024, ".Context_CollisionAux_1[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_CollisionAux_1[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_CollisionAux_City, snsFile);
    }
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, array_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ComputeWheels_Robot(const char *cpath, const outC_ComputeWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".wheels", (const void *)(&pValue->wheels), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_PIDControler_3", (const void *)(&pValue->Context_PIDControler_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_PIDControler_Robot, snsFile);
    bSuccess &= save_field(cpath, ".else_clock_IfBlock1", (const void *)(&pValue->else_clock_IfBlock1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".IfBlock1_clock", (const void *)(&pValue->IfBlock1_clock), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_then_IfBlock1", (const void *)(&pValue->_L21_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20_then_IfBlock1", (const void *)(&pValue->_L20_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19_then_IfBlock1", (const void *)(&pValue->_L19_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18_then_IfBlock1", (const void *)(&pValue->_L18_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9_then_IfBlock1", (const void *)(&pValue->_L9_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10_then_IfBlock1", (const void *)(&pValue->_L10_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11_then_IfBlock1", (const void *)(&pValue->_L11_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12_then_IfBlock1", (const void *)(&pValue->_L12_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13_then_IfBlock1", (const void *)(&pValue->_L13_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15_then_IfBlock1", (const void *)(&pValue->_L15_then_IfBlock1), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17_then_IfBlock1", (const void *)(&pValue->_L17_then_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_else_else_IfBlock1", (const void *)(&pValue->_L1_else_else_IfBlock1), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_else_else_IfBlock1", (const void *)(&pValue->_L4_else_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_else_else_IfBlock1", (const void *)(&pValue->_L5_else_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6_else_else_IfBlock1", (const void *)(&pValue->_L6_else_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10_then_else_IfBlock1", (const void *)(&pValue->_L10_then_else_IfBlock1), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9_then_else_IfBlock1", (const void *)(&pValue->_L9_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_then_else_IfBlock1", (const void *)(&pValue->_L8_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6_then_else_IfBlock1", (const void *)(&pValue->_L6_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_then_else_IfBlock1", (const void *)(&pValue->_L5_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_then_else_IfBlock1", (const void *)(&pValue->_L4_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_then_else_IfBlock1", (const void *)(&pValue->_L3_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11_then_else_IfBlock1", (const void *)(&pValue->_L11_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12_then_else_IfBlock1", (const void *)(&pValue->_L12_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16_then_else_IfBlock1", (const void *)(&pValue->_L16_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17_then_else_IfBlock1", (const void *)(&pValue->_L17_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18_then_else_IfBlock1", (const void *)(&pValue->_L18_then_else_IfBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".epsilon", (const void *)(&pValue->epsilon), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".localSpeed", (const void *)(&pValue->localSpeed), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".localWheels", (const void *)(&pValue->localWheels), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L159", (const void *)(&pValue->_L159), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L161", (const void *)(&pValue->_L161), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L163", (const void *)(&pValue->_L163), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L164", (const void *)(&pValue->_L164), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Driver_Robot(const char *cpath, const outC_Driver_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RotationalSpeed", (const void *)(&pValue->RotationalSpeed), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".RobotStatus", (const void *)(&pValue->RobotStatus), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_state_nxt", (const void *)(&pValue->Robot_state_nxt), pBaseAddr, SSM_ST_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_reset_act", (const void *)(&pValue->Robot_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_reset_nxt", (const void *)(&pValue->Robot_reset_nxt), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_actionArrayOnWheels_2", (const void *)(&pValue->Context_actionArrayOnWheels_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_actionArrayOnWheels_Robot, snsFile);
    bSuccess &= save_field(cpath, ".Robot_state_act", (const void *)(&pValue->Robot_state_act), pBaseAddr, SSM_ST_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11_Preparing_Robot", (const void *)(&pValue->_L11_Preparing_Robot), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Preparing_Robot", (const void *)(&pValue->_L1_Preparing_Robot), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9_Running_Robot", (const void *)(&pValue->_L9_Running_Robot), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_Running_Robot", (const void *)(&pValue->_L8_Running_Robot), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Running_Robot", (const void *)(&pValue->_L3_Running_Robot), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".arriving_Running_Robot", (const void *)(&pValue->arriving_Running_Robot), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11_Arrived_Robot", (const void *)(&pValue->_L11_Arrived_Robot), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Arrived_Robot", (const void *)(&pValue->_L1_Arrived_Robot), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_Stopped_Robot", (const void *)(&pValue->_L5_Stopped_Robot), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Stopped_Robot", (const void *)(&pValue->_L1_Stopped_Robot), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_state_sel", (const void *)(&pValue->Robot_state_sel), pBaseAddr, SSM_ST_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_fired_strong", (const void *)(&pValue->Robot_fired_strong), pBaseAddr, SSM_TR_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Robot_fired", (const void *)(&pValue->Robot_fired), pBaseAddr, SSM_TR_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".zero", (const void *)(&pValue->zero), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, itiElemArr_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_EncodeColor_Utilities(const char *cpath, const outC_EncodeColor_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".colorRGB", (const void *)(&pValue->colorRGB), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, colorTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_EventDetection_City(const char *cpath, const outC_EventDetection_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".Interrupt", (const void *)(&pValue->Interrupt), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Events", (const void *)(&pValue->Events), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_AgregateEvents_1", (const void *)(&pValue->Context_AgregateEvents_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_AgregateEvents_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_Collision_1", (const void *)(&pValue->Context_Collision_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Collision_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_Exit_1", (const void *)(&pValue->Context_Exit_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Exit_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_Speed_1", (const void *)(&pValue->Context_Speed_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Speed_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_Light_1", (const void *)(&pValue->Context_Light_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Light_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_WrongDir_1", (const void *)(&pValue->Context_WrongDir_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_WrongDir_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, sigTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, trafLArr_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ExitAux_City(const char *cpath, const outC_ExitAux_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".res", (const void *)(&pValue->res), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, positionTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Exit_City(const char *cpath, const outC_Exit_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i0;
    char proj[1024];
    bSuccess &= save_field(cpath, ".exitRoad", (const void *)(&pValue->exitRoad), pBaseAddr, kcg_bool_to_string, snsFile); 
    for (i0 = 0; i0<2; i0++) {
        snprintf(proj, 1024, ".Context_ExitAux_1[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_ExitAux_1[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_ExitAux_City, snsFile);
    }
    for (i0 = 0; i0<2; i0++) {
        snprintf(proj, 1024, ".Context_CarGeometry_1[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_CarGeometry_1[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_CarGeometry_Robot, snsFile);
    }
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, array_int32_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, _3_array_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, _2_array_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, _2_array_to_string, snsFile); 
    return bSuccess;
}

int save_outC_GroundColorDetection_City(const char *cpath, const outC_GroundColorDetection_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".roadColor", (const void *)(&pValue->roadColor), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    return bSuccess;
}

int save_outC_HypotR_mathext_float64(const char *cpath, const outC_HypotR_mathext_float64 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".HypotR_O_float64", (const void *)(&pValue->HypotR_O_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_float64", (const void *)(&pValue->_L1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_float64", (const void *)(&pValue->_L2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_float64", (const void *)(&pValue->_L3_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_float64", (const void *)(&pValue->_L4_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_float64", (const void *)(&pValue->_L5_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6_float64", (const void *)(&pValue->_L6_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_IndividualRobotControl_Robot(const char *cpath, const outC_IndividualRobotControl_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RobotPhase", (const void *)(&pValue->RobotPhase), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".RobotStatus", (const void *)(&pValue->RobotStatus), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_PhysicalModel_1", (const void *)(&pValue->Context_PhysicalModel_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_PhysicalModel_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_Driver_1", (const void *)(&pValue->Context_Driver_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Driver_Robot, snsFile);
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, itiElemArr_Robot_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Integrator_Utilities(const char *cpath, const outC_Integrator_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".result", (const void *)(&pValue->result), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".s", (const void *)(&pValue->s), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Light_City(const char *cpath, const outC_Light_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".lightRun", (const void *)(&pValue->lightRun), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, trafLArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, trafLTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, colorTyQ_to_string, snsFile); 
    return bSuccess;
}

#ifdef __cplusplus
  #ifdef pSimoutC_MapADT_CityIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_MapADT_CityIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_MapADT_CityIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_MapADT_CityIOCVTable;
#endif

int save_outC_MapADT_City(const char *cpath, const outC_MapADT_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    SimString strValue;
    SimStringAlloc(&strValue);
    if (pSimoutC_MapADT_CityIOCVTable != NULL
        && pSimoutC_MapADT_CityIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bSuccess &= pSimoutC_MapADT_CityIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bSuccess &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_MapADT_City) && bSuccess ; i++, pCur++)
            bSuccess &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t%s\n", cpath);
    SimStringFree(&strValue);
    return bSuccess;
}

int save_outC_MatVectProd_vect_float64_2_2(const char *cpath, const outC_MatVectProd_vect_float64_2_2 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".R_float64_2_2", (const void *)(&pValue->R_float64_2_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7_ScalProd_1_float64_2", (const void *)(&pValue->_L7_ScalProd_1_float64_2), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6_ScalProd_1_float64_2", (const void *)(&pValue->_L6_ScalProd_1_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_ScalProd_1_float64_2", (const void *)(&pValue->_L4_ScalProd_1_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_ScalProd_1_float64_2", (const void *)(&pValue->_L3_ScalProd_1_float64_2), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_ScalProd_1_float64_2", (const void *)(&pValue->_L2_ScalProd_1_float64_2), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_float64_2_2", (const void *)(&pValue->_L1_float64_2_2), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_float64_2_2", (const void *)(&pValue->_L2_float64_2_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_float64_2_2", (const void *)(&pValue->_L4_float64_2_2), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7_float64_2_2", (const void *)(&pValue->_L7_float64_2_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ModelBasedDesignOfRobotCh(const char *cpath, const outC_ModelBasedDesignOfRobotCh *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RobotPhase", (const void *)(&pValue->RobotPhase), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".RobotStatus", (const void *)(&pValue->RobotStatus), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Signalization", (const void *)(&pValue->Signalization), pBaseAddr, sigTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Events", (const void *)(&pValue->Events), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".scoreA", (const void *)(&pValue->scoreA), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".scoreB", (const void *)(&pValue->scoreB), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".time", (const void *)(&pValue->time), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_ScoringB_1", (const void *)(&pValue->Context_ScoringB_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_ScoringB_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_ScoringA_1", (const void *)(&pValue->Context_ScoringA_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_ScoringA_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_SmartCityControl_1", (const void *)(&pValue->Context_SmartCityControl_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_SmartCityControl_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_WallClock_1", (const void *)(&pValue->Context_WallClock_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_WallClock_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_IndividualRobotControl_1", (const void *)(&pValue->Context_IndividualRobotControl_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_IndividualRobotControl_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_readIti_1", (const void *)(&pValue->Context_readIti_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_readIti_Robot, snsFile);
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, sigTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, itiElemArr_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, sensorsTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Normalize_Utilities(const char *cpath, const outC_Normalize_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".normal", (const void *)(&pValue->normal), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_RoundFloor_1", (const void *)(&pValue->Context_RoundFloor_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RoundFloor_math_float64, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ObstaclesDetection_City(const char *cpath, const outC_ObstaclesDetection_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i0;
    char proj[1024];
    bSuccess &= save_field(cpath, ".sonar", (const void *)(&pValue->sonar), pBaseAddr, kcg_int32_to_string, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        snprintf(proj, 1024, ".Context_OneObstacleDet_3[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_OneObstacleDet_3[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_OneObstacleDet_City, snsFile);
    }
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, array_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_OneObstacleDet_City(const char *cpath, const outC_OneObstacleDet_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".accnew", (const void *)(&pValue->accnew), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Normalize_1", (const void *)(&pValue->Context_Normalize_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Normalize_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_AngleDist_1", (const void *)(&pValue->Context_AngleDist_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_AngleDist_Utilities, snsFile);
    bSuccess &= save_field(cpath, ".A_Output_Abs_1_float64", (const void *)(&pValue->A_Output_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".A_Input_Abs_1_float64", (const void *)(&pValue->A_Input_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_Abs_1_float64", (const void *)(&pValue->_L8_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_Abs_1_float64", (const void *)(&pValue->_L5_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Abs_1_float64", (const void *)(&pValue->_L3_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Abs_1_float64", (const void *)(&pValue->_L2_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Abs_1_float64", (const void *)(&pValue->_L1_Abs_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Mi_Output_Min_3_int32", (const void *)(&pValue->Mi_Output_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I2_Min_3_int32", (const void *)(&pValue->I2_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I1_Min_3_int32", (const void *)(&pValue->I1_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25_Min_3_int32", (const void *)(&pValue->_L25_Min_3_int32), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24_Min_3_int32", (const void *)(&pValue->_L24_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22_Min_3_int32", (const void *)(&pValue->_L22_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_Min_3_int32", (const void *)(&pValue->_L21_Min_3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L36", (const void *)(&pValue->_L36), pBaseAddr, obstTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38", (const void *)(&pValue->_L38), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L46", (const void *)(&pValue->_L46), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L48", (const void *)(&pValue->_L48), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_OneObstacle_City(const char *cpath, const outC_OneObstacle_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".obstacle", (const void *)(&pValue->obstacle), pBaseAddr, obstTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, paramObstTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, obstTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_OneTL_City(const char *cpath, const outC_OneTL_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".trafL", (const void *)(&pValue->trafL), pBaseAddr, trafLTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".else_clock_IfBlock1", (const void *)(&pValue->else_clock_IfBlock1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".IfBlock1_clock", (const void *)(&pValue->IfBlock1_clock), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Ma_Output_Max_1_int32", (const void *)(&pValue->Ma_Output_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I2_Max_1_int32", (const void *)(&pValue->I2_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".I1_Max_1_int32", (const void *)(&pValue->I1_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_Max_1_int32", (const void *)(&pValue->_L4_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Max_1_int32", (const void *)(&pValue->_L3_Max_1_int32), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Max_1_int32", (const void *)(&pValue->_L2_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Max_1_int32", (const void *)(&pValue->_L1_Max_1_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_then_IfBlock1", (const void *)(&pValue->_L1_then_IfBlock1), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_else_else_IfBlock1", (const void *)(&pValue->_L1_else_else_IfBlock1), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_then_else_IfBlock1", (const void *)(&pValue->_L2_then_else_IfBlock1), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".cpt", (const void *)(&pValue->cpt), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".period", (const void *)(&pValue->period), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".light", (const void *)(&pValue->light), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".tGreen", (const void *)(&pValue->tGreen), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".tAmber", (const void *)(&pValue->tAmber), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".tRed", (const void *)(&pValue->tRed), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".tPhase", (const void *)(&pValue->tPhase), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, trafLTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, colorTyQ_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, paramTLTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L50", (const void *)(&pValue->_L50), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L54", (const void *)(&pValue->_L54), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L55", (const void *)(&pValue->_L55), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L57", (const void *)(&pValue->_L57), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L58", (const void *)(&pValue->_L58), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L59", (const void *)(&pValue->_L59), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L60", (const void *)(&pValue->_L60), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_PIDControler_Robot(const char *cpath, const outC_PIDControler_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".epsilon", (const void *)(&pValue->epsilon), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L62", (const void *)(&pValue->_L62), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Integrator_1", (const void *)(&pValue->Context_Integrator_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_isGreen_1", (const void *)(&pValue->Context_isGreen_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_isGreen_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_isRed_1", (const void *)(&pValue->Context_isRed_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_isRed_Robot, snsFile);
    bSuccess &= save_field(cpath, ".dev", (const void *)(&pValue->dev), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".errorColor", (const void *)(&pValue->errorColor), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L42", (const void *)(&pValue->_L42), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L41", (const void *)(&pValue->_L41), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L40", (const void *)(&pValue->_L40), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L61", (const void *)(&pValue->_L61), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L60", (const void *)(&pValue->_L60), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L59", (const void *)(&pValue->_L59), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L58", (const void *)(&pValue->_L58), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L57", (const void *)(&pValue->_L57), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L56", (const void *)(&pValue->_L56), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L55", (const void *)(&pValue->_L55), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L54", (const void *)(&pValue->_L54), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L53", (const void *)(&pValue->_L53), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L50", (const void *)(&pValue->_L50), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L52", (const void *)(&pValue->_L52), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L49", (const void *)(&pValue->_L49), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L48", (const void *)(&pValue->_L48), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L63", (const void *)(&pValue->_L63), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L64", (const void *)(&pValue->_L64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L65", (const void *)(&pValue->_L65), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L67", (const void *)(&pValue->_L67), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L69", (const void *)(&pValue->_L69), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L70", (const void *)(&pValue->_L70), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L71", (const void *)(&pValue->_L71), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L72", (const void *)(&pValue->_L72), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L73", (const void *)(&pValue->_L73), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_PhysicalModel_Robot(const char *cpath, const outC_PhysicalModel_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RobotPhase", (const void *)(&pValue->RobotPhase), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_state_nxt", (const void *)(&pValue->SM1_state_nxt), pBaseAddr, SSM_ST_SM1_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_reset_act", (const void *)(&pValue->SM1_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_reset_nxt", (const void *)(&pValue->SM1_reset_nxt), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".y0", (const void *)(&pValue->y0), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".x0", (const void *)(&pValue->x0), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".alpha0", (const void *)(&pValue->alpha0), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_CarGeometry_1", (const void *)(&pValue->Context_CarGeometry_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_CarGeometry_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_CarGeometry_2", (const void *)(&pValue->Context_CarGeometry_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_CarGeometry_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_Integrator_4", (const void *)(&pValue->Context_Integrator_4), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Integrator_5", (const void *)(&pValue->Context_Integrator_5), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Normalize_3", (const void *)(&pValue->Context_Normalize_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Normalize_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Integrator_7", (const void *)(&pValue->Context_Integrator_7), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Bound_3", (const void *)(&pValue->Context_Bound_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Bound_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Bound_4", (const void *)(&pValue->Context_Bound_4), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Bound_Utilities, snsFile);
    bSuccess &= save_field(cpath, ".SM1_state_act", (const void *)(&pValue->SM1_state_act), pBaseAddr, SSM_ST_SM1_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output2_SinCosR_16_float64", (const void *)(&pValue->Output2_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output1_SinCosR_16_float64", (const void *)(&pValue->Output1_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Input1_SinCosR_16_float64", (const void *)(&pValue->Input1_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_SinCosR_16_float64", (const void *)(&pValue->_L3_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_SinCosR_16_float64", (const void *)(&pValue->_L2_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_SinCosR_16_float64", (const void *)(&pValue->_L1_SinCosR_16_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L71_positionning_SM1", (const void *)(&pValue->_L71_positionning_SM1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L69_positionning_SM1", (const void *)(&pValue->_L69_positionning_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L70_positionning_SM1", (const void *)(&pValue->_L70_positionning_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L68_positionning_SM1", (const void *)(&pValue->_L68_positionning_SM1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L67_positionning_SM1", (const void *)(&pValue->_L67_positionning_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L66_positionning_SM1", (const void *)(&pValue->_L66_positionning_SM1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L55_positionning_SM1", (const void *)(&pValue->_L55_positionning_SM1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L63_positionning_SM1", (const void *)(&pValue->_L63_positionning_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L62_positionning_SM1", (const void *)(&pValue->_L62_positionning_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L61_positionning_SM1", (const void *)(&pValue->_L61_positionning_SM1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L49_on_SM1", (const void *)(&pValue->_L49_on_SM1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L48_on_SM1", (const void *)(&pValue->_L48_on_SM1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47_on_SM1", (const void *)(&pValue->_L47_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L46_on_SM1", (const void *)(&pValue->_L46_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45_on_SM1", (const void *)(&pValue->_L45_on_SM1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29_on_SM1", (const void *)(&pValue->_L29_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31_on_SM1", (const void *)(&pValue->_L31_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30_on_SM1", (const void *)(&pValue->_L30_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32_on_SM1", (const void *)(&pValue->_L32_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33_on_SM1", (const void *)(&pValue->_L33_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34_on_SM1", (const void *)(&pValue->_L34_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35_on_SM1", (const void *)(&pValue->_L35_on_SM1), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L36_on_SM1", (const void *)(&pValue->_L36_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28_on_SM1", (const void *)(&pValue->_L28_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25_on_SM1", (const void *)(&pValue->_L25_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27_on_SM1", (const void *)(&pValue->_L27_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26_on_SM1", (const void *)(&pValue->_L26_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18_on_SM1", (const void *)(&pValue->_L18_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19_on_SM1", (const void *)(&pValue->_L19_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20_on_SM1", (const void *)(&pValue->_L20_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_on_SM1", (const void *)(&pValue->_L21_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_on_SM1", (const void *)(&pValue->_L2_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_on_SM1", (const void *)(&pValue->_L4_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_on_SM1", (const void *)(&pValue->_L5_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6_on_SM1", (const void *)(&pValue->_L6_on_SM1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7_on_SM1", (const void *)(&pValue->_L7_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9_on_SM1", (const void *)(&pValue->_L9_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13_on_SM1", (const void *)(&pValue->_L13_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".vRight_on_SM1", (const void *)(&pValue->vRight_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".vLeft_on_SM1", (const void *)(&pValue->vLeft_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".si_on_SM1", (const void *)(&pValue->si_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".co_on_SM1", (const void *)(&pValue->co_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".v_on_SM1", (const void *)(&pValue->v_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".alpha_on_SM1", (const void *)(&pValue->alpha_on_SM1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_state_sel", (const void *)(&pValue->SM1_state_sel), pBaseAddr, SSM_ST_SM1_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_fired_strong", (const void *)(&pValue->SM1_fired_strong), pBaseAddr, SSM_TR_SM1_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SM1_fired", (const void *)(&pValue->SM1_fired), pBaseAddr, SSM_TR_SM1_to_string, snsFile); 
    return bSuccess;
}

int save_outC_RisingEdge_digital(const char *cpath, const outC_RisingEdge_digital *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RE_Output", (const void *)(&pValue->RE_Output), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_RobotSensors_City(const char *cpath, const outC_RobotSensors_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".SensorsData", (const void *)(&pValue->SensorsData), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_AgregateSensors_1", (const void *)(&pValue->Context_AgregateSensors_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_AgregateSensors_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_GroundColorDetection_1", (const void *)(&pValue->Context_GroundColorDetection_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_GroundColorDetection_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_ObstaclesDetection_1", (const void *)(&pValue->Context_ObstaclesDetection_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_ObstaclesDetection_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_TraficLightsDetection_1", (const void *)(&pValue->Context_TraficLightsDetection_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_TraficLightsDetection_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, sigTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, trafLArr_to_string, snsFile); 
    return bSuccess;
}

int save_outC_RotMatrix_Utilities(const char *cpath, const outC_RotMatrix_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".res", (const void *)(&pValue->res), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output2_SinCosR_2_float64", (const void *)(&pValue->Output2_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output1_SinCosR_2_float64", (const void *)(&pValue->Output1_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Input1_SinCosR_2_float64", (const void *)(&pValue->Input1_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_SinCosR_2_float64", (const void *)(&pValue->_L3_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_SinCosR_2_float64", (const void *)(&pValue->_L2_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_SinCosR_2_float64", (const void *)(&pValue->_L1_SinCosR_2_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".si", (const void *)(&pValue->si), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".co", (const void *)(&pValue->co), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, array_float64_2_2_to_string, snsFile); 
    return bSuccess;
}

int save_outC_RoundFloor_math_float64(const char *cpath, const outC_RoundFloor_math_float64 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".RF_Output_float64", (const void *)(&pValue->RF_Output_float64), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_float64", (const void *)(&pValue->_L1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24_float64", (const void *)(&pValue->_L24_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25_float64", (const void *)(&pValue->_L25_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26_float64", (const void *)(&pValue->_L26_float64), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30_float64", (const void *)(&pValue->_L30_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31_float64", (const void *)(&pValue->_L31_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32_float64", (const void *)(&pValue->_L32_float64), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33_float64", (const void *)(&pValue->_L33_float64), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38_float64", (const void *)(&pValue->_L38_float64), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L41_float64", (const void *)(&pValue->_L41_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43_float64", (const void *)(&pValue->_L43_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ScoringA_City(const char *cpath, const outC_ScoringA_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".score", (const void *)(&pValue->score), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38", (const void *)(&pValue->_L38), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_RisingEdge_5", (const void *)(&pValue->Context_RisingEdge_5), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RisingEdge_digital, snsFile);
    bSuccess &= save_context(cpath, ".Context_RisingEdge_1", (const void *)(&pValue->Context_RisingEdge_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RisingEdge_digital, snsFile);
    bSuccess &= save_context(cpath, ".Context_RisingEdge_3", (const void *)(&pValue->Context_RisingEdge_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RisingEdge_digital, snsFile);
    bSuccess &= save_context(cpath, ".Context_RisingEdge_4", (const void *)(&pValue->Context_RisingEdge_4), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RisingEdge_digital, snsFile);
    bSuccess &= save_context(cpath, ".Context_RisingEdge_7", (const void *)(&pValue->Context_RisingEdge_7), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RisingEdge_digital, snsFile);
    bSuccess &= save_context(cpath, ".Context_count_down_1", (const void *)(&pValue->Context_count_down_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_count_down_digital_int32, snsFile);
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L36", (const void *)(&pValue->_L36), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L39", (const void *)(&pValue->_L39), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L41", (const void *)(&pValue->_L41), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L42", (const void *)(&pValue->_L42), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L46", (const void *)(&pValue->_L46), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L48", (const void *)(&pValue->_L48), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L50", (const void *)(&pValue->_L50), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L52", (const void *)(&pValue->_L52), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L53", (const void *)(&pValue->_L53), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L54", (const void *)(&pValue->_L54), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L55", (const void *)(&pValue->_L55), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L56", (const void *)(&pValue->_L56), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L57", (const void *)(&pValue->_L57), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L58", (const void *)(&pValue->_L58), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L59", (const void *)(&pValue->_L59), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_ScoringB_City(const char *cpath, const outC_ScoringB_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".score", (const void *)(&pValue->score), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Variation_1", (const void *)(&pValue->Context_Variation_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Variation_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_UpTime_1", (const void *)(&pValue->Context_UpTime_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_UpTime_Utilities, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_SmartCityControl_City(const char *cpath, const outC_SmartCityControl_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".Signalization", (const void *)(&pValue->Signalization), pBaseAddr, sigTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Interrupt", (const void *)(&pValue->Interrupt), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".SensorsData", (const void *)(&pValue->SensorsData), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Events", (const void *)(&pValue->Events), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_EventDetection_1", (const void *)(&pValue->Context_EventDetection_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_EventDetection_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_RobotSensors_1", (const void *)(&pValue->Context_RobotSensors_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_RobotSensors_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_AllObstacles_1", (const void *)(&pValue->Context_AllObstacles_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_AllObstacles_City, snsFile);
    bSuccess &= save_context(cpath, ".Context_TrafficLights_1", (const void *)(&pValue->Context_TrafficLights_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_TrafficLights_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, eventTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, interTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, trafLArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, obstArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, sigTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Speed_City(const char *cpath, const outC_Speed_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".speedExcess", (const void *)(&pValue->speedExcess), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    return bSuccess;
}

int save_outC_TrafficLights_City(const char *cpath, const outC_TrafficLights_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i0;
    char proj[1024];
    bSuccess &= save_field(cpath, ".allLights", (const void *)(&pValue->allLights), pBaseAddr, trafLArr_to_string, snsFile); 
    for (i0 = 0; i0<5; i0++) {
        snprintf(proj, 1024, ".Context_OneTL_1[%d]", i0);
        bSuccess &= save_context(cpath, proj, (const void *)(&pValue->Context_OneTL_1[i0]), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_OneTL_City, snsFile);
    }
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, trafLArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, array_float64_5_to_string, snsFile); 
    return bSuccess;
}

int save_outC_TraficLightsDetection_City(const char *cpath, const outC_TraficLightsDetection_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".lightsColor", (const void *)(&pValue->lightsColor), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_EncodeColor_1", (const void *)(&pValue->Context_EncodeColor_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_EncodeColor_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_MapADT_2", (const void *)(&pValue->Context_MapADT_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, trafLArr_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L24", (const void *)(&pValue->_L24), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L25", (const void *)(&pValue->_L25), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, trafLTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L33", (const void *)(&pValue->_L33), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, colorTyQ_to_string, snsFile); 
    return bSuccess;
}

int save_outC_TurnControlleur_Robot(const char *cpath, const outC_TurnControlleur_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".stop", (const void *)(&pValue->stop), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".speed", (const void *)(&pValue->speed), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L57", (const void *)(&pValue->_L57), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".dureeRotation", (const void *)(&pValue->dureeRotation), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".coefRot", (const void *)(&pValue->coefRot), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".x", (const void *)(&pValue->x), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L26", (const void *)(&pValue->_L26), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19", (const void *)(&pValue->_L19), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L27", (const void *)(&pValue->_L27), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L28", (const void *)(&pValue->_L28), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L29", (const void *)(&pValue->_L29), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L31", (const void *)(&pValue->_L31), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L32", (const void *)(&pValue->_L32), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L34", (const void *)(&pValue->_L34), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L37", (const void *)(&pValue->_L37), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38", (const void *)(&pValue->_L38), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L39", (const void *)(&pValue->_L39), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L40", (const void *)(&pValue->_L40), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L41", (const void *)(&pValue->_L41), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L43", (const void *)(&pValue->_L43), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L46", (const void *)(&pValue->_L46), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L48", (const void *)(&pValue->_L48), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L49", (const void *)(&pValue->_L49), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L50", (const void *)(&pValue->_L50), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L55", (const void *)(&pValue->_L55), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L56", (const void *)(&pValue->_L56), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_UpTime_Utilities(const char *cpath, const outC_UpTime_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".t", (const void *)(&pValue->t), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Integrator_1", (const void *)(&pValue->Context_Integrator_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_field(cpath, ".A_Output_Abs_1_float64", (const void *)(&pValue->A_Output_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".A_Input_Abs_1_float64", (const void *)(&pValue->A_Input_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_Abs_1_float64", (const void *)(&pValue->_L8_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_Abs_1_float64", (const void *)(&pValue->_L5_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Abs_1_float64", (const void *)(&pValue->_L3_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Abs_1_float64", (const void *)(&pValue->_L2_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Abs_1_float64", (const void *)(&pValue->_L1_Abs_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_Variation_Utilities(const char *cpath, const outC_Variation_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".varX", (const void *)(&pValue->varX), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_Integrator_1", (const void *)(&pValue->Context_Integrator_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Integrator_Utilities, snsFile);
    bSuccess &= save_context(cpath, ".Context_Normalize_1", (const void *)(&pValue->Context_Normalize_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_Normalize_Utilities, snsFile);
    bSuccess &= save_field(cpath, ".every", (const void *)(&pValue->every), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".A_Output_Abs_1_float64", (const void *)(&pValue->A_Output_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".A_Input_Abs_1_float64", (const void *)(&pValue->A_Input_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_Abs_1_float64", (const void *)(&pValue->_L8_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5_Abs_1_float64", (const void *)(&pValue->_L5_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_Abs_1_float64", (const void *)(&pValue->_L3_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_Abs_1_float64", (const void *)(&pValue->_L2_Abs_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_Abs_1_float64", (const void *)(&pValue->_L1_Abs_1_float64), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_VectAdd_vect_float64_2(const char *cpath, const outC_VectAdd_vect_float64_2 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".W_float64_2", (const void *)(&pValue->W_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_float64_2", (const void *)(&pValue->_L1_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_float64_2", (const void *)(&pValue->_L2_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_float64_2", (const void *)(&pValue->_L3_float64_2), pBaseAddr, array_float64_2_to_string, snsFile); 
    return bSuccess;
}

int save_outC_WallClock_City(const char *cpath, const outC_WallClock_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".time", (const void *)(&pValue->time), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, statusTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_WrongDir_City(const char *cpath, const outC_WrongDir_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".wrong", (const void *)(&pValue->wrong), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_MapADT_1", (const void *)(&pValue->Context_MapADT_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_MapADT_City, snsFile);
    bSuccess &= save_field(cpath, ".Output2_SinCosR_1_float64", (const void *)(&pValue->Output2_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Output1_SinCosR_1_float64", (const void *)(&pValue->Output1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".Input1_SinCosR_1_float64", (const void *)(&pValue->Input1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_SinCosR_1_float64", (const void *)(&pValue->_L3_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_SinCosR_1_float64", (const void *)(&pValue->_L2_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_SinCosR_1_float64", (const void *)(&pValue->_L1_SinCosR_1_float64), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, mapDataTy_City_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, phaseTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10", (const void *)(&pValue->_L10), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13", (const void *)(&pValue->_L13), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L14", (const void *)(&pValue->_L14), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16", (const void *)(&pValue->_L16), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17", (const void *)(&pValue->_L17), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18", (const void *)(&pValue->_L18), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20", (const void *)(&pValue->_L20), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21", (const void *)(&pValue->_L21), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L22", (const void *)(&pValue->_L22), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L23", (const void *)(&pValue->_L23), pBaseAddr, paramTLArr_City_to_string, snsFile); 
    return bSuccess;
}

int save_outC_actionArrayOnWheels_Robot(const char *cpath, const outC_actionArrayOnWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".speedL", (const void *)(&pValue->speedL), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".speedR", (const void *)(&pValue->speedR), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L78", (const void *)(&pValue->_L78), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L93", (const void *)(&pValue->_L93), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_actionOnWheels_3", (const void *)(&pValue->Context_actionOnWheels_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_actionOnWheels_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_instrPlus_2", (const void *)(&pValue->Context_instrPlus_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_instrPlus_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_undressSensorTy_1", (const void *)(&pValue->Context_undressSensorTy_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_undressSensorTy_Robot, snsFile);
    bSuccess &= save_field(cpath, ".index", (const void *)(&pValue->index), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, itiElemArr_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L65", (const void *)(&pValue->_L65), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L72", (const void *)(&pValue->_L72), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L71", (const void *)(&pValue->_L71), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L70", (const void *)(&pValue->_L70), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L73", (const void *)(&pValue->_L73), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L79", (const void *)(&pValue->_L79), pBaseAddr, itiElement_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L82", (const void *)(&pValue->_L82), pBaseAddr, itiElement_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L89", (const void *)(&pValue->_L89), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L69", (const void *)(&pValue->_L69), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L68", (const void *)(&pValue->_L68), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L94", (const void *)(&pValue->_L94), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L98", (const void *)(&pValue->_L98), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L99", (const void *)(&pValue->_L99), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L100", (const void *)(&pValue->_L100), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L101", (const void *)(&pValue->_L101), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L102", (const void *)(&pValue->_L102), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L103", (const void *)(&pValue->_L103), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L104", (const void *)(&pValue->_L104), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_actionOnWheels_Robot(const char *cpath, const outC_actionOnWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".speedL", (const void *)(&pValue->speedL), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".speedR", (const void *)(&pValue->speedR), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".finTurn", (const void *)(&pValue->finTurn), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_automatonGoPlus_1", (const void *)(&pValue->Context_automatonGoPlus_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_automatonGoPlus_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_TurnControlleur_2", (const void *)(&pValue->Context_TurnControlleur_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_TurnControlleur_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_undressItElem_1", (const void *)(&pValue->Context_undressItElem_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_undressItElem_Robot, snsFile);
    bSuccess &= save_field(cpath, ".WhenBlock1_clock", (const void *)(&pValue->WhenBlock1_clock), pBaseAddr, actionTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_go_WhenBlock1", (const void *)(&pValue->_L21_go_WhenBlock1), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20_go_WhenBlock1", (const void *)(&pValue->_L20_go_WhenBlock1), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18_go_WhenBlock1", (const void *)(&pValue->_L18_go_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L19_go_WhenBlock1", (const void *)(&pValue->_L19_go_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15_go_WhenBlock1", (const void *)(&pValue->_L15_go_WhenBlock1), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L10_go_WhenBlock1", (const void *)(&pValue->_L10_go_WhenBlock1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_go_WhenBlock1", (const void *)(&pValue->_L4_go_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L20_turn_WhenBlock1", (const void *)(&pValue->_L20_turn_WhenBlock1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L21_turn_WhenBlock1", (const void *)(&pValue->_L21_turn_WhenBlock1), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16_turn_WhenBlock1", (const void *)(&pValue->_L16_turn_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L17_turn_WhenBlock1", (const void *)(&pValue->_L17_turn_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_turn_WhenBlock1", (const void *)(&pValue->_L1_turn_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_stop_WhenBlock1", (const void *)(&pValue->_L3_stop_WhenBlock1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_stop_WhenBlock1", (const void *)(&pValue->_L1_stop_WhenBlock1), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".val", (const void *)(&pValue->val), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".act", (const void *)(&pValue->act), pBaseAddr, actionTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, itiElement_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, actionTy_Robot_to_string, snsFile); 
    return bSuccess;
}

int save_outC_addOne_Robot(const char *cpath, const outC_addOne_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".newIndex", (const void *)(&pValue->newIndex), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_automatonGoPlus_Robot(const char *cpath, const outC_automatonGoPlus_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".speedL", (const void *)(&pValue->speedL), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".speedR", (const void *)(&pValue->speedR), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_state_nxt", (const void *)(&pValue->goPlus_state_nxt), pBaseAddr, SSM_ST_goPlus_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_reset_act", (const void *)(&pValue->goPlus_reset_act), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_reset_nxt", (const void *)(&pValue->goPlus_reset_nxt), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_ComputeWheels_3", (const void *)(&pValue->Context_ComputeWheels_3), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_ComputeWheels_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_isGreen_2", (const void *)(&pValue->Context_isGreen_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_isGreen_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_isRed_1", (const void *)(&pValue->Context_isRed_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_isRed_Robot, snsFile);
    bSuccess &= save_field(cpath, ".goPlus_state_act", (const void *)(&pValue->goPlus_state_act), pBaseAddr, SSM_ST_goPlus_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L18_go_goPlus", (const void *)(&pValue->_L18_go_goPlus), pBaseAddr, wheelsTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15_go_goPlus", (const void *)(&pValue->_L15_go_goPlus), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L16_go_goPlus", (const void *)(&pValue->_L16_go_goPlus), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_go_goPlus", (const void *)(&pValue->_L2_go_goPlus), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_go_goPlus", (const void *)(&pValue->_L1_go_goPlus), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_stopCat_goPlus", (const void *)(&pValue->_L1_stopCat_goPlus), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_stopLight_goPlus", (const void *)(&pValue->_L1_stopLight_goPlus), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_state_sel", (const void *)(&pValue->goPlus_state_sel), pBaseAddr, SSM_ST_goPlus_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_fired_strong", (const void *)(&pValue->goPlus_fired_strong), pBaseAddr, SSM_TR_goPlus_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".goPlus_fired", (const void *)(&pValue->goPlus_fired), pBaseAddr, SSM_TR_goPlus_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".isGreen", (const void *)(&pValue->isGreen), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".isRed", (const void *)(&pValue->isRed), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_count_down_digital_int32(const char *cpath, const outC_count_down_digital_int32 *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".cpt_int32", (const void *)(&pValue->cpt_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4_int32", (const void *)(&pValue->_L4_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1_int32", (const void *)(&pValue->_L1_int32), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2_int32", (const void *)(&pValue->_L2_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3_int32", (const void *)(&pValue->_L3_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7_int32", (const void *)(&pValue->_L7_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8_int32", (const void *)(&pValue->_L8_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L13_int32", (const void *)(&pValue->_L13_int32), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_instrPlus_Robot(const char *cpath, const outC_instrPlus_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".newIndex", (const void *)(&pValue->newIndex), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".init", (const void *)(&pValue->init), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L38", (const void *)(&pValue->_L38), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_context(cpath, ".Context_addOne_2", (const void *)(&pValue->Context_addOne_2), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_addOne_Robot, snsFile);
    bSuccess &= save_context(cpath, ".Context_isGreen_1", (const void *)(&pValue->Context_isGreen_1), pBaseAddr, (PFN_SAVE_CONTEXT)save_outC_isGreen_Robot, snsFile);
    bSuccess &= save_field(cpath, ".cond", (const void *)(&pValue->cond), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L11", (const void *)(&pValue->_L11), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L12", (const void *)(&pValue->_L12), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L15", (const void *)(&pValue->_L15), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L35", (const void *)(&pValue->_L35), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L36", (const void *)(&pValue->_L36), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L39", (const void *)(&pValue->_L39), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L40", (const void *)(&pValue->_L40), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L42", (const void *)(&pValue->_L42), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L45", (const void *)(&pValue->_L45), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L46", (const void *)(&pValue->_L46), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L47", (const void *)(&pValue->_L47), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L44", (const void *)(&pValue->_L44), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L50", (const void *)(&pValue->_L50), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L51", (const void *)(&pValue->_L51), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L30", (const void *)(&pValue->_L30), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_isGreen_Robot(const char *cpath, const outC_isGreen_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".is_green", (const void *)(&pValue->is_green), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L9", (const void *)(&pValue->_L9), pBaseAddr, colorTy_to_string, snsFile); 
    return bSuccess;
}

int save_outC_isRed_Robot(const char *cpath, const outC_isRed_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".is_red", (const void *)(&pValue->is_red), pBaseAddr, kcg_bool_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L5", (const void *)(&pValue->_L5), pBaseAddr, kcg_uint8_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, kcg_bool_to_string, snsFile); 
    return bSuccess;
}

int save_outC_pos2vec_Utilities(const char *cpath, const outC_pos2vec_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".vec", (const void *)(&pValue->vec), pBaseAddr, array_float64_2_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L6", (const void *)(&pValue->_L6), pBaseAddr, array_float64_2_to_string, snsFile); 
    return bSuccess;
}

#ifdef __cplusplus
  #ifdef pSimoutC_readIti_RobotIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_readIti_RobotIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_readIti_RobotIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_readIti_RobotIOCVTable;
#endif

int save_outC_readIti_Robot(const char *cpath, const outC_readIti_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    SimString strValue;
    SimStringAlloc(&strValue);
    if (pSimoutC_readIti_RobotIOCVTable != NULL
        && pSimoutC_readIti_RobotIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bSuccess &= pSimoutC_readIti_RobotIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bSuccess &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_readIti_Robot) && bSuccess ; i++, pCur++)
            bSuccess &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t%s\n", cpath);
    SimStringFree(&strValue);
    return bSuccess;
}

#ifdef __cplusplus
  #ifdef pSimoutC_readObstacles_CityIOCVTable_defined
    extern struct SimImportedOpCtxVTable *pSimoutC_readObstacles_CityIOCVTable;
  #else 
    struct SimImportedOpCtxVTable *pSimoutC_readObstacles_CityIOCVTable = NULL;
  #endif
#else
  struct SimImportedOpCtxVTable *pSimoutC_readObstacles_CityIOCVTable;
#endif

int save_outC_readObstacles_City(const char *cpath, const outC_readObstacles_City *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCur = (unsigned char*)pValue;
    SimString strValue;
    SimStringAlloc(&strValue);
    if (pSimoutC_readObstacles_CityIOCVTable != NULL
        && pSimoutC_readObstacles_CityIOCVTable->m_pfnToString != NULL) {
        /* VTable function provided, call it */
        bSuccess &= pSimoutC_readObstacles_CityIOCVTable->m_pfnToString ((const void*)pValue, SimStringAppend, &strValue);
        bSuccess &= fprintf(snsFile, "%s", SimStringGet(&strValue))>=0;
    } else {
        /* Default dump: hexadecimal */
        for (i=0 ; i<sizeof(outC_readObstacles_City) && bSuccess ; i++, pCur++)
            bSuccess &= fprintf(snsFile, "%02X", *pCur)==2;
    }
    fprintf(snsFile, "\t%s\n", cpath);
    SimStringFree(&strValue);
    return bSuccess;
}

int save_outC_undressItElem_Robot(const char *cpath, const outC_undressItElem_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".action", (const void *)(&pValue->action), pBaseAddr, actionTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".value", (const void *)(&pValue->value), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, itiElement_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L8", (const void *)(&pValue->_L8), pBaseAddr, actionTy_Robot_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L7", (const void *)(&pValue->_L7), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_outC_undressSensorTy_Robot(const char *cpath, const outC_undressSensorTy_Robot *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".roadColor", (const void *)(&pValue->roadColor), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".frontColor", (const void *)(&pValue->frontColor), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, ".sonar", (const void *)(&pValue->sonar), pBaseAddr, kcg_int32_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L1", (const void *)(&pValue->_L1), pBaseAddr, sensorsTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, colorTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, kcg_int32_to_string, snsFile); 
    return bSuccess;
}

int save_outC_vec2pos_Utilities(const char *cpath, const outC_vec2pos_Utilities *pValue, const void *pBaseAddr, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= save_field(cpath, ".pos", (const void *)(&pValue->pos), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L2", (const void *)(&pValue->_L2), pBaseAddr, positionTy_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L3", (const void *)(&pValue->_L3), pBaseAddr, kcg_float64_to_string, snsFile); 
    bSuccess &= save_field(cpath, "._L4", (const void *)(&pValue->_L4), pBaseAddr, kcg_float64_to_string, snsFile); 
    return bSuccess;
}

int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_ModelBasedDesignOfRobotCh *inC,
                      outC_ModelBasedDesignOfRobotCh *outC) {
    int bSuccess = 1;
    char savRealFormat[MAX_REAL_FORMAT_LEN];
    FILE *snsFile = fopen(szFilePath, "w");
    if ( !snsFile )
        return 0;

    /* Force real number format to 17 significant digits */
    strcpy(savRealFormat, pConverter->m_RealFormat);
    strcpy(pConverter->m_RealFormat, "%.17g");

    /* Write mapping file checksum */
    bSuccess &= (fprintf(snsFile, "%s\n", szKcgTraceCheckSum) >= 0);

    /* Write cycle counter */
    bSuccess &= (fprintf(snsFile, "%u\n", nCycle) >= 0);

    /* Write all context variables */
    bSuccess &= save_inC_ModelBasedDesignOfRobotCh("inC", inC, (const void*)inC, snsFile);
    bSuccess &= save_outC_ModelBasedDesignOfRobotCh("outC", outC, (const void*)outC, snsFile);

    /* Restore real number format */
    strcpy(pConverter->m_RealFormat, savRealFormat);
    fclose(snsFile);
    return bSuccess;
}
/*********************************************
 * Snapshot Load functions
 *********************************************/
int read_line(FILE *snsFile, SimString *pstrLine) {
    char buf[1024];
    SimStringReset(pstrLine);
    if (feof(snsFile))
        return 0;
    /* Read entire line */
    while (fgets(buf, 100, snsFile) != NULL) {
        SimStringAppend(buf, pstrLine);
        if (buf[strlen(buf) - 1] == '\n')
            break;
    }
    /* Remove end of line characters */
    while (pstrLine->m_nLength > 0 && (pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\n' || pstrLine->m_pszBase[pstrLine->m_nLength-1] == '\r')) {
        pstrLine->m_pszBase[pstrLine->m_nLength-1] = '\0';
        pstrLine->m_nLength--;
    }
    return 1;
}

int load_var(void *pValue, PFN_STRING_TO_TYPE pfnStringToType, FILE *snsFile) {
    int bSuccess = 1;
    char *endptr;
    char *sep;
    SimString strLine;
    SimStringAlloc(&strLine);
    bSuccess = read_line(snsFile, &strLine);
    if (bSuccess) {
        sep = strrchr(SimStringGet(&strLine), '\t');
        if (sep)
            *sep = '\0';
        bSuccess = (pfnStringToType(SimStringGet(&strLine), pValue, &endptr) != 0
            && (*endptr=='\t' || *endptr=='\0' || *endptr==' '));
    }
    SimStringFree(&strLine);
    return bSuccess;
}

int load_inC_ModelBasedDesignOfRobotCh(inC_ModelBasedDesignOfRobotCh *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->InitialPhase), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->top), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->mapid), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->itiid), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_AgregateEvents_City(outC_AgregateEvents_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->events), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Interrupt), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_AgregateSensors_City(outC_AgregateSensors_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->SensorsData), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_sensorsTy, snsFile); 
    return bSuccess;
}

int load_outC_AllObstacles_City(outC_AllObstacles_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    int i0;
    bSuccess &= load_var((void *)(&pValue->obstacles), string_to_obstArr, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        bSuccess &= load_outC_OneObstacle_City(&pValue->Context_OneObstacle_1[i0], snsFile);
    }
    bSuccess &= load_outC_readObstacles_City(&pValue->Context_readObstacles_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_array_float64_10, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_paramObstArr_City, snsFile); 
    return bSuccess;
}

int load_outC_AngleDist_Utilities(outC_AngleDist_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->angle), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->dist), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_HypotR_mathext_float64(&pValue->Context_HypotR_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_Bound_Utilities(outC_Bound_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->xb), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Ma_Output_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I2_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I1_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Max_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Max_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Mi_Output_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I2_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I1_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25_Min_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_Min_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_CarGeometry_Robot(outC_CarGeometry_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->newpos), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->newphase), string_to_phaseTy, snsFile); 
    bSuccess &= load_outC_vec2pos_Utilities(&pValue->Context_vec2pos_1, snsFile);
    bSuccess &= load_outC_VectAdd_vect_float64_2(&pValue->Context_VectAdd_1, snsFile);
    bSuccess &= load_outC_MatVectProd_vect_float64_2_2(&pValue->Context_MatVectProd_1, snsFile);
    bSuccess &= load_outC_RotMatrix_Utilities(&pValue->Context_RotMatrix_1, snsFile);
    bSuccess &= load_outC_pos2vec_Utilities(&pValue->Context_pos2vec_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_phaseTy, snsFile); 
    return bSuccess;
}

int load_outC_CollisionAux_City(outC_CollisionAux_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->accnew), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_Normalize_Utilities(&pValue->Context_Normalize_1, snsFile);
    bSuccess &= load_outC_AngleDist_Utilities(&pValue->Context_AngleDist_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->A_Output_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->A_Input_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Abs_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output2_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Input1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->angle), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->dist), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_obstTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L36), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L39), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L40), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L41), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L42), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_Collision_City(outC_Collision_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    int i0;
    bSuccess &= load_var((void *)(&pValue->collisionEvent), string_to_kcg_bool, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        bSuccess &= load_outC_CollisionAux_City(&pValue->Context_CollisionAux_1[i0], snsFile);
    }
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_array, snsFile); 
    return bSuccess;
}

int load_outC_ComputeWheels_Robot(outC_ComputeWheels_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->wheels), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_outC_PIDControler_Robot(&pValue->Context_PIDControler_3, snsFile);
    bSuccess &= load_var((void *)(&pValue->else_clock_IfBlock1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->IfBlock1_clock), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15_then_IfBlock1), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17_then_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_else_else_IfBlock1), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_else_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_else_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6_else_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10_then_else_IfBlock1), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18_then_else_IfBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->epsilon), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->localSpeed), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->localWheels), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L159), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L161), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L163), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L164), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_Driver_Robot(outC_Driver_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RotationalSpeed), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->RobotStatus), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_state_nxt), string_to_SSM_ST_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_reset_act), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_reset_nxt), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_actionArrayOnWheels_Robot(&pValue->Context_actionArrayOnWheels_2, snsFile);
    bSuccess &= load_var((void *)(&pValue->Robot_state_act), string_to_SSM_ST_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11_Preparing_Robot), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Preparing_Robot), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9_Running_Robot), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_Running_Robot), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Running_Robot), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->arriving_Running_Robot), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11_Arrived_Robot), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Arrived_Robot), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_Stopped_Robot), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Stopped_Robot), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_state_sel), string_to_SSM_ST_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_fired_strong), string_to_SSM_TR_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Robot_fired), string_to_SSM_TR_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->zero), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_itiElemArr_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_EncodeColor_Utilities(outC_EncodeColor_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->colorRGB), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_colorTy, snsFile); 
    return bSuccess;
}

int load_outC_EventDetection_City(outC_EventDetection_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->Interrupt), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Events), string_to_eventTy, snsFile); 
    bSuccess &= load_outC_AgregateEvents_City(&pValue->Context_AgregateEvents_1, snsFile);
    bSuccess &= load_outC_Collision_City(&pValue->Context_Collision_1, snsFile);
    bSuccess &= load_outC_Exit_City(&pValue->Context_Exit_1, snsFile);
    bSuccess &= load_outC_Speed_City(&pValue->Context_Speed_1, snsFile);
    bSuccess &= load_outC_Light_City(&pValue->Context_Light_1, snsFile);
    bSuccess &= load_outC_WrongDir_City(&pValue->Context_WrongDir_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_sigTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_trafLArr, snsFile); 
    return bSuccess;
}

int load_outC_ExitAux_City(outC_ExitAux_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->res), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_paramTLArr_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_positionTy, snsFile); 
    return bSuccess;
}

int load_outC_Exit_City(outC_Exit_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    int i0;
    bSuccess &= load_var((void *)(&pValue->exitRoad), string_to_kcg_bool, snsFile); 
    for (i0 = 0; i0<2; i0++) {
        bSuccess &= load_outC_ExitAux_City(&pValue->Context_ExitAux_1[i0], snsFile);
    }
    for (i0 = 0; i0<2; i0++) {
        bSuccess &= load_outC_CarGeometry_Robot(&pValue->Context_CarGeometry_1[i0], snsFile);
    }
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_array_int32_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to__3_array, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to__2_array, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to__2_array, snsFile); 
    return bSuccess;
}

int load_outC_GroundColorDetection_City(outC_GroundColorDetection_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->roadColor), string_to_colorTy, snsFile); 
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_paramTLArr_City, snsFile); 
    return bSuccess;
}

int load_outC_HypotR_mathext_float64(outC_HypotR_mathext_float64 *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->HypotR_O_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6_float64), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_IndividualRobotControl_Robot(outC_IndividualRobotControl_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RobotPhase), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->RobotStatus), string_to_statusTy, snsFile); 
    bSuccess &= load_outC_PhysicalModel_Robot(&pValue->Context_PhysicalModel_1, snsFile);
    bSuccess &= load_outC_Driver_Robot(&pValue->Context_Driver_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_itiElemArr_Robot, snsFile); 
    return bSuccess;
}

int load_outC_Integrator_Utilities(outC_Integrator_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->result), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->s), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_Light_City(outC_Light_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->lightRun), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_trafLArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_trafLTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_paramTLArr_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_colorTyQ, snsFile); 
    return bSuccess;
}

int load_outC_MapADT_City(outC_MapADT_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    unsigned int iTmp;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bSuccess = read_line(snsFile, &strLine);
    if (bSuccess) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_MapADT_CityIOCVTable != NULL
            && pSimoutC_MapADT_CityIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bSuccess &= pSimoutC_MapADT_CityIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_MapADT_City) && bSuccess; i++, pCurValue++, pCurString+=2) {
                bSuccess &= sscanf(pCurString, "%02X", &iTmp)==1;
                *pCurValue = (unsigned char)iTmp;
            }
        }
    }
    bSuccess &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bSuccess;
}

int load_outC_MatVectProd_vect_float64_2_2(outC_MatVectProd_vect_float64_2_2 *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->R_float64_2_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7_ScalProd_1_float64_2), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6_ScalProd_1_float64_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_ScalProd_1_float64_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_ScalProd_1_float64_2), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_ScalProd_1_float64_2), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_float64_2_2), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_float64_2_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_float64_2_2), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7_float64_2_2), string_to_array_float64_2, snsFile); 
    return bSuccess;
}

int load_outC_ModelBasedDesignOfRobotCh(outC_ModelBasedDesignOfRobotCh *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RobotPhase), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->RobotStatus), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Signalization), string_to_sigTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Events), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->scoreA), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->scoreB), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->time), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_interTy, snsFile); 
    bSuccess &= load_outC_ScoringB_City(&pValue->Context_ScoringB_1, snsFile);
    bSuccess &= load_outC_ScoringA_City(&pValue->Context_ScoringA_1, snsFile);
    bSuccess &= load_outC_SmartCityControl_City(&pValue->Context_SmartCityControl_1, snsFile);
    bSuccess &= load_outC_WallClock_City(&pValue->Context_WallClock_1, snsFile);
    bSuccess &= load_outC_IndividualRobotControl_Robot(&pValue->Context_IndividualRobotControl_1, snsFile);
    bSuccess &= load_outC_readIti_Robot(&pValue->Context_readIti_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_sigTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_itiElemArr_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_sensorsTy, snsFile); 
    return bSuccess;
}

int load_outC_Normalize_Utilities(outC_Normalize_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->normal), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_RoundFloor_math_float64(&pValue->Context_RoundFloor_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_ObstaclesDetection_City(outC_ObstaclesDetection_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    int i0;
    bSuccess &= load_var((void *)(&pValue->sonar), string_to_kcg_int32, snsFile); 
    for (i0 = 0; i0<10; i0++) {
        bSuccess &= load_outC_OneObstacleDet_City(&pValue->Context_OneObstacleDet_3[i0], snsFile);
    }
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_array, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_OneObstacleDet_City(outC_OneObstacleDet_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->accnew), string_to_kcg_int32, snsFile); 
    bSuccess &= load_outC_Normalize_Utilities(&pValue->Context_Normalize_1, snsFile);
    bSuccess &= load_outC_AngleDist_Utilities(&pValue->Context_AngleDist_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->A_Output_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->A_Input_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Abs_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Mi_Output_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I2_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I1_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25_Min_3_int32), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_Min_3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L36), string_to_obstTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L46), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L48), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_OneObstacle_City(outC_OneObstacle_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->obstacle), string_to_obstTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_paramObstTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_obstTy, snsFile); 
    return bSuccess;
}

int load_outC_OneTL_City(outC_OneTL_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->trafL), string_to_trafLTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->else_clock_IfBlock1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->IfBlock1_clock), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Ma_Output_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I2_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->I1_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Max_1_int32), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Max_1_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_then_IfBlock1), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_else_else_IfBlock1), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_then_else_IfBlock1), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->cpt), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->period), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->light), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->tGreen), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->tAmber), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->tRed), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->tPhase), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_trafLTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_colorTyQ, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_paramTLTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L44), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L50), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L51), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L54), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L55), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L57), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L58), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L59), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L60), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_PIDControler_Robot(outC_PIDControler_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->epsilon), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L62), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_1, snsFile);
    bSuccess &= load_outC_isGreen_Robot(&pValue->Context_isGreen_1, snsFile);
    bSuccess &= load_outC_isRed_Robot(&pValue->Context_isRed_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->dev), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->errorColor), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L44), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L42), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L41), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L40), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L61), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L60), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L59), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L58), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L57), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L56), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L55), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L54), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L53), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L50), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L51), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L52), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L49), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L48), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L63), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L65), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L67), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L69), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L70), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L71), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L72), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L73), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_PhysicalModel_Robot(outC_PhysicalModel_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RobotPhase), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_state_nxt), string_to_SSM_ST_SM1, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_reset_act), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_reset_nxt), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->y0), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->x0), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->alpha0), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_CarGeometry_Robot(&pValue->Context_CarGeometry_1, snsFile);
    bSuccess &= load_outC_CarGeometry_Robot(&pValue->Context_CarGeometry_2, snsFile);
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_4, snsFile);
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_5, snsFile);
    bSuccess &= load_outC_Normalize_Utilities(&pValue->Context_Normalize_3, snsFile);
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_7, snsFile);
    bSuccess &= load_outC_Bound_Utilities(&pValue->Context_Bound_3, snsFile);
    bSuccess &= load_outC_Bound_Utilities(&pValue->Context_Bound_4, snsFile);
    bSuccess &= load_var((void *)(&pValue->SM1_state_act), string_to_SSM_ST_SM1, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output2_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output1_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Input1_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_SinCosR_16_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L71_positionning_SM1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L69_positionning_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L70_positionning_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L68_positionning_SM1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L67_positionning_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L66_positionning_SM1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L55_positionning_SM1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L63_positionning_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L62_positionning_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L61_positionning_SM1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L49_on_SM1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L48_on_SM1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L46_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45_on_SM1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35_on_SM1), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L36_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6_on_SM1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->vRight_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->vLeft_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->si_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->co_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->v_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->alpha_on_SM1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_state_sel), string_to_SSM_ST_SM1, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_fired_strong), string_to_SSM_TR_SM1, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SM1_fired), string_to_SSM_TR_SM1, snsFile); 
    return bSuccess;
}

int load_outC_RisingEdge_digital(outC_RisingEdge_digital *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RE_Output), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_RobotSensors_City(outC_RobotSensors_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->SensorsData), string_to_sensorsTy, snsFile); 
    bSuccess &= load_outC_AgregateSensors_City(&pValue->Context_AgregateSensors_1, snsFile);
    bSuccess &= load_outC_GroundColorDetection_City(&pValue->Context_GroundColorDetection_1, snsFile);
    bSuccess &= load_outC_ObstaclesDetection_City(&pValue->Context_ObstaclesDetection_1, snsFile);
    bSuccess &= load_outC_TraficLightsDetection_City(&pValue->Context_TraficLightsDetection_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_sigTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_trafLArr, snsFile); 
    return bSuccess;
}

int load_outC_RotMatrix_Utilities(outC_RotMatrix_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->res), string_to_array_float64_2_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output2_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output1_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Input1_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_SinCosR_2_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->si), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->co), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_array_float64_2_2, snsFile); 
    return bSuccess;
}

int load_outC_RoundFloor_math_float64(outC_RoundFloor_math_float64 *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->RF_Output_float64), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26_float64), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32_float64), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33_float64), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38_float64), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L41_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43_float64), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_ScoringA_City(outC_ScoringA_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->score), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38), string_to_kcg_int32, snsFile); 
    bSuccess &= load_outC_RisingEdge_digital(&pValue->Context_RisingEdge_5, snsFile);
    bSuccess &= load_outC_RisingEdge_digital(&pValue->Context_RisingEdge_1, snsFile);
    bSuccess &= load_outC_RisingEdge_digital(&pValue->Context_RisingEdge_3, snsFile);
    bSuccess &= load_outC_RisingEdge_digital(&pValue->Context_RisingEdge_4, snsFile);
    bSuccess &= load_outC_RisingEdge_digital(&pValue->Context_RisingEdge_7, snsFile);
    bSuccess &= load_outC_count_down_digital_int32(&pValue->Context_count_down_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L36), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L39), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L41), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L42), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L44), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L46), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L48), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L51), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L50), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L52), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L53), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L54), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L55), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L56), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L57), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L58), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L59), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_ScoringB_City(outC_ScoringB_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->score), string_to_kcg_int32, snsFile); 
    bSuccess &= load_outC_Variation_Utilities(&pValue->Context_Variation_1, snsFile);
    bSuccess &= load_outC_UpTime_Utilities(&pValue->Context_UpTime_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_SmartCityControl_City(outC_SmartCityControl_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->Signalization), string_to_sigTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Interrupt), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->SensorsData), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Events), string_to_eventTy, snsFile); 
    bSuccess &= load_outC_EventDetection_City(&pValue->Context_EventDetection_1, snsFile);
    bSuccess &= load_outC_RobotSensors_City(&pValue->Context_RobotSensors_1, snsFile);
    bSuccess &= load_outC_AllObstacles_City(&pValue->Context_AllObstacles_1, snsFile);
    bSuccess &= load_outC_TrafficLights_City(&pValue->Context_TrafficLights_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_eventTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_interTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_trafLArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_obstArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_sigTy, snsFile); 
    return bSuccess;
}

int load_outC_Speed_City(outC_Speed_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->speedExcess), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_paramTLArr_City, snsFile); 
    return bSuccess;
}

int load_outC_TrafficLights_City(outC_TrafficLights_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    int i0;
    bSuccess &= load_var((void *)(&pValue->allLights), string_to_trafLArr, snsFile); 
    for (i0 = 0; i0<5; i0++) {
        bSuccess &= load_outC_OneTL_City(&pValue->Context_OneTL_1[i0], snsFile);
    }
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_trafLArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_paramTLArr_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31), string_to_array_float64_5, snsFile); 
    return bSuccess;
}

int load_outC_TraficLightsDetection_City(outC_TraficLightsDetection_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->lightsColor), string_to_colorTy, snsFile); 
    bSuccess &= load_outC_EncodeColor_Utilities(&pValue->Context_EncodeColor_1, snsFile);
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_2, snsFile);
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_trafLArr, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L24), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L25), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_trafLTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L33), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_paramTLArr_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_colorTyQ, snsFile); 
    return bSuccess;
}

int load_outC_TurnControlleur_Robot(outC_TurnControlleur_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->stop), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->speed), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L57), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->dureeRotation), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->coefRot), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->x), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L26), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L27), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L28), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L29), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L31), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L32), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L34), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L37), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L39), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L40), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L41), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L43), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L44), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L46), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L48), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L49), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L50), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L51), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L55), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L56), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_UpTime_Utilities(outC_UpTime_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->t), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->A_Output_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->A_Input_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Abs_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_Variation_Utilities(outC_Variation_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->varX), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_outC_Integrator_Utilities(&pValue->Context_Integrator_1, snsFile);
    bSuccess &= load_outC_Normalize_Utilities(&pValue->Context_Normalize_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->every), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->A_Output_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->A_Input_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_Abs_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_Abs_1_float64), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_VectAdd_vect_float64_2(outC_VectAdd_vect_float64_2 *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->W_float64_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_float64_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_float64_2), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_float64_2), string_to_array_float64_2, snsFile); 
    return bSuccess;
}

int load_outC_WallClock_City(outC_WallClock_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->time), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_statusTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_WrongDir_City(outC_WrongDir_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->wrong), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_MapADT_City(&pValue->Context_MapADT_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->Output2_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Output1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->Input1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_SinCosR_1_float64), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_mapDataTy_City, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_phaseTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L14), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L22), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L23), string_to_paramTLArr_City, snsFile); 
    return bSuccess;
}

int load_outC_actionArrayOnWheels_Robot(outC_actionArrayOnWheels_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->speedL), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->speedR), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L78), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L93), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_actionOnWheels_Robot(&pValue->Context_actionOnWheels_3, snsFile);
    bSuccess &= load_outC_instrPlus_Robot(&pValue->Context_instrPlus_2, snsFile);
    bSuccess &= load_outC_undressSensorTy_Robot(&pValue->Context_undressSensorTy_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->index), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_itiElemArr_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L65), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L72), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L71), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L70), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L73), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L79), string_to_itiElement_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L82), string_to_itiElement_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L89), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L69), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L68), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L94), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L98), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L99), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L100), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L101), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L102), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L103), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L104), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_actionOnWheels_Robot(outC_actionOnWheels_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->speedL), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->speedR), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->finTurn), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_automatonGoPlus_Robot(&pValue->Context_automatonGoPlus_1, snsFile);
    bSuccess &= load_outC_TurnControlleur_Robot(&pValue->Context_TurnControlleur_2, snsFile);
    bSuccess &= load_outC_undressItElem_Robot(&pValue->Context_undressItElem_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->WhenBlock1_clock), string_to_actionTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_go_WhenBlock1), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20_go_WhenBlock1), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18_go_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L19_go_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15_go_WhenBlock1), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L10_go_WhenBlock1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_go_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L20_turn_WhenBlock1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L21_turn_WhenBlock1), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16_turn_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L17_turn_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_turn_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_stop_WhenBlock1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_stop_WhenBlock1), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->val), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->act), string_to_actionTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_itiElement_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_actionTy_Robot, snsFile); 
    return bSuccess;
}

int load_outC_addOne_Robot(outC_addOne_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->newIndex), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_automatonGoPlus_Robot(outC_automatonGoPlus_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->speedL), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->speedR), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_state_nxt), string_to_SSM_ST_goPlus, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_reset_act), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_reset_nxt), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_ComputeWheels_Robot(&pValue->Context_ComputeWheels_3, snsFile);
    bSuccess &= load_outC_isGreen_Robot(&pValue->Context_isGreen_2, snsFile);
    bSuccess &= load_outC_isRed_Robot(&pValue->Context_isRed_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->goPlus_state_act), string_to_SSM_ST_goPlus, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L18_go_goPlus), string_to_wheelsTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15_go_goPlus), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L16_go_goPlus), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_go_goPlus), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_go_goPlus), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_stopCat_goPlus), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_stopLight_goPlus), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_state_sel), string_to_SSM_ST_goPlus, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_fired_strong), string_to_SSM_TR_goPlus, snsFile); 
    bSuccess &= load_var((void *)(&pValue->goPlus_fired), string_to_SSM_TR_goPlus, snsFile); 
    bSuccess &= load_var((void *)(&pValue->isGreen), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->isRed), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_count_down_digital_int32(outC_count_down_digital_int32 *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->cpt_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1_int32), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8_int32), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L13_int32), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_instrPlus_Robot(outC_instrPlus_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->newIndex), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->init), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L38), string_to_kcg_bool, snsFile); 
    bSuccess &= load_outC_addOne_Robot(&pValue->Context_addOne_2, snsFile);
    bSuccess &= load_outC_isGreen_Robot(&pValue->Context_isGreen_1, snsFile);
    bSuccess &= load_var((void *)(&pValue->cond), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L11), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L12), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L15), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L35), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L36), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L39), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L40), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L42), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L45), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L46), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L47), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L44), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L50), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L51), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L30), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_isGreen_Robot(outC_isGreen_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->is_green), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L9), string_to_colorTy, snsFile); 
    return bSuccess;
}

int load_outC_isRed_Robot(outC_isRed_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->is_red), string_to_kcg_bool, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L5), string_to_kcg_uint8, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_kcg_bool, snsFile); 
    return bSuccess;
}

int load_outC_pos2vec_Utilities(outC_pos2vec_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->vec), string_to_array_float64_2, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L6), string_to_array_float64_2, snsFile); 
    return bSuccess;
}

int load_outC_readIti_Robot(outC_readIti_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    unsigned int iTmp;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bSuccess = read_line(snsFile, &strLine);
    if (bSuccess) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_readIti_RobotIOCVTable != NULL
            && pSimoutC_readIti_RobotIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bSuccess &= pSimoutC_readIti_RobotIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_readIti_Robot) && bSuccess; i++, pCurValue++, pCurString+=2) {
                bSuccess &= sscanf(pCurString, "%02X", &iTmp)==1;
                *pCurValue = (unsigned char)iTmp;
            }
        }
    }
    bSuccess &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bSuccess;
}

int load_outC_readObstacles_City(outC_readObstacles_City *pValue, FILE *snsFile) {
    int bSuccess = 1;
    size_t i;
    unsigned char* pCurValue = (unsigned char*)pValue;
    unsigned int iTmp;
    char* pCurString = NULL;
    SimString strLine;
    SimStringAlloc(&strLine);
    bSuccess = read_line(snsFile, &strLine);
    if (bSuccess) {
        pCurString = (char*)SimStringGet(&strLine);
        if (pSimoutC_readObstacles_CityIOCVTable != NULL
            && pSimoutC_readObstacles_CityIOCVTable->m_pfnFromString != NULL) {
            /* VTable function provided, call it */
            bSuccess &= pSimoutC_readObstacles_CityIOCVTable->m_pfnFromString (pCurString, (void*)pValue, &pCurString);
        } else {
            /* Default dump: hexadecimal */
            for (i=0 ; i<sizeof(outC_readObstacles_City) && bSuccess; i++, pCurValue++, pCurString+=2) {
                bSuccess &= sscanf(pCurString, "%02X", &iTmp)==1;
                *pCurValue = (unsigned char)iTmp;
            }
        }
    }
    bSuccess &= (*pCurString=='\t' || *pCurString=='\0' || *pCurString==' ');
    SimStringFree(&strLine);
    return bSuccess;
}

int load_outC_undressItElem_Robot(outC_undressItElem_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->action), string_to_actionTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->value), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_itiElement_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L8), string_to_actionTy_Robot, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L7), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_outC_undressSensorTy_Robot(outC_undressSensorTy_Robot *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->roadColor), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->frontColor), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->sonar), string_to_kcg_int32, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L1), string_to_sensorsTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_colorTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_kcg_int32, snsFile); 
    return bSuccess;
}

int load_outC_vec2pos_Utilities(outC_vec2pos_Utilities *pValue, FILE *snsFile) {
    int bSuccess = 1;
    bSuccess &= load_var((void *)(&pValue->pos), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L2), string_to_positionTy, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L3), string_to_kcg_float64, snsFile); 
    bSuccess &= load_var((void *)(&pValue->_L4), string_to_kcg_float64, snsFile); 
    return bSuccess;
}

int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_ModelBasedDesignOfRobotCh *inC,
                      outC_ModelBasedDesignOfRobotCh *outC) {
    int bSuccess = 1;
    FILE *snsFile = fopen(szFilePath, "r");
    SimString strLine;
    SimStringAlloc(&strLine);
    if ( !snsFile )
        return 0;

    /* Read and verify mapping file checksum */
    bSuccess = read_line(snsFile, &strLine);
    if (bSuccess)
        bSuccess = strcmp(SimStringGet(&strLine), szKcgTraceCheckSum)==0;

    /* Read cycle counter */
    if (bSuccess)
        bSuccess = (fscanf(snsFile, "%u\n", nCycle) == 1);

    /* Read all context variables */
    if (bSuccess) {
        bSuccess &= load_inC_ModelBasedDesignOfRobotCh(inC, snsFile);
        bSuccess &= load_outC_ModelBasedDesignOfRobotCh(outC, snsFile);
    }

    fclose(snsFile);
    SimStringFree(&strLine);
    return bSuccess;
}
