/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[];
extern int timer_counter[];

void display7SEG(int num);

void setTimer(int index,int value);

int isTimerExpired(int index);

void timerRun();

void turnoffLEDs() ;

#endif /* INC_SOFTWARE_TIMER_H_ */