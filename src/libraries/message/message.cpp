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
 * $Rev: 139 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-26 22:36:27 +0100 (Thu, 26 Apr 2012) $:  
 
 */
#include <message.h>

/**
 * Initializes the object by setting the default values of the attributes.
 * time is set to the current uptime, nameSpace and units are set to "Unset" 
 * and the value is set to 0.
 * 
 */
Message::Message(){
    time=millis();
    nameSpace="Unset";
    units="Unset";
    value="0";
}

/**
 * Returns a comma delimited string containing the message data. Generally this 
 * is called by each logger at log time to determine the data to write to the 
 * output device.
 *
 * @return The message as a string of comma seperated values.
 */
String Message::toCSV(){
    String CSV;
    CSV=String(time);
    CSV+=",";
    CSV+=nameSpace;
    CSV+=",";
    CSV+=value;
    CSV+=",";
    CSV+=units;
    CSV+=",";
    return CSV;
}

/**
 * Global message variable, previously messages were created by each poller
 * then passed as a reference to the log_message() function, however 
 * this was generally unreliable and error prone, as such there is now just
 * a single message instance m, which is used globally.  
 *
 * Care must be taken to set the values for the nameSpace, units, values etc 
 * each time the poller runs, as it may have been changed by other active
 * pollers.
 *
 */
Message m;

