/**
  ******************************************************************************
  * @file    ADC/ADC_TripleModeInterleaved/Inc/main.h
  * @author  MCD Application Team
  * @version V1.0.1
  * @date    09-October-2015
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32469i_eval.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* User can use this section to tailor ADCx instance used and associated
   resources */
/* Definition for ADCx clock resources */
#define ADCx                             ADC1
#define ADCx_CLK_ENABLE()                __HAL_RCC_ADC1_CLK_ENABLE()

/* Definition for ADCy clock resources */
#define ADCy                             ADC2
#define ADCy_CLK_ENABLE()                __HAL_RCC_ADC2_CLK_ENABLE()

/* Definition for ADCz clock resources */
#define ADCz                             ADC3
#define ADCz_CLK_ENABLE()                __HAL_RCC_ADC3_CLK_ENABLE()

#define DMAxyz_CLK_ENABLE()               __HAL_RCC_DMA2_CLK_ENABLE()
#define ADCxyz_CHANNEL_GPIO_CLK_ENABLE()  __HAL_RCC_GPIOC_CLK_ENABLE()

#define ADCxyz_FORCE_RESET()              __HAL_RCC_ADC_FORCE_RESET()
#define ADCxyz_RELEASE_RESET()            __HAL_RCC_ADC_RELEASE_RESET()

/* Definition for ADCx Channel Pin */
#define ADCxyz_CHANNEL_PIN                GPIO_PIN_0
#define ADCxyz_CHANNEL_GPIO_PORT          GPIOC

/* Definition for ADCx's Channel */
#define ADCxyz_CHANNEL                    ADC_CHANNEL_10

/* Definition for ADCx's DMA */
#define ADCxyz_DMA_CHANNEL                DMA_CHANNEL_0
#define ADCxyz_DMA_STREAM                 DMA2_Stream0

/* Definition for ADCx's NVIC */
#define ADCxyz_DMA_IRQn                   DMA2_Stream0_IRQn
#define ADCxyz_DMA_IRQHandler             DMA2_Stream0_IRQHandler


/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
