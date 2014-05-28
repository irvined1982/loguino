
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



// If enabled, Loguino will attempt to query the LIS331 sensor using
// the 2-wire interface.
//#define ENABLE_LIS331_POLLER
// If enabled, Loguino will write debug information for this module
//#define DEBUG_LIS331_POLLER
// The I2C address of the LIS331 device.
#define LIS331_I2C_ADDR 25  //SA0 Pin held high
//#define LIS331_I2C_ADDR 24  // SA0 Pin held low
