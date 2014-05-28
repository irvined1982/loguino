/* Copyright 2014 David Irvine
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
*/



#ifdef ENABLE_BMP085_POLLER

    Adafruit_BMP085 bmp;
    void BMP085_init(){
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Starting");
        #endif
        bmp.begin();
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void BMP085_sample(){
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Starting");
        #endif
        logMessage("BMP085.Temp", bmp.readTemperature(), "Degrees C");
        logMessage("BMP085.Pressure", bmp.readPressure(), "Pa");
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
