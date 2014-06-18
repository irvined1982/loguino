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




#ifdef ENABLE_P27931_POLLER

    unsigned long p27931_toggleTime;
    bool p27931_purging;


    void P27931_init(){
        #ifdef DEBUG_P27931_POLLER
            DEBUG_1("Starting");
        #endif

        p27931_purging = true;
        p27931_toggleTime = millis() + P27931_PURGE_TIME;

        pinMode(P27931_HEAT_PIN, OUTPUT);
        digitalWrite(P27931_HEAT_PIN, HIGH);

        #ifdef DEBUG_P27931_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void P27931_sample(){
        #ifdef DEBUG_P27931_POLLER
            DEBUG_1("Starting");
        #endif

        if (p27931_toggleTime < millis()){
            p27931_purging = !p27931_purging;
            if (p27931_purging){
                p27931_toggleTime = millis()+P27931_PURGE_TIME;
                digitalWrite(P27931_HEAT_PIN, HIGH);
            }else{
                p27931_toggleTime = millis()+P27931_SAMPLE_TIME;
                digitalWrite(P27931_HEAT_PIN, LOW);
                analogWrite(P27931_HEAT_PIN, 71);
            }
        }

        if (!p27931_purging){
            logMessage("CO Voltage", (float) ((float)analogRead(P27931_SAMPLE_PIN)*5/1024), "V");
            logMessage("CO Alarm", digitalRead(P27931_ALARM_PIN) ? "Active":"Inactive", "Alarm State");
        }

        #ifdef DEBUG_P27931_POLLER
            DEBUG_1("Finished");
        #endif
    }

#endif

