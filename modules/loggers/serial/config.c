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



// If enabled, Loguino will write log data to the configured
// serial interface.
#define ENABLE_SERIAL_LOGGER
// If defined, debug messages shall be enabled for the
// serial logger.
//#define DEBUG_SERIAL_LOGGER
#ifdef ENABLE_DEBUG
    // If enabled, the serial poller will not initialize the serial interface.
    #define NO_SERIAL_INIT
#endif
// The speed to output data on the chosen serial interface.
// Note: If NO_SERIAL_INIT is defined, this will be ignored.
#define SERIAL_LOGGER_BAUD 115200
// The physical interface to use, on the Arduino Mega, this can be Serial, Serial1, Serial2, or Serial3.
// Note: If NO_SERIAL_INIT is defined, this will be ignored.
#define SERIAL_LOGGER_DEVICE Serial



