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



LIS331 lis;
#ifdef ENABLE_LIS331_POLLER
    void LIS331_init(){
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Starting");
        #endif
        lis.setPowerStatus(LR_POWER_NORM);
        lis.setXEnable(true);
        lis.setYEnable(true);
        lis.setZEnable(true);
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void LIS331_sample(){
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Starting");
        #endif
        char buf[33];
        int16_t val;
        lis.getXValue(&val);
        logMessage("LIS331.X", val, "mG");
        lis.getYValue(&val);
        logMessage("LIS331.Y", val, "mG");
        lis.getZValue(&val);
        logMessage("LIS331.Z", val, "mG");

        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
