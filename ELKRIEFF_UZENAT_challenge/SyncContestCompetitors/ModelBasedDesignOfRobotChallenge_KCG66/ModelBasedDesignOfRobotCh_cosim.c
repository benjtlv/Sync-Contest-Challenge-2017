
/* Code generated for Graphical Panels Co-simulation */

#include "SDY1_specification.h"
#include "EiDD_Challenge_SW_interface.h"



void AfterSimInit(void){
	SDY1_specification__init();
	SDY1_specification__draw();
}


void BeforeSimStep(void){
	SDY1_specification__lockio();
	/* InitialPhase.position.x <= x_init */
	{	SGLdouble v; 
	v = SDY1_specification_control_panel_G_x_init(SDY1_specification_L_control_panel());
		inputs_ctx.InitialPhase.position.x = v;
	}
	/* InitialPhase.position.y <= y_init */
	{	SGLdouble v; 
	v = SDY1_specification_control_panel_G_y_init(SDY1_specification_L_control_panel());
		inputs_ctx.InitialPhase.position.y = v;
	}
	/* top <= top */
	{	SGLbool v; 
	v = SDY1_specification_control_panel_G_top(SDY1_specification_L_control_panel());
		inputs_ctx.top = v;
	}
	/* InitialPhase.heading <= alpha_init */
	{	SGLdouble v; 
	v = SDY1_specification_control_panel_G_alpha_init(SDY1_specification_L_control_panel());
		inputs_ctx.InitialPhase.heading = v;
	}
	/* mapid <= map_id */
	{	SGLint32 v; 
	v = SDY1_specification_control_panel_G_map_id(SDY1_specification_L_control_panel());
		inputs_ctx.mapid = v;
	}
	/* itiid <= iti_id */
	{	SGLint32 v; 
	v = SDY1_specification_control_panel_G_iti_id(SDY1_specification_L_control_panel());
		inputs_ctx.itiid = v;
	}
	SDY1_specification__unlockio();
}


void AfterSimStep(void){
	SDY1_specification__lockio();
	/* RobotPhase.position.x => x */
	{	SGLdouble v; 
		v = outputs_ctx.RobotPhase.position.x;
		SDY1_specification_control_panel_S_x(SDY1_specification_L_control_panel(), v);
	}
	/* RobotPhase.position.y => y */
	{	SGLdouble v; 
		v = outputs_ctx.RobotPhase.position.y;
		SDY1_specification_control_panel_S_y(SDY1_specification_L_control_panel(), v);
	}
	/* RobotPhase.velocity => v */
	{	SGLdouble v; 
		v = outputs_ctx.RobotPhase.velocity;
		SDY1_specification_control_panel_S_v(SDY1_specification_L_control_panel(), v);
	}
	/* RobotPhase.heading => alpha */
	{	SGLdouble v; 
		v = outputs_ctx.RobotPhase.heading;
		SDY1_specification_control_panel_S_alpha(SDY1_specification_L_control_panel(), v);
	}
	/* RobotStatus => led */
	SDY1_specification_control_panel_S_led(SDY1_specification_L_control_panel(), outputs_ctx.RobotStatus);
	/* Events.lightRun => ev0 */
	{	SGLbool v; 
		v = outputs_ctx.Events.lightRun;
		SDY1_specification_control_panel_S_ev0(SDY1_specification_L_control_panel(), v);
	}
	/* Events.speedExcess => ev1 */
	{	SGLbool v; 
		v = outputs_ctx.Events.speedExcess;
		SDY1_specification_control_panel_S_ev1(SDY1_specification_L_control_panel(), v);
	}
	/* Events.exitRoad => ev2 */
	{	SGLbool v; 
		v = outputs_ctx.Events.exitRoad;
		SDY1_specification_control_panel_S_ev2(SDY1_specification_L_control_panel(), v);
	}
	/* Events.collisionEvent => ev3 */
	{	SGLbool v; 
		v = outputs_ctx.Events.collisionEvent;
		SDY1_specification_control_panel_S_ev3(SDY1_specification_L_control_panel(), v);
	}
	/* scoreA => score_a */
	SDY1_specification_control_panel_S_score_a(SDY1_specification_L_control_panel(), outputs_ctx.scoreA);
	/* Events.dirEvent => ev4 */
	{	SGLbool v; 
		v = outputs_ctx.Events.dirEvent;
		SDY1_specification_control_panel_S_ev4(SDY1_specification_L_control_panel(), v);
	}
	/* scoreB => score_b */
	SDY1_specification_control_panel_S_score_b(SDY1_specification_L_control_panel(), outputs_ctx.scoreB);
	/* Signalization.TLights[1].position.x => TLx0 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[1-1].position.x;
		SDY1_specification_control_panel_S_TLx0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[1].position.y => TLy0 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[1-1].position.y;
		SDY1_specification_control_panel_S_TLy0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[1].light => TLlight0 */
	{	SGLlong v; 
		v = outputs_ctx.Signalization.TLights[1-1].light;
		SDY1_specification_control_panel_S_TLlight0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[2].position.x => TLx1 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[2-1].position.x;
		SDY1_specification_control_panel_S_TLx1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[2].position.y => TLy1 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[2-1].position.y;
		SDY1_specification_control_panel_S_TLy1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[2].light => TLlight1 */
	{	SGLlong v; 
		v = outputs_ctx.Signalization.TLights[2-1].light;
		SDY1_specification_control_panel_S_TLlight1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[3].position.x => TLx2 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[3-1].position.x;
		SDY1_specification_control_panel_S_TLx2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[3].position.y => TLy2 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[3-1].position.y;
		SDY1_specification_control_panel_S_TLy2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[3].light => TLlight2 */
	{	SGLlong v; 
		v = outputs_ctx.Signalization.TLights[3-1].light;
		SDY1_specification_control_panel_S_TLlight2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[4].position.x => TLx3 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[4-1].position.x;
		SDY1_specification_control_panel_S_TLx3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[4].position.y => TLy3 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[4-1].position.y;
		SDY1_specification_control_panel_S_TLy3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[4].light => TLlight3 */
	{	SGLlong v; 
		v = outputs_ctx.Signalization.TLights[4-1].light;
		SDY1_specification_control_panel_S_TLlight3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[5].position.x => TLx4 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[5-1].position.x;
		SDY1_specification_control_panel_S_TLx4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[5].position.y => TLy4 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.TLights[5-1].position.y;
		SDY1_specification_control_panel_S_TLy4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.TLights[5].light => TLlight4 */
	{	SGLlong v; 
		v = outputs_ctx.Signalization.TLights[5-1].light;
		SDY1_specification_control_panel_S_TLlight4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[1].position.x => obsx0 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[1-1].position.x;
		SDY1_specification_control_panel_S_obsx0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[1].position.y => obsy0 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[1-1].position.y;
		SDY1_specification_control_panel_S_obsy0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[1].present => obspres0 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[1-1].present;
		SDY1_specification_control_panel_S_obspres0(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[2].position.x => obsx1 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[2-1].position.x;
		SDY1_specification_control_panel_S_obsx1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[2].position.y => obsy1 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[2-1].position.y;
		SDY1_specification_control_panel_S_obsy1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[2].present => obspres1 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[2-1].present;
		SDY1_specification_control_panel_S_obspres1(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[3].position.x => obsx2 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[3-1].position.x;
		SDY1_specification_control_panel_S_obsx2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[3].position.y => obsy2 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[3-1].position.y;
		SDY1_specification_control_panel_S_obsy2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[3].present => obspres2 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[3-1].present;
		SDY1_specification_control_panel_S_obspres2(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[4].position.x => obsx3 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[4-1].position.x;
		SDY1_specification_control_panel_S_obsx3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[4].position.y => obsy3 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[4-1].position.y;
		SDY1_specification_control_panel_S_obsy3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[4].present => obspres3 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[4-1].present;
		SDY1_specification_control_panel_S_obspres3(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[5].position.x => obsx4 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[5-1].position.x;
		SDY1_specification_control_panel_S_obsx4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[5].position.y => obsy4 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[5-1].position.y;
		SDY1_specification_control_panel_S_obsy4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[5].present => obspres4 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[5-1].present;
		SDY1_specification_control_panel_S_obspres4(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[6].position.x => obsx5 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[6-1].position.x;
		SDY1_specification_control_panel_S_obsx5(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[6].position.y => obsy5 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[6-1].position.y;
		SDY1_specification_control_panel_S_obsy5(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[6].present => obspres5 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[6-1].present;
		SDY1_specification_control_panel_S_obspres5(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[7].position.x => obsx6 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[7-1].position.x;
		SDY1_specification_control_panel_S_obsx6(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[7].position.y => obsy6 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[7-1].position.y;
		SDY1_specification_control_panel_S_obsy6(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[7].present => obspres6 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[7-1].present;
		SDY1_specification_control_panel_S_obspres6(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[8].position.x => obsx7 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[8-1].position.x;
		SDY1_specification_control_panel_S_obsx7(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[8].position.y => obsy7 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[8-1].position.y;
		SDY1_specification_control_panel_S_obsy7(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[8].present => obspres7 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[8-1].present;
		SDY1_specification_control_panel_S_obspres7(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[9].position.x => obsx8 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[9-1].position.x;
		SDY1_specification_control_panel_S_obsx8(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[9].position.y => obsy8 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[9-1].position.y;
		SDY1_specification_control_panel_S_obsy8(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[9].present => obspres8 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[9-1].present;
		SDY1_specification_control_panel_S_obspres8(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[10].position.x => obsx9 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[10-1].position.x;
		SDY1_specification_control_panel_S_obsx9(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[10].position.y => obsy9 */
	{	SGLdouble v; 
		v = outputs_ctx.Signalization.obstacles[10-1].position.y;
		SDY1_specification_control_panel_S_obsy9(SDY1_specification_L_control_panel(), v);
	}
	/* Signalization.obstacles[10].present => obspres9 */
	{	SGLbool v; 
		v = outputs_ctx.Signalization.obstacles[10-1].present;
		SDY1_specification_control_panel_S_obspres9(SDY1_specification_L_control_panel(), v);
	}
	/* time => time */
	SDY1_specification_control_panel_S_time(SDY1_specification_L_control_panel(), outputs_ctx.time);
	SDY1_specification__draw();
}


void RefreshSimValues(void){
	 if (GraphicalInputsConnected) {
		BeforeSimStep();
		UpdateSimulatorValues();
	}
}


void BeforeSimInit(void){
	SDY1_specification__refreshCallback(RefreshSimValues);
}


void ExtendedSimStop(void){
}


int ExtendedGetDumpSize(){
	return 0;
}


void ExtendedGatherDumpData(char * pData){
}


void ExtendedRestoreDumpData(const char * pData){
	AfterSimStep();
}


void UpdateValues(void){
}

