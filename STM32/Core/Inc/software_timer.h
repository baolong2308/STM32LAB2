/*
 * software_timer.h
 *
 *  Created on: Sep 24, 2024
 *      Author: admin
 */
#include"main.h"
#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[];
extern int timer_counter[];

void display7SEG(int num);

void setTimer(int index,int value);

int isTimerExpired(int index);

void timerRun();

void turnoffLEDs() ;

void displayLEDMATRIX(int row, uint8_t col);

void offrow_LEDMATRIX() ;

#endif /* INC_SOFTWARE_TIMER_H_ */
