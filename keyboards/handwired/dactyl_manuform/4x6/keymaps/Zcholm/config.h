/*
This is the c configuration file for the keymap

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

/* Use I2C or Serial, not both */
#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

//#define MASTER_LEFT
//#define MASTER_RIGHT
//#define EE_HANDS

#define SPLIT_HAND_PIN F6

/* Use an unused intersection to decide handedness */
//#define SPLIT_HAND_MATRIX_GRID B5, F7

/* Left hand has no diode: */
#define SPLIT_HAND_MATRIX_GRID_LOW_IS_RIGH


#define SPLIT_USB_DETECT

#define TAPPING_TERM 200

#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

/* CTRL overrides shift+esc as grave: (Fixes ctr+shift+esc) */
#define GRAVE_ESC_CTRL_OVERRIDE

