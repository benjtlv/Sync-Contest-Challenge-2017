
#include "kernel.h"
#include "kernel_id.h"
#include "ecrobot_interface.h"

/**** GLUE CODE, TO UPDATE  */
/* scade operator header */
#include "Driver_Robot.h"

/***** OSEK : NO MODIFY */
/* OSEK declarations */
DeclareCounter(SysTimerCnt);
DeclareAlarm(alarm_task_drive);
DeclareAlarm(alarm_task_ultrasonic);
DeclareTask(Task_Drive);
DeclareTask(Task_Ultrasonic);

int tmp1=0, tmp2=0;

/* LEJOS OSEK hook to be invoked from an ISR in category 2 */
void user_1ms_isr_type2(void)
{
  StatusType ercd;

  ercd = SignalCounter(SysTimerCnt); /* Increment OSEK Alarm Counter */
  if(ercd != E_OK)
  {
    ShutdownOS(ercd);
  }
}
/******* END OSEK */

/* Initialization and finalizations OSEK */
void ecrobot_device_initialize() {

	/*
		code executed automatically at the initialization of the brick
		if nothing to perform, add this function but empty
	*/
  //ecrobot_set_light_sensor_active(NXT_PORT_S1);
  //ecrobot_set_light_sensor_active(NXT_PORT_S2);
  ecrobot_init_nxtcolorsensor(NXT_PORT_S1,NXT_COLORSENSOR);
  ecrobot_init_sonar_sensor(NXT_PORT_S2);
  ecrobot_set_light_sensor_active(NXT_PORT_S3);
}

void ecrobot_device_terminate() {

	/*
		code executed automatically at the termination 
		if nothing to perform, add this function but empty
	*/
  //ecrobot_set_light_sensor_inactive(NXT_PORT_S1);
  //ecrobot_set_light_sensor_inactive(NXT_PORT_S2);
  ecrobot_term_nxtcolorsensor(NXT_PORT_S1);
  ecrobot_term_sonar_sensor(NXT_PORT_S2);
  ecrobot_set_light_sensor_inactive(NXT_PORT_S3);
}

/**** GLUE CODE, TO UPDATE  * */
/*

REMARK :
To not modify OSEK code, use modified kernel_cfg.c, add "usr_init()", defined below:

*/

void usr_init(void) {
  /* Initialization scade operator */
  Driver_init_Robot();
}

void disp()
{
  display_clear(0);
/* display on the first line */ 
  display_goto_xy(0,0);
//if (scCurrentState) display_string("Sensor 1"); else display_string("Sensor 2");
/* display on the second line */
  display_goto_xy(0,1);
  display_string("red : ");
  display_int(SensorsData.roadColor.red,5);
  /*display_goto_xy(0,1);
 display_string("speedL : ");
 display_int(RotationalSpeed.left,5);
 display_goto_xy(0,2);
 display_string("speedR : ");
 display_int(RotationalSpeed.right,5);
 display_goto_xy(0,3);
 display_int(angleMotor,5);
 display_goto_xy(0,4);
 display_string("getCountA :");
 display_int(getCountA,5);
 display_goto_xy(0,5);
 display_string("getCountB :");
 display_int(getCountB,5);*/
/* to refresh the LCD */
 display_update();
}

/** OSEK : body of task to implement */
TASK(Task_Ultrasonic)
{

  SensorsData.sonar = ecrobot_get_sonar_sensor(NXT_PORT_S2);
  
  TerminateTask();
}

TASK(Task_Drive)
{
  
  kcg_int16 rgb[3];

  itiElement_Robot step1, step2, step3, step4, step5, step6, step7, step8, step9, step10, step11;// step12, step13, step14;

  step1.action = go_Robot;
  step1.param = 50;
  step2.action = go_Robot;
  step2.param = 40;
  /*step3.action = turn_Robot;
  step3.param = -30;
  step4.action = go_Robot;
  step4.param = 10;
  step5.action = go_Robot;
  step5.param = 10;
  step6.action = go_Robot;
  step6.param = 10;
  step7.action = go_Robot;
  step7.param = 10;
  step8.action = go_Robot;
  step8.param = 30;
  step9.action = go_Robot;
  step9.param = 30;
  step10.action = go_Robot;
  step10.param = 50;*/
  step11.action = stop_Robot;
  
  
  Itinerary[0] = step1;
  Itinerary[1] = step2;
  Itinerary[2] = step11;
  /*Itinerary[3] = step4;
  Itinerary[4] = step5;
  Itinerary[5] = step6;
  Itinerary[6] = step7;
  Itinerary[7] = step8;
  Itinerary[8] = step9;
  //Itinerary[9] = step10;
  //Itinerary[10] = step11;
  //Itinerary[11] = step12;
  //Itinerary[12] = step13;
  //Itinerary[13] = step14;*/
  
  
  ecrobot_process_bg_nxtcolorsensor();
  
  ecrobot_get_nxtcolorsensor_rgb(NXT_PORT_S1,rgb);
  
  SensorsData.roadColor.red = rgb[0];
  SensorsData.roadColor.green = rgb[1];
  SensorsData.roadColor.blue = rgb[2];

  light = ecrobot_get_light_sensor(NXT_PORT_S3);

  if (Itinerary[indexOut].action != turn_Robot) {
    tmp1 = nxt_motor_get_count(NXT_PORT_A);
    tmp2 = nxt_motor_get_count(NXT_PORT_B);
  }

  getCountA = (kcg_float64)(nxt_motor_get_count(NXT_PORT_A) - tmp1);
  getCountB = (kcg_float64)(nxt_motor_get_count(NXT_PORT_B) - tmp2);
  
  Driver_Robot();
  disp();
  nxt_motor_set_speed(NXT_PORT_A, RotationalSpeed.right, 1);
  nxt_motor_set_speed(NXT_PORT_B, RotationalSpeed.left, 1);

  //nxt_motor_set_count(NXT_PORT_A, 40);
  
  TerminateTask();
}
