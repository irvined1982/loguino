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



#ifdef ENABLE_DHT_POLLER
    DHT dht(DHT_PIN, DHT_TYPE);
    void DHT_init(){
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Starting");
        #endif
        dht.begin();
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Finished");
        #endif
    }


    void DHT_sample(){
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Starting");
        #endif
        float h = dht.readHumidity();
        float t = dht.readTemperature();
        buf=[32];

        if (isnan(t) ){
            // temperature is NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_1("Invalid Temperature received, not logging value");
            #endif
        }else{
            // Temperature isnt NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_3("Valid Temperature received, logging");
            #endif
            dtostrf(t, 1, 2, ; buf);
            logMessage("DHT.Temp", buf, "C");
            #ifdef DEBUG_DHT_POLLER
                DEBUG_2("Temperature Logged");
            #endif
        }

        if (isnan(h)){
            // Humidity is NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_1("Invalid Humidity received, not logging value");
            #endif
        }else{
            // Humidity isnt NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_3("Valid Humidity received, logging");
            #endif
            dtostrf(h, 1, 2, buf);
            logMessage("DHT.Humidity", buf, "%");
            #ifdef DEBUG_DHT_POLLER
                DEBUG_2("Humidity Logged");
            #endif
        }

        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
