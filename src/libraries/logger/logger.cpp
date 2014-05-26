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
#include <logger.h>
#include <message.h>

/// Number of messages logged since last flush
int num_messages=0;
void log_message(){
    extern Message m;
	num_messages++;
	// If the number of messages is larger than the maximum permitted, then flush the 
	// output prior to logging the message.
  	if (num_messages>500){
  	  	flush_output();
  	  	num_messages=0;
  	}
    
	// Log the message to each of the logger modules.
#ifdef ENABLE_SERIAL_OUTPUT
	SerialLogger::log();
#endif
    
#ifdef ENABLE_SD_OUTPUT
	SDLogger::log();
#endif
#ifdef ENABLE_ETHERNET_LOGGER
	EthernetLogger::log();
#endif
}

void loggerBegin(){
#ifdef ENABLE_SERIAL_OUTPUT
	SerialLogger::begin();
#endif
#ifdef ENABLE_SD_OUTPUT
	SDLogger::begin();
#endif

#ifdef ENABLE_ETHERNET_LOGGER
	EthernetLogger::begin();
#endif
}

void flush_output(){
#ifdef ENABLE_SERIAL_OUTPUT
	SerialLogger::flush();
#endif
#ifdef ENABLE_SD_OUTPUT
	SDLogger::flush();
    
#endif
#ifdef ENABLE_ETHERNET_LOGGER
	EthernetLogger::flush();
#endif
    

}

