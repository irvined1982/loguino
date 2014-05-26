/* Copyright 2011 David Irvine
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
 * along with Loguino.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev: 159 $:   
 * $Author: irvined $: 
 * $Date: 2013-01-05 00:27:49 +0000 (Sat, 05 Jan 2013) $:  
 *
 */
#include <GPSPoller.h>
#ifdef ENABLE_GPS_POLLER

NMEA GPSPoller::n;

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
void GPSPoller::begin(){
	DEBUG ("GPS Poller: Starting Begin");
	#ifdef GPS_LED
		DEBUG ("PS Poller:  Setting GPS_LED_PIN to OUTPUT, and LOW");
		pinMode(GPS_LED_PIN, OUTPUT);
		digitalWrite(GPS_LED_PIN,LOW);
		DEBUG ("PS Poller:  Set LED Pin");
	#endif
    GPS_SERIAL_DEV.begin(GPS_SERIAL_DEV_SPEED);
	DEBUG ("GPS Poller:  Switching off unneeded GPS data");
	GPS_SERIAL_DEV.println("$PSRF103,0,0,0,1*24");
	GPS_SERIAL_DEV.println("$PSRF103,1,0,0,1*25");
	GPS_SERIAL_DEV.println("$PSRF103,2,0,0,1*26");
	GPS_SERIAL_DEV.println("$PSRF103,3,0,0,1*27");
	GPS_SERIAL_DEV.println("$PSRF103,4,0,0,1*20");
	GPS_SERIAL_DEV.println("PSRF103,5,0,0,1*21");
	GPS_SERIAL_DEV.println("$PSRF103,8,0,0,1*2C");
	DEBUG ("GPS Poller:  Switching on RMC data");
	GPS_SERIAL_DEV.println("$PSRF103,4,0,1,1*21");
	DEBUG ("GPS Poller: Begin Finished");
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

void GPSPoller::poll(){
    extern Message m;
	DEBUG ("GPS Poller: Beginning Poll ");
    while(GPS_SERIAL_DEV.available()){
		if (n.addChar(GPS_SERIAL_DEV.read())){
			DEBUG ("GPS Poller:  Sentance Recieved from GPS ");
			if (n.validFix()){
				Serial.print(GPS_LED_PIN);
				#ifdef GPS_LED
					DEBUG ("GPS Poller:  Setting GPS_LED_PIN HIGH");
					digitalWrite(GPS_LED_PIN,HIGH);
				#endif 
				DEBUG ("GPS Poller:   Valid Fix, logging. ");
                
				DEBUG ("GPS Poller:   Logging Course");
				m.units="Degrees";
				m.nameSpace="GPS.Course";
				m.value=n.getCourse();
				log_message();
				DEBUG ("GPS Poller:   Logged");
                
				DEBUG ("GPS Poller:   Logging Speed");
				m.units="Knots";
				m.nameSpace="GPS.Speed";
				m.value=n.getSpeed();
				log_message();
				DEBUG ("GPS Poller:   Logged");
                
				DEBUG ("GPS Poller:   Logging Latitude");
				m.units="Latitude";
				m.nameSpace="GPS.Latitude";
				m.value=n.getLatitude();
				log_message();
				DEBUG ("GPS Poller:   Logged");
                
				DEBUG ("GPS Poller:   Logging Longitude");
				m.units="Longitude";
				m.nameSpace="GPS.Longitude";
				m.value=n.getLongitude();
				log_message();
				DEBUG ("GPS Poller:   Logged");
                
				DEBUG ("GPS Poller:   Logging Date");
				m.units="Date";
				m.nameSpace="GPS.Date";
				m.value=n.getDate();
                log_message();
				DEBUG ("GPS Poller:   Logged");
                
				DEBUG ("GPS Poller:   Time");
				m.units="Time";
				m.nameSpace="GPS.Time";
				m.value=n.getTime();
                log_message();
				DEBUG ("GPS Poller:   Logged");
            }else{
				#ifdef GPS_LED
					digitalWrite(GPS_LED_PIN,LOW);
					Serial.println("Setting GPS LOW");
				#endif
			}
		}
	}
}

#endif

