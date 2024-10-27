//
// Created by h on 2024/10/27.
//
#include <main.h>
#include <tim.h>

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
  if(htim->Instance == htim6.Instance){
    HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
  }
}