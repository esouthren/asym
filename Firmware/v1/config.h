/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

#pragma once

/* USB Device descriptor parameter */
// #define VENDOR_ID       0xCB10
// #define PRODUCT_ID      0x1257
// #define DEVICE_VER      0x0100
#define MANUFACTURER    E Southren
#define PRODUCT         Asym Rev. 1

/* key matrix size */
// Cols is Left+Right columns
#define MATRIX_ROWS 5
#define MATRIX_COLS 18

// wiring of each half
#define MATRIX_ROW_PINS { D4, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F5, F6, F7, B1, B3, B2, B6 }
#define MATRIX_ROW_PINS_RIGHT { D1, D0, D4, C6, D7 }
#define MATRIX_COL_PINS_RIGHT { E6, B4, B5, F4, F5, F6, F7, B1, B3, B2, B6 }
#define SPLIT_HAND_PIN D2 // maybe change?

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 35    // Number of LEDs
#define RGBLED_SPLIT { 11, 24 }

// Set 65% column (option 1) and Macro (option 2) on by default
#define VIA_EEPROM_LAYOUT_OPTIONS_DEFAULT 0x60
