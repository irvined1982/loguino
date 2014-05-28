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

#ifdef ENABLE_ELM327_POLLER
    static Elm327 Elm;
    static unsigned int elm_retries;
    static bool elm_active;

    void ELM327_init(){
        #ifdef DEBUG_ELM327_POLLER
            DEBUG_1("Starting");
        #endif
        #ifdef ELM_LED_PIN
            pinMode(ELM_LED_PIN, OUTPUT);
            digitalWrite(ELM_LED_PIN,LOW);
        #endif
        elm_retries=0;
        elm_active=false;
        byte status;
        status=Elm.begin();
        if (status == ELM_SUCCESS){
            elm_active=true;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,HIGH);
            #endif
        }

        #ifdef DEBUG_ELM327_POLLER
            DEBUG_1("Finished");
        #endif
    }


    void ELM327_sample(){
        #ifdef DEBUG_ELM327_POLLER
            DEBUG_1("Starting");
        #endif
        bool b;
        int i;
        unsigned int ui;
        byte by;
        byte status;
        if (!elm_active && ++elm_retries >= ELM_SKIP){
            status=Elm.begin();
            elm_retries=0;
            if (status == ELM_SUCCESS)
            {
                elm_active=true;
                #ifdef ELM_LED_PIN
                    digitalWrite(ELM_LED_PIN,HIGH);
                #endif
            }
        }

        if (!elm_active){
            return;
        }

        status=Elm.getIgnMon(b);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.Ignition", b, "Boolean");

        status=Elm.engineLoad(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.EngineLoad", by, "Boolean");

        status=Elm.coolantTemperature(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.CoolantTemp", i, "Degrees C");

        status=Elm.fuelTrimBank1ShortTerm(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelTrimBank1ShortTerm", i, "%");

        status=Elm.fuelTrimBank2ShortTerm(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelTrimBank2ShortTerm", i, "%");

        status=Elm.fuelTrimBank1LongTerm(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelTrimBank1LongTerm", i, "%");

        status=Elm.fuelTrimBank2LongTerm(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelTrimBank2LongTerm", i, "%");

        status=Elm.fuelPressure(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelPressure", i, "kPa");

        status=Elm.intakeManifoldAbsolutePressure(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.IntakeManifoldAbsolutePressure", b, "kPa");

        status=Elm.engineRPM(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.EngineRPM", i, "RPM");

        status=Elm.vehicleSpeed(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.VehicleSpeed", by, "km/h");

        status=Elm.timingAdvance(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.TimingAdvance", i, "Degrees");

        status=Elm.intakeAirTemperature(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.IntakeAirTemperature", i, "Degrees");

        status=Elm.MAFAirFlowRate(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.MAFAirFlowRate", ui, "Grams/sec");

        status=Elm.throttlePosition(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.ThrottlePosition", by, "%");

        status=Elm.engineRunTime(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.EngineRunTime", ui, "seconds");

        status=Elm.distanceMIL(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.DistanceSinceMILActive", ui, "km");

        status=Elm.relativeFuelRailPressure(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.RelativeFuelRailPressure", ui, "kPa");

        status=Elm.absoluteFuelRailPressure(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.AbsoluteFuelRailPressure", ui, "kPa");

        status=Elm.fuelLevel(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.FuelLevel", by, "%");

        status=Elm.distanceSinceLastCleared(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.DistanceSinceLastCleared", ui, "km");

        status=Elm.barometricPressure(by);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.BarometricPressure", by, "kPa");

        status=Elm.controlModuleVoltage(ui);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.ControlModuleVoltage", ui, "V");

        status=Elm.ambientAirTemperature(i);
        if (status!=ELM_SUCCESS){
            elm_active=false;
            #ifdef ELM_LED_PIN
                digitalWrite(ELM_LED_PIN,LOW);
            #endif
            return;
        }
        logMessage("ELM327.OBD2.AmbientAirTemperature", i, "Degrees C");

        #ifdef DEBUG_ELM327_POLLER
            DEBUG_1("Finished");
        #endif

     }
#endif
