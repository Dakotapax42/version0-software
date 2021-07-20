/*

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "config_common.h"

#pragma once

#define VENDOR_ID       0x0000
#define PRODUCT_ID      0x0000
#define DEVICE_VER      0x0000
#define MANUFACTURER    Wave
#define PRODUCT         Version0

/* matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14
#define MATRIX_ROW_PINS { A6, A7, C7, C6, C5, C4 }
#define MATRIX_COL_PINS { F0, F1, F2, F3, F4, F5, F6, F7, A0, A1, A2, A3, A4, A5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW



#define TAP_CODE_DELAY 10
#define ENCODERS_PAD_A { B6 }
#define ENCODERS_PAD_B { B7 }


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 3

 /* Backlight configuration */
#define BACKLIGHT_LEVELS 20

// This is a 7-bit address, that gets left-shifted and bit 0
// set to 0 for write, 1 for read (as per I2C protocol)
// The address will vary depending on your wiring:
// 00 <-> GND
// 01 <-> SCL
// 10 <-> SDA
// 11 <-> VCC
// ADDR1 represents A1:A0 of the 7-bit address.
// ADDR2 represents A3:A2 of the 7-bit address.
// The result is: 0b101(ADDR2)(ADDR1)

#define LED_DRIVER_ADDR_1 0b1010000
#define LED_DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.
#define LED_DRIVER_COUNT 1
#define DRIVER_1_LED_TOTAL 71
#define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL

#define EECONFIG_MAGIC_NUMBER (uint16_t)0x1337