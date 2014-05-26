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
 * $Rev: 159 $:   
 * $Author: irvined $: 
 * $Date: 2013-01-05 00:27:49 +0000 (Sat, 05 Jan 2013) $:  
 
 */
#include <ELMPoller.h>
#ifdef ENABLE_ELM_POLLER
unsigned int ELMPoller::retries;
bool ELMPoller::active;
Elm327 ELMPoller::Elm;


/**
 * Starts the ELM327 communication, tests if that was successful, if not disables the 
 * poller.
 */
void ELMPoller::begin(){
	DEBUG("Configuring ELM Poller");
#ifdef ELM_LED
	DEBUG("Configuring ELM LED Pin to Output, LOW");
	pinMode(ELM_LED_PIN, OUTPUT);
	digitalWrite(ELM_LED_PIN,LOW);
#endif
	retries=0;
	active=false;
	byte status;
	DEBUG ("Starting ELM device");
	status=Elm.begin();
	DEBUG ("ELM Device Started");
	if (status == ELM_SUCCESS){
		active=true;
#ifdef ELM_LED
		DEBUG ("ELM Poller Online, setting LED to ON")
		digitalWrite(ELM_LED_PIN,HIGH);
#endif
	}
	DEBUG ("ELM Poller Configured");
}

/**
 * Logs the appropriate metrics from the ELM controller.
 */
void ELMPoller::poll(){
	bool b;
	int i;
	unsigned int ui;
	byte by;
	byte status;

	if (!active &&++retries >= ELM_SKIP){
		status=Elm.begin();
		retries=0;
		if (status == ELM_SUCCESS)
		{
			active=true;
			#ifdef ELM_LED
				DEBUG(" Setting ELM LED to HIGH")
				digitalWrite(ELM_LED_PIN,HIGH);
			#endif
		}
	}
	if (!active){
		return;
	}
	
	// Ignition
	status=Elm.getIgnMon(b);
	if (status!=ELM_SUCCESS){
		active=false;
		#ifdef ELM_LED
			digitalWrite(ELM_LED_PIN,LOW);
		#endif
		return;
	}
	m.units="Boolean";
	m.nameSpace="ELM327.Ignition";
	if (b){
		m.value=String("On");

	}else{
		m.value=String("Off");
	}
	log_message();
	
	// Engine Load
	Elm.engineLoad(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.EngineLoad";
	m.value=String(by);
	log_message();

	// Coolant Temperature
	Elm.coolantTemperature(i);
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.CoolantTemp";
	m.value=String(by);
	log_message();

	#ifdef ELMPOLLER_EXTENDED_VALS
	Elm.fuelTrimBank1ShortTerm(i);
	m.units="%";
	m.nameSpace="ELM327.OBD2.FuelTrimBank1ShortTerm";
	m.value=String(i);
	log_message();

	Elm.fuelTrimBank2ShortTerm(i);
	m.units="%";
	m.nameSpace="ELM327.OBD2.FuelTrimBank2ShortTerm";
	m.value=String(i);
	log_message();

	Elm.fuelTrimBank1LongTerm(i) ;
	m.units="%";
	m.nameSpace="ELM327.OBD2.FuelTrimBank1LongTerm";
	m.value=String(i);
	log_message();

	Elm.fuelTrimBank2LongTerm(i);
	m.units="%";
	m.nameSpace="ELM327.OBD2.FuelTrimBank2LongTerm";
	m.value=String(i);
	log_message();
#endif

	Elm.fuelPressure(i) ;
	m.units="kPa";
	m.nameSpace="ELM327.OBD2.FuelPressure";
	m.value=String(i);
	log_message();

	Elm.intakeManifoldAbsolutePressure(by) ;
	m.units="kPa";
	m.nameSpace="ELM327.OBD2.IntakeManifoldAbsolutePressure";
	m.value=String(by);
	log_message();

	Elm.engineRPM(i) ;
	m.units="RPM";
	m.nameSpace="ELM327.OBD2.EngineRPM";
	m.value=String(i);
	log_message();

	Elm.vehicleSpeed(by);
	m.units="km/h";
	m.nameSpace="ELM327.OBD2.VehicleSpeed";
	m.value=String(by);
	log_message();

	Elm.timingAdvance(i);
	m.units="Degrees";
	m.nameSpace="ELM327.OBD2.TimingAdvance";
	m.value=String(i);
	log_message();

	Elm.intakeAirTemperature(i);
	m.units="Degrees";
	m.nameSpace="ELM327.OBD2.IntakeAirTemperature";
	m.value=String(i);
	log_message();

	Elm.MAFAirFlowRate(ui);
	m.units="Grams/sec";
	m.nameSpace="ELM327.OBD2.MAFAirFlowRate";
	m.value=String(ui);
	log_message();

	Elm.throttlePosition(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.ThrottlePosition";
	m.value=String(i);
	log_message();
/*
	Elm.o2SensorBank1Sensor1(vo, trim);
	Elm.o2SensorBank1Sensor2(vo, trim);
	Elm.o2SensorBank1Sensor3(vo, trim);
	Elm.o2SensorBank1Sensor4(vo, trim);
	Elm.o2SensorBank2Sensor1(vo, trim);
	Elm.o2SensorBank2Sensor2(vo, trim);
	Elm.o2SensorBank2Sensor3(vo, trim);
	Elm.o2SensorBank2Sensor4(vo, trim);
	Elm.auxiliaryInputStatus(b);
*/
	Elm.engineRunTime(ui);
	m.units="seconds";
	m.nameSpace="ELM327.OBD2.EngineRunTime";
	m.value=String(ui);
	log_message();

	Elm.distanceMIL(ui);
	m.units="km";
	m.nameSpace="ELM327.OBD2.DistanceSinceMILActive";
	m.value=String(ui);
	log_message();

	Elm.relativeFuelRailPressure(ui);
	m.units="kPa";
	m.nameSpace="ELM327.OBD2.RelativeFuelRailPressure";
	m.value=String(ui);
	log_message();

	Elm.absoluteFuelRailPressure(ui);
	m.units="kPa";
	m.nameSpace="ELM327.OBD2.AbsoluteFuelRailPressure";
	m.value=String(ui);
	log_message();

	/*
	Elm.o2S1WRVoltage(equiv, voltage);
	Elm.o2S2WRVoltage(equiv, voltage);
	Elm.o2S3WRVoltage(equiv, voltage);
	Elm.o2S4WRVoltage(equiv, voltage);
	Elm.o2S5WRVoltage(equiv, voltage);
	Elm.o2S6WRVoltage(equiv, voltage);
	Elm.o2S7WRVoltage(equiv, voltage);
	Elm.o2S8WRVoltage(equiv, voltage);
	*/
	#ifdef ELMPOLLER_EXTENDED_VALS
	Elm.commandedEGR(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.CommandedEGR";
	m.value=String(by);
	log_message();

	Elm.EGRError(i);
	m.units="%";
	m.nameSpace="ELM327.OBD2.EGRError";
	m.value=String(i);
	log_message();

	Elm.commandedEvaporativePurge(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.EGRError";
	m.value=String(i);
	log_message();
	#endif

	Elm.fuelLevel(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.FuelLevel";
	m.value=String(by);
	log_message();

	#ifdef ELMPOLLER_EXTENDED_VALS
	Elm.warmUpsSinceLastCleared(by);
	m.units="#";
	m.nameSpace="ELM327.OBD2.WarmUpsSinceLastCleared";
	m.value=String(by);
	log_message();

	Elm.distanceSinceLastCleared(ui);
	m.units="km";
	m.nameSpace="ELM327.OBD2.DistanceSinceLastCleared";
	m.value=String(ui);
	log_message();

	Elm.evapPressure(i);
	m.units="Pa";
	m.nameSpace="ELM327.OBD2.evapPressure";
	m.value=String(i);
	log_message();
#endif

	Elm.barometricPressure(by);
	m.units="kPa";
	m.nameSpace="ELM327.OBD2.BarometricPressure";
	m.value=String(by);
	log_message();

	/*
	Elm.o2S1WRCurrent(equiv, current);
	Elm.o2S2WRCurrent(equiv, current);
	Elm.o2S3WRCurrent(equiv, current);
	Elm.o2S4WRCurrent(equiv, current);
	Elm.o2S5WRCurrent(equiv, current);
	Elm.o2S6WRCurrent(equiv, current);
	Elm.o2S7WRCurrent(equiv, current);
	Elm.o2S8WRCurrent(equiv, current);
	*/

	#ifdef ELMPOLLER_EXTENDED_VALS
	Elm.catalystTemperatureBank1Sensor1(i);
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.CatalystTemperatureB1S1";
	m.value=String(i);
	log_message();

	Elm.catalystTemperatureBank2Sensor1(i);
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.CatalystTemperatureB2S1";
	m.value=String(i);
	log_message();

	Elm.catalystTemperatureBank1Sensor2(i);
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.CatalystTemperatureB1S2";
	m.value=String(i);
	log_message();

	Elm.catalystTemperatureBank2Sensor2(i);
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.CatalystTemperatureB2S2";
	m.value=String(i);
	log_message();

	Elm.controlModuleVoltage(ui);
	m.units="V";
	m.nameSpace="ELM327.OBD2.ControlModuleVoltage";
	m.value=String(ui);
	log_message();

	Elm.absoluteLoadValue(ui);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AbsoluteLoadValue";
	m.value=String(ui);
	log_message();

	float f;
	char buf[20];
	Elm.commandEquivalenceRatio(f );
	sprintf(buf,"%f",f);
	m.units="NA";
	m.nameSpace="ELM327.OBD2.CommandEquivalenceRatio";
	m.value=String(buf);
	log_message();

#endif

	Elm.relativeThrottlePosition(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.RelativeThrottlePosition";
	m.value=String(by);
	log_message();

	Elm.ambientAirTemperature(i );
	m.units="Degrees C";
	m.nameSpace="ELM327.OBD2.AmbientAirTemperature";
	m.value=String(i);
	log_message();

	#ifdef ELMPOLLER_EXTENDED_VALS
	Elm.absoluteThrottlePositionB(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AbsoluteThrottlePositionB";
	m.value=String(by);
	log_message();

	Elm.absoluteThrottlePositionC(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AbsoluteThrottlePositionC";
	m.value=String(by);
	log_message();

	Elm.acceleratorPedalPositionD(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AcceleratorPedalPositionD";
	m.value=String(by);
	log_message();

	Elm.acceleratorPedalPositionE(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AcceleratorPedalPositionE";
	m.value=String(by);
	log_message();

	Elm.acceleratorPedalPositionF(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.AcceleratorPedalPositionF";
	m.value=String(by);
	log_message();

	Elm.commandedThrottleActuator(by);
	m.units="%";
	m.nameSpace="ELM327.OBD2.CommandedThrottleActuator";
	m.value=String(by);
	log_message();
#endif

}
#endif

