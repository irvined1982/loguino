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
 * $Rev: 133 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-25 14:56:09 +0100 (Wed, 25 Apr 2012) $:  

*/



#ifndef HS1101POLLER_H
#define HS1101POLLER_H

#include <Arduino.h>
#include <config.h>
#include <message.h>
#include <logger.h>



#ifdef ENABLE_HS1101_POLLER
	#ifndef HS1101_PIN
		#error HS1101_PIN must be defined
    #endif


/// The <A HREF='http://www.parallax.com/Store/Sensors/TemperatureHumidity/tabid/174/ProductID/554/List/0/Default.aspx?SortField=ProductName,ProductName'>HS1101 humidity sensor</A>
// is a cost-effective solution for measuring relative humidity within ±5% accuracy. The sensor’s 
// design is based on a unique capacitive cell; therefore, by using simple RC circuit wiring it
// is easy to interface.
class HS1101Poller
{
    public:
        static void begin();
        static void poll();
};
#endif

#endif

