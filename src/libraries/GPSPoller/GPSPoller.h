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
 * $Rev: 158 $:   
 * $Author: irvined $: 
 * $Date: 2012-10-31 22:42:17 +0000 (Wed, 31 Oct 2012) $:  
 
 */
#ifndef GPSPOLLER_H
#define GPSPOLLER_H

#include <Arduino.h>
#include <config.h>
#ifdef ENABLE_GPS_POLLER

#include <message.h>
#include <logger.h>
#include <Debug.h>






#ifdef  ENABLE_GPS_POLLER
    #ifndef GPS_SERIAL_DEV 
        #error GPS_SERIAL_DEV must be set to a valid arduino serial port.
    #endif
    #ifndef GPS_SERIAL_DEV_SPEED
        #error GPS_SERIAL_DEV_SPEED not set.
    #endif
#endif


#include <NMEA.h>
/**
 * The GPS Poller reads NMEA data from a serial device and logs values.
 * Any NMEA device is currently supported as long as it does not use a 
 * binary format. 
 *
 * The GPS is connected to one of the serial ports, this is defined in GPS_SERIAL_DEV,
 * the default is Serial2. Most GPS shields require no additional wiring, simply 
 * connect the pins to the appropriate serial device on the board. 
 *
 * The NMEA processing is carried out by a NMEA library which parses the string for
 * a valid NMEA sentance. 
 *
 */
class GPSPoller
{
	public:
		static void begin();
		static void poll();
	private:
		static NMEA n;
};








#endif
#endif
