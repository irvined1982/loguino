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
 * $Rev: 153 $:   
 * $Author: irvined $: 
 * $Date: 2012-10-30 17:59:04 +0000 (Tue, 30 Oct 2012) $:  
 
 */
#ifndef ELMPOLLER_H
#define ELMPOLLER_H
#include <Arduino.h>
#include <config.h>
#include "ELM327.h"
#ifdef ENABLE_ELM_POLLER

//! The number of times to skip before trying again. 
#define ELM_SKIP 100 
#include <message.h>
#include <logger.h>

/**
 * A poller class for ELM327 OBD chips.  Logs messages from OBD2 interface from most
 * newer vehicles.
 */
class ELMPoller{
	public:
		static void poll();
		static void begin();
	private:
		//! True when the poller is active and an ELM device is found and alive.
		static bool active;
		//! Increments each poll until ELM_SKIP is reached, at which point 
		//communication is re-initilized.
		static unsigned int retries;
		static Elm327 Elm;
};

#endif








#endif
