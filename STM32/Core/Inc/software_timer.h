/*
 * software_timer.h
 *
 *  Created on: Sep 27, 2024
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

void setTimer(int index, int value);
int isTimerExpired(int index);
void timerRun();
void turnoffLEDs();
void display7SEG(int num);
#endif /* INC_SOFTWARE_TIMER_H_ */
