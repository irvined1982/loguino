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



#ifdef ENABLE_P27929_POLLER
#define Carbon_M -83.45 // was-87
#define Carbon_C 768.62 //was 800



    void P27929_init(){
        #ifdef DEBUG_P27929_POLLER
            DEBUG_1("Starting");
        #endif

        // Nothing to be done
        ;

        #ifdef DEBUG_P27929_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void P27929_sample(){
        #ifdef DEBUG_P27929_POLLER
            DEBUG_1("Starting");
        #endif

        float c_float = analogRead(P27929_PIN) - Carbon_C;
        c_float = c_float / Carbon_M;
        logMessage("CO2 Level", (int)pow(2.718, c_float), "PPM");

        #ifdef DEBUG_P27929_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif

