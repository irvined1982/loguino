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
 * $Rev: 134 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-25 21:46:09 +0100 (Wed, 25 Apr 2012) $:  
 
 */
#include <DigitalPoller.h>
#ifdef ENABLE_DIGITAL_POLLER
void DigitalPoller::poll(){
    // pins - array of pin numbers to check.
	int dpins[]={DIGITAL_PINS};
	// numdPins - total number of pins to check.
	int numdPins=sizeof(dpins)/sizeof(int);
	// m - message object containing each message.
	m.units="Bool";
	int di;			    
	// For each pin, set the nameSpace, the value, then send the 
	// message.
	for (di=0;di<numdPins;di++){
		m.nameSpace=String("DigitalInput.Pin")+String(dpins[di]);
		m.value=digitalRead(dpins[di]) ? "HIGH":"LOW";
        log_message();
	}
}

void DigitalPoller::begin(){
	// pins - an array of pin numbers to check the state of
	int dpins[]={DIGITAL_PINS};
	// invPins - an array of pin numbers that should be held high
	int invdPins[]={INVERT_DIGITAL_PINS};
	// numPins - The number of pins in total.
	int numdPins=sizeof(dpins)/sizeof(int);
	// numIPins - the number of inverted pins.
	int numdIPins=sizeof(invdPins)/sizeof(int);
    
	// Iterate through each pin, set it to an input pin.
	// Hold the pin LOW.
	int i;
	for ( i=0; i<numdPins; i++){
		pinMode(dpins[i],INPUT);
		digitalWrite(dpins[i], LOW);
	}
    
	// For each pin marked inverted, hold it HIGH.
	for(i=0; i<numdIPins; i++){
		digitalWrite(invdPins[i], HIGH);
	}
}

#endif
