
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



// If enabled, loguino will calculate and log RPM and dwell.
#define ENABLE_TACH_POLLER
// If enabled, loguino will write debug information for this module
// #define DEBUG_TACH_POLLER
// The first interrupt the opto-isolator circuit is connected to.
#define TACH_FEED_INT_1 0
// The second interrupt the opto-isolator circuit is connected to.
#define TACH_FEED_INT_2 1
// The first pin the opto-isolator circuit is connected to.
#define TACH_FEED_PIN_1 2
// The second pin the opto-isolator circuit is connected to.
#define TACH_FEED_PIN_2 3
// The number of milliseconds to sample at a time
#define TACH_READ_DELAY_MILLIS 50
// The number of ignition pulses per engine revolution
#define TACH_PULSES_RPM 2
// The number of cylinders (for dwell angle)
#define TACH_NUM_CYLS 4



