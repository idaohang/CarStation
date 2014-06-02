/*
    ChibiOS/RT - Copyright (C) 2006-2013 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef _BOARD_H_
#define _BOARD_H_

/*
 * Setup for the Chenjianqing's CarStation board.
 */

#define GPIO_LED_INTERNAL_BIT		5
#define GPIO_LED_INTERNAL_PORT		GPIOC

#define GPIO_LED_RED_BIT			6
#define GPIO_LED_RED_PORT			GPIOC

#define GPIO_LED_GREEN_BIT			7
#define GPIO_LED_GREEN_PORT			GPIOC


/*
 * Board identifier.
 */
#define BOARD_NAME              "My CarStation"

/*
 * Board frequencies.
 */
#define STM32_LSECLK            32768
#define STM32_HSECLK            8000000

/*
 * MCU type, supported types are defined in ./os/hal/platforms/hal_lld.h.
 */
#define STM32F10X_HD

/*
 * IO pins assignments.
 * *********************TO BE COMPLETED*********************
 */

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 *
 * The digits have the following meaning:
 *   0 - Analog input.
 *   1 - Push Pull output 10MHz.
 *   2 - Push Pull output 2MHz.
 *   3 - Push Pull output 50MHz.
 *   4 - Digital input.
 *   5 - Open Drain output 10MHz.
 *   6 - Open Drain output 2MHz.
 *   7 - Open Drain output 50MHz.
 *   8 - Digital input with PullUp or PullDown resistor depending on ODR.
 *   9 - Alternate Push Pull output 10MHz.
 *   A - Alternate Push Pull output 2MHz.
 *   B - Alternate Push Pull output 50MHz.
 *   C - Reserved.
 *   D - Alternate Open Drain output 10MHz.
 *   E - Alternate Open Drain output 2MHz.
 *   F - Alternate Open Drain output 50MHz.
 * Please refer to the STM32 Reference Manual for details.
 */

/*
 * Port A setup.
 * Everything input except:
 * PA1 - GPS Enable (output)
 * PA2 - USART2 TX GPS
 * PA3 - USART2 RX GPS
 * PA4 - OLED DC (output)
 * PA5 - SPI1 SCK OLED
 * PA6 - OLED RST (output)
 * PA7 - SPI1 MOSI OLED
 * PA8 - Bluetooth RESET (output)
 * PA9 - USART1 TX Bluetooth
 * PA10- USART1 RX Bluetooth
 * PA11- Reserve
 * PA12- Reserve
 */
#define VAL_GPIOACRL            0xB3B34434      /*  PA7...PA0 */
#define VAL_GPIOACRH            0x44444443      /* PA15...PA8 */
#define VAL_GPIOAODR            0xFFFFFEFD		 /* GPS Disable,Bluetooth Disable*/

/*
 * Port B setup.
 * Everything input except:
 */
#define VAL_GPIOBCRL            0x44444444      /*  PB7...PB0 */
#define VAL_GPIOBCRH            0x44444444      /* PB15...PB8 */
#define VAL_GPIOBODR            0xFFFFFFFF

/*
 * Port C setup.
 * Everything input except:
 */
#define VAL_GPIOCCRL            0x33344444      /*  PC7...PC0 */
#define VAL_GPIOCCRH            0x44444444      /* PC15...PC8 */
#define VAL_GPIOCODR            0xFFFFFFFF

/*
 * Port D setup.
 * Everything input except:
 * PD5 - LED(Internal)
 * PD6 - LED(Red)
 * PD7 - LED(Green)
 */
#define VAL_GPIODCRL            0x44444444      /*  PD7...PD0 */
#define VAL_GPIODCRH            0x44444444      /* PD15...PD8 */
#define VAL_GPIODODR            0xFFFFFFFF

/*
 * Port E setup.
 * Everything input except:
 */
#define VAL_GPIOECRL            0x44444444      /*  PE7...PE0 */
#define VAL_GPIOECRH            0x44444444      /* PE15...PE8 */
#define VAL_GPIOEODR            0xFFFFFFFF

/*
 * Port F setup.
 * Everything input except:
 */
#define VAL_GPIOFCRL            0x44444444      /*  PF7...PF0 */
#define VAL_GPIOFCRH            0x44444444      /* PF15...PF8 */
#define VAL_GPIOFODR            0xFFFFFFFF

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* _BOARD_H_ */
