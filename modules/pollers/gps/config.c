
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



// If enabled, loguino will listen for NMEA position data
//#define ENABLE_GPS_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_GPS_POLLER
// Pin to illuminate if the GPS has a valid fix.  Use this for visual
// confirmation that the GPS is working correctly.
#define GPS_LED_PIN 10
// Serial device that the GPS is connected to.
#define GPS_SERIAL_DEV Serial
// BAUD rate of the GPS device.
#define GPS_SERIAL_DEV_SPEED 4800

