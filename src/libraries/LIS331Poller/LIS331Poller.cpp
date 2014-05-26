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

#include <LIS331Poller.h>


#ifdef ENABLE_LIS331_POLLER
LIS331 LIS331Poller::lis;


void LIS331Poller::begin(){
    lis.setPowerStatus(LR_POWER_NORM);
    lis.setXEnable(true);
    lis.setYEnable(true);
    lis.setZEnable(true);

}
void LIS331Poller::poll(){
	int16_t lis_val;
    m.units="mG";
	lis.getXValue(&lis_val);
	m.nameSpace="Accelerometer.LIS331.X";
	m.value=String(int(lis_val));
    log_message();
	lis.getYValue(&lis_val);
	m.nameSpace="Accelerometer.LIS331.Y";
	m.value=String(int(lis_val));
    log_message();
	lis.getZValue(&lis_val);
	m.nameSpace="Accelerometer.LIS331.Z";
	m.value=String(int(lis_val));
    log_message();
}
#endif
