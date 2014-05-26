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
 * $Rev: 118 $
 * $Author: irvined $
 * $Date: 2012-04-08 10:19:00 +0100 (Sun, 08 Apr 2012) $

*/


#include "NMEA.h"


bool NMEA::addChar(char c)
{
	if (c=='$'){
		NMEA::readSentence="";
		return false;
	}

	if (c=='\r' or c=='\n'){
		if (!NMEA::readSentence.startsWith("GPRMC")){
			return false;
		}
		char msgsum[3];
		char actsum[3];
		// Check if the sentence 
		if (NMEA::readSentence.length()>3 
			&& NMEA::readSentence.charAt(NMEA::readSentence.length()-3)=='*')
		{
			// Grab the checksum from the back of the message.
			msgsum[0]=NMEA::readSentence.charAt(NMEA::readSentence.length()-2);
			msgsum[1]=NMEA::readSentence.charAt(NMEA::readSentence.length()-1);
			// Truncate the message at the * so only the raw data remains
			NMEA::readSentence=NMEA::readSentence.substring(0,NMEA::readSentence.length()-3);

			// Sum the message
			char s;
			s=sumMsg(readSentence);
			sprintf(actsum, "%02X",s);
	
			// Compare the two sums.
			if (msgsum[0]==actsum[0] && msgsum[1]==actsum[1]){
				// Checksums match, its a valid gprmc sentence.
				activeSentence=NMEA::readSentence;
				return true;
			}
		}
	}
	else{
		readSentence+=c;
	}
	return false;
}

bool NMEA::validFix(){
	if (activeSentence.length()>0 && fixType() == 'A'){
		return true;
	}
	else
	{
		return false;
	}
}

String NMEA::getTime(){
	return getField(1);
}
char NMEA::fixType(){
	return getField(2).charAt(0);	
}

String NMEA::getLatitude()
{
	return getField(3)+getField(4);
}

String NMEA::getLongitude(){
	return getField(5)+getField(6);

}
String NMEA::getSpeed(){
	return getField(7);
}

String NMEA::getCourse(){
	return getField(8);
}
String NMEA::getDate(){
	return getField(9);
}







String NMEA::getField(int field){
	byte start=0;
	byte end=0;

	byte i=0;
	while( i < field   ){
		start=activeSentence.indexOf(',',start);
		i++;
		if (start!=0){
			start++;
		}
	}
	end=activeSentence.indexOf(',',start);

	return activeSentence.substring(start,end);
}




		

	

//! Returns the checksum of the message.
char NMEA::sumMsg(String &message){
//    debug(TRACE, "GPSPoller::sumMsg - Entering Function");

    byte i=0;
    char checksum=0;
    byte l=message.length();

    for (i=0;i<l;i++){
        checksum=checksum ^ message.charAt(i);
    }
    return checksum;

}

