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

 * $Rev: 153 $
 * $Author: irvined $
 * $Date: 2012-10-30 17:59:04 +0000 (Tue, 30 Oct 2012) $

*/

#include <Arduino.h>
#define ELM_TIMEOUT 9000
#define ELM_BAUD_RATE 9600
#define ELM_PORT Serial3

#include <ELM327.h>
void printStatus(byte status){
	switch (status)
	{
		case ELM_TIMEOUT: 
			Serial.println("ELM_TIMEOUT");
			break;
		case ELM_SUCCESS:
			Serial.println("ELM_SUCCESS");
			break;
		case ELM_NO_RESPONSE:
			Serial.println("ELM_NO_RESPONSE");
			break;
		case ELM_BUFFER_OVERFLOW:
			Serial.println("ELM_BUFFER_OVERFLOW");
			break;
		case ELM_GARBAGE:
			Serial.println("ELM_GARBAGE");
			break;
		case ELM_UNABLE_TO_CONNECT:
			Serial.println("ELM_UNABLE_TO_CONNECT");
			break;
		case ELM_NO_DATA:
			Serial.println("ELM_NO_DATA");
			break;
		default:
			Serial.print("UNKNOWN: ");
			Serial.println(status);
	}
}



void setup(){

	float f;
	bool b;
	byte by;
	int i;
	unsigned int ui;

	byte status;
	String s;
	Elm327 Elm;

	Serial.begin(115200);
	Serial.print("ELM327 Begin: ");
	printStatus(Elm.begin());
	
	Serial.print("Elm Voltage: ");
	status=Elm.getVoltage(f);
	if (status == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(f);
	}else{
		printStatus(status);
	}

	Serial.print("Elm Ignition: ");
	status=Elm.getIgnMon(b);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(b);
	}else{
		printStatus(status);
	}

	Serial.print("Elm Version: ");
	status=Elm.getVersion(s) ;
	if (status == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(s);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Engine Load: ");
	status=Elm.engineLoad(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Coolant Temperature: ");
	status=Elm.coolantTemperature(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Fuel Trim, Bank 1, Short Term: ");
	status=Elm.fuelTrimBank1ShortTerm(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}


	Serial.print("OBD2 Fuel Trim, Bank 2, Short Term: ");
	status=Elm.fuelTrimBank2ShortTerm(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Fuel Trim, Bank 1, Long Term: ");
	status=Elm.fuelTrimBank1LongTerm(i) ;
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Fuel Trim, Bank 2, Long Term: ");
	status=Elm.fuelTrimBank2LongTerm(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Fuel Pressure: ");
	status=Elm.fuelPressure(i) ;
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Intake Manifold Absolute Pressure: ");
	status=Elm.intakeManifoldAbsolutePressure(by) ;
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 Engine RPM: ");
	status=Elm.engineRPM(i) ;
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Vehicle Speed: ");
	status=Elm.vehicleSpeed(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(b);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Timing Advance: ");
	status=Elm.timingAdvance(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 Intake Air Temperature: ");
	status=Elm.intakeAirTemperature(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 MAF Air Flow Rate: ");
	status=Elm.MAFAirFlowRate(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 Throttle Position: ");
	status=Elm.throttlePosition(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank1 - Sensor 1: ");
	byte vo;
	byte trim;
	status=Elm.o2SensorBank1Sensor1(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank1 - Sensor 2: ");
	status=Elm.o2SensorBank1Sensor2(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank1 - Sensor 3: ");
	status=Elm.o2SensorBank1Sensor3(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank1 - Sensor 4: ");
	status=Elm.o2SensorBank1Sensor4(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank2 - Sensor 1: ");
	status=Elm.o2SensorBank2Sensor1(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank2 - Sensor 2: ");
	status=Elm.o2SensorBank2Sensor2(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank2 - Sensor 3: ");
	status=Elm.o2SensorBank2Sensor3(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor: Bank2 - Sensor 4: ");
	status=Elm.o2SensorBank2Sensor4(vo, trim);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Voltage: ");
		Serial.println(vo, DEC);
		Serial.print(" Trim: ");
		Serial.println(trim, DEC);
	}else{
		printStatus(status);
	}
	
	Serial.print("OBD2 Auxiliary Input Status: ");
	status=Elm.auxiliaryInputStatus(b);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(b);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 Engine Run Time: ");
	status=Elm.engineRunTime(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 Distance since MIL active: ");
	status=Elm.distanceMIL(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 Relative Fuel Rail Pressure: ");
	status=Elm.relativeFuelRailPressure(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 Absolute Fuel Rail Pressure: ");
	status=Elm.absoluteFuelRailPressure(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	unsigned int equiv;
	unsigned int voltage;
	Serial.print("OBD2 O2 Sensor 1, Equivilance Ratio and Voltage: ");
	status=Elm.o2S1WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 2, Equivilance Ratio and Voltage: ");
	status=Elm.o2S2WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 3, Equivilance Ratio and Voltage: ");
	status=Elm.o2S3WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 4, Equivilance Ratio and Voltage: ");
	status=Elm.o2S4WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 5, Equivilance Ratio and Voltage: ");
	status=Elm.o2S5WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 6, Equivilance Ratio and Voltage: ");
	status=Elm.o2S6WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 7, Equivilance Ratio and Voltage: ");
	status=Elm.o2S7WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 O2 Sensor 8, Equivilance Ratio and Voltage: ");
	status=Elm.o2S8WRVoltage(equiv, voltage);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
		Serial.print(" Value Voltage: ");
		Serial.println(voltage);
	}else{
		printStatus(status);
	}

	Serial.print("OBD2 Commanded EGR: ");
	status=Elm.commandedEGR(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 EGR Error: ");
	status=Elm.EGRError(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("OBD2 Commanded Evaporative Purge: ");
	status=Elm.commandedEvaporativePurge(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("Fuel Level: ");
	status=Elm.fuelLevel(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("Warmups since MIL last cleared: ");
	status=Elm.warmUpsSinceLastCleared(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("Distance since MIL last cleared: ");
	status=Elm.distanceSinceLastCleared(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	Serial.print("Evap Pressure: ");
	status=Elm.evapPressure(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("Barometric Pressure: ");
	status=Elm.barometricPressure(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	int current;

	Serial.print("O2 Sensor 1 Current and Equiv Ratio: ");
	status=Elm.o2S1WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 2 Current and Equiv Ratio: ");
	status=Elm.o2S2WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 3 Current and Equiv Ratio: ");
	status=Elm.o2S3WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 4 Current and Equiv Ratio: ");
	status=Elm.o2S4WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 5 Current and Equiv Ratio: ");
	status=Elm.o2S5WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 6 Current and Equiv Ratio: ");
	status=Elm.o2S6WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 7 Current and Equiv Ratio: ");
	status=Elm.o2S7WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("O2 Sensor 8 Current and Equiv Ratio: ");
	status=Elm.o2S8WRCurrent(equiv, current);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value Current: ");
		Serial.println(current);
		Serial.print(" Value Equiv: ");
		Serial.println(equiv);
	}else{
		printStatus(status);
	}
	Serial.print("Catalyst Temperature Bank1 Sensor 1: ");
	status=Elm.catalystTemperatureBank1Sensor1(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("Catalyst Temperature Bank2 Sensor 1: ");
	status=Elm.catalystTemperatureBank2Sensor1(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("Catalyst Temperature Bank1 Sensor 2: ");
	status=Elm.catalystTemperatureBank1Sensor2(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("Catalyst Temperature Bank2 Sensor 2: ");
	status=Elm.catalystTemperatureBank2Sensor2(i);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}
	Serial.print("Control Module Voltage: ");
	status=Elm.controlModuleVoltage(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}
	Serial.print("Absolute Load Value: ");
	status=Elm.absoluteLoadValue(ui);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(ui);
	}else{
		printStatus(status);
	}

	Serial.print("Command equivalence ratio: ");
	status=Elm.commandEquivalenceRatio(f );
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(f);
	}else{
		printStatus(status);
	}

	Serial.print("Relative throttle position: ");
	status=Elm.relativeThrottlePosition(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}


	Serial.print("Ambient Air Temperature: ");
	status=Elm.ambientAirTemperature(i );
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(i);
	}else{
		printStatus(status);
	}

	Serial.print("Absolute throttle position B: ");
	status=Elm.absoluteThrottlePositionB(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}
	Serial.print("Absolute throttle position C: ");
	status=Elm.absoluteThrottlePositionC(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

	Serial.print("Accelerator pedal position D: ");
	status=Elm.acceleratorPedalPositionD(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

	Serial.print("Accelerator pedal position E: ");
	status=Elm.acceleratorPedalPositionE(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

	Serial.print("Accelerator pedal position F: ");
	status=Elm.acceleratorPedalPositionF(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

	Serial.print("Commanded Throttle Actuator: ");
	status=Elm.commandedThrottleActuator(by);
	if (status  == ELM_SUCCESS)
	{
		Serial.println ("Pass");
		Serial.print(" Value: ");
		Serial.println(by);
	}else{
		printStatus(status);
	}

}
void loop(){}



