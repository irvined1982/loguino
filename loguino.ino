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

#define ENABLE_DEBUG
#define DEBUG_LEVEL 2

#ifdef ENABLE_DEBUG
  #define DEBUG_SERIAL_DEV Serial
  #define DEBUG_SERIAL_BAUD 115200
#endif





#define ENABLE_ANALOG_POLLER
#define DEBUG_ANALOG_POLLER

#define AP_SAMPLE_PIN_0
#define AP_HOLD_PIN_0_HIGH
#define AP_PIN_0_NAME "ap.pin0"

#define AP_SAMPLE_PIN_1
#define AP_HOLD_PIN_1_HIGH
#define AP_PIN_1_NAME "ap.pin1"

#define AP_SAMPLE_PIN_2
#define AP_HOLD_PIN_2_HIGH
#define AP_PIN_2_NAME "ap.pin2"

#define AP_SAMPLE_PIN_3
#define AP_HOLD_PIN_3_HIGH
#define AP_PIN_3_NAME "ap.pin3"

#define AP_SAMPLE_PIN_4
#define AP_HOLD_PIN_4_HIGH
#define AP_PIN_4_NAME "ap.pin4"

#define AP_SAMPLE_PIN_5
#define AP_HOLD_PIN_5_HIGH
#define AP_PIN_5_NAME "ap.pin5"

#define AP_SAMPLE_PIN_6
#define AP_HOLD_PIN_6_HIGH
#define AP_PIN_6_NAME "ap.pin6"

#define AP_SAMPLE_PIN_7
#define AP_HOLD_PIN_7_HIGH
#define AP_PIN_7_NAME "ap.pin7"

#define AP_SAMPLE_PIN_8
#define AP_HOLD_PIN_8_HIGH
#define AP_PIN_8_NAME "ap.pin8"

#define AP_SAMPLE_PIN_9
#define AP_HOLD_PIN_9_HIGH
#define AP_PIN_9_NAME "ap.pin9"

#define AP_SAMPLE_PIN_10
#define AP_HOLD_PIN_10_HIGH
#define AP_PIN_10_NAME "ap.pin10"

#define AP_SAMPLE_PIN_11
#define AP_HOLD_PIN_11_HIGH
#define AP_PIN_11_NAME "ap.pin11"

#define AP_SAMPLE_PIN_12
#define AP_HOLD_PIN_12_HIGH
#define AP_PIN_12_NAME "ap.pin12"

#define AP_SAMPLE_PIN_13
#define AP_HOLD_PIN_13_HIGH
#define AP_PIN_13_NAME "ap.pin13"

#define AP_SAMPLE_PIN_14
#define AP_HOLD_PIN_14_HIGH
#define AP_PIN_14_NAME "ap.pin14"

#define AP_SAMPLE_PIN_15
#define AP_HOLD_PIN_15_HIGH
#define AP_PIN_15_NAME "ap.pin15"


#define ENABLE_SERIAL_LOGGER
#define DEBUG_SERIAL_LOGGER
#define SERIAL_LOGGER_BAUD 115200
#define SERIAL_LOGGER_DEVICE Serial


#if (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif

#ifdef ENABLE_DEBUG
  #ifndef DEBUG_LEVEL
    #define DEBUG_LEVEL 1
  #endif

  #if DEBUG_LEVEL > 0
    #define DEBUG_1(m) debug(__FILE__,__FUNCTION__, __LINE__, m)
  #else
    #define DEBUG_1(m)
  #endif

  #if DEBUG_LEVEL > 1
    #define DEBUG_2(m) debug(__FILE__,__FUNCTION__, __LINE__, m)
  #else
    #define DEBUG_2(m)
  #endif

  #if DEBUG_LEVEL > 2
    #define DEBUG_3(m) debug(__FILE__,__FUNCTION__, __LINE__, m)
  #else
    #define DEBUG_3(m)
  #endif

  #if DEBUG_LEVEL > 3
    #define DEBUG_4(m) debug(__FILE__,__FUNCTION__, __LINE__, m)
  #else
    #define DEBUG_4(m)
  #endif

  #if DEBUG_LEVEL > 4
    #define DEBUG_5(m) debug(__FILE__,__FUNCTION__, __LINE__, m)
  #else
    #define DEBUG_5(m)
  #endif

#else
  #define DEBUG_1(m)
  #define DEBUG_2(m)
  #define DEBUG_3(m)
  #define DEBUG_4(m)
  #define DEBUG_5(m)
#endif




extern unsigned int __heap_start;
extern void *__brkval;

/*
 *  * The free list structure as maintained by the
 *   * avr-libc memory allocation routines.
 *    */
struct __freelist {
	size_t sz;
	struct __freelist *nx;
};

/* The head of the free list structure */
extern struct __freelist *__flp;

int freeListSize() {
	struct __freelist* current;
	int total = 0;

	for (current = __flp; current; current = current->nx) {
		total += 2; /* Add two bytes for the memory block's header  */
		total += (int) current->sz;
	}

	return total;
}

int freeMemory() {
	int free_memory;

	if ((int)__brkval == 0) {
		free_memory = ((int)&free_memory) - ((int)&__heap_start);
	} else {
		free_memory = ((int)&free_memory) - ((int)__brkval);
		free_memory += freeListSize();
	}
	return free_memory;
}



void debug(const char * fname, const char * func, const int lnum, const  char * message){
	char txt[20];
	sprintf(txt, "%9d,%9d,", millis(), freeMemory() );
	DEBUG_SERIAL_DEV.print(txt);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(fname);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(func);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.print(lnum);
	DEBUG_SERIAL_DEV.print(", ");
	DEBUG_SERIAL_DEV.println(message);
}

void setup(){
	DEBUG_1("Begin");
	#ifdef ENABLE_DEBUG
		#ifdef DEBUG_SERIAL_DEV
			#ifdef DEBUG_SERIAL_BAUD
		        DEBUG_SERIAL_DEV.begin(DEBUG_SERIAL_BAUD);
			#endif
		#endif
	#endif
	DEBUG_5("Setting up Pollers");
	setupPollers();
	DEBUG_2("Succesfully setup Pollers");
	DEBUG_5("Setting up Outputs");
	setupLoggers();
	DEBUG_2("Succesfully setup Outputs");
	DEBUG_1("Finished");
}

void loop(){
	DEBUG_1("Begin");
	DEBUG_5("Reading Sensors");
	readSensors();
	DEBUG_2("Successfully read sensors");
	DEBUG_5("Flushing Loggers");
	flushLoggers();
	DEBUG_2("Successfully flushed loggers");
	DEBUG_1("Finished");
}


void logMessage(const char* name, int value, const char* unit){
    DEBUG_1("Begin");
    char buf[8];
    sprintf (buf, "%i", value);
    logMessage(name, buf, unit);
    DEBUG_4("Logged");
    DEBUG_1("Finished");
}

void logMessage(const char * name, String value, const char * unit){
    DEBUG_1("Begin");
    char *buf;
    buf = NULL;

    int size;
    size = value.length() + 1;
    DEBUG_3("Allocating");
    buf = (char *) malloc(size * sizeof(char));
    DEBUG_5("Logging");
    logMessage(name, buf, unit);
    DEBUG_4("Logged");
    free (buf);
    DEBUG_5("Freed");
    DEBUG_1("Finished");
}



#ifdef ENABLE_ANALOG_POLLER
    void analog_pin_init(){
        DEBUG_1("Starting");
        #ifdef ANALOG_USE_EXTERN_REF
            analogReference(EXTERNAL);
        #endif

        #ifdef A0
            #ifdef AP_SAMPLE_PIN_0
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 0 to input");
                #endif
                pinMode(0, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A0 to input");
                #endif
                #ifdef AP_HOLD_PIN_0_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 0 pullup HIGH");
                    #endif
                    digitalWrite(A0,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A0 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A0 pullup LOW");
                    #endif
                    digitalWrite(A0,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A0 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A1
            #ifdef AP_SAMPLE_PIN_1
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 1 to input");
                #endif
                pinMode(1, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A1 to input");
                #endif
                #ifdef AP_HOLD_PIN_1_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 1 pullup HIGH");
                    #endif
                    digitalWrite(A1,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A1 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A1 pullup LOW");
                    #endif
                    digitalWrite(A1,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A1 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A2
            #ifdef AP_SAMPLE_PIN_2
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 2 to input");
                #endif
                pinMode(2, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A2 to input");
                #endif
                #ifdef AP_HOLD_PIN_2_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 2 pullup HIGH");
                    #endif
                    digitalWrite(A2,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A2 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A2 pullup LOW");
                    #endif
                    digitalWrite(A2,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A2 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A3
            #ifdef AP_SAMPLE_PIN_3
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 3 to input");
                #endif
                pinMode(3, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A3 to input");
                #endif
                #ifdef AP_HOLD_PIN_3_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 3 pullup HIGH");
                    #endif
                    digitalWrite(A3,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A3 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A3 pullup LOW");
                    #endif
                    digitalWrite(A3,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A3 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A4
            #ifdef AP_SAMPLE_PIN_4
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 4 to input");
                #endif
                pinMode(4, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A4 to input");
                #endif
                #ifdef AP_HOLD_PIN_4_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 4 pullup HIGH");
                    #endif
                    digitalWrite(A4,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A4 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A4 pullup LOW");
                    #endif
                    digitalWrite(A4,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A4 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A5
            #ifdef AP_SAMPLE_PIN_5
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 5 to input");
                #endif
                pinMode(5, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A5 to input");
                #endif
                #ifdef AP_HOLD_PIN_5_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 5 pullup HIGH");
                    #endif
                    digitalWrite(A5,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A5 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A5 pullup LOW");
                    #endif
                    digitalWrite(A5,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A5 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A6
            #ifdef AP_SAMPLE_PIN_6
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 6 to input");
                #endif
                pinMode(6, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A6 to input");
                #endif
                #ifdef AP_HOLD_PIN_6_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 6 pullup HIGH");
                    #endif
                    digitalWrite(A6,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A6 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A6 pullup LOW");
                    #endif
                    digitalWrite(A6,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A6 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A7
            #ifdef AP_SAMPLE_PIN_7
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 7 to input");
                #endif
                pinMode(7, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A7 to input");
                #endif
                #ifdef AP_HOLD_PIN_7_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 7 pullup HIGH");
                    #endif
                    digitalWrite(A7,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A7 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A7 pullup LOW");
                    #endif
                    digitalWrite(A7,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A7 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A8
            #ifdef AP_SAMPLE_PIN_8
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 8 to input");
                #endif
                pinMode(8, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A8 to input");
                #endif
                #ifdef AP_HOLD_PIN_8_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 8 pullup HIGH");
                    #endif
                    digitalWrite(A8,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A8 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A8 pullup LOW");
                    #endif
                    digitalWrite(A8,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A8 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A9
            #ifdef AP_SAMPLE_PIN_9
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 9 to input");
                #endif
                pinMode(9, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A9 to input");
                #endif
                #ifdef AP_HOLD_PIN_9_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 9 pullup HIGH");
                    #endif
                    digitalWrite(A9,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A9 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A9 pullup LOW");
                    #endif
                    digitalWrite(A9,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A9 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A10
            #ifdef AP_SAMPLE_PIN_10
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 10 to input");
                #endif
                pinMode(10, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A10 to input");
                #endif
                #ifdef AP_HOLD_PIN_10_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 10 pullup HIGH");
                    #endif
                    digitalWrite(A10,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A10 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A10 pullup LOW");
                    #endif
                    digitalWrite(A10,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A10 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A11
            #ifdef AP_SAMPLE_PIN_11
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 11 to input");
                #endif
                pinMode(11, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A11 to input");
                #endif
                #ifdef AP_HOLD_PIN_11_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 11 pullup HIGH");
                    #endif
                    digitalWrite(A11,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A11 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A11 pullup LOW");
                    #endif
                    digitalWrite(A11,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A11 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A12
            #ifdef AP_SAMPLE_PIN_12
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 12 to input");
                #endif
                pinMode(12, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A12 to input");
                #endif
                #ifdef AP_HOLD_PIN_12_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 12 pullup HIGH");
                    #endif
                    digitalWrite(A12,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A12 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A12 pullup LOW");
                    #endif
                    digitalWrite(A12,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A12 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A13
            #ifdef AP_SAMPLE_PIN_13
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 13 to input");
                #endif
                pinMode(13, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A13 to input");
                #endif
                #ifdef AP_HOLD_PIN_13_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 13 pullup HIGH");
                    #endif
                    digitalWrite(A13,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A13 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A13 pullup LOW");
                    #endif
                    digitalWrite(A13,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A13 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A14
            #ifdef AP_SAMPLE_PIN_14
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 14 to input");
                #endif
                pinMode(14, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A14 to input");
                #endif
                #ifdef AP_HOLD_PIN_14_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 14 pullup HIGH");
                    #endif
                    digitalWrite(A14,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A14 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A14 pullup LOW");
                    #endif
                    digitalWrite(A14,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A14 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        #ifdef A15
            #ifdef AP_SAMPLE_PIN_15
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Setting pin 15 to input");
                #endif
                pinMode(15, INPUT);
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_3("Successfully set pin A15 to input");
                #endif
                #ifdef AP_HOLD_PIN_15_HIGH
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin 15 pullup HIGH");
                    #endif
                    digitalWrite(A15,HIGH);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A15 pullup HIGH");
                    #endif
                #elif
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_5("Setting pin A15 pullup LOW");
                    #endif
                    digitalWrite(A15,LOW);
                    #ifdef DEBUG_ANALOG_POLLER
                        DEBUG_3("Successfully set pin A15 pullup LOW");
                    #endif
                #endif
            #endif
        #endif
        DEBUG_1("Finished");
    }

    void analog_pin_sample(){
        DEBUG_1("Starting");

        #ifdef A0
            #ifdef AP_SAMPLE_PIN_0
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 0");
                #endif
                logMessage(AP_PIN_0_NAME, analogRead(0), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 0");
                #endif
            #endif
        #endif
        
        #ifdef A1
            #ifdef AP_SAMPLE_PIN_1
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 1");
                #endif
                logMessage(AP_PIN_1_NAME, analogRead(1), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 1");
                #endif
            #endif
        #endif
        
        #ifdef A2
            #ifdef AP_SAMPLE_PIN_2
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 2");
                #endif
                logMessage(AP_PIN_2_NAME, analogRead(2), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 2");
                #endif
            #endif
        #endif
        
        #ifdef A3
            #ifdef AP_SAMPLE_PIN_3
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 3");
                #endif
                logMessage(AP_PIN_3_NAME, analogRead(3), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 3");
                #endif
            #endif
        #endif
        
        #ifdef A4
            #ifdef AP_SAMPLE_PIN_4
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 4");
                #endif
                logMessage(AP_PIN_4_NAME, analogRead(4), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 4");
                #endif
            #endif
        #endif
        
        #ifdef A5
            #ifdef AP_SAMPLE_PIN_5
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 5");
                #endif
                logMessage(AP_PIN_5_NAME, analogRead(5), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 5");
                #endif
            #endif
        #endif
        
        #ifdef A6
            #ifdef AP_SAMPLE_PIN_6
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 6");
                #endif
                logMessage(AP_PIN_6_NAME, analogRead(6), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 6");
                #endif
            #endif
        #endif
        
        #ifdef A7
            #ifdef AP_SAMPLE_PIN_7
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 7");
                #endif
                logMessage(AP_PIN_7_NAME, analogRead(7), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 7");
                #endif
            #endif
        #endif
        
        #ifdef A8
            #ifdef AP_SAMPLE_PIN_8
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 8");
                #endif
                logMessage(AP_PIN_8_NAME, analogRead(8), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 8");
                #endif
            #endif
        #endif
        
        #ifdef A9
            #ifdef AP_SAMPLE_PIN_9
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 9");
                #endif
                logMessage(AP_PIN_9_NAME, analogRead(9), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 9");
                #endif
            #endif
        #endif
        
        #ifdef A10
            #ifdef AP_SAMPLE_PIN_10
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 10");
                #endif
                logMessage(AP_PIN_10_NAME, analogRead(10), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 10");
                #endif
            #endif
        #endif
        
        #ifdef A11
            #ifdef AP_SAMPLE_PIN_11
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 11");
                #endif
                logMessage(AP_PIN_11_NAME, analogRead(11), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 11");
                #endif
            #endif
        #endif
        
        #ifdef A12
            #ifdef AP_SAMPLE_PIN_12
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 12");
                #endif
                logMessage(AP_PIN_12_NAME, analogRead(12), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 12");
                #endif
            #endif
        #endif
        
        #ifdef A13
            #ifdef AP_SAMPLE_PIN_13
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 13");
                #endif
                logMessage(AP_PIN_13_NAME, analogRead(13), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 13");
                #endif
            #endif
        #endif
        
        #ifdef A14
            #ifdef AP_SAMPLE_PIN_14
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 14");
                #endif
                logMessage(AP_PIN_14_NAME, analogRead(14), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 14");
                #endif
            #endif
        #endif
        
        #ifdef A15
            #ifdef AP_SAMPLE_PIN_15
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 15");
                #endif
                logMessage(AP_PIN_15_NAME, analogRead(15), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 15");
                #endif
            #endif
        #endif
        
        DEBUG_1("Finished");
    }
#endif


#ifdef ENABLE_SERIAL_LOGGER
    void init_serial_logger(){
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Starting");
        #endif
            SERIAL_LOGGER_DEVICE.begin(SERIAL_LOGGER_BAUD);
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Finishing");
        #endif
        }
    void log_serial_logger(const char * name, const char * value, const char * unit){
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Starting");
        #endif
        SERIAL_LOGGER_DEVICE.write(name);
        SERIAL_LOGGER_DEVICE.write(",");
        SERIAL_LOGGER_DEVICE.write(value);
        SERIAL_LOGGER_DEVICE.write(",");
        SERIAL_LOGGER_DEVICE.write(unit);
        SERIAL_LOGGER_DEVICE.println(",");
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Finishing");
        #endif
    }
    void flush_serial_logger(){
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Starting");
        #endif
        SERIAL_LOGGER_DEVICE.flush();
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Finishing");
        #endif
    }
#endif

void readSensors(){
#ifdef ENABLE_ANALOG_POLLER
    analog_pin_sample();
#endif
}

void setupPollers(){
#ifdef ENABLE_ANALOG_POLLER
    analog_pin_init();
#endif
}

void setupLoggers(){
#ifdef ENABLE_SERIAL_LOGGER
    init_serial_logger();
#endif
}

void logMessage(const char * name, const char * value, const char * unit){
#ifdef ENABLE_SERIAL_LOGGER
    log_serial_logger(name, value, unit);
#endif
}

void flushLoggers(){
#ifdef ENABLE_SERIAL_LOGGER
    flush_serial_logger();
#endif
}
