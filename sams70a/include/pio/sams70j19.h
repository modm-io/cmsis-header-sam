/**
 * \file
 *
 * \brief Peripheral I/O description for SAMS70J19
 *
 * Copyright (c) 2022 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-01-08T14:00:00Z */
#ifndef _SAMS70J19_PIO_H_
#define _SAMS70J19_PIO_H_

/* ========== Peripheral I/O pin numbers ========== */
#define PIN_PA0                     (  0)  /**< Pin Number for PA0 */
#define PIN_PA1                     (  1)  /**< Pin Number for PA1 */
#define PIN_PA2                     (  2)  /**< Pin Number for PA2 */
#define PIN_PA3                     (  3)  /**< Pin Number for PA3 */
#define PIN_PA4                     (  4)  /**< Pin Number for PA4 */
#define PIN_PA5                     (  5)  /**< Pin Number for PA5 */
#define PIN_PA6                     (  6)  /**< Pin Number for PA6 */
#define PIN_PA7                     (  7)  /**< Pin Number for PA7 */
#define PIN_PA8                     (  8)  /**< Pin Number for PA8 */
#define PIN_PA9                     (  9)  /**< Pin Number for PA9 */
#define PIN_PA10                    ( 10)  /**< Pin Number for PA10 */
#define PIN_PA11                    ( 11)  /**< Pin Number for PA11 */
#define PIN_PA12                    ( 12)  /**< Pin Number for PA12 */
#define PIN_PA13                    ( 13)  /**< Pin Number for PA13 */
#define PIN_PA14                    ( 14)  /**< Pin Number for PA14 */
#define PIN_PA15                    ( 15)  /**< Pin Number for PA15 */
#define PIN_PA16                    ( 16)  /**< Pin Number for PA16 */
#define PIN_PA17                    ( 17)  /**< Pin Number for PA17 */
#define PIN_PA18                    ( 18)  /**< Pin Number for PA18 */
#define PIN_PA19                    ( 19)  /**< Pin Number for PA19 */
#define PIN_PA20                    ( 20)  /**< Pin Number for PA20 */
#define PIN_PA21                    ( 21)  /**< Pin Number for PA21 */
#define PIN_PA22                    ( 22)  /**< Pin Number for PA22 */
#define PIN_PA23                    ( 23)  /**< Pin Number for PA23 */
#define PIN_PA24                    ( 24)  /**< Pin Number for PA24 */
#define PIN_PA25                    ( 25)  /**< Pin Number for PA25 */
#define PIN_PA26                    ( 26)  /**< Pin Number for PA26 */
#define PIN_PA27                    ( 27)  /**< Pin Number for PA27 */
#define PIN_PA28                    ( 28)  /**< Pin Number for PA28 */
#define PIN_PA29                    ( 29)  /**< Pin Number for PA29 */
#define PIN_PA30                    ( 30)  /**< Pin Number for PA30 */
#define PIN_PA31                    ( 31)  /**< Pin Number for PA31 */
#define PIN_PB0                     ( 32)  /**< Pin Number for PB0 */
#define PIN_PB1                     ( 33)  /**< Pin Number for PB1 */
#define PIN_PB2                     ( 34)  /**< Pin Number for PB2 */
#define PIN_PB3                     ( 35)  /**< Pin Number for PB3 */
#define PIN_PB4                     ( 36)  /**< Pin Number for PB4 */
#define PIN_PB5                     ( 37)  /**< Pin Number for PB5 */
#define PIN_PB6                     ( 38)  /**< Pin Number for PB6 */
#define PIN_PB7                     ( 39)  /**< Pin Number for PB7 */
#define PIN_PB8                     ( 40)  /**< Pin Number for PB8 */
#define PIN_PB9                     ( 41)  /**< Pin Number for PB9 */
#define PIN_PB12                    ( 44)  /**< Pin Number for PB12 */
#define PIN_PB13                    ( 45)  /**< Pin Number for PB13 */
#define PIN_PD0                     ( 96)  /**< Pin Number for PD0 */
#define PIN_PD1                     ( 97)  /**< Pin Number for PD1 */
#define PIN_PD2                     ( 98)  /**< Pin Number for PD2 */
#define PIN_PD3                     ( 99)  /**< Pin Number for PD3 */
#define PIN_PD4                     (100)  /**< Pin Number for PD4 */
#define PIN_PD5                     (101)  /**< Pin Number for PD5 */
#define PIN_PD6                     (102)  /**< Pin Number for PD6 */
#define PIN_PD7                     (103)  /**< Pin Number for PD7 */
#define PIN_PD8                     (104)  /**< Pin Number for PD8 */
#define PIN_PD9                     (105)  /**< Pin Number for PD9 */
#define PIN_PD10                    (106)  /**< Pin Number for PD10 */
#define PIN_PD11                    (107)  /**< Pin Number for PD11 */
#define PIN_PD12                    (108)  /**< Pin Number for PD12 */
#define PIN_PD13                    (109)  /**< Pin Number for PD13 */
#define PIN_PD14                    (110)  /**< Pin Number for PD14 */
#define PIN_PD15                    (111)  /**< Pin Number for PD15 */
#define PIN_PD16                    (112)  /**< Pin Number for PD16 */
#define PIN_PD17                    (113)  /**< Pin Number for PD17 */
#define PIN_PD18                    (114)  /**< Pin Number for PD18 */
#define PIN_PD19                    (115)  /**< Pin Number for PD19 */
#define PIN_PD20                    (116)  /**< Pin Number for PD20 */
#define PIN_PD21                    (117)  /**< Pin Number for PD21 */
#define PIN_PD22                    (118)  /**< Pin Number for PD22 */
#define PIN_PD23                    (119)  /**< Pin Number for PD23 */
#define PIN_PD24                    (120)  /**< Pin Number for PD24 */
#define PIN_PD25                    (121)  /**< Pin Number for PD25 */
#define PIN_PD26                    (122)  /**< Pin Number for PD26 */
#define PIN_PD27                    (123)  /**< Pin Number for PD27 */
#define PIN_PD28                    (124)  /**< Pin Number for PD28 */
#define PIN_PD29                    (125)  /**< Pin Number for PD29 */
#define PIN_PD30                    (126)  /**< Pin Number for PD30 */
#define PIN_PD31                    (127)  /**< Pin Number for PD31 */


/* ========== Peripheral I/O masks ========== */
#define PIO_PA0                     (_U_(1) << 0) /**< PIO Mask for PA0 */
#define PIO_PA1                     (_U_(1) << 1) /**< PIO Mask for PA1 */
#define PIO_PA2                     (_U_(1) << 2) /**< PIO Mask for PA2 */
#define PIO_PA3                     (_U_(1) << 3) /**< PIO Mask for PA3 */
#define PIO_PA4                     (_U_(1) << 4) /**< PIO Mask for PA4 */
#define PIO_PA5                     (_U_(1) << 5) /**< PIO Mask for PA5 */
#define PIO_PA6                     (_U_(1) << 6) /**< PIO Mask for PA6 */
#define PIO_PA7                     (_U_(1) << 7) /**< PIO Mask for PA7 */
#define PIO_PA8                     (_U_(1) << 8) /**< PIO Mask for PA8 */
#define PIO_PA9                     (_U_(1) << 9) /**< PIO Mask for PA9 */
#define PIO_PA10                    (_U_(1) << 10) /**< PIO Mask for PA10 */
#define PIO_PA11                    (_U_(1) << 11) /**< PIO Mask for PA11 */
#define PIO_PA12                    (_U_(1) << 12) /**< PIO Mask for PA12 */
#define PIO_PA13                    (_U_(1) << 13) /**< PIO Mask for PA13 */
#define PIO_PA14                    (_U_(1) << 14) /**< PIO Mask for PA14 */
#define PIO_PA15                    (_U_(1) << 15) /**< PIO Mask for PA15 */
#define PIO_PA16                    (_U_(1) << 16) /**< PIO Mask for PA16 */
#define PIO_PA17                    (_U_(1) << 17) /**< PIO Mask for PA17 */
#define PIO_PA18                    (_U_(1) << 18) /**< PIO Mask for PA18 */
#define PIO_PA19                    (_U_(1) << 19) /**< PIO Mask for PA19 */
#define PIO_PA20                    (_U_(1) << 20) /**< PIO Mask for PA20 */
#define PIO_PA21                    (_U_(1) << 21) /**< PIO Mask for PA21 */
#define PIO_PA22                    (_U_(1) << 22) /**< PIO Mask for PA22 */
#define PIO_PA23                    (_U_(1) << 23) /**< PIO Mask for PA23 */
#define PIO_PA24                    (_U_(1) << 24) /**< PIO Mask for PA24 */
#define PIO_PA25                    (_U_(1) << 25) /**< PIO Mask for PA25 */
#define PIO_PA26                    (_U_(1) << 26) /**< PIO Mask for PA26 */
#define PIO_PA27                    (_U_(1) << 27) /**< PIO Mask for PA27 */
#define PIO_PA28                    (_U_(1) << 28) /**< PIO Mask for PA28 */
#define PIO_PA29                    (_U_(1) << 29) /**< PIO Mask for PA29 */
#define PIO_PA30                    (_U_(1) << 30) /**< PIO Mask for PA30 */
#define PIO_PA31                    (_U_(1) << 31) /**< PIO Mask for PA31 */
#define PIO_PB0                     (_U_(1) << 0) /**< PIO Mask for PB0 */
#define PIO_PB1                     (_U_(1) << 1) /**< PIO Mask for PB1 */
#define PIO_PB2                     (_U_(1) << 2) /**< PIO Mask for PB2 */
#define PIO_PB3                     (_U_(1) << 3) /**< PIO Mask for PB3 */
#define PIO_PB4                     (_U_(1) << 4) /**< PIO Mask for PB4 */
#define PIO_PB5                     (_U_(1) << 5) /**< PIO Mask for PB5 */
#define PIO_PB6                     (_U_(1) << 6) /**< PIO Mask for PB6 */
#define PIO_PB7                     (_U_(1) << 7) /**< PIO Mask for PB7 */
#define PIO_PB8                     (_U_(1) << 8) /**< PIO Mask for PB8 */
#define PIO_PB9                     (_U_(1) << 9) /**< PIO Mask for PB9 */
#define PIO_PB12                    (_U_(1) << 12) /**< PIO Mask for PB12 */
#define PIO_PB13                    (_U_(1) << 13) /**< PIO Mask for PB13 */
#define PIO_PD0                     (_U_(1) << 0) /**< PIO Mask for PD0 */
#define PIO_PD1                     (_U_(1) << 1) /**< PIO Mask for PD1 */
#define PIO_PD2                     (_U_(1) << 2) /**< PIO Mask for PD2 */
#define PIO_PD3                     (_U_(1) << 3) /**< PIO Mask for PD3 */
#define PIO_PD4                     (_U_(1) << 4) /**< PIO Mask for PD4 */
#define PIO_PD5                     (_U_(1) << 5) /**< PIO Mask for PD5 */
#define PIO_PD6                     (_U_(1) << 6) /**< PIO Mask for PD6 */
#define PIO_PD7                     (_U_(1) << 7) /**< PIO Mask for PD7 */
#define PIO_PD8                     (_U_(1) << 8) /**< PIO Mask for PD8 */
#define PIO_PD9                     (_U_(1) << 9) /**< PIO Mask for PD9 */
#define PIO_PD10                    (_U_(1) << 10) /**< PIO Mask for PD10 */
#define PIO_PD11                    (_U_(1) << 11) /**< PIO Mask for PD11 */
#define PIO_PD12                    (_U_(1) << 12) /**< PIO Mask for PD12 */
#define PIO_PD13                    (_U_(1) << 13) /**< PIO Mask for PD13 */
#define PIO_PD14                    (_U_(1) << 14) /**< PIO Mask for PD14 */
#define PIO_PD15                    (_U_(1) << 15) /**< PIO Mask for PD15 */
#define PIO_PD16                    (_U_(1) << 16) /**< PIO Mask for PD16 */
#define PIO_PD17                    (_U_(1) << 17) /**< PIO Mask for PD17 */
#define PIO_PD18                    (_U_(1) << 18) /**< PIO Mask for PD18 */
#define PIO_PD19                    (_U_(1) << 19) /**< PIO Mask for PD19 */
#define PIO_PD20                    (_U_(1) << 20) /**< PIO Mask for PD20 */
#define PIO_PD21                    (_U_(1) << 21) /**< PIO Mask for PD21 */
#define PIO_PD22                    (_U_(1) << 22) /**< PIO Mask for PD22 */
#define PIO_PD23                    (_U_(1) << 23) /**< PIO Mask for PD23 */
#define PIO_PD24                    (_U_(1) << 24) /**< PIO Mask for PD24 */
#define PIO_PD25                    (_U_(1) << 25) /**< PIO Mask for PD25 */
#define PIO_PD26                    (_U_(1) << 26) /**< PIO Mask for PD26 */
#define PIO_PD27                    (_U_(1) << 27) /**< PIO Mask for PD27 */
#define PIO_PD28                    (_U_(1) << 28) /**< PIO Mask for PD28 */
#define PIO_PD29                    (_U_(1) << 29) /**< PIO Mask for PD29 */
#define PIO_PD30                    (_U_(1) << 30) /**< PIO Mask for PD30 */
#define PIO_PD31                    (_U_(1) << 31) /**< PIO Mask for PD31 */


/* ========== Peripheral I/O indexes ========== */
#define PIO_PA0_IDX                 (  0)  /**< PIO Index Number for PA0 */
#define PIO_PA1_IDX                 (  1)  /**< PIO Index Number for PA1 */
#define PIO_PA2_IDX                 (  2)  /**< PIO Index Number for PA2 */
#define PIO_PA3_IDX                 (  3)  /**< PIO Index Number for PA3 */
#define PIO_PA4_IDX                 (  4)  /**< PIO Index Number for PA4 */
#define PIO_PA5_IDX                 (  5)  /**< PIO Index Number for PA5 */
#define PIO_PA6_IDX                 (  6)  /**< PIO Index Number for PA6 */
#define PIO_PA7_IDX                 (  7)  /**< PIO Index Number for PA7 */
#define PIO_PA8_IDX                 (  8)  /**< PIO Index Number for PA8 */
#define PIO_PA9_IDX                 (  9)  /**< PIO Index Number for PA9 */
#define PIO_PA10_IDX                ( 10)  /**< PIO Index Number for PA10 */
#define PIO_PA11_IDX                ( 11)  /**< PIO Index Number for PA11 */
#define PIO_PA12_IDX                ( 12)  /**< PIO Index Number for PA12 */
#define PIO_PA13_IDX                ( 13)  /**< PIO Index Number for PA13 */
#define PIO_PA14_IDX                ( 14)  /**< PIO Index Number for PA14 */
#define PIO_PA15_IDX                ( 15)  /**< PIO Index Number for PA15 */
#define PIO_PA16_IDX                ( 16)  /**< PIO Index Number for PA16 */
#define PIO_PA17_IDX                ( 17)  /**< PIO Index Number for PA17 */
#define PIO_PA18_IDX                ( 18)  /**< PIO Index Number for PA18 */
#define PIO_PA19_IDX                ( 19)  /**< PIO Index Number for PA19 */
#define PIO_PA20_IDX                ( 20)  /**< PIO Index Number for PA20 */
#define PIO_PA21_IDX                ( 21)  /**< PIO Index Number for PA21 */
#define PIO_PA22_IDX                ( 22)  /**< PIO Index Number for PA22 */
#define PIO_PA23_IDX                ( 23)  /**< PIO Index Number for PA23 */
#define PIO_PA24_IDX                ( 24)  /**< PIO Index Number for PA24 */
#define PIO_PA25_IDX                ( 25)  /**< PIO Index Number for PA25 */
#define PIO_PA26_IDX                ( 26)  /**< PIO Index Number for PA26 */
#define PIO_PA27_IDX                ( 27)  /**< PIO Index Number for PA27 */
#define PIO_PA28_IDX                ( 28)  /**< PIO Index Number for PA28 */
#define PIO_PA29_IDX                ( 29)  /**< PIO Index Number for PA29 */
#define PIO_PA30_IDX                ( 30)  /**< PIO Index Number for PA30 */
#define PIO_PA31_IDX                ( 31)  /**< PIO Index Number for PA31 */
#define PIO_PB0_IDX                 ( 32)  /**< PIO Index Number for PB0 */
#define PIO_PB1_IDX                 ( 33)  /**< PIO Index Number for PB1 */
#define PIO_PB2_IDX                 ( 34)  /**< PIO Index Number for PB2 */
#define PIO_PB3_IDX                 ( 35)  /**< PIO Index Number for PB3 */
#define PIO_PB4_IDX                 ( 36)  /**< PIO Index Number for PB4 */
#define PIO_PB5_IDX                 ( 37)  /**< PIO Index Number for PB5 */
#define PIO_PB6_IDX                 ( 38)  /**< PIO Index Number for PB6 */
#define PIO_PB7_IDX                 ( 39)  /**< PIO Index Number for PB7 */
#define PIO_PB8_IDX                 ( 40)  /**< PIO Index Number for PB8 */
#define PIO_PB9_IDX                 ( 41)  /**< PIO Index Number for PB9 */
#define PIO_PB12_IDX                ( 44)  /**< PIO Index Number for PB12 */
#define PIO_PB13_IDX                ( 45)  /**< PIO Index Number for PB13 */
#define PIO_PD0_IDX                 ( 96)  /**< PIO Index Number for PD0 */
#define PIO_PD1_IDX                 ( 97)  /**< PIO Index Number for PD1 */
#define PIO_PD2_IDX                 ( 98)  /**< PIO Index Number for PD2 */
#define PIO_PD3_IDX                 ( 99)  /**< PIO Index Number for PD3 */
#define PIO_PD4_IDX                 (100)  /**< PIO Index Number for PD4 */
#define PIO_PD5_IDX                 (101)  /**< PIO Index Number for PD5 */
#define PIO_PD6_IDX                 (102)  /**< PIO Index Number for PD6 */
#define PIO_PD7_IDX                 (103)  /**< PIO Index Number for PD7 */
#define PIO_PD8_IDX                 (104)  /**< PIO Index Number for PD8 */
#define PIO_PD9_IDX                 (105)  /**< PIO Index Number for PD9 */
#define PIO_PD10_IDX                (106)  /**< PIO Index Number for PD10 */
#define PIO_PD11_IDX                (107)  /**< PIO Index Number for PD11 */
#define PIO_PD12_IDX                (108)  /**< PIO Index Number for PD12 */
#define PIO_PD13_IDX                (109)  /**< PIO Index Number for PD13 */
#define PIO_PD14_IDX                (110)  /**< PIO Index Number for PD14 */
#define PIO_PD15_IDX                (111)  /**< PIO Index Number for PD15 */
#define PIO_PD16_IDX                (112)  /**< PIO Index Number for PD16 */
#define PIO_PD17_IDX                (113)  /**< PIO Index Number for PD17 */
#define PIO_PD18_IDX                (114)  /**< PIO Index Number for PD18 */
#define PIO_PD19_IDX                (115)  /**< PIO Index Number for PD19 */
#define PIO_PD20_IDX                (116)  /**< PIO Index Number for PD20 */
#define PIO_PD21_IDX                (117)  /**< PIO Index Number for PD21 */
#define PIO_PD22_IDX                (118)  /**< PIO Index Number for PD22 */
#define PIO_PD23_IDX                (119)  /**< PIO Index Number for PD23 */
#define PIO_PD24_IDX                (120)  /**< PIO Index Number for PD24 */
#define PIO_PD25_IDX                (121)  /**< PIO Index Number for PD25 */
#define PIO_PD26_IDX                (122)  /**< PIO Index Number for PD26 */
#define PIO_PD27_IDX                (123)  /**< PIO Index Number for PD27 */
#define PIO_PD28_IDX                (124)  /**< PIO Index Number for PD28 */
#define PIO_PD29_IDX                (125)  /**< PIO Index Number for PD29 */
#define PIO_PD30_IDX                (126)  /**< PIO Index Number for PD30 */
#define PIO_PD31_IDX                (127)  /**< PIO Index Number for PD31 */

/* ========== PIO definition for AFEC0 peripheral ========== */
#define PIN_PA8B_AFEC0_ADTRG                       _L_(8)       /**< AFEC0 signal: ADTRG on PA8 mux B*/
#define MUX_PA8B_AFEC0_ADTRG                       _L_(1)       /**< AFEC0 signal line function value: ADTRG */
#define PIO_PA8B_AFEC0_ADTRG                       (_UL_(1) << 8)

#define PIN_PD30X1_AFEC0_AD0                       _L_(126)     /**< AFEC0 signal: AD0 on PD30 mux X1*/
#define PIO_PD30X1_AFEC0_AD0                       (_UL_(1) << 30)

#define PIN_PA21X1_AFEC0_AD1                       _L_(21)      /**< AFEC0 signal: AD1 on PA21 mux X1*/
#define PIO_PA21X1_AFEC0_AD1                       (_UL_(1) << 21)

#define PIN_PA21X1_AFEC0_PIODCEN2                  _L_(21)      /**< AFEC0 signal: PIODCEN2 on PA21 mux X1*/
#define PIO_PA21X1_AFEC0_PIODCEN2                  (_UL_(1) << 21)

#define PIN_PB3X1_AFEC0_AD2                        _L_(35)      /**< AFEC0 signal: AD2 on PB3 mux X1*/
#define PIO_PB3X1_AFEC0_AD2                        (_UL_(1) << 3)

#define PIN_PB3X1_AFEC0_WKUP12                     _L_(35)      /**< AFEC0 signal: WKUP12 on PB3 mux X1*/
#define PIO_PB3X1_AFEC0_WKUP12                     (_UL_(1) << 3)

#define PIN_PB2X1_AFEC0_AD5                        _L_(34)      /**< AFEC0 signal: AD5 on PB2 mux X1*/
#define PIO_PB2X1_AFEC0_AD5                        (_UL_(1) << 2)

#define PIN_PA17X1_AFEC0_AD6                       _L_(17)      /**< AFEC0 signal: AD6 on PA17 mux X1*/
#define PIO_PA17X1_AFEC0_AD6                       (_UL_(1) << 17)

#define PIN_PA18X1_AFEC0_AD7                       _L_(18)      /**< AFEC0 signal: AD7 on PA18 mux X1*/
#define PIO_PA18X1_AFEC0_AD7                       (_UL_(1) << 18)

#define PIN_PA19X1_AFEC0_AD8                       _L_(19)      /**< AFEC0 signal: AD8 on PA19 mux X1*/
#define PIO_PA19X1_AFEC0_AD8                       (_UL_(1) << 19)

#define PIN_PA19X1_AFEC0_WKUP9                     _L_(19)      /**< AFEC0 signal: WKUP9 on PA19 mux X1*/
#define PIO_PA19X1_AFEC0_WKUP9                     (_UL_(1) << 19)

#define PIN_PA20X1_AFEC0_AD9                       _L_(20)      /**< AFEC0 signal: AD9 on PA20 mux X1*/
#define PIO_PA20X1_AFEC0_AD9                       (_UL_(1) << 20)

#define PIN_PA20X1_AFEC0_WKUP10                    _L_(20)      /**< AFEC0 signal: WKUP10 on PA20 mux X1*/
#define PIO_PA20X1_AFEC0_WKUP10                    (_UL_(1) << 20)

#define PIN_PB0X1_AFEC0_AD10                       _L_(32)      /**< AFEC0 signal: AD10 on PB0 mux X1*/
#define PIO_PB0X1_AFEC0_AD10                       (_UL_(1) << 0)

#define PIN_PB0X1_AFEC0_RTCOUT0                    _L_(32)      /**< AFEC0 signal: RTCOUT0 on PB0 mux X1*/
#define PIO_PB0X1_AFEC0_RTCOUT0                    (_UL_(1) << 0)

/* ========== PIO definition for AFEC1 peripheral ========== */
#define PIN_PD9C_AFEC1_ADTRG                       _L_(105)     /**< AFEC1 signal: ADTRG on PD9 mux C*/
#define MUX_PD9C_AFEC1_ADTRG                       _L_(2)       /**< AFEC1 signal line function value: ADTRG */
#define PIO_PD9C_AFEC1_ADTRG                       (_UL_(1) << 9)

#define PIN_PB1X1_AFEC1_AD0                        _L_(33)      /**< AFEC1 signal: AD0 on PB1 mux X1*/
#define PIO_PB1X1_AFEC1_AD0                        (_UL_(1) << 1)

#define PIN_PB1X1_AFEC1_RTCOUT1                    _L_(33)      /**< AFEC1 signal: RTCOUT1 on PB1 mux X1*/
#define PIO_PB1X1_AFEC1_RTCOUT1                    (_UL_(1) << 1)

/* ========== PIO definition for DACC peripheral ========== */
#define PIN_PB13X1_DACC_DAC0                       _L_(45)      /**< DACC signal: DAC0 on PB13 mux X1*/
#define PIO_PB13X1_DACC_DAC0                       (_UL_(1) << 13)

#define PIN_PD0X1_DACC_DAC1                        _L_(96)      /**< DACC signal: DAC1 on PD0 mux X1*/
#define PIO_PD0X1_DACC_DAC1                        (_UL_(1) << 0)

#define PIN_PA2C_DACC_DATRG                        _L_(2)       /**< DACC signal: DATRG on PA2 mux C*/
#define MUX_PA2C_DACC_DATRG                        _L_(2)       /**< DACC signal line function value: DATRG */
#define PIO_PA2C_DACC_DATRG                        (_UL_(1) << 2)

/* ========== PIO definition for ISI peripheral ========== */
#define PIN_PD22D_ISI_D0                           _L_(118)     /**< ISI signal: D0 on PD22 mux D*/
#define MUX_PD22D_ISI_D0                           _L_(3)       /**< ISI signal line function value: D0 */
#define PIO_PD22D_ISI_D0                           (_UL_(1) << 22)

#define PIN_PD21D_ISI_D1                           _L_(117)     /**< ISI signal: D1 on PD21 mux D*/
#define MUX_PD21D_ISI_D1                           _L_(3)       /**< ISI signal line function value: D1 */
#define PIO_PD21D_ISI_D1                           (_UL_(1) << 21)

#define PIN_PB3D_ISI_D2                            _L_(35)      /**< ISI signal: D2 on PB3 mux D*/
#define MUX_PB3D_ISI_D2                            _L_(3)       /**< ISI signal line function value: D2 */
#define PIO_PB3D_ISI_D2                            (_UL_(1) << 3)

#define PIN_PA9B_ISI_D3                            _L_(9)       /**< ISI signal: D3 on PA9 mux B*/
#define MUX_PA9B_ISI_D3                            _L_(1)       /**< ISI signal line function value: D3 */
#define PIO_PA9B_ISI_D3                            (_UL_(1) << 9)

#define PIN_PA5B_ISI_D4                            _L_(5)       /**< ISI signal: D4 on PA5 mux B*/
#define MUX_PA5B_ISI_D4                            _L_(1)       /**< ISI signal line function value: D4 */
#define PIO_PA5B_ISI_D4                            (_UL_(1) << 5)

#define PIN_PD11D_ISI_D5                           _L_(107)     /**< ISI signal: D5 on PD11 mux D*/
#define MUX_PD11D_ISI_D5                           _L_(3)       /**< ISI signal line function value: D5 */
#define PIO_PD11D_ISI_D5                           (_UL_(1) << 11)

#define PIN_PD12D_ISI_D6                           _L_(108)     /**< ISI signal: D6 on PD12 mux D*/
#define MUX_PD12D_ISI_D6                           _L_(3)       /**< ISI signal line function value: D6 */
#define PIO_PD12D_ISI_D6                           (_UL_(1) << 12)

#define PIN_PA27D_ISI_D7                           _L_(27)      /**< ISI signal: D7 on PA27 mux D*/
#define MUX_PA27D_ISI_D7                           _L_(3)       /**< ISI signal line function value: D7 */
#define PIO_PA27D_ISI_D7                           (_UL_(1) << 27)

#define PIN_PD27D_ISI_D8                           _L_(123)     /**< ISI signal: D8 on PD27 mux D*/
#define MUX_PD27D_ISI_D8                           _L_(3)       /**< ISI signal line function value: D8 */
#define PIO_PD27D_ISI_D8                           (_UL_(1) << 27)

#define PIN_PD28D_ISI_D9                           _L_(124)     /**< ISI signal: D9 on PD28 mux D*/
#define MUX_PD28D_ISI_D9                           _L_(3)       /**< ISI signal line function value: D9 */
#define PIO_PD28D_ISI_D9                           (_UL_(1) << 28)

#define PIN_PD30D_ISI_D10                          _L_(126)     /**< ISI signal: D10 on PD30 mux D*/
#define MUX_PD30D_ISI_D10                          _L_(3)       /**< ISI signal line function value: D10 */
#define PIO_PD30D_ISI_D10                          (_UL_(1) << 30)

#define PIN_PD31D_ISI_D11                          _L_(127)     /**< ISI signal: D11 on PD31 mux D*/
#define MUX_PD31D_ISI_D11                          _L_(3)       /**< ISI signal line function value: D11 */
#define PIO_PD31D_ISI_D11                          (_UL_(1) << 31)

#define PIN_PD24D_ISI_HSYNC                        _L_(120)     /**< ISI signal: HSYNC on PD24 mux D*/
#define MUX_PD24D_ISI_HSYNC                        _L_(3)       /**< ISI signal line function value: HSYNC */
#define PIO_PD24D_ISI_HSYNC                        (_UL_(1) << 24)

#define PIN_PA24D_ISI_PCK                          _L_(24)      /**< ISI signal: PCK on PA24 mux D*/
#define MUX_PA24D_ISI_PCK                          _L_(3)       /**< ISI signal line function value: PCK */
#define PIO_PA24D_ISI_PCK                          (_UL_(1) << 24)

#define PIN_PD25D_ISI_VSYNC                        _L_(121)     /**< ISI signal: VSYNC on PD25 mux D*/
#define MUX_PD25D_ISI_VSYNC                        _L_(3)       /**< ISI signal line function value: VSYNC */
#define PIO_PD25D_ISI_VSYNC                        (_UL_(1) << 25)

/* ========== PIO definition for PMC peripheral ========== */
#define PIN_PA6B_PMC_PCK0                          _L_(6)       /**< PMC signal: PCK0 on PA6 mux B*/
#define MUX_PA6B_PMC_PCK0                          _L_(1)       /**< PMC signal line function value: PCK0 */
#define PIO_PA6B_PMC_PCK0                          (_UL_(1) << 6)

#define PIN_PB12D_PMC_PCK0                         _L_(44)      /**< PMC signal: PCK0 on PB12 mux D*/
#define MUX_PB12D_PMC_PCK0                         _L_(3)       /**< PMC signal line function value: PCK0 */
#define PIO_PB12D_PMC_PCK0                         (_UL_(1) << 12)

#define PIN_PB13B_PMC_PCK0                         _L_(45)      /**< PMC signal: PCK0 on PB13 mux B*/
#define MUX_PB13B_PMC_PCK0                         _L_(1)       /**< PMC signal line function value: PCK0 */
#define PIO_PB13B_PMC_PCK0                         (_UL_(1) << 13)

#define PIN_PA17B_PMC_PCK1                         _L_(17)      /**< PMC signal: PCK1 on PA17 mux B*/
#define MUX_PA17B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PCK1 */
#define PIO_PA17B_PMC_PCK1                         (_UL_(1) << 17)

#define PIN_PA21B_PMC_PCK1                         _L_(21)      /**< PMC signal: PCK1 on PA21 mux B*/
#define MUX_PA21B_PMC_PCK1                         _L_(1)       /**< PMC signal line function value: PCK1 */
#define PIO_PA21B_PMC_PCK1                         (_UL_(1) << 21)

#define PIN_PA3C_PMC_PCK2                          _L_(3)       /**< PMC signal: PCK2 on PA3 mux C*/
#define MUX_PA3C_PMC_PCK2                          _L_(2)       /**< PMC signal line function value: PCK2 */
#define PIO_PA3C_PMC_PCK2                          (_UL_(1) << 3)

#define PIN_PA18B_PMC_PCK2                         _L_(18)      /**< PMC signal: PCK2 on PA18 mux B*/
#define MUX_PA18B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PCK2 */
#define PIO_PA18B_PMC_PCK2                         (_UL_(1) << 18)

#define PIN_PA31B_PMC_PCK2                         _L_(31)      /**< PMC signal: PCK2 on PA31 mux B*/
#define MUX_PA31B_PMC_PCK2                         _L_(1)       /**< PMC signal line function value: PCK2 */
#define PIO_PA31B_PMC_PCK2                         (_UL_(1) << 31)

#define PIN_PB3B_PMC_PCK2                          _L_(35)      /**< PMC signal: PCK2 on PB3 mux B*/
#define MUX_PB3B_PMC_PCK2                          _L_(1)       /**< PMC signal line function value: PCK2 */
#define PIO_PB3B_PMC_PCK2                          (_UL_(1) << 3)

#define PIN_PD31C_PMC_PCK2                         _L_(127)     /**< PMC signal: PCK2 on PD31 mux C*/
#define MUX_PD31C_PMC_PCK2                         _L_(2)       /**< PMC signal line function value: PCK2 */
#define PIO_PD31C_PMC_PCK2                         (_UL_(1) << 31)

/* ========== PIO definition for PWM0 peripheral ========== */
#define PIN_PA10B_PWM0_PWMEXTRG0                   _L_(10)      /**< PWM0 signal: PWMEXTRG0 on PA10 mux B*/
#define MUX_PA10B_PWM0_PWMEXTRG0                   _L_(1)       /**< PWM0 signal line function value: PWMEXTRG0 */
#define PIO_PA10B_PWM0_PWMEXTRG0                   (_UL_(1) << 10)

#define PIN_PA22B_PWM0_PWMEXTRG1                   _L_(22)      /**< PWM0 signal: PWMEXTRG1 on PA22 mux B*/
#define MUX_PA22B_PWM0_PWMEXTRG1                   _L_(1)       /**< PWM0 signal line function value: PWMEXTRG1 */
#define PIO_PA22B_PWM0_PWMEXTRG1                   (_UL_(1) << 22)

#define PIN_PA9C_PWM0_PWMFI0                       _L_(9)       /**< PWM0 signal: PWMFI0 on PA9 mux C*/
#define MUX_PA9C_PWM0_PWMFI0                       _L_(2)       /**< PWM0 signal line function value: PWMFI0 */
#define PIO_PA9C_PWM0_PWMFI0                       (_UL_(1) << 9)

#define PIN_PD8B_PWM0_PWMFI1                       _L_(104)     /**< PWM0 signal: PWMFI1 on PD8 mux B*/
#define MUX_PD8B_PWM0_PWMFI1                       _L_(1)       /**< PWM0 signal line function value: PWMFI1 */
#define PIO_PD8B_PWM0_PWMFI1                       (_UL_(1) << 8)

#define PIN_PD9B_PWM0_PWMFI2                       _L_(105)     /**< PWM0 signal: PWMFI2 on PD9 mux B*/
#define MUX_PD9B_PWM0_PWMFI2                       _L_(1)       /**< PWM0 signal line function value: PWMFI2 */
#define PIO_PD9B_PWM0_PWMFI2                       (_UL_(1) << 9)

#define PIN_PA0A_PWM0_PWMH0                        _L_(0)       /**< PWM0 signal: PWMH0 on PA0 mux A*/
#define MUX_PA0A_PWM0_PWMH0                        _L_(0)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PA0A_PWM0_PWMH0                        (_UL_(1) << 0)

#define PIN_PA11B_PWM0_PWMH0                       _L_(11)      /**< PWM0 signal: PWMH0 on PA11 mux B*/
#define MUX_PA11B_PWM0_PWMH0                       _L_(1)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PA11B_PWM0_PWMH0                       (_UL_(1) << 11)

#define PIN_PA23B_PWM0_PWMH0                       _L_(23)      /**< PWM0 signal: PWMH0 on PA23 mux B*/
#define MUX_PA23B_PWM0_PWMH0                       _L_(1)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PA23B_PWM0_PWMH0                       (_UL_(1) << 23)

#define PIN_PB0A_PWM0_PWMH0                        _L_(32)      /**< PWM0 signal: PWMH0 on PB0 mux A*/
#define MUX_PB0A_PWM0_PWMH0                        _L_(0)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PB0A_PWM0_PWMH0                        (_UL_(1) << 0)

#define PIN_PD11B_PWM0_PWMH0                       _L_(107)     /**< PWM0 signal: PWMH0 on PD11 mux B*/
#define MUX_PD11B_PWM0_PWMH0                       _L_(1)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PD11B_PWM0_PWMH0                       (_UL_(1) << 11)

#define PIN_PD20A_PWM0_PWMH0                       _L_(116)     /**< PWM0 signal: PWMH0 on PD20 mux A*/
#define MUX_PD20A_PWM0_PWMH0                       _L_(0)       /**< PWM0 signal line function value: PWMH0 */
#define PIO_PD20A_PWM0_PWMH0                       (_UL_(1) << 20)

#define PIN_PA2A_PWM0_PWMH1                        _L_(2)       /**< PWM0 signal: PWMH1 on PA2 mux A*/
#define MUX_PA2A_PWM0_PWMH1                        _L_(0)       /**< PWM0 signal line function value: PWMH1 */
#define PIO_PA2A_PWM0_PWMH1                        (_UL_(1) << 2)

#define PIN_PA12B_PWM0_PWMH1                       _L_(12)      /**< PWM0 signal: PWMH1 on PA12 mux B*/
#define MUX_PA12B_PWM0_PWMH1                       _L_(1)       /**< PWM0 signal line function value: PWMH1 */
#define PIO_PA12B_PWM0_PWMH1                       (_UL_(1) << 12)

#define PIN_PA24B_PWM0_PWMH1                       _L_(24)      /**< PWM0 signal: PWMH1 on PA24 mux B*/
#define MUX_PA24B_PWM0_PWMH1                       _L_(1)       /**< PWM0 signal line function value: PWMH1 */
#define PIO_PA24B_PWM0_PWMH1                       (_UL_(1) << 24)

#define PIN_PB1A_PWM0_PWMH1                        _L_(33)      /**< PWM0 signal: PWMH1 on PB1 mux A*/
#define MUX_PB1A_PWM0_PWMH1                        _L_(0)       /**< PWM0 signal line function value: PWMH1 */
#define PIO_PB1A_PWM0_PWMH1                        (_UL_(1) << 1)

#define PIN_PD21A_PWM0_PWMH1                       _L_(117)     /**< PWM0 signal: PWMH1 on PD21 mux A*/
#define MUX_PD21A_PWM0_PWMH1                       _L_(0)       /**< PWM0 signal line function value: PWMH1 */
#define PIO_PD21A_PWM0_PWMH1                       (_UL_(1) << 21)

#define PIN_PA13B_PWM0_PWMH2                       _L_(13)      /**< PWM0 signal: PWMH2 on PA13 mux B*/
#define MUX_PA13B_PWM0_PWMH2                       _L_(1)       /**< PWM0 signal line function value: PWMH2 */
#define PIO_PA13B_PWM0_PWMH2                       (_UL_(1) << 13)

#define PIN_PA25B_PWM0_PWMH2                       _L_(25)      /**< PWM0 signal: PWMH2 on PA25 mux B*/
#define MUX_PA25B_PWM0_PWMH2                       _L_(1)       /**< PWM0 signal line function value: PWMH2 */
#define PIO_PA25B_PWM0_PWMH2                       (_UL_(1) << 25)

#define PIN_PB4B_PWM0_PWMH2                        _L_(36)      /**< PWM0 signal: PWMH2 on PB4 mux B*/
#define MUX_PB4B_PWM0_PWMH2                        _L_(1)       /**< PWM0 signal line function value: PWMH2 */
#define PIO_PB4B_PWM0_PWMH2                        (_UL_(1) << 4)

#define PIN_PD22A_PWM0_PWMH2                       _L_(118)     /**< PWM0 signal: PWMH2 on PD22 mux A*/
#define MUX_PD22A_PWM0_PWMH2                       _L_(0)       /**< PWM0 signal line function value: PWMH2 */
#define PIO_PD22A_PWM0_PWMH2                       (_UL_(1) << 22)

#define PIN_PA7B_PWM0_PWMH3                        _L_(7)       /**< PWM0 signal: PWMH3 on PA7 mux B*/
#define MUX_PA7B_PWM0_PWMH3                        _L_(1)       /**< PWM0 signal line function value: PWMH3 */
#define PIO_PA7B_PWM0_PWMH3                        (_UL_(1) << 7)

#define PIN_PA14B_PWM0_PWMH3                       _L_(14)      /**< PWM0 signal: PWMH3 on PA14 mux B*/
#define MUX_PA14B_PWM0_PWMH3                       _L_(1)       /**< PWM0 signal line function value: PWMH3 */
#define PIO_PA14B_PWM0_PWMH3                       (_UL_(1) << 14)

#define PIN_PA17C_PWM0_PWMH3                       _L_(17)      /**< PWM0 signal: PWMH3 on PA17 mux C*/
#define MUX_PA17C_PWM0_PWMH3                       _L_(2)       /**< PWM0 signal line function value: PWMH3 */
#define PIO_PA17C_PWM0_PWMH3                       (_UL_(1) << 17)

#define PIN_PD23A_PWM0_PWMH3                       _L_(119)     /**< PWM0 signal: PWMH3 on PD23 mux A*/
#define MUX_PD23A_PWM0_PWMH3                       _L_(0)       /**< PWM0 signal line function value: PWMH3 */
#define PIO_PD23A_PWM0_PWMH3                       (_UL_(1) << 23)

#define PIN_PA1A_PWM0_PWML0                        _L_(1)       /**< PWM0 signal: PWML0 on PA1 mux A*/
#define MUX_PA1A_PWM0_PWML0                        _L_(0)       /**< PWM0 signal line function value: PWML0 */
#define PIO_PA1A_PWM0_PWML0                        (_UL_(1) << 1)

#define PIN_PA19B_PWM0_PWML0                       _L_(19)      /**< PWM0 signal: PWML0 on PA19 mux B*/
#define MUX_PA19B_PWM0_PWML0                       _L_(1)       /**< PWM0 signal line function value: PWML0 */
#define PIO_PA19B_PWM0_PWML0                       (_UL_(1) << 19)

#define PIN_PB5B_PWM0_PWML0                        _L_(37)      /**< PWM0 signal: PWML0 on PB5 mux B*/
#define MUX_PB5B_PWM0_PWML0                        _L_(1)       /**< PWM0 signal line function value: PWML0 */
#define PIO_PB5B_PWM0_PWML0                        (_UL_(1) << 5)

#define PIN_PD10B_PWM0_PWML0                       _L_(106)     /**< PWM0 signal: PWML0 on PD10 mux B*/
#define MUX_PD10B_PWM0_PWML0                       _L_(1)       /**< PWM0 signal line function value: PWML0 */
#define PIO_PD10B_PWM0_PWML0                       (_UL_(1) << 10)

#define PIN_PD24A_PWM0_PWML0                       _L_(120)     /**< PWM0 signal: PWML0 on PD24 mux A*/
#define MUX_PD24A_PWM0_PWML0                       _L_(0)       /**< PWM0 signal line function value: PWML0 */
#define PIO_PD24A_PWM0_PWML0                       (_UL_(1) << 24)

#define PIN_PA20B_PWM0_PWML1                       _L_(20)      /**< PWM0 signal: PWML1 on PA20 mux B*/
#define MUX_PA20B_PWM0_PWML1                       _L_(1)       /**< PWM0 signal line function value: PWML1 */
#define PIO_PA20B_PWM0_PWML1                       (_UL_(1) << 20)

#define PIN_PB12A_PWM0_PWML1                       _L_(44)      /**< PWM0 signal: PWML1 on PB12 mux A*/
#define MUX_PB12A_PWM0_PWML1                       _L_(0)       /**< PWM0 signal line function value: PWML1 */
#define PIO_PB12A_PWM0_PWML1                       (_UL_(1) << 12)

#define PIN_PD25A_PWM0_PWML1                       _L_(121)     /**< PWM0 signal: PWML1 on PD25 mux A*/
#define MUX_PD25A_PWM0_PWML1                       _L_(0)       /**< PWM0 signal line function value: PWML1 */
#define PIO_PD25A_PWM0_PWML1                       (_UL_(1) << 25)

#define PIN_PA16C_PWM0_PWML2                       _L_(16)      /**< PWM0 signal: PWML2 on PA16 mux C*/
#define MUX_PA16C_PWM0_PWML2                       _L_(2)       /**< PWM0 signal line function value: PWML2 */
#define PIO_PA16C_PWM0_PWML2                       (_UL_(1) << 16)

#define PIN_PA30A_PWM0_PWML2                       _L_(30)      /**< PWM0 signal: PWML2 on PA30 mux A*/
#define MUX_PA30A_PWM0_PWML2                       _L_(0)       /**< PWM0 signal line function value: PWML2 */
#define PIO_PA30A_PWM0_PWML2                       (_UL_(1) << 30)

#define PIN_PB13A_PWM0_PWML2                       _L_(45)      /**< PWM0 signal: PWML2 on PB13 mux A*/
#define MUX_PB13A_PWM0_PWML2                       _L_(0)       /**< PWM0 signal line function value: PWML2 */
#define PIO_PB13A_PWM0_PWML2                       (_UL_(1) << 13)

#define PIN_PD26A_PWM0_PWML2                       _L_(122)     /**< PWM0 signal: PWML2 on PD26 mux A*/
#define MUX_PD26A_PWM0_PWML2                       _L_(0)       /**< PWM0 signal line function value: PWML2 */
#define PIO_PD26A_PWM0_PWML2                       (_UL_(1) << 26)

#define PIN_PA15C_PWM0_PWML3                       _L_(15)      /**< PWM0 signal: PWML3 on PA15 mux C*/
#define MUX_PA15C_PWM0_PWML3                       _L_(2)       /**< PWM0 signal line function value: PWML3 */
#define PIO_PA15C_PWM0_PWML3                       (_UL_(1) << 15)

#define PIN_PD27A_PWM0_PWML3                       _L_(123)     /**< PWM0 signal: PWML3 on PD27 mux A*/
#define MUX_PD27A_PWM0_PWML3                       _L_(0)       /**< PWM0 signal line function value: PWML3 */
#define PIO_PD27A_PWM0_PWML3                       (_UL_(1) << 27)

/* ========== PIO definition for PWM1 peripheral ========== */
#define PIN_PA30B_PWM1_PWMEXTRG0                   _L_(30)      /**< PWM1 signal: PWMEXTRG0 on PA30 mux B*/
#define MUX_PA30B_PWM1_PWMEXTRG0                   _L_(1)       /**< PWM1 signal line function value: PWMEXTRG0 */
#define PIO_PA30B_PWM1_PWMEXTRG0                   (_UL_(1) << 30)

#define PIN_PA18A_PWM1_PWMEXTRG1                   _L_(18)      /**< PWM1 signal: PWMEXTRG1 on PA18 mux A*/
#define MUX_PA18A_PWM1_PWMEXTRG1                   _L_(0)       /**< PWM1 signal line function value: PWMEXTRG1 */
#define PIO_PA18A_PWM1_PWMEXTRG1                   (_UL_(1) << 18)

#define PIN_PA21C_PWM1_PWMFI0                      _L_(21)      /**< PWM1 signal: PWMFI0 on PA21 mux C*/
#define MUX_PA21C_PWM1_PWMFI0                      _L_(2)       /**< PWM1 signal line function value: PWMFI0 */
#define PIO_PA21C_PWM1_PWMFI0                      (_UL_(1) << 21)

#define PIN_PA26D_PWM1_PWMFI1                      _L_(26)      /**< PWM1 signal: PWMFI1 on PA26 mux D*/
#define MUX_PA26D_PWM1_PWMFI1                      _L_(3)       /**< PWM1 signal line function value: PWMFI1 */
#define PIO_PA26D_PWM1_PWMFI1                      (_UL_(1) << 26)

#define PIN_PA28D_PWM1_PWMFI2                      _L_(28)      /**< PWM1 signal: PWMFI2 on PA28 mux D*/
#define MUX_PA28D_PWM1_PWMFI2                      _L_(3)       /**< PWM1 signal line function value: PWMFI2 */
#define PIO_PA28D_PWM1_PWMFI2                      (_UL_(1) << 28)

#define PIN_PA12C_PWM1_PWMH0                       _L_(12)      /**< PWM1 signal: PWMH0 on PA12 mux C*/
#define MUX_PA12C_PWM1_PWMH0                       _L_(2)       /**< PWM1 signal line function value: PWMH0 */
#define PIO_PA12C_PWM1_PWMH0                       (_UL_(1) << 12)

#define PIN_PD1B_PWM1_PWMH0                        _L_(97)      /**< PWM1 signal: PWMH0 on PD1 mux B*/
#define MUX_PD1B_PWM1_PWMH0                        _L_(1)       /**< PWM1 signal line function value: PWMH0 */
#define PIO_PD1B_PWM1_PWMH0                        (_UL_(1) << 1)

#define PIN_PA14C_PWM1_PWMH1                       _L_(14)      /**< PWM1 signal: PWMH1 on PA14 mux C*/
#define MUX_PA14C_PWM1_PWMH1                       _L_(2)       /**< PWM1 signal line function value: PWMH1 */
#define PIO_PA14C_PWM1_PWMH1                       (_UL_(1) << 14)

#define PIN_PD3B_PWM1_PWMH1                        _L_(99)      /**< PWM1 signal: PWMH1 on PD3 mux B*/
#define MUX_PD3B_PWM1_PWMH1                        _L_(1)       /**< PWM1 signal line function value: PWMH1 */
#define PIO_PD3B_PWM1_PWMH1                        (_UL_(1) << 3)

#define PIN_PA31D_PWM1_PWMH2                       _L_(31)      /**< PWM1 signal: PWMH2 on PA31 mux D*/
#define MUX_PA31D_PWM1_PWMH2                       _L_(3)       /**< PWM1 signal line function value: PWMH2 */
#define PIO_PA31D_PWM1_PWMH2                       (_UL_(1) << 31)

#define PIN_PD5B_PWM1_PWMH2                        _L_(101)     /**< PWM1 signal: PWMH2 on PD5 mux B*/
#define MUX_PD5B_PWM1_PWMH2                        _L_(1)       /**< PWM1 signal line function value: PWMH2 */
#define PIO_PD5B_PWM1_PWMH2                        (_UL_(1) << 5)

#define PIN_PA8A_PWM1_PWMH3                        _L_(8)       /**< PWM1 signal: PWMH3 on PA8 mux A*/
#define MUX_PA8A_PWM1_PWMH3                        _L_(0)       /**< PWM1 signal line function value: PWMH3 */
#define PIO_PA8A_PWM1_PWMH3                        (_UL_(1) << 8)

#define PIN_PD7B_PWM1_PWMH3                        _L_(103)     /**< PWM1 signal: PWMH3 on PD7 mux B*/
#define MUX_PD7B_PWM1_PWMH3                        _L_(1)       /**< PWM1 signal line function value: PWMH3 */
#define PIO_PD7B_PWM1_PWMH3                        (_UL_(1) << 7)

#define PIN_PA11C_PWM1_PWML0                       _L_(11)      /**< PWM1 signal: PWML0 on PA11 mux C*/
#define MUX_PA11C_PWM1_PWML0                       _L_(2)       /**< PWM1 signal line function value: PWML0 */
#define PIO_PA11C_PWM1_PWML0                       (_UL_(1) << 11)

#define PIN_PD0B_PWM1_PWML0                        _L_(96)      /**< PWM1 signal: PWML0 on PD0 mux B*/
#define MUX_PD0B_PWM1_PWML0                        _L_(1)       /**< PWM1 signal line function value: PWML0 */
#define PIO_PD0B_PWM1_PWML0                        (_UL_(1) << 0)

#define PIN_PA13C_PWM1_PWML1                       _L_(13)      /**< PWM1 signal: PWML1 on PA13 mux C*/
#define MUX_PA13C_PWM1_PWML1                       _L_(2)       /**< PWM1 signal line function value: PWML1 */
#define PIO_PA13C_PWM1_PWML1                       (_UL_(1) << 13)

#define PIN_PD2B_PWM1_PWML1                        _L_(98)      /**< PWM1 signal: PWML1 on PD2 mux B*/
#define MUX_PD2B_PWM1_PWML1                        _L_(1)       /**< PWM1 signal line function value: PWML1 */
#define PIO_PD2B_PWM1_PWML1                        (_UL_(1) << 2)

#define PIN_PA23D_PWM1_PWML2                       _L_(23)      /**< PWM1 signal: PWML2 on PA23 mux D*/
#define MUX_PA23D_PWM1_PWML2                       _L_(3)       /**< PWM1 signal line function value: PWML2 */
#define PIO_PA23D_PWM1_PWML2                       (_UL_(1) << 23)

#define PIN_PD4B_PWM1_PWML2                        _L_(100)     /**< PWM1 signal: PWML2 on PD4 mux B*/
#define MUX_PD4B_PWM1_PWML2                        _L_(1)       /**< PWM1 signal line function value: PWML2 */
#define PIO_PD4B_PWM1_PWML2                        (_UL_(1) << 4)

#define PIN_PA5A_PWM1_PWML3                        _L_(5)       /**< PWM1 signal: PWML3 on PA5 mux A*/
#define MUX_PA5A_PWM1_PWML3                        _L_(0)       /**< PWM1 signal line function value: PWML3 */
#define PIO_PA5A_PWM1_PWML3                        (_UL_(1) << 5)

#define PIN_PD6B_PWM1_PWML3                        _L_(102)     /**< PWM1 signal: PWML3 on PD6 mux B*/
#define MUX_PD6B_PWM1_PWML3                        _L_(1)       /**< PWM1 signal line function value: PWML3 */
#define PIO_PD6B_PWM1_PWML3                        (_UL_(1) << 6)

/* ========== PIO definition for QSPI peripheral ========== */
#define PIN_PA11A_QSPI_QCS                         _L_(11)      /**< QSPI signal: QCS on PA11 mux A*/
#define MUX_PA11A_QSPI_QCS                         _L_(0)       /**< QSPI signal line function value: QCS */
#define PIO_PA11A_QSPI_QCS                         (_UL_(1) << 11)

#define PIN_PA13A_QSPI_QIO0                        _L_(13)      /**< QSPI signal: QIO0 on PA13 mux A*/
#define MUX_PA13A_QSPI_QIO0                        _L_(0)       /**< QSPI signal line function value: QIO0 */
#define PIO_PA13A_QSPI_QIO0                        (_UL_(1) << 13)

#define PIN_PA12A_QSPI_QIO1                        _L_(12)      /**< QSPI signal: QIO1 on PA12 mux A*/
#define MUX_PA12A_QSPI_QIO1                        _L_(0)       /**< QSPI signal line function value: QIO1 */
#define PIO_PA12A_QSPI_QIO1                        (_UL_(1) << 12)

#define PIN_PA17A_QSPI_QIO2                        _L_(17)      /**< QSPI signal: QIO2 on PA17 mux A*/
#define MUX_PA17A_QSPI_QIO2                        _L_(0)       /**< QSPI signal line function value: QIO2 */
#define PIO_PA17A_QSPI_QIO2                        (_UL_(1) << 17)

#define PIN_PD31A_QSPI_QIO3                        _L_(127)     /**< QSPI signal: QIO3 on PD31 mux A*/
#define MUX_PD31A_QSPI_QIO3                        _L_(0)       /**< QSPI signal line function value: QIO3 */
#define PIO_PD31A_QSPI_QIO3                        (_UL_(1) << 31)

#define PIN_PA14A_QSPI_QSCK                        _L_(14)      /**< QSPI signal: QSCK on PA14 mux A*/
#define MUX_PA14A_QSPI_QSCK                        _L_(0)       /**< QSPI signal line function value: QSCK */
#define PIO_PA14A_QSPI_QSCK                        (_UL_(1) << 14)

/* ========== PIO definition for SSC peripheral ========== */
#define PIN_PA10C_SSC_RD                           _L_(10)      /**< SSC signal: RD on PA10 mux C*/
#define MUX_PA10C_SSC_RD                           _L_(2)       /**< SSC signal line function value: RD */
#define PIO_PA10C_SSC_RD                           (_UL_(1) << 10)

#define PIN_PD24B_SSC_RF                           _L_(120)     /**< SSC signal: RF on PD24 mux B*/
#define MUX_PD24B_SSC_RF                           _L_(1)       /**< SSC signal line function value: RF */
#define PIO_PD24B_SSC_RF                           (_UL_(1) << 24)

#define PIN_PA22A_SSC_RK                           _L_(22)      /**< SSC signal: RK on PA22 mux A*/
#define MUX_PA22A_SSC_RK                           _L_(0)       /**< SSC signal line function value: RK */
#define PIO_PA22A_SSC_RK                           (_UL_(1) << 22)

#define PIN_PB5D_SSC_TD                            _L_(37)      /**< SSC signal: TD on PB5 mux D*/
#define MUX_PB5D_SSC_TD                            _L_(3)       /**< SSC signal line function value: TD */
#define PIO_PB5D_SSC_TD                            (_UL_(1) << 5)

#define PIN_PD10C_SSC_TD                           _L_(106)     /**< SSC signal: TD on PD10 mux C*/
#define MUX_PD10C_SSC_TD                           _L_(2)       /**< SSC signal line function value: TD */
#define PIO_PD10C_SSC_TD                           (_UL_(1) << 10)

#define PIN_PD26B_SSC_TD                           _L_(122)     /**< SSC signal: TD on PD26 mux B*/
#define MUX_PD26B_SSC_TD                           _L_(1)       /**< SSC signal line function value: TD */
#define PIO_PD26B_SSC_TD                           (_UL_(1) << 26)

#define PIN_PB0D_SSC_TF                            _L_(32)      /**< SSC signal: TF on PB0 mux D*/
#define MUX_PB0D_SSC_TF                            _L_(3)       /**< SSC signal line function value: TF */
#define PIO_PB0D_SSC_TF                            (_UL_(1) << 0)

#define PIN_PB1D_SSC_TK                            _L_(33)      /**< SSC signal: TK on PB1 mux D*/
#define MUX_PB1D_SSC_TK                            _L_(3)       /**< SSC signal line function value: TK */
#define PIO_PB1D_SSC_TK                            (_UL_(1) << 1)

/* ========== PIO definition for TC0 peripheral ========== */
#define PIN_PA4B_TC0_TCLK0                         _L_(4)       /**< TC0 signal: TCLK0 on PA4 mux B*/
#define MUX_PA4B_TC0_TCLK0                         _L_(1)       /**< TC0 signal line function value: TCLK0 */
#define PIO_PA4B_TC0_TCLK0                         (_UL_(1) << 4)

#define PIN_PA27B_TC0_TIOB2                        _L_(27)      /**< TC0 signal: TIOB2 on PA27 mux B*/
#define MUX_PA27B_TC0_TIOB2                        _L_(1)       /**< TC0 signal line function value: TIOB2 */
#define PIO_PA27B_TC0_TIOB2                        (_UL_(1) << 27)

/* ========== PIO definition for TC3 peripheral ========== */
#define PIN_PD24C_TC3_TCLK11                       _L_(120)     /**< TC3 signal: TCLK11 on PD24 mux C*/
#define MUX_PD24C_TC3_TCLK11                       _L_(2)       /**< TC3 signal line function value: TCLK11 */
#define PIO_PD24C_TC3_TCLK11                       (_UL_(1) << 24)

#define PIN_PD21C_TC3_TIOA11                       _L_(117)     /**< TC3 signal: TIOA11 on PD21 mux C*/
#define MUX_PD21C_TC3_TIOA11                       _L_(2)       /**< TC3 signal line function value: TIOA11 */
#define PIO_PD21C_TC3_TIOA11                       (_UL_(1) << 21)

#define PIN_PD22C_TC3_TIOB11                       _L_(118)     /**< TC3 signal: TIOB11 on PD22 mux C*/
#define MUX_PD22C_TC3_TIOB11                       _L_(2)       /**< TC3 signal line function value: TIOB11 */
#define PIO_PD22C_TC3_TIOB11                       (_UL_(1) << 22)

/* ========== PIO definition for TWIHS0 peripheral ========== */
#define PIN_PA4A_TWIHS0_TWCK0                      _L_(4)       /**< TWIHS0 signal: TWCK0 on PA4 mux A*/
#define MUX_PA4A_TWIHS0_TWCK0                      _L_(0)       /**< TWIHS0 signal line function value: TWCK0 */
#define PIO_PA4A_TWIHS0_TWCK0                      (_UL_(1) << 4)

#define PIN_PA3A_TWIHS0_TWD0                       _L_(3)       /**< TWIHS0 signal: TWD0 on PA3 mux A*/
#define MUX_PA3A_TWIHS0_TWD0                       _L_(0)       /**< TWIHS0 signal line function value: TWD0 */
#define PIO_PA3A_TWIHS0_TWD0                       (_UL_(1) << 3)

/* ========== PIO definition for TWIHS1 peripheral ========== */
#define PIN_PB5A_TWIHS1_TWCK1                      _L_(37)      /**< TWIHS1 signal: TWCK1 on PB5 mux A*/
#define MUX_PB5A_TWIHS1_TWCK1                      _L_(0)       /**< TWIHS1 signal line function value: TWCK1 */
#define PIO_PB5A_TWIHS1_TWCK1                      (_UL_(1) << 5)

#define PIN_PB4A_TWIHS1_TWD1                       _L_(36)      /**< TWIHS1 signal: TWD1 on PB4 mux A*/
#define MUX_PB4A_TWIHS1_TWD1                       _L_(0)       /**< TWIHS1 signal line function value: TWD1 */
#define PIO_PB4A_TWIHS1_TWD1                       (_UL_(1) << 4)

/* ========== PIO definition for UART0 peripheral ========== */
#define PIN_PA9A_UART0_URXD0                       _L_(9)       /**< UART0 signal: URXD0 on PA9 mux A*/
#define MUX_PA9A_UART0_URXD0                       _L_(0)       /**< UART0 signal line function value: URXD0 */
#define PIO_PA9A_UART0_URXD0                       (_UL_(1) << 9)

#define PIN_PA10A_UART0_UTXD0                      _L_(10)      /**< UART0 signal: UTXD0 on PA10 mux A*/
#define MUX_PA10A_UART0_UTXD0                      _L_(0)       /**< UART0 signal line function value: UTXD0 */
#define PIO_PA10A_UART0_UTXD0                      (_UL_(1) << 10)

/* ========== PIO definition for UART1 peripheral ========== */
#define PIN_PA5C_UART1_URXD1                       _L_(5)       /**< UART1 signal: URXD1 on PA5 mux C*/
#define MUX_PA5C_UART1_URXD1                       _L_(2)       /**< UART1 signal line function value: URXD1 */
#define PIO_PA5C_UART1_URXD1                       (_UL_(1) << 5)

#define PIN_PA4C_UART1_UTXD1                       _L_(4)       /**< UART1 signal: UTXD1 on PA4 mux C*/
#define MUX_PA4C_UART1_UTXD1                       _L_(2)       /**< UART1 signal line function value: UTXD1 */
#define PIO_PA4C_UART1_UTXD1                       (_UL_(1) << 4)

#define PIN_PA6C_UART1_UTXD1                       _L_(6)       /**< UART1 signal: UTXD1 on PA6 mux C*/
#define MUX_PA6C_UART1_UTXD1                       _L_(2)       /**< UART1 signal line function value: UTXD1 */
#define PIO_PA6C_UART1_UTXD1                       (_UL_(1) << 6)

#define PIN_PD26D_UART1_UTXD1                      _L_(122)     /**< UART1 signal: UTXD1 on PD26 mux D*/
#define MUX_PD26D_UART1_UTXD1                      _L_(3)       /**< UART1 signal line function value: UTXD1 */
#define PIO_PD26D_UART1_UTXD1                      (_UL_(1) << 26)

/* ========== PIO definition for UART2 peripheral ========== */
#define PIN_PD25C_UART2_URXD2                      _L_(121)     /**< UART2 signal: URXD2 on PD25 mux C*/
#define MUX_PD25C_UART2_URXD2                      _L_(2)       /**< UART2 signal line function value: URXD2 */
#define PIO_PD25C_UART2_URXD2                      (_UL_(1) << 25)

#define PIN_PD26C_UART2_UTXD2                      _L_(122)     /**< UART2 signal: UTXD2 on PD26 mux C*/
#define MUX_PD26C_UART2_UTXD2                      _L_(2)       /**< UART2 signal line function value: UTXD2 */
#define PIO_PD26C_UART2_UTXD2                      (_UL_(1) << 26)

/* ========== PIO definition for USART0 peripheral ========== */
#define PIN_PB2C_USART0_CTS0                       _L_(34)      /**< USART0 signal: CTS0 on PB2 mux C*/
#define MUX_PB2C_USART0_CTS0                       _L_(2)       /**< USART0 signal line function value: CTS0 */
#define PIO_PB2C_USART0_CTS0                       (_UL_(1) << 2)

#define PIN_PD0D_USART0_DCD0                       _L_(96)      /**< USART0 signal: DCD0 on PD0 mux D*/
#define MUX_PD0D_USART0_DCD0                       _L_(3)       /**< USART0 signal line function value: DCD0 */
#define PIO_PD0D_USART0_DCD0                       (_UL_(1) << 0)

#define PIN_PD2D_USART0_DSR0                       _L_(98)      /**< USART0 signal: DSR0 on PD2 mux D*/
#define MUX_PD2D_USART0_DSR0                       _L_(3)       /**< USART0 signal line function value: DSR0 */
#define PIO_PD2D_USART0_DSR0                       (_UL_(1) << 2)

#define PIN_PD1D_USART0_DTR0                       _L_(97)      /**< USART0 signal: DTR0 on PD1 mux D*/
#define MUX_PD1D_USART0_DTR0                       _L_(3)       /**< USART0 signal line function value: DTR0 */
#define PIO_PD1D_USART0_DTR0                       (_UL_(1) << 1)

#define PIN_PD3D_USART0_RI0                        _L_(99)      /**< USART0 signal: RI0 on PD3 mux D*/
#define MUX_PD3D_USART0_RI0                        _L_(3)       /**< USART0 signal line function value: RI0 */
#define PIO_PD3D_USART0_RI0                        (_UL_(1) << 3)

#define PIN_PB3C_USART0_RTS0                       _L_(35)      /**< USART0 signal: RTS0 on PB3 mux C*/
#define MUX_PB3C_USART0_RTS0                       _L_(2)       /**< USART0 signal line function value: RTS0 */
#define PIO_PB3C_USART0_RTS0                       (_UL_(1) << 3)

#define PIN_PB0C_USART0_RXD0                       _L_(32)      /**< USART0 signal: RXD0 on PB0 mux C*/
#define MUX_PB0C_USART0_RXD0                       _L_(2)       /**< USART0 signal line function value: RXD0 */
#define PIO_PB0C_USART0_RXD0                       (_UL_(1) << 0)

#define PIN_PB13C_USART0_SCK0                      _L_(45)      /**< USART0 signal: SCK0 on PB13 mux C*/
#define MUX_PB13C_USART0_SCK0                      _L_(2)       /**< USART0 signal line function value: SCK0 */
#define PIO_PB13C_USART0_SCK0                      (_UL_(1) << 13)

#define PIN_PB1C_USART0_TXD0                       _L_(33)      /**< USART0 signal: TXD0 on PB1 mux C*/
#define MUX_PB1C_USART0_TXD0                       _L_(2)       /**< USART0 signal line function value: TXD0 */
#define PIO_PB1C_USART0_TXD0                       (_UL_(1) << 1)

/* ========== PIO definition for USART1 peripheral ========== */
#define PIN_PA25A_USART1_CTS1                      _L_(25)      /**< USART1 signal: CTS1 on PA25 mux A*/
#define MUX_PA25A_USART1_CTS1                      _L_(0)       /**< USART1 signal line function value: CTS1 */
#define PIO_PA25A_USART1_CTS1                      (_UL_(1) << 25)

#define PIN_PA26A_USART1_DCD1                      _L_(26)      /**< USART1 signal: DCD1 on PA26 mux A*/
#define MUX_PA26A_USART1_DCD1                      _L_(0)       /**< USART1 signal line function value: DCD1 */
#define PIO_PA26A_USART1_DCD1                      (_UL_(1) << 26)

#define PIN_PA28A_USART1_DSR1                      _L_(28)      /**< USART1 signal: DSR1 on PA28 mux A*/
#define MUX_PA28A_USART1_DSR1                      _L_(0)       /**< USART1 signal line function value: DSR1 */
#define PIO_PA28A_USART1_DSR1                      (_UL_(1) << 28)

#define PIN_PA27A_USART1_DTR1                      _L_(27)      /**< USART1 signal: DTR1 on PA27 mux A*/
#define MUX_PA27A_USART1_DTR1                      _L_(0)       /**< USART1 signal line function value: DTR1 */
#define PIO_PA27A_USART1_DTR1                      (_UL_(1) << 27)

#define PIN_PA3B_USART1_LONCOL1                    _L_(3)       /**< USART1 signal: LONCOL1 on PA3 mux B*/
#define MUX_PA3B_USART1_LONCOL1                    _L_(1)       /**< USART1 signal line function value: LONCOL1 */
#define PIO_PA3B_USART1_LONCOL1                    (_UL_(1) << 3)

#define PIN_PA29A_USART1_RI1                       _L_(29)      /**< USART1 signal: RI1 on PA29 mux A*/
#define MUX_PA29A_USART1_RI1                       _L_(0)       /**< USART1 signal line function value: RI1 */
#define PIO_PA29A_USART1_RI1                       (_UL_(1) << 29)

#define PIN_PA24A_USART1_RTS1                      _L_(24)      /**< USART1 signal: RTS1 on PA24 mux A*/
#define MUX_PA24A_USART1_RTS1                      _L_(0)       /**< USART1 signal line function value: RTS1 */
#define PIO_PA24A_USART1_RTS1                      (_UL_(1) << 24)

#define PIN_PA21A_USART1_RXD1                      _L_(21)      /**< USART1 signal: RXD1 on PA21 mux A*/
#define MUX_PA21A_USART1_RXD1                      _L_(0)       /**< USART1 signal line function value: RXD1 */
#define PIO_PA21A_USART1_RXD1                      (_UL_(1) << 21)

#define PIN_PA23A_USART1_SCK1                      _L_(23)      /**< USART1 signal: SCK1 on PA23 mux A*/
#define MUX_PA23A_USART1_SCK1                      _L_(0)       /**< USART1 signal line function value: SCK1 */
#define PIO_PA23A_USART1_SCK1                      (_UL_(1) << 23)

#define PIN_PB4D_USART1_TXD1                       _L_(36)      /**< USART1 signal: TXD1 on PB4 mux D*/
#define MUX_PB4D_USART1_TXD1                       _L_(3)       /**< USART1 signal line function value: TXD1 */
#define PIO_PB4D_USART1_TXD1                       (_UL_(1) << 4)


#endif /* _SAMS70J19_PIO_H_ */
