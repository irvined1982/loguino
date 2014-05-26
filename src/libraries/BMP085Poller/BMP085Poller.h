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
 * $Rev: 153 $:   
 * $Author: irvined $: 
 * $Date: 2012-10-30 17:59:04 +0000 (Tue, 30 Oct 2012) $:  

*/



#ifndef BMP085POLLER_H
#define BMP085POLLER_H

#include <Arduino.h>
#include <config.h>
#ifdef ENABLE_BMP085_POLLER
#warn foo
#include <message.h>
#include <logger.h>
#include <BMP085.h>

/**
 * The BMP085 is a high precision, low power barometric pressure 
 * sensor capable of measuring 300 to 1100hPa with an absolute
 * accuracy down to 0.03 hPa connected via the I2C bus. In addition
 * there is a built in temperature sensor.
 *
 * This class provides a poller for BMP085 chips, logging the pressure
 * and the temperature recorded by the device.  The altitude is not logged
 * as this uses floating point arithmetic which is slow, and the calculation
 * can easily be done at visualization time.
 */
class BMP085Poller
{
    public:
        static void begin();
        static void poll();
	private:
		static BMP085 bmp;
};
#endif

#endif

