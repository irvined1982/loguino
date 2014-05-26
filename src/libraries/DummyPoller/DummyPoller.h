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
 * $Rev: 139 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-26 22:36:27 +0100 (Thu, 26 Apr 2012) $:  
 
 */
// Always use an include guard.
#ifndef DUMMYPOLLER_H
#define DUMMYPOLLER_H

// Include Arduino.h at the top 
#include <Arduino.h>
// Followed by config.h, this contains the definition for the ENABLE_X...
// Preprocessor directive.
#include <config.h>

// Only include any feature related code if the feature is enabled
// This means checking for the feature in each source file. 
#ifdef ENABLE_DUMMY_POLLER

#include <message.h>
#include <logger.h>

/**
 * A poller class to generate dummy log messages, useful for testing loguino and
 * as an example poller implementation.
 *
 * Use Doxygen to document classes.
 */
class DummyPoller{
	public:
		// Poll is called each time the polling loop runs, and should
		// query the device and call log_message()
		static void poll();
		
		// Begin is called once when loguino starts up and is used to configure
		// any devices so they are ready to be polled.
		static void begin();
	private:
		// Any private variables used by logger class
		static int called;
};

#endif








#endif
