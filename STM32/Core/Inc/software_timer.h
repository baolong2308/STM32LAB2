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
void display7SEG(int num);
void setTimer1(int duration);
void timerRun1();
void setTimer2(int duration);
void timerRun2();
#endif /* INC_SOFTWARE_TIMER_H_ */
