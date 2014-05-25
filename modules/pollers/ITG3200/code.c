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

#ifdef ENABLE_ITG3200_POLLER
    ITG3200 itg = ITG3200();
    void ITG3200_init(){
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Starting");
        #endif
        Wire.begin();
        delay(1000);
        itg.init(ITG3200_ADDR_AD0_HIGH);
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Finished");
        #endif
    }



    void ITG3200_sample(){
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Starting");
        #endif
        float x,y,z;

        if (itg.isRawDataReady()){
            itg.readGyro(&x,&y,&z);

            logMessage("Gyro.ITG3200.X",x, "Degrees*1000/Second");
            logMessage("Gyro.ITG3200.Y",y, "Degrees*1000/Second");
            logMessage("Gyro.ITG3200.Z",z, "Degrees*1000/Second");

        }

        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
