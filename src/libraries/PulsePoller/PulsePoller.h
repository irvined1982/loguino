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
 * $Rev: 141 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-27 18:10:41 +0100 (Fri, 27 Apr 2012) $:  
 
 */
// Always use an include guard.
#ifndef PULSEPOLLER_H
#define PULSEPOLLER_H

#include <Arduino.h>
#include <config.h>

#ifdef ENABLE_PULSE_POLLER

#include <message.h>
#include <logger.h>

/**
 * A poller class to log the frequency of pulses on a digital input pun.
 */
class PulsePoller{
	public:
		static void poll();
		static void begin();
};

#endif








#endif
