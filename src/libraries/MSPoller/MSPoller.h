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
 * $Rev: 141 $   
 * $Author: irvined $ 
 * $Date: 2012-04-27 18:10:41 +0100 (Fri, 27 Apr 2012) $  

*/

#ifndef MSPoller_h
#define MSPoller_h

#include <Arduino.h>
#include <config.h>
#include <message.h>
#include <logger.h>

#ifdef ENABLE_MS_POLLER
#include <MegaSquirt.h>
#ifndef MS_WAIT_TIME
	#error MS_WAIT_TIME not defined.
#endif
#ifndef MS_STATUS_PIN
	#error MS_STATUS_PIN not defined.
#endif



/**
 * A MegaSquirt is a complete standalone fuel injection controller with 
 * software and hardware, developed by Bruce Bowling and Al Grippo. 
 * Loguino can poll MegaSquirt ECU's over the Serial line at about 5-10Hz, 
 * providing in depth metrics on the Engine Management System.
 * 
 * This poller queries the megasquirt and logs each value retrieved.  The 
 * megasquirt device is connected via a serial device, CAN style commands 
 * are sent over the serial line and decoded by the MegaSquirtData object.
 *
 * When successful, each metric is logged as a message to the logging system.
 *
 * @note The serial interface on the Arduino mega is a TTL (link) device, 
 * this operates at or below 5v, whereas the MegaSquirt uses rs232, that
 * uses 12volts. In order to avoid damage to the Arduino, voltage conversion
 * is required, the max2323 chip accomplishes this on a single chip and is 
 * assumed in this instance.  Although any similar chip should also work.
 *
 */
class MSPoller
{
	    public:
    	    static void begin();
	        static void poll();
		private:
			static bool active;
			static byte timeouts;
			static MegaSquirtData d;
};




#endif

#endif

