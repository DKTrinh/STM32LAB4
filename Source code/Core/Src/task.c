/*
 * task.c
 *
 *  Created on: Oct 31, 2025
 *      Author: ADMIN
 */

#ifndef SRC_TASK_C_
#define SRC_TASK_C_

#include<task.h>
#include<main.h>

void LEDinit(void){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, RESET);
	HAL_GPIO_WritePin(LED_PURPLE_GPIO_Port, LED_PURPLE_Pin, RESET);
}

void task1(void){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void task2(void){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}

void task3(void){
	HAL_GPIO_TogglePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin);
}

void task4(void){
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin);
}


void task5(void){
	HAL_GPIO_TogglePin(LED_PURPLE_GPIO_Port, LED_PURPLE_Pin);
}

#endif /* SRC_TASK_C_ */
