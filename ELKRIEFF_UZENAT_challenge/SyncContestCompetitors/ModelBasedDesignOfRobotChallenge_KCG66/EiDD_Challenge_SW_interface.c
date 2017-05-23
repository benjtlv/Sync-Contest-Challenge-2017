#include "EiDD_Challenge_SW_interface.h"
#include "EiDD_Challenge_SW_snapshot.h"
#include "SmuVTable.h"
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "aba4e2fc2a4de5fdd79591364a2b6faa";
const char* _SCSIM_SmuTypesCheckSum = "3777c12fdc87a2398579a6499e23daec";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
    return 1;
}
int notvalid(void * pHandle) {
    return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_ModelBasedDesignOfRobotCh inputs_ctx;
static inC_ModelBasedDesignOfRobotCh inputs_ctx_restore;
static inC_ModelBasedDesignOfRobotCh inputs_ctx_execute;
outC_ModelBasedDesignOfRobotCh outputs_ctx;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
    kcg_copy_phaseTy(&(inputs_ctx.InitialPhase), &(inputs_ctx_restore.InitialPhase));
    inputs_ctx.top = inputs_ctx_restore.top;
    inputs_ctx.mapid = inputs_ctx_restore.mapid;
    inputs_ctx.itiid = inputs_ctx_restore.itiid;
    memset((void*)&outputs_ctx, 0,  sizeof(outputs_ctx));

    /* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
    pSimulator->m_pfnAcquireValueMutex(pSimulator);
    kcg_copy_phaseTy(&(inputs_ctx_execute.InitialPhase), &(inputs_ctx.InitialPhase));
    inputs_ctx_execute.top = inputs_ctx.top;
    inputs_ctx_execute.mapid = inputs_ctx.mapid;
    inputs_ctx_execute.itiid = inputs_ctx.itiid;
    pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Init/Reset function encapsulation
 *******************************/
int SimInit(void) {
    int nRet=0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_USER_DEFINED_INIT
    ModelBasedDesignOfRobotCh_init(&outputs_ctx);
    nRet=1;
#else /* KCG_USER_DEFINED_INIT */
    nRet=0;
#endif /* KCG_USER_DEFINED_INIT */
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif /* EXTENDED_SIM */
    return nRet;
}

int SimReset(void) {
    int nRet=0;
    _SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
    BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
    ModelBasedDesignOfRobotCh_reset(&outputs_ctx);
    nRet=1;
#else /* KCG_NO_EXTERN_CALL_TO_RESET */
    nRet=0;
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */
#ifdef EXTENDED_SIM
    AfterSimInit();
#endif /* EXTENDED_SIM */
    return nRet;
}

#ifdef __cplusplus
  #ifdef pSimoutC_ModelBasedDesignOfRobotChCIVTable_defined
    extern struct SimCustomInitVTable *pSimoutC_ModelBasedDesignOfRobotChCIVTable;
  #else 
    struct SimCustomInitVTable *pSimoutC_ModelBasedDesignOfRobotChCIVTable = NULL;
  #endif
#else
  struct SimCustomInitVTable *pSimoutC_ModelBasedDesignOfRobotChCIVTable;
#endif

int SimCustomInit(void) {
    int nRet = 0;
    if (pSimoutC_ModelBasedDesignOfRobotChCIVTable != NULL
        && pSimoutC_ModelBasedDesignOfRobotChCIVTable->m_pfnCustomInit != NULL) {
        /* VTable function provided => call it */
        nRet = pSimoutC_ModelBasedDesignOfRobotChCIVTable->m_pfnCustomInit ((void*)&outputs_ctx);
    } else {
        /* VTable misssing => error */
        nRet = 0;
    }
    return nRet;
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
/*******************************
 * Cyclic function encapsulation
 *******************************/
int SimStep(void) {
#ifdef EXTENDED_SIM
    if (GraphicalInputsConnected)
        BeforeSimStep();
#endif /* EXTENDED_SIM */
    _SCSIM_ExecuteInterface();
    ModelBasedDesignOfRobotCh(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
    AfterSimStep();
#endif /* EXTENDED_SIM */
    return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
    ExtendedSimStop();
#endif /* EXTENDED_SIM */
    return 1;
}

int SsmGetDumpSize(void) {
    int nSize = 0;
    nSize += sizeof(inC_ModelBasedDesignOfRobotCh);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
    nSize += sizeof(outC_ModelBasedDesignOfRobotCh);
#ifdef EXTENDED_SIM
    nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
    return nSize;
}

void SsmGatherDumpData(char * pData) {
    char* pCurrent = pData;
    memcpy(pCurrent, &inputs_ctx, sizeof(inC_ModelBasedDesignOfRobotCh));
    pCurrent += sizeof(inC_ModelBasedDesignOfRobotCh);

    /* separate_io: dump (not in ctx) inputs */

    /* separate_io: dump (not in ctx) outputs */
    memcpy(pCurrent, &outputs_ctx, sizeof(outC_ModelBasedDesignOfRobotCh));
    pCurrent += sizeof(outC_ModelBasedDesignOfRobotCh);
#ifdef EXTENDED_SIM
    ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
    const char* pCurrent = pData;
    memcpy(&inputs_ctx, pCurrent, sizeof(inC_ModelBasedDesignOfRobotCh));
    pCurrent += sizeof(inC_ModelBasedDesignOfRobotCh);

    /* separate_io: restore (not in ctx) inputs */

    /* separate_io: restore (not in ctx) outputs */
    memcpy(&outputs_ctx, pCurrent, sizeof(outC_ModelBasedDesignOfRobotCh));
    pCurrent += sizeof(outC_ModelBasedDesignOfRobotCh);
#ifdef EXTENDED_SIM
    ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

int SsmSaveSnapshot(const char * szFilePath, size_t nCycle) {
    return save_snapshot(szFilePath, nCycle,
        &inputs_ctx,
        &outputs_ctx);
}

int SsmLoadSnapshot(const char * szFilePath, size_t *nCycle) {
    return load_snapshot(szFilePath, nCycle,
        &inputs_ctx,
        &outputs_ctx);
}

const char * SsmGetCheckSum() {
    return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
    return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
    UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
    GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

#ifdef __cplusplus
} /* "C" */
#endif
