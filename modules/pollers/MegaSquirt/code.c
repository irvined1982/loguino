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
        digitalWrite(MS_STATUS_PIN, LOW);
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
                ms_active=true;
                ms_timeouts=0;
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
        ms_data.loadData(table);

        logMessage("Megasquirt.PulseWidth1", ms_data.pulseWidth1(),"ms*1000");
        logMessage("Megasquirt.PulseWidth2", ms_data.pulseWidth2(),"ms*1000");
        logMessage("Megasquirt.Advance", ms_data.advance(),"Degrees*10");
        logMessage("RPM", ms_data.rpm(),"RPM");
        logMessage("Megasquirt.BatteryVoltage", ms_data.batteryVoltage(),"Voltsx10");
        logMessage("Megasquirt.ManifoldAirPressure", ms_data.map(),"kPa");
        logMessage("Megasquirt.CoolantTemperature", ms_data.coolant(),"F*10");
        logMessage("Megasquirt.ThrottlePosition", ms_data.tps(),"%x10");
        logMessage("Megasquirt.ManifoldAirTemperature", ms_data.mat(),"DegreesC");

        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
