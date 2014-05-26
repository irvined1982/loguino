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
#include <DS18B20Poller.h>

#ifdef ENABLE_DS18B20_POLLER

OneWire DS18B20Poller::oneWire(ONE_WIRE_PIN);
DallasTemperature DS18B20Poller::sensors(&oneWire);
DeviceAddress DS18B20Poller::addr;

/**
 * Open up the bus, search for DS18x20 devices and set their 
 * resolution to 10 bit
 */
void DS18B20Poller::begin(){
	sensors.begin();
  	oneWire.reset_search(); 
	// For every device on the bus
	while(oneWire.search(addr)) { 
		if (
				// That has a correct CRC
				( OneWire::crc8( addr, 7) == addr[7]) 
				&& (
					// And matches the correct series of devices
					(addr[0] == 0x10) 
					|| (addr[0] == 0x22) 
					|| (addr[0] == 0x28)
					)
				) { 
			// Set the resolution to 10bit.
			sensors.setResolution(10);
		}
	}
}


/**
 * Reads the value from the connected sensors by iterating 
 * through each sensor found with the correct type.
 */
void DS18B20Poller::poll(){
	float tempC; // Sensor Temperature
	char buf[15]; // Buffer to store temperature value
	int i;
	// Temperature unit is Degrees Centigrade
	m.units="Degrees C";
	// Reset the counter so the first sensor is returned
  	oneWire.reset_search();					
	while(oneWire.search(addr)) { 
		if (
				// That has a correct CRC
				( OneWire::crc8( addr, 7) == addr[7]) 
				&& (
					// And matches the correct series of devices
					(addr[0] == 0x10) 
					|| (addr[0] == 0x22) 
					|| (addr[0] == 0x28)
					)
				) { 
			// Get the temperature
			sensors.requestTemperatures();
			tempC = sensors.getTempC(addr);
			// Convert the value to a string using dtostrf from stdlib
			m.value=dtostrf(tempC,1,2,buf);		
			m.nameSpace="DS18B20.";			
			// Use the address of the device to form the namespace
			for (i=0;i<8;i++){
				m.nameSpace+=String(addr[i],HEX);
			}
			// This is a temperature value so append .Temp to namespace
			m.nameSpace+=".Temp";
			// Log the message
			log_message();	
   		}
  	}
}

#endif
