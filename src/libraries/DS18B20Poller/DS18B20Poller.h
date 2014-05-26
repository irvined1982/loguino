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
 * along with Loguino.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev: 146 $:   
 * $Author: irvined $: 
 * $Date: 2012-08-26 14:53:25 +0100 (Sun, 26 Aug 2012) $:  
 
 */
#ifndef DS18B20POLLER_H_
#define DS18B20POLLER_H_

#include <Arduino.h>
#include <config.h>
#ifdef ENABLE_DS18B20_POLLER

#include <stdlib.h> 
#include <OneWire.h>
#include <DallasTemperature.h>
#include <message.h>
#include <logger.h>

/**
 * The Maxim DS18B20 digital thermometer provides 9-bit to 12-bit
 * Celsius temperature measurements over a 1-Wire interface providing 
 * accurate and inexpensive temperature readings.
 *
 * This class builds on Jim Studt's 1-Wire library and Jordan Hochenbaum's
 * DallasTemperature implementation to integrate into Loguino.
 *
*/
class DS18B20Poller{
	public:
		static void poll();
		static void begin();
	private:
		static OneWire oneWire;
		static DallasTemperature sensors;
		static DeviceAddress addr;
};

#endif
#endif

