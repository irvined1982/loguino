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

*/

#include <Arduino.h>
#include <config.h>
#include <Debug.h>
#include <itg3200.h>
#include <NMEA.h>
#include <LIS331.h>
#include <EthernetLogger.h>
#include <SerialLogger.h>
#include <SDLogger.h>
#include <SD.h>
#include <SPI.h>
#include <Wire.h>
#include <message.h>
#include <logger.h>
#include <ELM327.h>
#include <ELMPoller.h>
#include <HS1101Poller.h>
#include <TMP102Poller.h>
#include <BMP085Poller.h>
#include <DummyPoller.h>
#include <GPSPoller.h>
#include <ITG3200Poller.h>
#include <LIS331Poller.h>
#include <AnalogPoller.h>
#include <DigitalPoller.h>
#include <DS18B20Poller.h>
#include <MSPoller.h>
#include <PulsePoller.h>
void loop(){
DEBUG("Entering Poller Loop");
    m.time=millis();
#ifdef ENABLE_ELM_POLLER
	DEBUG("Polling ELM");
	ELMPoller::poll();
	DEBUG("ELM Polled");

#endif
#ifdef ENABLE_GPS_POLLER
	DEBUG ("Main: Polling GPS");
	GPSPoller::poll();
	DEBUG ("Main: GPS Polled");
#endif
#ifdef ENABLE_PULSE_POLLER
	DEBUG ("Main: Polling Pulse Poller");
	PulsePoller::poll();
	DEBUG ("Main: Pulse Poller Polled");
#endif
#ifdef ENABLE_ITG3200_POLLER
	DEBUG ("Main: Polling ITG3200");
	ITG3200Poller::poll();
	DEBUG ("Main: ITG3200 Polled");
#endif
#ifdef ENABLE_DUMMY_POLLER
	DEBUG ("Main: Polling Dummy Poller");
	DummyPoller::poll();
	DEBUG ("Main: Dummy Poller Polled");
#endif
#ifdef ENABLE_LIS331_POLLER
	DEBUG ("Main: Polling LIS Poller");
	LIS331Poller::poll();
	DEBUG ("Main: LIS Poller Polled");
#endif
#ifdef ENABLE_ANALOG_POLLER
	DEBUG ("Main: Polling Analog Poller");
	AnalogPoller::poll();
	DEBUG ("Main: Analog Poller Polled");
#endif
#ifdef ENABLE_DIGITAL_POLLER
	DEBUG ("Main: Polling Digital Poller");
	DigitalPoller::poll();
	DEBUG ("Main: Digital Poller Polled");
#endif
#ifdef ENABLE_DS18B20_POLLER
	DEBUG ("Main: Polling DS18B20 Poller");
        DS18B20Poller::poll();
	DEBUG ("Main: DS18B20 Poller Polled");
#endif
#ifdef ENABLE_MS_POLLER
	DEBUG ("Main: Polling MS Poller");
	MSPoller::poll();
	DEBUG ("Main: MS Poller Polled");
#endif
#ifdef ENABLE_TMP102_POLLER
	DEBUG ("Main: Polling TMP102 Poller");
	TMP102Poller::poll();
	DEBUG ("Main: TMP102 Poller Polled");
#endif
#ifdef ENABLE_BMP085_POLLER
	DEBUG ("Main: Polling BMP085 Poller");
	BMP085Poller::poll();
	DEBUG ("Main: BMP085 Poller Polled");
#endif
#ifdef ENABLE_HS1101_POLLER
	DEBUG ("Main: Polling HS1101 Poller");
	HS1101Poller::poll();
	DEBUG ("Main: HS1101 Poller Polled");
#endif
	DEBUG ("Main: Ending Poller Loop");
}


void setup(){
	DEBUG ("Main: Entering Setup");
#ifdef DEBUG_MODE
	Serial.begin(115200);
#endif
    
	DEBUG ("Main: Starting Logger");
	loggerBegin();
	DEBUG ("Main: Logger Started");

#ifdef ENABLE_ELM_POLLER
	DEBUG ("Main: Starting ELM Poller");
	ELMPoller::begin();
	DEBUG ("Main: ELM Poller Started");
#endif
#ifdef ENABLE_DUMMY_POLLER
	DEBUG ("Main: Starting Dummy Poller");
	DummyPoller::begin();
	DEBUG ("Main: Dummy Poller Started");
#endif
#ifdef ENABLE_GPS_POLLER
	DEBUG ("Main: Starting GPS Poller");
	GPSPoller::begin();
	DEBUG ("Main: GPS Poller Started");
#endif
#ifdef ENABLE_ITG3200_POLLER
	DEBUG ("Main: Starting ITG3200 Poller");
	ITG3200Poller::begin();
	DEBUG ("Main: ITG3200 Poller Started");
#endif
#ifdef ENABLE_LIS331_POLLER
	DEBUG ("Main: Starting LIS331 Poller");
	LIS331Poller::begin();
	DEBUG ("Main: LIS331 Poller Started");
#endif
#ifdef ENABLE_ANALOG_POLLER
	DEBUG ("Main: Starting Analog Poller");
	AnalogPoller::begin();
	DEBUG ("Main: Analog Poller Started");
#endif
#ifdef ENABLE_DIGITAL_POLLER
	DEBUG ("Main: Starting Digital Poller");
    DigitalPoller::begin();
	DEBUG ("Main: Digital Poller Started");
#endif
#ifdef ENABLE_DS18B20_POLLER
	DEBUG ("Main: Starting DS18b20 Poller");
        DS18B20Poller::begin();
	DEBUG ("Main: DS18B20 Poller Started");
#endif
#ifdef ENABLE_MS_POLLER
	DEBUG ("Main: Starting MS Poller");
	MSPoller::begin();
	DEBUG ("Main: MS Poller Started");
#endif
#ifdef ENABLE_TMP102_POLLER
	DEBUG ("Main: Starting TMP102 Poller");
	TMP102Poller::begin();
	DEBUG ("Main: TMP102 Poller Started");
#endif
#ifdef ENABLE_BMP085_POLLER
	DEBUG ("Main: Starting BMP085 Poller");
	BMP085Poller::begin();
	DEBUG ("Main: BMP085 Poller Started");
#endif
#ifdef ENABLE_HS1101_POLLER
	DEBUG ("Main: Starting HS1101 Poller");
	HS1101Poller::begin();
	DEBUG ("Main: HS1101 Poller Started");
#endif
#ifdef ENABLE_PULSE_POLLER
	DEBUG ("Main: Pulse Poller Started");
	PulsePoller::begin();
	DEBUG ("Main: Starting Pulse Poller");
#endif


	DEBUG ("Main: Leaving Setup");
}







