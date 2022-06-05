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
#define MANUFACTURER bluesakura
#define PRODUCT      ergo48
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
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS          { A0, A1, A2, A3, A4, A5 }
#define MATRIX_COL_PINS          { B12, B13, B14, B15, B3, B4, B5, B8 }
/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define BOOTMAGIC_LITE_ROW          0
#define BOOTMAGIC_LITE_COLUMN       0
#define BOOTMAGIC_LITE_ROW_RIGHT    7
#define BOOTMAGIC_LITE_COLUMN_RIGHT 0

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
#define SELECT_SOFT_SERIAL_SPEED 2 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud
/* #define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1 */
/* #define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7 */
/* #define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7 */
/* #define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20 */
/* Set 0 if debouncing isn't needed */
/* #define DEBOUNCE 5 */

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD
/* #define SPLIT_USB_DETECT */
