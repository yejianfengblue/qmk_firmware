/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#include "config_common.h"

/* USB Device descriptor parameter */
#define MANUFACTURER okabe
#define PRODUCT      ergo34
#define VENDOR_ID    0x444D
#define PRODUCT_ID   0x3636
#define DEVICE_VER   0x0001

/* mouse config */
#define MOUSEKEY_INTERVAL    20
#define MOUSEKEY_DELAY       0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED   7
#define MOUSEKEY_WHEEL_DELAY 0

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define DIRECT_PINS {                           \
        { A1, A4, B8, B5, A8 },                 \
        { A2, A5, B7, B4, B15 },                 \
        { A3, A6, B6, B3, B14 },                 \
        { B13, B12, NO_PIN, NO_PIN, NO_PIN }      \
    }

#define DIRECT_PINS_RIGHT {                     \
        { B12, B3, B6, A3, A6 },                 \
        { B13, B4, B7, A2, A5 },                \
        { B14, B5, B8, A1, A4 },                \
        { A8, B15, NO_PIN, NO_PIN, NO_PIN }    \
    }


// in col2row col is input, and row is output
// #define SPLIT_HAND_MATRIX_GRID A10, A4
// 68kohm
/* #define SPLIT_HAND_PIN              B10 */

/* connection */
/* #define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode. */
/* #define SOFT_SERIAL_PIN B6     // USART TX pin */
/* #define SERIAL_USART_RX_PIN B7     // USART RX pin */
/* #define SERIAL_USART_TX_PIN SOFT_SERIAL_PIN     // USART TX pin */

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN A15
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud


#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */

#define TAPPING_TERM 300

// Mouse key constant speed mode
#define MK_3_SPEED
#define MK_C_OFFSET_0 2
#define MK_C_INTERVAL_0 16
#define MK_C_OFFSET_1 8

#define IGNORE_MOD_TAP_INTERRUPT
// tao/hold default: hold down longer than tapping term
// permissive hold, hold dual-role key, tap another key, release dual-role key
#define PERMISSIVE_HOLD
// hold on other key press
// immediately select hold action when another key is pressed while dual-role key is held down
/* #define HOLD_ON_OTHER_KEY_PRESS */


#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT 200
