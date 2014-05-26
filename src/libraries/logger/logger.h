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
 * $Rev: 157 $:   
 * $Author: irvined $: 
 * $Date: 2012-10-31 20:17:08 +0000 (Wed, 31 Oct 2012) $:  
 
 */
#ifndef LOGGER_H
#define LOGGER_H

#include <Arduino.h>
#include <config.h>
#include <message.h>

#include <EthernetLogger.h>
#include <SerialLogger.h>
#include <SDLogger.h>

/**
 * Logs the message to all active outputs.
 */
void log_message();

/**
 * Logs a debug message to all loggers.  This should *NEVER* be called
 * from within a logger as it will recurse infinitely.
 */
//void debug_message(String message);

/**
 * Flushes the output buffer on all active outputs.
 */
void flush_output();

/**
 * Sets up any outputs that are available.   Contains a call to the setup function 
 * of each logger installed.
 */
void loggerBegin();

/**
 * The number of messages logged that have not yet been explicitly
 * flushed.
 */
extern int num_messages;





#endif








