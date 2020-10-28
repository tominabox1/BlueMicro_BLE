/*
Copyright 2018 <Pierre Constantineau>

3-Clause BSD License

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR 
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/
#ifndef HARDWARE_CONFIG_H
#define HARDWARE_CONFIG_H

#include "hardware_variants.h"

/* HARDWARE DEFINITION*/
/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 7

#define D3      6  
        #define D2      8   
        #define D1      17 
        #define D0      20  
        #define D4      22
        #define C6      24
        #define D7      32
        #define E6      11
        #define B4      36
        #define B5      38 //1.06 = 32+6

        #define F4      31
        #define F5      29  
        #define F6      2
        #define F7      47
        #define B1      45 //1.13  = 32+13
        #define B3      43
        #define B2      10
        #define B6      9 //1.11 = 32+11
        #define NC      32 //1.00 = 32+0 // NC is for not connected....

#define MATRIX_ROW_PINS { F4, D4, C6, E6, D1, D0 }
#define MATRIX_COL_PINS { B4, D3, D2, F5, B5, F6, D7 }
#define UNUSED_PINS {}

#define BACKLIGHT_PWM_ON 0
#define WS2812B_LED_PIN 9

#define WS2812B_LED_COUNT 10
#define WS2812B_LED_ON 1 

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

       #define BATTERY_TYPE BATT_LIPO
        #define VBAT_PIN  4
        #define VCC_PIN 13
        #define VCC_POLARITY_ON 0
 
#endif /* HARDWARE_CONFIG_H */
