/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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
#define LED_ONBOARD_Pin GPIO_PIN_13
#define LED_ONBOARD_GPIO_Port GPIOC
#define TL431_PWR_Pin GPIO_PIN_0
#define TL431_PWR_GPIO_Port GPIOA
#define Soil_Moisture_Pin GPIO_PIN_1
#define Soil_Moisture_GPIO_Port GPIOA
#define VREF_Pin GPIO_PIN_2
#define VREF_GPIO_Port GPIOA
#define VAT_1_2_Pin GPIO_PIN_3
#define VAT_1_2_GPIO_Port GPIOA
#define TP4056_CHRG_Pin GPIO_PIN_4
#define TP4056_CHRG_GPIO_Port GPIOA
#define TP4056_STBY_Pin GPIO_PIN_5
#define TP4056_STBY_GPIO_Port GPIOA
#define LORA_PWR_Pin GPIO_PIN_0
#define LORA_PWR_GPIO_Port GPIOB
#define SENSOR12V_PWR_Pin GPIO_PIN_1
#define SENSOR12V_PWR_GPIO_Port GPIOB
#define LORA_TX_Pin GPIO_PIN_10
#define LORA_TX_GPIO_Port GPIOB
#define LORA_RX_Pin GPIO_PIN_11
#define LORA_RX_GPIO_Port GPIOB
#define LORA_MD0_Pin GPIO_PIN_12
#define LORA_MD0_GPIO_Port GPIOB
#define LORA_MD1_Pin GPIO_PIN_13
#define LORA_MD1_GPIO_Port GPIOB
#define LORA_AUX_Pin GPIO_PIN_14
#define LORA_AUX_GPIO_Port GPIOB
#define KEY4_Pin GPIO_PIN_15
#define KEY4_GPIO_Port GPIOB
#define KEY3_Pin GPIO_PIN_8
#define KEY3_GPIO_Port GPIOA
#define MAX485_TX_Pin GPIO_PIN_9
#define MAX485_TX_GPIO_Port GPIOA
#define MAX485_RX_Pin GPIO_PIN_10
#define MAX485_RX_GPIO_Port GPIOA
#define KEY2_Pin GPIO_PIN_11
#define KEY2_GPIO_Port GPIOA
#define KEY1_Pin GPIO_PIN_12
#define KEY1_GPIO_Port GPIOA
#define DE_485_Pin GPIO_PIN_15
#define DE_485_GPIO_Port GPIOA
#define RE_485_Pin GPIO_PIN_3
#define RE_485_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_4
#define LED2_GPIO_Port GPIOB
#define LED1_Pin GPIO_PIN_5
#define LED1_GPIO_Port GPIOB
#define DTH11_DATA_Pin GPIO_PIN_8
#define DTH11_DATA_GPIO_Port GPIOB
#define SENSOR3V_PWR_Pin GPIO_PIN_9
#define SENSOR3V_PWR_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
