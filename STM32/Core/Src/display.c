/*
 * display.c
 *
 *  Created on: Oct 2, 2024
 *      Author: admin
 */
#include"display.h"

void offrow_LEDMATRIX() {

		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

}
void displayLEDMATRIX(int row, uint8_t col) {
	offrow_LEDMATRIX();
	switch (row) {

	case 0:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	default:
		break;
	}
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, !(col>>7&1));
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, !(col>>6&1));
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, !(col>>5&1));
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, !(col>>4&1));
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, !(col>>3&1));
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, !(col>>2&1));
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, !(col>>1&1));
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, !(col&1));
}

void turnoffLEDs() {
	HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
}
void display7SEG(int num) {
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

		break;

	case 1:

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		break;

	case 2:

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		break;

	case 3:

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		break;

	case 4:

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		break;

	case 5:

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		break;

	case 6:

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);

		break;

	case 7:

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		break;

	case 8:

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		break;

	case 9:

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);

		break;

	default:

		HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);

		HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);

		HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);

		HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);

		HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);

		HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);

		HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);

		break;
	}

}

