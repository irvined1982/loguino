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
 * along with Loguino.  If not, see "http://www.gnu.org/licenses/".
 * 
 * $Rev: 133 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-25 14:56:09 +0100 (Wed, 25 Apr 2012) $:  

*/



#include <HS1101Poller.h>

#ifdef ENABLE_HS1101_POLLER
#define HS1101_RH_CONSTANT 12169
	
//! Configures the HS1101Poller - Nothing is actually required however.
void HS1101Poller::begin(){
	return;
}


//! Polls the HS1101 device using an RC delay circuit.  The digital pin that is 
//connected to is set HIGH until the device is charged, then the pin is brought
//low and the time taken for the capacitor to discharge is measured.  
//
//A timeout is set so that if there is a fault, or no device connected the 
//call is non blocking.
void HS1101Poller::poll()
{
	//! The time the capacitor was fully discharged
	unsigned long startTime;
	//! The time in micros() to abort if there is no change from the sensor
	unsigned long timeoutTime;
	//! The time in micros() when the sensor changed
	unsigned long endTime;
	//! Boolean value indicating if the sensor has changed.
	bool changed;
	changed=false;

	startTime=micros();
	timeoutTime=startTime+100000;
	
	pinMode(HS1101_PIN, OUTPUT); 
	digitalWrite(HS1101_PIN, HIGH);
	delay(1);   
	pinMode(HS1101_PIN, INPUT); 
	digitalWrite(HS1101_PIN, LOW);
	while(!changed && micros()<timeoutTime){
		changed=!digitalRead(HS1101_PIN);
		if (changed){
			endTime=micros()-startTime;
			endTime=endTime/2;
			endTime=endTime*10;
			endTime=endTime-HS1101_RH_CONSTANT;
			endTime=(endTime)/24;
			m.value=String(endTime);
			m.units="%";
			m.nameSpace="HS1101.Humidity";
			log_message();
		}
	}


}

#endif

