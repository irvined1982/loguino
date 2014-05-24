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




#ifdef ENABLE_DS18B20_POLLER

    OneWire ds_oneWire(DS18B20_PIN);
    DallasTemperature ds_sensors(&ds_oneWire);
    int ds_count;
    void DS18B20_init(){
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Starting");
        #endif
        ds_sensors.begin();
        ds_count = ds_sensors.getDeviceCount();
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void DS18B20_sample(){
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Starting");
        #endif
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_5("Requesting Temperatures");
        #endif
        char buf[25];
        ds_sensors.requestTemperatures();
        for (int i=0; i < ds_count; i++){
            #ifdef DEBUG_DS18B20_POLLER
                DEBUG_5("Logging DSB Pin");
            #endif
            sprintf(buf, "DS18B20.%d", i);
            logMessage(buf, ds_sensors.getTempCByIndex(i), "Degrees/C");
            #ifdef DEBUG_DS18B20_POLLER
                DEBUG_5("Logged DSB Pin");
            #endif
        }
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_2("Requested Temperatures");
        #endif


        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
