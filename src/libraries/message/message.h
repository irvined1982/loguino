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
#ifndef MESSAGE_H
#define MESSAGE_H
#include <Arduino.h>
#include <config.h>

/**
 * Messages are sent from pollers to the logging system, the message contains
 * everything that is required to be logged.  Each time a metric is required 
 * to be logged first the poller sets the attributes on the global message 
 * instance (m) then calles log_message().
 *
 * The message has a toCSV method which is used by each logger to get the
 * correct fields, this format is defined here:
 *
 * http://code.google.com/p/loguino/wiki/DataFormat
 */
class Message
{
public:
    /**
     * Time is the time in milliseconds, this is initialized automatically
     * to the current (up)time by the initializer, however if required
     * it can be set to whatever value is needed.
     */
    unsigned long time;
    /**
     * Namespace is a string used to denote where the message came from.
     * The loguino convention is to use a period to denote subsystems.
     * For example:
     *  Accellerometer.LIS331.XAxis
     */
    String nameSpace;
    /**
     * Freeform string denoting the units of the value, for example
     * MPH or Hz.
     */
    String units;
    /**
     * Stringified value of the metric, such as "On", 100, or "Mode A".
     */
    String value;
    Message();
    String toCSV();
};


extern Message m;

#endif
