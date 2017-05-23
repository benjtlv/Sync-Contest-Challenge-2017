#ifndef EIDD_CHALLENGE_SW_SNAPSHOT_API
#define EIDD_CHALLENGE_SW_SNAPSHOT_API

#include "ModelBasedDesignOfRobotCh.h"
#include "stdio.h"

/*********************************************
 * Main Snapshot Save/Load functions
 *********************************************/
extern int save_snapshot(const char *szFilePath, size_t nCycle,
                      inC_ModelBasedDesignOfRobotCh *inC,
                      outC_ModelBasedDesignOfRobotCh *outC);
extern int load_snapshot(const char *szFilePath, size_t *nCycle,
                      inC_ModelBasedDesignOfRobotCh *inC,
                      outC_ModelBasedDesignOfRobotCh *outC);

/**********************************************
 * Operators context Save/Load sub-functions
 *********************************************/
extern int save_inC_ModelBasedDesignOfRobotCh(const char *cpath, const inC_ModelBasedDesignOfRobotCh *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_inC_ModelBasedDesignOfRobotCh(inC_ModelBasedDesignOfRobotCh *pValue, FILE *snsFile);
extern int save_outC_AgregateEvents_City(const char *cpath, const outC_AgregateEvents_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_AgregateEvents_City(outC_AgregateEvents_City *pValue, FILE *snsFile);
extern int save_outC_AgregateSensors_City(const char *cpath, const outC_AgregateSensors_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_AgregateSensors_City(outC_AgregateSensors_City *pValue, FILE *snsFile);
extern int save_outC_AllObstacles_City(const char *cpath, const outC_AllObstacles_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_AllObstacles_City(outC_AllObstacles_City *pValue, FILE *snsFile);
extern int save_outC_AngleDist_Utilities(const char *cpath, const outC_AngleDist_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_AngleDist_Utilities(outC_AngleDist_Utilities *pValue, FILE *snsFile);
extern int save_outC_Bound_Utilities(const char *cpath, const outC_Bound_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Bound_Utilities(outC_Bound_Utilities *pValue, FILE *snsFile);
extern int save_outC_CarGeometry_Robot(const char *cpath, const outC_CarGeometry_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_CarGeometry_Robot(outC_CarGeometry_Robot *pValue, FILE *snsFile);
extern int save_outC_CollisionAux_City(const char *cpath, const outC_CollisionAux_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_CollisionAux_City(outC_CollisionAux_City *pValue, FILE *snsFile);
extern int save_outC_Collision_City(const char *cpath, const outC_Collision_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Collision_City(outC_Collision_City *pValue, FILE *snsFile);
extern int save_outC_ComputeWheels_Robot(const char *cpath, const outC_ComputeWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ComputeWheels_Robot(outC_ComputeWheels_Robot *pValue, FILE *snsFile);
extern int save_outC_Driver_Robot(const char *cpath, const outC_Driver_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Driver_Robot(outC_Driver_Robot *pValue, FILE *snsFile);
extern int save_outC_EncodeColor_Utilities(const char *cpath, const outC_EncodeColor_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_EncodeColor_Utilities(outC_EncodeColor_Utilities *pValue, FILE *snsFile);
extern int save_outC_EventDetection_City(const char *cpath, const outC_EventDetection_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_EventDetection_City(outC_EventDetection_City *pValue, FILE *snsFile);
extern int save_outC_ExitAux_City(const char *cpath, const outC_ExitAux_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ExitAux_City(outC_ExitAux_City *pValue, FILE *snsFile);
extern int save_outC_Exit_City(const char *cpath, const outC_Exit_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Exit_City(outC_Exit_City *pValue, FILE *snsFile);
extern int save_outC_GroundColorDetection_City(const char *cpath, const outC_GroundColorDetection_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_GroundColorDetection_City(outC_GroundColorDetection_City *pValue, FILE *snsFile);
extern int save_outC_HypotR_mathext_float64(const char *cpath, const outC_HypotR_mathext_float64 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_HypotR_mathext_float64(outC_HypotR_mathext_float64 *pValue, FILE *snsFile);
extern int save_outC_IndividualRobotControl_Robot(const char *cpath, const outC_IndividualRobotControl_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_IndividualRobotControl_Robot(outC_IndividualRobotControl_Robot *pValue, FILE *snsFile);
extern int save_outC_Integrator_Utilities(const char *cpath, const outC_Integrator_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Integrator_Utilities(outC_Integrator_Utilities *pValue, FILE *snsFile);
extern int save_outC_Light_City(const char *cpath, const outC_Light_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Light_City(outC_Light_City *pValue, FILE *snsFile);
extern int save_outC_MapADT_City(const char *cpath, const outC_MapADT_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_MapADT_City(outC_MapADT_City *pValue, FILE *snsFile);
extern int save_outC_MatVectProd_vect_float64_2_2(const char *cpath, const outC_MatVectProd_vect_float64_2_2 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_MatVectProd_vect_float64_2_2(outC_MatVectProd_vect_float64_2_2 *pValue, FILE *snsFile);
extern int save_outC_ModelBasedDesignOfRobotCh(const char *cpath, const outC_ModelBasedDesignOfRobotCh *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ModelBasedDesignOfRobotCh(outC_ModelBasedDesignOfRobotCh *pValue, FILE *snsFile);
extern int save_outC_Normalize_Utilities(const char *cpath, const outC_Normalize_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Normalize_Utilities(outC_Normalize_Utilities *pValue, FILE *snsFile);
extern int save_outC_ObstaclesDetection_City(const char *cpath, const outC_ObstaclesDetection_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ObstaclesDetection_City(outC_ObstaclesDetection_City *pValue, FILE *snsFile);
extern int save_outC_OneObstacleDet_City(const char *cpath, const outC_OneObstacleDet_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_OneObstacleDet_City(outC_OneObstacleDet_City *pValue, FILE *snsFile);
extern int save_outC_OneObstacle_City(const char *cpath, const outC_OneObstacle_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_OneObstacle_City(outC_OneObstacle_City *pValue, FILE *snsFile);
extern int save_outC_OneTL_City(const char *cpath, const outC_OneTL_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_OneTL_City(outC_OneTL_City *pValue, FILE *snsFile);
extern int save_outC_PIDControler_Robot(const char *cpath, const outC_PIDControler_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_PIDControler_Robot(outC_PIDControler_Robot *pValue, FILE *snsFile);
extern int save_outC_PhysicalModel_Robot(const char *cpath, const outC_PhysicalModel_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_PhysicalModel_Robot(outC_PhysicalModel_Robot *pValue, FILE *snsFile);
extern int save_outC_RisingEdge_digital(const char *cpath, const outC_RisingEdge_digital *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_RisingEdge_digital(outC_RisingEdge_digital *pValue, FILE *snsFile);
extern int save_outC_RobotSensors_City(const char *cpath, const outC_RobotSensors_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_RobotSensors_City(outC_RobotSensors_City *pValue, FILE *snsFile);
extern int save_outC_RotMatrix_Utilities(const char *cpath, const outC_RotMatrix_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_RotMatrix_Utilities(outC_RotMatrix_Utilities *pValue, FILE *snsFile);
extern int save_outC_RoundFloor_math_float64(const char *cpath, const outC_RoundFloor_math_float64 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_RoundFloor_math_float64(outC_RoundFloor_math_float64 *pValue, FILE *snsFile);
extern int save_outC_ScoringA_City(const char *cpath, const outC_ScoringA_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ScoringA_City(outC_ScoringA_City *pValue, FILE *snsFile);
extern int save_outC_ScoringB_City(const char *cpath, const outC_ScoringB_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_ScoringB_City(outC_ScoringB_City *pValue, FILE *snsFile);
extern int save_outC_SmartCityControl_City(const char *cpath, const outC_SmartCityControl_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_SmartCityControl_City(outC_SmartCityControl_City *pValue, FILE *snsFile);
extern int save_outC_Speed_City(const char *cpath, const outC_Speed_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Speed_City(outC_Speed_City *pValue, FILE *snsFile);
extern int save_outC_TrafficLights_City(const char *cpath, const outC_TrafficLights_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_TrafficLights_City(outC_TrafficLights_City *pValue, FILE *snsFile);
extern int save_outC_TraficLightsDetection_City(const char *cpath, const outC_TraficLightsDetection_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_TraficLightsDetection_City(outC_TraficLightsDetection_City *pValue, FILE *snsFile);
extern int save_outC_TurnControlleur_Robot(const char *cpath, const outC_TurnControlleur_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_TurnControlleur_Robot(outC_TurnControlleur_Robot *pValue, FILE *snsFile);
extern int save_outC_UpTime_Utilities(const char *cpath, const outC_UpTime_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_UpTime_Utilities(outC_UpTime_Utilities *pValue, FILE *snsFile);
extern int save_outC_Variation_Utilities(const char *cpath, const outC_Variation_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_Variation_Utilities(outC_Variation_Utilities *pValue, FILE *snsFile);
extern int save_outC_VectAdd_vect_float64_2(const char *cpath, const outC_VectAdd_vect_float64_2 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_VectAdd_vect_float64_2(outC_VectAdd_vect_float64_2 *pValue, FILE *snsFile);
extern int save_outC_WallClock_City(const char *cpath, const outC_WallClock_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_WallClock_City(outC_WallClock_City *pValue, FILE *snsFile);
extern int save_outC_WrongDir_City(const char *cpath, const outC_WrongDir_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_WrongDir_City(outC_WrongDir_City *pValue, FILE *snsFile);
extern int save_outC_actionArrayOnWheels_Robot(const char *cpath, const outC_actionArrayOnWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_actionArrayOnWheels_Robot(outC_actionArrayOnWheels_Robot *pValue, FILE *snsFile);
extern int save_outC_actionOnWheels_Robot(const char *cpath, const outC_actionOnWheels_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_actionOnWheels_Robot(outC_actionOnWheels_Robot *pValue, FILE *snsFile);
extern int save_outC_addOne_Robot(const char *cpath, const outC_addOne_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_addOne_Robot(outC_addOne_Robot *pValue, FILE *snsFile);
extern int save_outC_automatonGoPlus_Robot(const char *cpath, const outC_automatonGoPlus_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_automatonGoPlus_Robot(outC_automatonGoPlus_Robot *pValue, FILE *snsFile);
extern int save_outC_count_down_digital_int32(const char *cpath, const outC_count_down_digital_int32 *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_count_down_digital_int32(outC_count_down_digital_int32 *pValue, FILE *snsFile);
extern int save_outC_instrPlus_Robot(const char *cpath, const outC_instrPlus_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_instrPlus_Robot(outC_instrPlus_Robot *pValue, FILE *snsFile);
extern int save_outC_isGreen_Robot(const char *cpath, const outC_isGreen_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_isGreen_Robot(outC_isGreen_Robot *pValue, FILE *snsFile);
extern int save_outC_isRed_Robot(const char *cpath, const outC_isRed_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_isRed_Robot(outC_isRed_Robot *pValue, FILE *snsFile);
extern int save_outC_pos2vec_Utilities(const char *cpath, const outC_pos2vec_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_pos2vec_Utilities(outC_pos2vec_Utilities *pValue, FILE *snsFile);
extern int save_outC_readIti_Robot(const char *cpath, const outC_readIti_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_readIti_Robot(outC_readIti_Robot *pValue, FILE *snsFile);
extern int save_outC_readObstacles_City(const char *cpath, const outC_readObstacles_City *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_readObstacles_City(outC_readObstacles_City *pValue, FILE *snsFile);
extern int save_outC_undressItElem_Robot(const char *cpath, const outC_undressItElem_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_undressItElem_Robot(outC_undressItElem_Robot *pValue, FILE *snsFile);
extern int save_outC_undressSensorTy_Robot(const char *cpath, const outC_undressSensorTy_Robot *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_undressSensorTy_Robot(outC_undressSensorTy_Robot *pValue, FILE *snsFile);
extern int save_outC_vec2pos_Utilities(const char *cpath, const outC_vec2pos_Utilities *pValue, const void *pBaseAddr, FILE *snsFile);
extern int load_outC_vec2pos_Utilities(outC_vec2pos_Utilities *pValue, FILE *snsFile);
#endif /*EIDD_CHALLENGE_SW_SNAPSHOT_API*/
