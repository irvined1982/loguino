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



#include <TMP102Poller.h>

#ifdef ENABLE_TMP102_POLLER
	
/** Prepares the i2c bus for communication with the TMP102 device. 
 * There is nothing specific to be done on the sensor itself, 
 * default values are used.
 */
void TMP102Poller::begin(){
    Wire.begin();
}

/**
 * Polls the TMP102 controller over the I2C bus using the Wire library.  Used code from:
 * http://arduino.cc/playground/Code/TMP102
 *
 */
void TMP102Poller::poll()
{
    byte firstbyte, secondbyte; //these are the bytes we read from the TMP102 temperature registers
    int val; /* an int is capable of storing two bytes, this is where we "chuck" the two bytes together. */
    float convertedtemp; /* We then need to multiply our two bytes by a scaling factor, mentioned in the datasheet. */
  
   	
    /** 
	 * Resets the register pointer (by default it is ready to read temperatures) 
	 * You can alter it to a writeable register and alter some of the configuration -
	 * the sensor is capable of alerting you if the temperature is above or below 
	 * a specified threshold, however this is not done as part of this modeule.
	 */
    Wire.beginTransmission(TMP102_I2C_ADDRESS); 
	byte i = 0x00;

    Wire.write(i);
    Wire.endTransmission();
    Wire.requestFrom(TMP102_I2C_ADDRESS, 2);
    Wire.endTransmission();
    
	/** 
	 * Then reads two bytes, the first byte contains the most 
	 * significant bit, the second contains the least significant.
	 */
    firstbyte      = (Wire.read());
    secondbyte     = (Wire.read());

	/** 
	 * The bytes are then shifted and ORed together to give the actual
	 * value
	 */
    val = ((firstbyte) << 4);  
    val |= (secondbyte >> 4);    

	/** 
	 * The conversion factor is then applied to give the temperature
	 * in degrees celsius multiplied by ten.
	 */
    convertedtemp = val*0.0625;
    m.units="Degrees 10C";
	char s[32];
	dtostrf(val, 1, 2, s);

	/* 
	 * After the value is obtained from the sensor, a single message is 
	 * logged
	 */
    m.value=s;

	m.nameSpace="TMP102.Temp";
    log_message();
}

#endif

