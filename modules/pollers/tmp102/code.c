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




#ifdef ENABLE_TMP102_POLLER
    void tmp102_init(){
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Starting");
        #endif
        Wire.begin();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Finished");
        #endif
    }
    void tmp102_sample(){
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Starting");
        #endif
        byte firstbyte, secondbyte;
        int val;
        float convertedtemp;
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Calling beginTransmission");
        #endif
        Wire.beginTransmission(TMP102_I2C_ADDRESS);
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully Called beginTransmission");
        #endif

        byte i = 0x00;

        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Sending cmd to tmp102");
        #endif
        Wire.write(i);
        Wire.endTransmission();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully sent cmd to tmp102, attempting to read");
        #endif
        Wire.requestFrom(TMP102_I2C_ADDRESS, 2);
        Wire.endTransmission();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully read from tmp102");
        #endif

        firstbyte      = (Wire.read());
        secondbyte     = (Wire.read());

        val = ((firstbyte) << 4);
        val |= (secondbyte >> 4);

        convertedtemp = val*0.0625;


        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Logging Message");
        #endif
        logMessage("TMP102.Temp", convertedtemp, "C");
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully logged message");
        #endif

        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
