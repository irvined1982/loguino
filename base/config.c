/* Copyright 2014 David Irvine
 *
 * This file is part of Loguino
 *
 * Loguino is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Loguino is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Loguino.  If not, see "http://www.gnu.org/licenses/".
 *
*/


// When enabled, (default is disabled) loguino will be configured using the file
// loguinoConfig.h which must exist inside the sketch folder.  This enables you
// to easily switch between configurations, and to store configuration information
// between versions.
//#define USE_LOGUINO_CONFIG

#ifdef USE_LOGUINO_CONFIG
    #include "loguinoConfig.h"
#else
    // When enabled, Loguino will write out debug information.
    //#define ENABLE_DEBUG

    // Loguino can log at 5 different levels of verbosity, 1 is the lowest,
    // and 5 is the highest.
    #define DEBUG_LEVEL 5

    // The serial device to use for debugging, must be a real serial device,
    // cannot be a software serial device.
    #define DEBUG_SERIAL_DEV Serial

    // BAUD rate that the port will be set to.
    #define DEBUG_SERIAL_BAUD 115200

    // The number of milliseconds that each cycle must last for at a minimum.
    // If set to zero, Loguino will log as fast as it can, which depends a
    // lot on the type of sensors connected.  The default is 500, which is 2Hz.
    #define MIN_CYCLE_TIME 50
#endif


