/* Copyright 2011 David Irvine
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
 * $Rev: 131 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-15 22:06:08 +0100 (Sun, 15 Apr 2012) $:  

*/



#ifndef TMP102POLLER_H
#define TMP102POLLER_H

#include <Arduino.h>
#include <stdlib.h>
#include <config.h>
#include <message.h>
#include <logger.h>
#include <Wire.h>



#ifdef ENABLE_TMP102_POLLER
	#ifndef TMP102_I2C_ADDRESS
		#error TMP102_I2C_ADDRESST must be defined
    #endif
	

/** The TMP102 is a two-wire, serial output temperature sensor available 
 * in a tiny SOT563 package. Requiring no external components, the TMP102 
 * is capable of reading temperatures to a resolution of 0.0625°C.
 *
 * This class provides a poller for the TMP102 sensor, using the i2c bus,
 * supporting both standalone sensors and the sparkfun breakout.
 * See: http://www.sparkfun.com/products/9418
 *
 * Datasheet: http://www.sparkfun.com/datasheets/Sensors/Temperature/tmp102.pdf
 *
 * \bug Conversion factor isn't correct, so temperature is currently off, although
 * reporting a linear reading still.
 *
 */
class TMP102Poller
{
    public:
        static void begin();
        static void poll();
};
#endif

#endif

