
/* Copyright 2014 David Irvine
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
*/



// If enabled, loguino will attempt to query the ELM327 device
#define ENABLE_ELM327_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_ELM327_POLLER
// The number of times to skip before trying again.
#define ELM_SKIP 100
// The digital pni to set high when the ELM is responding, if undefined
// no pin will be used.
#define ELM_LED_PIN 6
// The Serial port that the ELM327 is connected to
#define ELM_PORT Serial
