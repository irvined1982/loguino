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
#include <PulsePoller.h>
#ifdef ENABLE_PULSE_POLLER

/**
 * Configures each pin as an input and for pins that must be held high, sets
 * their value to HIGH.
 */
void PulsePoller::begin(){
#ifdef ENABLE_PULSE_POLLER
	int pins[]={PULSE_DIGITAL_PINS};
	int hPins[]={INVERTED_PULSE_DIGITAL_PINS};
	int numPins=sizeof(pins)/sizeof(int);
	int numHPins=sizeof(hPins)/sizeof(int);
	int i;

	for ( i=0; i<numPins; i++){
		pinMode(pins[i],INPUT);
		digitalWrite(pins[i], LOW);
	}   
	for ( i=0; i<numHPins; i++){
		pinMode(hPins[i],INPUT);
		digitalWrite(hPins[i], HIGH);
	}   
#endif
}

/**
 * Iterates through digital pin defined in PULSE_DIGITAL_PINS and
 * INVERTED_PULSE_DIGITAL_PINS and waits for the pin to 'pulse'
 * Repeats this PULSE_AVERAGE_COUNT times then takes the average lenght
 * of time for the pulse and works out the frequency in micro hertz and
 * logs it.
 *
 */
void PulsePoller::poll(){
	int pins[]={PULSE_DIGITAL_PINS};
	int hPins[]={INVERTED_PULSE_DIGITAL_PINS};
	int numPins=sizeof(pins)/sizeof(int);
	int numHPins=sizeof(hPins)/sizeof(int);
	int i;
	int c;
	unsigned long val;

	m.units="MicroHertz";
	for ( i=0; i<numPins; i++){
		val=0;
		for ( c=0; c<PULSE_AVERAGE_COUNT; c++){
			val+=pulseIn(pins[i],LOW,PULSE_TIMEOUT);
		}
		val=1000000/(val/PULSE_AVERAGE_COUNT);
		m.nameSpace="Frequency.DigitalPin."+String(pins[i]);
		m.value=String(val/PULSE_AVERAGE_COUNT);
		log_message();
	}   

	for ( i=0; i<numHPins; i++){
		val=0;
		for ( c=0; c<PULSE_AVERAGE_COUNT; c++){
			val+=pulseIn(hPins[i],HIGH,PULSE_TIMEOUT);
		}
		val=1000000/(val/PULSE_AVERAGE_COUNT);
		m.nameSpace="Frequency.DigitalPin."+String(hPins[i]);
		m.value=String(val/PULSE_AVERAGE_COUNT);
		log_message();
	}   
}
#endif

