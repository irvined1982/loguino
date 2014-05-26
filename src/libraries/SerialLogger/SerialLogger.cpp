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
#include <SerialLogger.h>
// Always check the feature is enabled before any code.
#ifdef ENABLE_SERIAL_OUTPUT

/**
 * Writes the message to the serial port in CSV format.
 */
void SerialLogger::log(){
    SO_SERIAL_PORT.println(m.toCSV());
}

/** 
 * Configures the serial line in preparation for logging messages.
 */
void SerialLogger::begin(){
      SO_SERIAL_PORT.begin(SO_SERIAL_PORT_SPEED);
}

/** 
 * Flushes any data in the serial buffer.
 */
void SerialLogger::flush(){
    SO_SERIAL_PORT.flush();
}

#endif

