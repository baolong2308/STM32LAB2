/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
void display7SEG(int num);
void setTimer1(int duration);
void timerRun1();
void setTimer2(int duration);
void timerRun2();
void setTimer3(int duration);
void timerRun3();
void setTimer4(int duration);
void timerRun4();
#endif /* INC_SOFTWARE_TIMER_H_ */
