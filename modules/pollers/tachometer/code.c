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

#ifdef ENABLE_TACH_POLLER
    volatile unsigned long timePointsOpen, timePointsClosed, lastChange;
    volatile unsigned int numBangs;

    void pointsOpening(){
        unsigned long t;
        t = millis();
        if (lastChange > 0){
            timePointsClosed += (t - lastChange);
        }
        lastChange = t;
        ++numBangs;
    }

    void pointsClosing(){
        unsigned long t;
        t = millis();
        if (lastChange > 0){
            timePointsOpen += (t - lastChange);
        }
        lastChange = t;
    }


    void tach_init(){
        #ifdef DEBUG_TACH_POLLER
            DEBUG_1("Starting");
        #endif

        pinMode(TACH_FEED_PIN_1, INPUT);
        pinMode(TACH_FEED_PIN_2, INPUT);
        digitalWrite(TACH_FEED_PIN_1, HIGH);
        digitalWrite(TACH_FEED_PIN_2, HIGH);
        timePointsOpen = 0;
        timePointsClosed = 0;

        #ifdef DEBUG_TACH_POLLER
            DEBUG_1("Finished");
        #endif
    }


    void tach_sample(){
        #ifdef DEBUG_TACH_POLLER
            DEBUG_1("Starting");
        #endif
        // Reset all the counters
        numBangs = 0;
        lastChange = 0;
        timePointsOpen=0;
        timePointsClosed=0;
        // Attach the interupts
        attachInterrupt(TACH_FEED_INT_1, pointsOpening, RISING);
        attachInterrupt(TACH_FEED_INT_2, pointsClosing, FALLING);
        // Sample for a period of time
        delay(TACH_READ_DELAY_MILLIS);
        // Turn of interupts
        detachInterrupt(TACH_FEED_INT_1);
        detachInterrupt(TACH_FEED_INT_2);

        // Calculate RPM
        numBangs = ((60000/TACH_READ_DELAY_MILLIS)*numBangs)/TACH_PULSES_RPM;
        logMessage("Engine.RPM", numBangs, "RPM");

        // Calculate Dwell angle, but only if engine is running.
        int dwellAngle = 0;
        if (timePointsOpen != timePointsClosed){
            dwellAngle = ((timePointsOpen * 36000)/(timePointsOpen + timePointsClosed))/TACH_NUM_CYLS;
            logMessage("Engine.Dwell", dwellAngle, "Degrees*1000");
        }

        #ifdef DEBUG_TACH_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
