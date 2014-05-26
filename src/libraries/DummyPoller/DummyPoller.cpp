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
// Always include the header file for the source file
#include <DummyPoller.h>
// Always check if the feature is enabled before any code
#ifdef ENABLE_DUMMY_POLLER

int DummyPoller::called;

/**
 * Configures the dummy poller prior to being polled. Sets the called variable
 * to zero.
 */
void DummyPoller::begin(){
	//! Called is incremented every time the poll function is called and
	//is used to log how many times the loop has run.
    called=0;
}

/**
 * Logs two messages everytime the poller is called:
 * Dummy.TimesCalled - The number of times the poller has been called.
 * Dummy.Uptime - The milliseconds the loguino has been alive for.
 */
void DummyPoller::poll(){
    m.units="Times";
	m.nameSpace="Dummy.TimesCalled";
	m.value=String(called++);
    log_message();
    
    m.units="Milliseconds";
	m.nameSpace="Dummy.Uptime";
	m.value=String(millis());
	log_message();

}
#endif

