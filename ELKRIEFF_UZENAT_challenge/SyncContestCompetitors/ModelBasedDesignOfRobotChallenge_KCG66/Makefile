#############################################################
######    Begin of Makefile
#############################################################

SCADE=C:\Program Files (x86)\Esterel Technologies\SCADE R17.2\SCADE\.

SHELL=cmd.exe

C_FLAGS = -pedantic

all: ModelBasedDesignOfRobotChallenge.exe ModelBasedDesignOfRobotChallenge.dll 

win32/ModelBasedDesignOfRobotCh_cosim.o: ModelBasedDesignOfRobotCh_cosim.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ModelBasedDesignOfRobotCh_cosim.c" -o "win32\ModelBasedDesignOfRobotCh_cosim.o"

win32/EiDD_Challenge_SW_snapshot.o: EiDD_Challenge_SW_snapshot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EiDD_Challenge_SW_snapshot.c" -o "win32\EiDD_Challenge_SW_snapshot.o"

win32/ModelBasedDesignOfRobotCh.o: ModelBasedDesignOfRobotCh.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ModelBasedDesignOfRobotCh.c" -o "win32\ModelBasedDesignOfRobotCh.o"

win32/WallClock_City.o: WallClock_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "WallClock_City.c" -o "win32\WallClock_City.o"

win32/ScoringA_City.o: ScoringA_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ScoringA_City.c" -o "win32\ScoringA_City.o"

win32/count_down_digital_int32.o: count_down_digital_int32.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "count_down_digital_int32.c" -o "win32\count_down_digital_int32.o"

win32/RisingEdge_digital.o: RisingEdge_digital.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RisingEdge_digital.c" -o "win32\RisingEdge_digital.o"

win32/ScoringB_City.o: ScoringB_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ScoringB_City.c" -o "win32\ScoringB_City.o"

win32/Variation_Utilities.o: Variation_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Variation_Utilities.c" -o "win32\Variation_Utilities.o"

win32/UpTime_Utilities.o: UpTime_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "UpTime_Utilities.c" -o "win32\UpTime_Utilities.o"

win32/SmartCityControl_City.o: SmartCityControl_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "SmartCityControl_City.c" -o "win32\SmartCityControl_City.o"

win32/AllObstacles_City.o: AllObstacles_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "AllObstacles_City.c" -o "win32\AllObstacles_City.o"

win32/OneObstacle_City.o: OneObstacle_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "OneObstacle_City.c" -o "win32\OneObstacle_City.o"

win32/TrafficLights_City.o: TrafficLights_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TrafficLights_City.c" -o "win32\TrafficLights_City.o"

win32/OneTL_City.o: OneTL_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "OneTL_City.c" -o "win32\OneTL_City.o"

win32/RobotSensors_City.o: RobotSensors_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RobotSensors_City.c" -o "win32\RobotSensors_City.o"

win32/TraficLightsDetection_City.o: TraficLightsDetection_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TraficLightsDetection_City.c" -o "win32\TraficLightsDetection_City.o"

win32/EncodeColor_Utilities.o: EncodeColor_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EncodeColor_Utilities.c" -o "win32\EncodeColor_Utilities.o"

win32/ObstaclesDetection_City.o: ObstaclesDetection_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ObstaclesDetection_City.c" -o "win32\ObstaclesDetection_City.o"

win32/OneObstacleDet_City.o: OneObstacleDet_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "OneObstacleDet_City.c" -o "win32\OneObstacleDet_City.o"

win32/GroundColorDetection_City.o: GroundColorDetection_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "GroundColorDetection_City.c" -o "win32\GroundColorDetection_City.o"

win32/AgregateSensors_City.o: AgregateSensors_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "AgregateSensors_City.c" -o "win32\AgregateSensors_City.o"

win32/EventDetection_City.o: EventDetection_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EventDetection_City.c" -o "win32\EventDetection_City.o"

win32/WrongDir_City.o: WrongDir_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "WrongDir_City.c" -o "win32\WrongDir_City.o"

win32/Light_City.o: Light_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Light_City.c" -o "win32\Light_City.o"

win32/Speed_City.o: Speed_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Speed_City.c" -o "win32\Speed_City.o"

win32/Exit_City.o: Exit_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Exit_City.c" -o "win32\Exit_City.o"

win32/ExitAux_City.o: ExitAux_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ExitAux_City.c" -o "win32\ExitAux_City.o"

win32/Collision_City.o: Collision_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Collision_City.c" -o "win32\Collision_City.o"

win32/CollisionAux_City.o: CollisionAux_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CollisionAux_City.c" -o "win32\CollisionAux_City.o"

win32/AngleDist_Utilities.o: AngleDist_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "AngleDist_Utilities.c" -o "win32\AngleDist_Utilities.o"

win32/HypotR_mathext_float64.o: HypotR_mathext_float64.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "HypotR_mathext_float64.c" -o "win32\HypotR_mathext_float64.o"

win32/AgregateEvents_City.o: AgregateEvents_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "AgregateEvents_City.c" -o "win32\AgregateEvents_City.o"

win32/IndividualRobotControl_Robot.o: IndividualRobotControl_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "IndividualRobotControl_Robot.c" -o "win32\IndividualRobotControl_Robot.o"

win32/PhysicalModel_Robot.o: PhysicalModel_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "PhysicalModel_Robot.c" -o "win32\PhysicalModel_Robot.o"

win32/Bound_Utilities.o: Bound_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Bound_Utilities.c" -o "win32\Bound_Utilities.o"

win32/Normalize_Utilities.o: Normalize_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Normalize_Utilities.c" -o "win32\Normalize_Utilities.o"

win32/RoundFloor_math_float64.o: RoundFloor_math_float64.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RoundFloor_math_float64.c" -o "win32\RoundFloor_math_float64.o"

win32/CarGeometry_Robot.o: CarGeometry_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "CarGeometry_Robot.c" -o "win32\CarGeometry_Robot.o"

win32/vec2pos_Utilities.o: vec2pos_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "vec2pos_Utilities.c" -o "win32\vec2pos_Utilities.o"

win32/pos2vec_Utilities.o: pos2vec_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "pos2vec_Utilities.c" -o "win32\pos2vec_Utilities.o"

win32/VectAdd_vect_float64_2.o: VectAdd_vect_float64_2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "VectAdd_vect_float64_2.c" -o "win32\VectAdd_vect_float64_2.o"

win32/MatVectProd_vect_float64_2_2.o: MatVectProd_vect_float64_2_2.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "MatVectProd_vect_float64_2_2.c" -o "win32\MatVectProd_vect_float64_2_2.o"

win32/RotMatrix_Utilities.o: RotMatrix_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "RotMatrix_Utilities.c" -o "win32\RotMatrix_Utilities.o"

win32/Driver_Robot.o: Driver_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Driver_Robot.c" -o "win32\Driver_Robot.o"

win32/actionArrayOnWheels_Robot.o: actionArrayOnWheels_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "actionArrayOnWheels_Robot.c" -o "win32\actionArrayOnWheels_Robot.o"

win32/instrPlus_Robot.o: instrPlus_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "instrPlus_Robot.c" -o "win32\instrPlus_Robot.o"

win32/addOne_Robot.o: addOne_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "addOne_Robot.c" -o "win32\addOne_Robot.o"

win32/undressSensorTy_Robot.o: undressSensorTy_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "undressSensorTy_Robot.c" -o "win32\undressSensorTy_Robot.o"

win32/actionOnWheels_Robot.o: actionOnWheels_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "actionOnWheels_Robot.c" -o "win32\actionOnWheels_Robot.o"

win32/TurnControlleur_Robot.o: TurnControlleur_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "TurnControlleur_Robot.c" -o "win32\TurnControlleur_Robot.o"

win32/automatonGoPlus_Robot.o: automatonGoPlus_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "automatonGoPlus_Robot.c" -o "win32\automatonGoPlus_Robot.o"

win32/ComputeWheels_Robot.o: ComputeWheels_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ComputeWheels_Robot.c" -o "win32\ComputeWheels_Robot.o"

win32/PIDControler_Robot.o: PIDControler_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "PIDControler_Robot.c" -o "win32\PIDControler_Robot.o"

win32/isRed_Robot.o: isRed_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "isRed_Robot.c" -o "win32\isRed_Robot.o"

win32/isGreen_Robot.o: isGreen_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "isGreen_Robot.c" -o "win32\isGreen_Robot.o"

win32/Integrator_Utilities.o: Integrator_Utilities.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "Integrator_Utilities.c" -o "win32\Integrator_Utilities.o"

win32/undressItElem_Robot.o: undressItElem_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "undressItElem_Robot.c" -o "win32\undressItElem_Robot.o"

win32/kcg_types.o: kcg_types.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_types.c" -o "win32\kcg_types.o"

win32/kcg_consts.o: kcg_consts.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "kcg_consts.c" -o "win32\kcg_consts.o"

win32/EiDD_Challenge_SW_type.o: EiDD_Challenge_SW_type.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EiDD_Challenge_SW_type.c" -o "win32\EiDD_Challenge_SW_type.o"

win32/SmuPredefConv.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuPredefConv.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "$(SCADE)\lib\C\SmuPredefConv.c" -o "win32\SmuPredefConv.o"

win32/SmuTypes.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuTypes.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "$(SCADE)\lib\C\SmuTypes.c" -o "win32\SmuTypes.o"

win32/SmuLib.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuLib.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "$(SCADE)\lib\C\SmuLib.c" -o "win32\SmuLib.o"

win32/SmuVTable.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuVTable.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "$(SCADE)\lib\C\SmuVTable.c" -o "win32\SmuVTable.o"

win32/EiDD_Challenge_SW_mapping.o: EiDD_Challenge_SW_mapping.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EiDD_Challenge_SW_mapping.c" -o "win32\EiDD_Challenge_SW_mapping.o"

win32/MapADT_City.o: ../MapADT_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\MapADT_City.c" -o "win32\MapADT_City.o"

win32/readIti_Robot.o: ../readIti_Robot.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\readIti_Robot.c" -o "win32\readIti_Robot.o"

win32/readObstacles_City.o: ../readObstacles_City.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "..\readObstacles_City.c" -o "win32\readObstacles_City.o"

win32/EiDD_Challenge_SW_interface.o: EiDD_Challenge_SW_interface.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "EiDD_Challenge_SW_interface.c" -o "win32\EiDD_Challenge_SW_interface.o"

win32/SmuProxy.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuProxy.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17.2\SCADE\lib\C\SmuProxy.c" -o "win32\SmuProxy.o"

ModelBasedDesignOfRobotChallenge.dll: win32/ModelBasedDesignOfRobotCh_cosim.o win32/EiDD_Challenge_SW_snapshot.o win32/ModelBasedDesignOfRobotCh.o win32/WallClock_City.o win32/ScoringA_City.o win32/count_down_digital_int32.o win32/RisingEdge_digital.o win32/ScoringB_City.o win32/Variation_Utilities.o win32/UpTime_Utilities.o win32/SmartCityControl_City.o win32/AllObstacles_City.o win32/OneObstacle_City.o win32/TrafficLights_City.o win32/OneTL_City.o win32/RobotSensors_City.o win32/TraficLightsDetection_City.o win32/EncodeColor_Utilities.o win32/ObstaclesDetection_City.o win32/OneObstacleDet_City.o win32/GroundColorDetection_City.o win32/AgregateSensors_City.o win32/EventDetection_City.o win32/WrongDir_City.o win32/Light_City.o win32/Speed_City.o win32/Exit_City.o win32/ExitAux_City.o win32/Collision_City.o win32/CollisionAux_City.o win32/AngleDist_Utilities.o win32/HypotR_mathext_float64.o win32/AgregateEvents_City.o win32/IndividualRobotControl_Robot.o win32/PhysicalModel_Robot.o win32/Bound_Utilities.o win32/Normalize_Utilities.o win32/RoundFloor_math_float64.o win32/CarGeometry_Robot.o win32/vec2pos_Utilities.o win32/pos2vec_Utilities.o win32/VectAdd_vect_float64_2.o win32/MatVectProd_vect_float64_2_2.o win32/RotMatrix_Utilities.o win32/Driver_Robot.o win32/actionArrayOnWheels_Robot.o win32/instrPlus_Robot.o win32/addOne_Robot.o win32/undressSensorTy_Robot.o win32/actionOnWheels_Robot.o win32/TurnControlleur_Robot.o win32/automatonGoPlus_Robot.o win32/ComputeWheels_Robot.o win32/PIDControler_Robot.o win32/isRed_Robot.o win32/isGreen_Robot.o win32/Integrator_Utilities.o win32/undressItElem_Robot.o win32/kcg_types.o win32/kcg_consts.o win32/EiDD_Challenge_SW_type.o win32/SmuPredefConv.o win32/SmuTypes.o win32/SmuLib.o win32/SmuVTable.o win32/EiDD_Challenge_SW_mapping.o win32/MapADT_City.o win32/readIti_Robot.o win32/readObstacles_City.o win32/EiDD_Challenge_SW_interface.o win32/SmuProxy.o SmuExport.def SDY1_specification.a 
	gcc -mwindows -mwin32 -shared -static-libgcc  "@Makefile_ModelBasedDesignOfRobotChallenge_objects.txt" -Wl,--output-def,"SmuExport.def" -lm -lwsock32 -m32 -o "ModelBasedDesignOfRobotChallenge.dll" 

SmuExport.def: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuExport.def
	copy "C:\Program Files (x86)\Esterel Technologies\SCADE R17.2\SCADE\lib\C\SmuExport.def" "SmuExport.def"

win32/ModelBasedDesignOfRobotCh_dll.o: ModelBasedDesignOfRobotCh_dll.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "ModelBasedDesignOfRobotCh_dll.c" -o "win32\ModelBasedDesignOfRobotCh_dll.o"

win32/SmuMainWindows.o: C:/Program\ Files\ (x86)/Esterel\ Technologies/SCADE\ R17.2/SCADE/lib/C/SmuMainWindows.c
	gcc -I"." -I"$(SCADE)" -I"$(SCADE)\include" -I"$(SCADE)\include\C" -I"$(SCADE)\include\Ada" -I"$(SCADE)\lib\Ada" -I".." -I"$(SCADE)\libraries\SC65\libmathext" $(C_FLAGS) -DBUILD_DLL -DEXTENDED_SIM -DSIM -DWIN32 -D_CONSOLE -D_MBCS -c -ansi -std=c99 -m32 "C:\Program Files (x86)\Esterel Technologies\SCADE R17.2\SCADE\lib\C\SmuMainWindows.c" -o "win32\SmuMainWindows.o"

ModelBasedDesignOfRobotChallenge.exe: win32/ModelBasedDesignOfRobotCh_dll.o win32/SmuMainWindows.o 
	gcc "win32\ModelBasedDesignOfRobotCh_dll.o" "win32\SmuMainWindows.o" -lm -lwsock32 -m32 -o "ModelBasedDesignOfRobotChallenge.exe" 

SDY1_specification.a: SDY1_specification.h


ModelBasedDesignOfRobotCh_cosim.c: SDY1_specification.h


#############################################################
######    End of Makefile
#############################################################
