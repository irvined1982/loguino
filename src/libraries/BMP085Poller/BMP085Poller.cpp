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
 * along with Loguino.  If not, see "http://www.gnu.org/licenses/".
 * 
 * $Rev: 139 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-26 22:36:27 +0100 (Thu, 26 Apr 2012) $:  

*/



#include <BMP085Poller.h>

#ifdef ENABLE_BMP085_POLLER
	
BMP085 BMP085Poller::bmp;

/**
 * As there is already an interface available for the BMP085 device, all that is required
 * is to initalize it.
 *
 */
void BMP085Poller::begin(){
	BMP085Poller::bmp.begin();
}


/**
 * Queries the BMP interface for atmospheric pressure and temperature each time 
 * the polling loop runs. 
 *
 * The value returned by temperature is a float, there is no simple way
 * to convert that to a string without using a buffer and sprintf, as such
 * the value is multiplied by 100 and converted to an Integer before being
 * converted to a string.
 *
 */
void BMP085Poller::poll()
{

    m.units="Degrees C*100";
   	m.value=String(int(bmp.readTemperature()*100));
	m.nameSpace="BMP085.Temp";
	log_message();

	m.units="Pa";
	m.value=String(bmp.readPressure());
	m.nameSpace="BMP085.Pressure";
	log_message();

}

#endif

