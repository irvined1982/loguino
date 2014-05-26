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
 * $Rev: 134 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-25 21:46:09 +0100 (Wed, 25 Apr 2012) $:  
 
 */
#ifndef ANALOGPOLLER_H
#define ANALOGPOLLER_H

#include <Arduino.h>
#include <config.h>

#ifdef ENABLE_ANALOG_POLLER

#include <message.h>
#include <logger.h>

#ifndef ANALOG_PINS
#error ANALOG_PINS is not defined.
#endif

/**
 * Polls selected analog pins and logs their value.
 */
class AnalogPoller{
	public:
		static void poll();
		static void begin();
};
#endif
#endif
