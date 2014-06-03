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

#ifdef ENABLE_GPS_POLLER

/**
 * Configures the serial port in order to connect to the GPS.  Attempts to
 * turn off messages that are not used, this puts less pressure on the
 * serial buffer which has been reduced to 64 bytes.
 *
 * If your GPS does not support disabling messages, there are two other
 * options, the first is to increase the buffer used in arduino by
 * editing HardwareSerial.h, the other is to poll this poller more
 * frequently.
 */
    #ifdef GPS_USE_SOFTSERIAL
        SoftwareSerial GPS_SERIAL_DEV =  SoftwareSerial(GPS_RX_PIN,GPS_TX_PIN);
    #endif


    void gps_init(){
        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Starting");
        #endif

        #ifdef GPS_LED_PIN
                DEBUG_5 ("Setting GPS_LED_PIN to OUTPUT, and LOW");
                pinMode(GPS_LED_PIN, OUTPUT);
                digitalWrite(GPS_LED_PIN,LOW);
                DEBUG_2("Set LED Pin");
        #endif

        GPS_SERIAL_DEV.begin(GPS_SERIAL_DEV_SPEED);
        DEBUG_5("Switching off unneeded GPS data");
        GPS_SERIAL_DEV.println("$PSRF103,0,0,0,1*24");
        GPS_SERIAL_DEV.println("$PSRF103,1,0,0,1*25");
        GPS_SERIAL_DEV.println("$PSRF103,2,0,0,1*26");
        GPS_SERIAL_DEV.println("$PSRF103,3,0,0,1*27");
        GPS_SERIAL_DEV.println("$PSRF103,4,0,0,1*20");
        GPS_SERIAL_DEV.println("PSRF103,5,0,0,1*21");
        GPS_SERIAL_DEV.println("$PSRF103,8,0,0,1*2C");
        DEBUG_5 ("Switching on RMC data");
        GPS_SERIAL_DEV.println("$PSRF103,4,0,1,1*21");
        DEBUG_2 ("Switched off unneeded data and enabled RMC data. ");


        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Finished");
        #endif
    }


 /**
 * NMEA GPS devices continually output data over the serial line, data forms
 * NMEA sentances.  The GPS may send multiple types of NMEA sentances depending
 * on the GPS, type of fix etc.  The GPS may send data only when it has a fix, or
 * at a specified interval.
 *
 * As such rather than block until a valid sentance is received, each time the
 * poller is called, it appends any data in the serial buffer to the NMEA object.
 *
 * When the appended data completes the sentance, the poller queries the NMEA object
 * to see if the fix is valid, if so it logs each metric.
 *
 */
    TinyGPS gps;

    void gps_sample(){
        float flat, flon;
        unsigned long age;
        unsigned long fix_age, time, date;
        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Starting");
        #endif

        while(GPS_SERIAL_DEV.available()){
            #ifdef DEBUG_GPS_POLLER
                    DEBUG_2("Read Char");
            #endif
            if (gps.encode(GPS_SERIAL_DEV.read())){
                #ifdef DEBUG_GPS_POLLER
                    DEBUG_2("Completed Sentence");
                #endif
                gps.f_get_position(&flat, &flon, &age);
                if (age < 1000){
                    #ifdef GPS_LED_PIN
                        digitalWrite(GPS_LED_PIN,HIGH);
                    #endif
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("Valid Fix");
                        DEBUG_5("Logging Messages");
                    #endif
                    logMessage("GPS.Course", gps.f_course(), "Degrees");
                    logMessage("GPS.Speed", gps.f_speed_kmph(), "KM/H");
                    //logMessage("GPS.Altitude", gps.f_altitude(), "M");
                    logMessage("GPS.Latitude", flat, "N/A");
                    logMessage("GPS.Longitude", flon, "N/A");
                    gps.get_datetime(&date, &time, &fix_age);
                    logMessage("GPS.Date", date, "N/A");
                    logMessage("GPS.Time", time, "UTC");
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("Successfully Logged Messages");
                    #endif
                }else{
                    #ifdef GPS_LED_PIN
                        digitalWrite(GPS_LED_PIN,LOW);
                    #endif
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("No valid fix available");
                    #endif
                }
            }else{
                #ifdef DEBUG_GPS_POLLER
                    DEBUG_3("Not a valid sentence");
                #endif
            }
        }

        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
