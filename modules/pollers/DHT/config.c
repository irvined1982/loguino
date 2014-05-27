
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



// When defined, the poller is enabled.
//#define ENABLE_DHT_POLLER

// When enabled, debug output for the DHT poller will be displayed.
//#define DEBUG_DHT_POLLER

// The digital pin that the DHT sensor is connected to. Default: 3

#define DHT_PIN 3

// The type of sensor being used, default: DHT11 can be: DHT11, DHT22, DHT21
#define DHT_TYPE DHT11
//#define DHT_TYPE DHT22
//#define DHT_TYPE DHT21
