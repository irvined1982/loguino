
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



// If enabled, loguino will log the state of the alarm pin and voltage of the sensor
#define ENABLE_P27931_POLLER

// If enabled, loguino will write debug information for this poller
// #define DEBUG_P27931_POLLER

// The number of milliseconds the sensor needs to be purged for, no logging occurs when purging. Default: 60 Seconds
#define P27931_PURGE_TIME 60000

// The number of milliseconds the sensor will be sensed for. Default: 90 Seconds.
#define P27931_SAMPLE_TIME 90000

// The analog pin that is connected to TP1 on the board.
#define P27931_SAMPLE_PIN 1

// The digital pin that is connected to the alarm pin on the board.
#define P27931_ALARM_PIN 2

// The digital pin (Must support PWM) that is connected to the heater pin on the board.
#define P27931_HEAT_PIN 2

