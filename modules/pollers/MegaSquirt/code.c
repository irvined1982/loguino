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

#ifdef ENABLE_MEGASQUIRT_POLLER
    #ifndef MS_WAIT_TIME
        #error MS_WAIT_TIME not defined.
    #endif
    #ifndef MS_STATUS_PIN
        #error MS_STATUS_PIN not defined.
    #endif


    bool ms_active;
    byte ms_timeouts;
    MegaSquirtData ms_data;


    void MegaSquirt_init(){
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Starting");
        #endif
        ms_active=true;
        ms_timeouts=0;
        pinMode(MS_STATUS_PIN, OUTPUT);
        DigitalWrite(MS_STATUS_PIN, LOW);
        MegaSquirt::begin();
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void MegaSquirt_sample(){
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Starting");
        #endif
        // IF inactive, check if its time to try again.
        if (!ms_active)
        {
            // If timeouts > max time out time, then become active, and reset timeouts.
            if (ms_timeouts++ > MS_WAIT_TIME){
                active=true;
                timeouts=0;
                #ifdef DEBUG_MEGASQUIRT_POLLER
                    DEBUG_2("Megasquirt timeout reached, retrying");
                #endif
            }
            // timeouts not reached, just return.
            else
            {
                #ifdef DEBUG_MEGASQUIRT_POLLER
                    DEBUG_2("Megasquirt Inactive");
                #endif
                return;
            }
        }

        byte status;
        byte table[MS_TABLE_LENGTH];
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_2("Querying Megasquirt");
        #endif
        status=MegaSquirt::getData(table);
        if (status != MS_COMM_SUCCESS)
        {
            #ifdef DEBUG_MEGASQUIRT_POLLER
                DEBUG_1("Megasquirt Error, setting timeout");
            #endif
            ms_active=false;
            digitalWrite(MS_STATUS_PIN, LOW);
            return;
        }
        digitalWrite(MS_STATUS_PIN, HIGH);
        d.loadData(table);

        log_message("Megasquirt.PulseWidth1", d.pulseWidth1(),"ms*1000");
        log_message("Megasquirt.PulseWidth2", d.pulseWidth2(),"ms*1000");
        log_message("Megasquirt.Advance", d.advance(),"Degrees*10");
        log_message("RPM", d.rpm(),"RPM");
        log_message("Megasquirt.BatteryVoltage", d.batteryVoltage(),"Voltsx10");
        log_message("Megasquirt.ManifoldAirPressure", d.map(),"kPa");
        log_message("Megasquirt.CoolantTemperature", d.coolant(),"F*10");
        log_message("Megasquirt.ThrottlePosition", d.tps(),"%x10");
        log_message("Megasquirt.ManifoldAirTemperature", d.mat(),"DegreesC");

        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
