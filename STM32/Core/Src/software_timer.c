/*
 * software_timer.c
 *
 *  Created on: Sep 24, 2024
 *      Author: admin
 */
#include"software_timer.h"
#include"main.h"
#define MAX_COUNTER 10
int timer_counter[MAX_COUNTER];
int timer_flag[MAX_COUNTER];

void setTimer(int index, int value) {
	timer_counter[index] = value;
	timer_flag[index] = 0;
}
int isTimerExpired(int index) {
	if (timer_flag[index] == 1) {
		timer_flag[index] = 0;
		return 1;
	}
	return 0;
}
void timerRun() {
	for (int i = 0; i < MAX_COUNTER; i++) {
		if (timer_counter[i] > 0) {
			timer_counter[i]--;
			if (timer_counter[i] <= 0) {
				timer_flag[i] = 1;
			}
		}
	}

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
