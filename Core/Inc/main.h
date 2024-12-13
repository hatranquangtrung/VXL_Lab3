/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define R1_Pin GPIO_PIN_1
#define R1_GPIO_Port GPIOA
#define Y1_Pin GPIO_PIN_2
#define Y1_GPIO_Port GPIOA
#define G1_Pin GPIO_PIN_3
#define G1_GPIO_Port GPIOA
#define R2_Pin GPIO_PIN_4
#define R2_GPIO_Port GPIOA
#define Y2_Pin GPIO_PIN_5
#define Y2_GPIO_Port GPIOA
#define G2_Pin GPIO_PIN_6
#define G2_GPIO_Port GPIOA
#define E0_Pin GPIO_PIN_7
#define E0_GPIO_Port GPIOA
#define s0_Pin GPIO_PIN_0
#define s0_GPIO_Port GPIOB
#define s1_Pin GPIO_PIN_1
#define s1_GPIO_Port GPIOB
#define s2_Pin GPIO_PIN_2
#define s2_GPIO_Port GPIOB
#define s10_Pin GPIO_PIN_10
#define s10_GPIO_Port GPIOB
#define s11_Pin GPIO_PIN_11
#define s11_GPIO_Port GPIOB
#define s12_Pin GPIO_PIN_12
#define s12_GPIO_Port GPIOB
#define s13_Pin GPIO_PIN_13
#define s13_GPIO_Port GPIOB
#define E1_Pin GPIO_PIN_8
#define E1_GPIO_Port GPIOA
#define E2_Pin GPIO_PIN_9
#define E2_GPIO_Port GPIOA
#define E3_Pin GPIO_PIN_10
#define E3_GPIO_Port GPIOA
#define button1_Pin GPIO_PIN_11
#define button1_GPIO_Port GPIOA
#define button2_Pin GPIO_PIN_12
#define button2_GPIO_Port GPIOA
#define button3_Pin GPIO_PIN_13
#define button3_GPIO_Port GPIOA
#define s3_Pin GPIO_PIN_3
#define s3_GPIO_Port GPIOB
#define s4_Pin GPIO_PIN_4
#define s4_GPIO_Port GPIOB
#define s5_Pin GPIO_PIN_5
#define s5_GPIO_Port GPIOB
#define s6_Pin GPIO_PIN_6
#define s6_GPIO_Port GPIOB
#define s7_Pin GPIO_PIN_7
#define s7_GPIO_Port GPIOB
#define s8_Pin GPIO_PIN_8
#define s8_GPIO_Port GPIOB
#define s9_Pin GPIO_PIN_9
#define s9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
