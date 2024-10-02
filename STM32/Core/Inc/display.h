/*
 * display.h
 *
 *  Created on: Oct 2, 2024
 *      Author: admin
 */

#ifndef INC_DISPLAY_H_
#define INC_DISPLAY_H_
#include"main.h"

void display7SEG(int num);

void turnoffLEDs() ;

void displayLEDMATRIX(int row, uint8_t col);

void offrow_LEDMATRIX() ;

#endif /* INC_DISPLAY_H_ */
