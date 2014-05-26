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

#include <ITG3200Poller.h>
#ifdef ENABLE_ITG3200_POLLER
ITG3200 ITG3200Poller::gyro;

void ITG3200Poller::begin(){
    gyro.begin(ITG3200_ADDRESS);
    return;
}
void ITG3200Poller::poll(){
    m.units="Degrees*1000/Second";
	m.nameSpace="Gyro.ITG3200.X";
	m.value=String(int(gyro.getX()*1000));
	log_message();
    
	m.nameSpace="Gyro.ITG3200.Y";
	m.value=String(int(gyro.getY()*1000));
	log_message();
    
	m.nameSpace="Gyro.ITG3200.Z";
	m.value=String(int(gyro.getZ()*1000));
	log_message();
    
	m.units="Degrees Celsius*1000";
	m.nameSpace="Gyro.ITG3200.Temperature";
	m.value=String(int(gyro.getTemperature()*1000));
	log_message();
    return;
}
#endif
