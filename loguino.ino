#define ENABLE_DEBUG
#define DEBUG_LEVEL 2

#ifdef ENABLE_DEBUG
  #define DEBUG_SERIAL_DEV Serial
  #define DEBUG_SERIAL_BAUD 115200

  #ifndef DEBUG_LEVEL
    #define DEBUG_LEVEL 1
  #endif

  #if DEBUG_LEVEL > 0
    #define DEBUG_1(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_1(m)
  #endif

  #if DEBUG_LEVEL > 1
    #define DEBUG_2(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_2(m)
  #endif

  #if DEBUG_LEVEL > 2
    #define DEBUG_3(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_3(m)
  #endif

  #if DEBUG_LEVEL > 3
    #define DEBUG_4(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
  #else
    #define DEBUG_4(m)
  #endif

  #if DEBUG_LEVEL > 4
    #define DEBUG_5(m) debug("__FILE__","__FUNCTION__", "__LINE__", m)
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


#define ENABLE_DIGITAL_POLLER
#define DEBUG_DIGITAL_POLLER

#define DP_SAMPLE_PIN_0
#define DP_HOLD_PIN_0_HIGH
#define DP_INVERT_PIN_0
#define DP_PIN_0_NAME "dp.pin0"

#define DP_SAMPLE_PIN_1
#define DP_HOLD_PIN_1_HIGH
#define DP_INVERT_PIN_1
#define DP_PIN_1_NAME "dp.pin1"

#define DP_SAMPLE_PIN_2
#define DP_HOLD_PIN_2_HIGH
#define DP_INVERT_PIN_2
#define DP_PIN_2_NAME "dp.pin2"

#define DP_SAMPLE_PIN_3
#define DP_HOLD_PIN_3_HIGH
#define DP_INVERT_PIN_3
#define DP_PIN_3_NAME "dp.pin3"

#define DP_SAMPLE_PIN_4
#define DP_HOLD_PIN_4_HIGH
#define DP_INVERT_PIN_4
#define DP_PIN_4_NAME "dp.pin4"

#define DP_SAMPLE_PIN_5
#define DP_HOLD_PIN_5_HIGH
#define DP_INVERT_PIN_5
#define DP_PIN_5_NAME "dp.pin5"

#define DP_SAMPLE_PIN_6
#define DP_HOLD_PIN_6_HIGH
#define DP_INVERT_PIN_6
#define DP_PIN_6_NAME "dp.pin6"

#define DP_SAMPLE_PIN_7
#define DP_HOLD_PIN_7_HIGH
#define DP_INVERT_PIN_7
#define DP_PIN_7_NAME "dp.pin7"

#define DP_SAMPLE_PIN_8
#define DP_HOLD_PIN_8_HIGH
#define DP_INVERT_PIN_8
#define DP_PIN_8_NAME "dp.pin8"

#define DP_SAMPLE_PIN_9
#define DP_HOLD_PIN_9_HIGH
#define DP_INVERT_PIN_9
#define DP_PIN_9_NAME "dp.pin9"

#define DP_SAMPLE_PIN_10
#define DP_HOLD_PIN_10_HIGH
#define DP_INVERT_PIN_10
#define DP_PIN_10_NAME "dp.pin10"

#define DP_SAMPLE_PIN_11
#define DP_HOLD_PIN_11_HIGH
#define DP_INVERT_PIN_11
#define DP_PIN_11_NAME "dp.pin11"

#define DP_SAMPLE_PIN_12
#define DP_HOLD_PIN_12_HIGH
#define DP_INVERT_PIN_12
#define DP_PIN_12_NAME "dp.pin12"

#define DP_SAMPLE_PIN_13
#define DP_HOLD_PIN_13_HIGH
#define DP_INVERT_PIN_13
#define DP_PIN_13_NAME "dp.pin13"

#define DP_SAMPLE_PIN_14
#define DP_HOLD_PIN_14_HIGH
#define DP_INVERT_PIN_14
#define DP_PIN_14_NAME "dp.pin14"

#define DP_SAMPLE_PIN_15
#define DP_HOLD_PIN_15_HIGH
#define DP_INVERT_PIN_15
#define DP_PIN_15_NAME "dp.pin15"

#define DP_SAMPLE_PIN_16
#define DP_HOLD_PIN_16_HIGH
#define DP_INVERT_PIN_16
#define DP_PIN_16_NAME "dp.pin16"

#define DP_SAMPLE_PIN_17
#define DP_HOLD_PIN_17_HIGH
#define DP_INVERT_PIN_17
#define DP_PIN_17_NAME "dp.pin17"

#define DP_SAMPLE_PIN_18
#define DP_HOLD_PIN_18_HIGH
#define DP_INVERT_PIN_18
#define DP_PIN_18_NAME "dp.pin18"

#define DP_SAMPLE_PIN_19
#define DP_HOLD_PIN_19_HIGH
#define DP_INVERT_PIN_19
#define DP_PIN_19_NAME "dp.pin19"

#define DP_SAMPLE_PIN_20
#define DP_HOLD_PIN_20_HIGH
#define DP_INVERT_PIN_20
#define DP_PIN_20_NAME "dp.pin20"

#define DP_SAMPLE_PIN_21
#define DP_HOLD_PIN_21_HIGH
#define DP_INVERT_PIN_21
#define DP_PIN_21_NAME "dp.pin21"

#define DP_SAMPLE_PIN_22
#define DP_HOLD_PIN_22_HIGH
#define DP_INVERT_PIN_22
#define DP_PIN_22_NAME "dp.pin22"

#define DP_SAMPLE_PIN_23
#define DP_HOLD_PIN_23_HIGH
#define DP_INVERT_PIN_23
#define DP_PIN_23_NAME "dp.pin23"

#define DP_SAMPLE_PIN_24
#define DP_HOLD_PIN_24_HIGH
#define DP_INVERT_PIN_24
#define DP_PIN_24_NAME "dp.pin24"

#define DP_SAMPLE_PIN_25
#define DP_HOLD_PIN_25_HIGH
#define DP_INVERT_PIN_25
#define DP_PIN_25_NAME "dp.pin25"

#define DP_SAMPLE_PIN_26
#define DP_HOLD_PIN_26_HIGH
#define DP_INVERT_PIN_26
#define DP_PIN_26_NAME "dp.pin26"

#define DP_SAMPLE_PIN_27
#define DP_HOLD_PIN_27_HIGH
#define DP_INVERT_PIN_27
#define DP_PIN_27_NAME "dp.pin27"

#define DP_SAMPLE_PIN_28
#define DP_HOLD_PIN_28_HIGH
#define DP_INVERT_PIN_28
#define DP_PIN_28_NAME "dp.pin28"

#define DP_SAMPLE_PIN_29
#define DP_HOLD_PIN_29_HIGH
#define DP_INVERT_PIN_29
#define DP_PIN_29_NAME "dp.pin29"

#define DP_SAMPLE_PIN_30
#define DP_HOLD_PIN_30_HIGH
#define DP_INVERT_PIN_30
#define DP_PIN_30_NAME "dp.pin30"

#define DP_SAMPLE_PIN_31
#define DP_HOLD_PIN_31_HIGH
#define DP_INVERT_PIN_31
#define DP_PIN_31_NAME "dp.pin31"

#define DP_SAMPLE_PIN_32
#define DP_HOLD_PIN_32_HIGH
#define DP_INVERT_PIN_32
#define DP_PIN_32_NAME "dp.pin32"

#define DP_SAMPLE_PIN_33
#define DP_HOLD_PIN_33_HIGH
#define DP_INVERT_PIN_33
#define DP_PIN_33_NAME "dp.pin33"

#define DP_SAMPLE_PIN_34
#define DP_HOLD_PIN_34_HIGH
#define DP_INVERT_PIN_34
#define DP_PIN_34_NAME "dp.pin34"

#define DP_SAMPLE_PIN_35
#define DP_HOLD_PIN_35_HIGH
#define DP_INVERT_PIN_35
#define DP_PIN_35_NAME "dp.pin35"

#define DP_SAMPLE_PIN_36
#define DP_HOLD_PIN_36_HIGH
#define DP_INVERT_PIN_36
#define DP_PIN_36_NAME "dp.pin36"

#define DP_SAMPLE_PIN_37
#define DP_HOLD_PIN_37_HIGH
#define DP_INVERT_PIN_37
#define DP_PIN_37_NAME "dp.pin37"

#define DP_SAMPLE_PIN_38
#define DP_HOLD_PIN_38_HIGH
#define DP_INVERT_PIN_38
#define DP_PIN_38_NAME "dp.pin38"

#define DP_SAMPLE_PIN_39
#define DP_HOLD_PIN_39_HIGH
#define DP_INVERT_PIN_39
#define DP_PIN_39_NAME "dp.pin39"

#define DP_SAMPLE_PIN_40
#define DP_HOLD_PIN_40_HIGH
#define DP_INVERT_PIN_40
#define DP_PIN_40_NAME "dp.pin40"

#define DP_SAMPLE_PIN_41
#define DP_HOLD_PIN_41_HIGH
#define DP_INVERT_PIN_41
#define DP_PIN_41_NAME "dp.pin41"

#define DP_SAMPLE_PIN_42
#define DP_HOLD_PIN_42_HIGH
#define DP_INVERT_PIN_42
#define DP_PIN_42_NAME "dp.pin42"

#define DP_SAMPLE_PIN_43
#define DP_HOLD_PIN_43_HIGH
#define DP_INVERT_PIN_43
#define DP_PIN_43_NAME "dp.pin43"

#define DP_SAMPLE_PIN_44
#define DP_HOLD_PIN_44_HIGH
#define DP_INVERT_PIN_44
#define DP_PIN_44_NAME "dp.pin44"

#define DP_SAMPLE_PIN_45
#define DP_HOLD_PIN_45_HIGH
#define DP_INVERT_PIN_45
#define DP_PIN_45_NAME "dp.pin45"

#define DP_SAMPLE_PIN_46
#define DP_HOLD_PIN_46_HIGH
#define DP_INVERT_PIN_46
#define DP_PIN_46_NAME "dp.pin46"

#define DP_SAMPLE_PIN_47
#define DP_HOLD_PIN_47_HIGH
#define DP_INVERT_PIN_47
#define DP_PIN_47_NAME "dp.pin47"

#define DP_SAMPLE_PIN_48
#define DP_HOLD_PIN_48_HIGH
#define DP_INVERT_PIN_48
#define DP_PIN_48_NAME "dp.pin48"

#define DP_SAMPLE_PIN_49
#define DP_HOLD_PIN_49_HIGH
#define DP_INVERT_PIN_49
#define DP_PIN_49_NAME "dp.pin49"

#define DP_SAMPLE_PIN_50
#define DP_HOLD_PIN_50_HIGH
#define DP_INVERT_PIN_50
#define DP_PIN_50_NAME "dp.pin50"

#define DP_SAMPLE_PIN_51
#define DP_HOLD_PIN_51_HIGH
#define DP_INVERT_PIN_51
#define DP_PIN_51_NAME "dp.pin51"

#define DP_SAMPLE_PIN_52
#define DP_HOLD_PIN_52_HIGH
#define DP_INVERT_PIN_52
#define DP_PIN_52_NAME "dp.pin52"

#define DP_SAMPLE_PIN_53
#define DP_HOLD_PIN_53_HIGH
#define DP_INVERT_PIN_53
#define DP_PIN_53_NAME "dp.pin53"
#if (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
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



void debug(const char * fname, const char * func, const char * lnum, const  char * message){
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
	setupOutputs();
	DEBUG_2("Succesfully setup Outputs");
	DEBUG_1("Finished");
}

void loop(){
	DEBUG_1("Begin");
	DEBUG_5("Reading Sensors");
	readSensors();
	DEBUG_2("Successfully read sensors");
	DEBUG_1("Finished");
}



#ifdef ENABLE_DIGITAL_POLLER
    void digital_pin_init(){
        DEBUG_1("Starting");

        #ifdef DP_SAMPLE_PIN_0
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 0 to input");
            #endif
            pinMode(0, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 0.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_0_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 0 pullup HIGH");
                #endif
                digitalWrite(0,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 0 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 0 pullup LOW");
                #endif
                digitalWrite(0,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 0 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_1
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 1 to input");
            #endif
            pinMode(1, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 1.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_1_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 1 pullup HIGH");
                #endif
                digitalWrite(1,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 1 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 1 pullup LOW");
                #endif
                digitalWrite(1,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 1 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_2
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 2 to input");
            #endif
            pinMode(2, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 2.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_2_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 2 pullup HIGH");
                #endif
                digitalWrite(2,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 2 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 2 pullup LOW");
                #endif
                digitalWrite(2,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 2 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_3
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 3 to input");
            #endif
            pinMode(3, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 3.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_3_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 3 pullup HIGH");
                #endif
                digitalWrite(3,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 3 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 3 pullup LOW");
                #endif
                digitalWrite(3,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 3 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_4
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 4 to input");
            #endif
            pinMode(4, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 4.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_4_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 4 pullup HIGH");
                #endif
                digitalWrite(4,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 4 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 4 pullup LOW");
                #endif
                digitalWrite(4,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 4 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_5
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 5 to input");
            #endif
            pinMode(5, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 5.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_5_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 5 pullup HIGH");
                #endif
                digitalWrite(5,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 5 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 5 pullup LOW");
                #endif
                digitalWrite(5,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 5 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_6
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 6 to input");
            #endif
            pinMode(6, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 6.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_6_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 6 pullup HIGH");
                #endif
                digitalWrite(6,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 6 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 6 pullup LOW");
                #endif
                digitalWrite(6,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 6 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_7
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 7 to input");
            #endif
            pinMode(7, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 7.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_7_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 7 pullup HIGH");
                #endif
                digitalWrite(7,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 7 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 7 pullup LOW");
                #endif
                digitalWrite(7,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 7 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_8
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 8 to input");
            #endif
            pinMode(8, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 8.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_8_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 8 pullup HIGH");
                #endif
                digitalWrite(8,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 8 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 8 pullup LOW");
                #endif
                digitalWrite(8,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 8 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_9
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 9 to input");
            #endif
            pinMode(9, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 9.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_9_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 9 pullup HIGH");
                #endif
                digitalWrite(9,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 9 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 9 pullup LOW");
                #endif
                digitalWrite(9,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 9 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_10
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 10 to input");
            #endif
            pinMode(10, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 10.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_10_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 10 pullup HIGH");
                #endif
                digitalWrite(10,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 10 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 10 pullup LOW");
                #endif
                digitalWrite(10,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 10 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_11
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 11 to input");
            #endif
            pinMode(11, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 11.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_11_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 11 pullup HIGH");
                #endif
                digitalWrite(11,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 11 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 11 pullup LOW");
                #endif
                digitalWrite(11,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 11 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_12
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 12 to input");
            #endif
            pinMode(12, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 12.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_12_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 12 pullup HIGH");
                #endif
                digitalWrite(12,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 12 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 12 pullup LOW");
                #endif
                digitalWrite(12,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 12 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_13
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 13 to input");
            #endif
            pinMode(13, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 13.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_13_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 13 pullup HIGH");
                #endif
                digitalWrite(13,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 13 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 13 pullup LOW");
                #endif
                digitalWrite(13,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 13 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_14
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 14 to input");
            #endif
            pinMode(14, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 14.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_14_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 14 pullup HIGH");
                #endif
                digitalWrite(14,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 14 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 14 pullup LOW");
                #endif
                digitalWrite(14,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 14 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_15
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 15 to input");
            #endif
            pinMode(15, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 15.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_15_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 15 pullup HIGH");
                #endif
                digitalWrite(15,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 15 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 15 pullup LOW");
                #endif
                digitalWrite(15,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 15 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_16
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 16 to input");
            #endif
            pinMode(16, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 16.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_16_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 16 pullup HIGH");
                #endif
                digitalWrite(16,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 16 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 16 pullup LOW");
                #endif
                digitalWrite(16,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 16 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_17
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 17 to input");
            #endif
            pinMode(17, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 17.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_17_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 17 pullup HIGH");
                #endif
                digitalWrite(17,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 17 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 17 pullup LOW");
                #endif
                digitalWrite(17,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 17 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_18
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 18 to input");
            #endif
            pinMode(18, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 18.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_18_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 18 pullup HIGH");
                #endif
                digitalWrite(18,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 18 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 18 pullup LOW");
                #endif
                digitalWrite(18,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 18 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_19
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 19 to input");
            #endif
            pinMode(19, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 19.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_19_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 19 pullup HIGH");
                #endif
                digitalWrite(19,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 19 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 19 pullup LOW");
                #endif
                digitalWrite(19,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 19 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_20
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 20 to input");
            #endif
            pinMode(20, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 20.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_20_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 20 pullup HIGH");
                #endif
                digitalWrite(20,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 20 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 20 pullup LOW");
                #endif
                digitalWrite(20,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 20 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_21
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 21 to input");
            #endif
            pinMode(21, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 21.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_21_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 21 pullup HIGH");
                #endif
                digitalWrite(21,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 21 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 21 pullup LOW");
                #endif
                digitalWrite(21,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 21 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_22
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 22 to input");
            #endif
            pinMode(22, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 22.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_22_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 22 pullup HIGH");
                #endif
                digitalWrite(22,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 22 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 22 pullup LOW");
                #endif
                digitalWrite(22,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 22 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_23
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 23 to input");
            #endif
            pinMode(23, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 23.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_23_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 23 pullup HIGH");
                #endif
                digitalWrite(23,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 23 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 23 pullup LOW");
                #endif
                digitalWrite(23,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 23 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_24
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 24 to input");
            #endif
            pinMode(24, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 24.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_24_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 24 pullup HIGH");
                #endif
                digitalWrite(24,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 24 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 24 pullup LOW");
                #endif
                digitalWrite(24,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 24 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_25
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 25 to input");
            #endif
            pinMode(25, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 25.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_25_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 25 pullup HIGH");
                #endif
                digitalWrite(25,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 25 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 25 pullup LOW");
                #endif
                digitalWrite(25,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 25 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_26
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 26 to input");
            #endif
            pinMode(26, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 26.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_26_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 26 pullup HIGH");
                #endif
                digitalWrite(26,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 26 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 26 pullup LOW");
                #endif
                digitalWrite(26,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 26 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_27
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 27 to input");
            #endif
            pinMode(27, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 27.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_27_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 27 pullup HIGH");
                #endif
                digitalWrite(27,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 27 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 27 pullup LOW");
                #endif
                digitalWrite(27,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 27 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_28
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 28 to input");
            #endif
            pinMode(28, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 28.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_28_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 28 pullup HIGH");
                #endif
                digitalWrite(28,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 28 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 28 pullup LOW");
                #endif
                digitalWrite(28,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 28 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_29
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 29 to input");
            #endif
            pinMode(29, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 29.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_29_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 29 pullup HIGH");
                #endif
                digitalWrite(29,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 29 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 29 pullup LOW");
                #endif
                digitalWrite(29,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 29 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_30
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 30 to input");
            #endif
            pinMode(30, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 30.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_30_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 30 pullup HIGH");
                #endif
                digitalWrite(30,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 30 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 30 pullup LOW");
                #endif
                digitalWrite(30,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 30 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_31
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 31 to input");
            #endif
            pinMode(31, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 31.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_31_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 31 pullup HIGH");
                #endif
                digitalWrite(31,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 31 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 31 pullup LOW");
                #endif
                digitalWrite(31,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 31 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_32
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 32 to input");
            #endif
            pinMode(32, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 32.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_32_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 32 pullup HIGH");
                #endif
                digitalWrite(32,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 32 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 32 pullup LOW");
                #endif
                digitalWrite(32,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 32 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_33
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 33 to input");
            #endif
            pinMode(33, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 33.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_33_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 33 pullup HIGH");
                #endif
                digitalWrite(33,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 33 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 33 pullup LOW");
                #endif
                digitalWrite(33,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 33 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_34
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 34 to input");
            #endif
            pinMode(34, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 34.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_34_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 34 pullup HIGH");
                #endif
                digitalWrite(34,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 34 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 34 pullup LOW");
                #endif
                digitalWrite(34,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 34 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_35
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 35 to input");
            #endif
            pinMode(35, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 35.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_35_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 35 pullup HIGH");
                #endif
                digitalWrite(35,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 35 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 35 pullup LOW");
                #endif
                digitalWrite(35,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 35 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_36
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 36 to input");
            #endif
            pinMode(36, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 36.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_36_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 36 pullup HIGH");
                #endif
                digitalWrite(36,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 36 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 36 pullup LOW");
                #endif
                digitalWrite(36,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 36 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_37
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 37 to input");
            #endif
            pinMode(37, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 37.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_37_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 37 pullup HIGH");
                #endif
                digitalWrite(37,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 37 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 37 pullup LOW");
                #endif
                digitalWrite(37,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 37 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_38
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 38 to input");
            #endif
            pinMode(38, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 38.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_38_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 38 pullup HIGH");
                #endif
                digitalWrite(38,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 38 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 38 pullup LOW");
                #endif
                digitalWrite(38,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 38 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_39
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 39 to input");
            #endif
            pinMode(39, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 39.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_39_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 39 pullup HIGH");
                #endif
                digitalWrite(39,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 39 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 39 pullup LOW");
                #endif
                digitalWrite(39,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 39 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_40
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 40 to input");
            #endif
            pinMode(40, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 40.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_40_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 40 pullup HIGH");
                #endif
                digitalWrite(40,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 40 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 40 pullup LOW");
                #endif
                digitalWrite(40,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 40 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_41
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 41 to input");
            #endif
            pinMode(41, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 41.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_41_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 41 pullup HIGH");
                #endif
                digitalWrite(41,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 41 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 41 pullup LOW");
                #endif
                digitalWrite(41,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 41 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_42
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 42 to input");
            #endif
            pinMode(42, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 42.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_42_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 42 pullup HIGH");
                #endif
                digitalWrite(42,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 42 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 42 pullup LOW");
                #endif
                digitalWrite(42,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 42 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_43
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 43 to input");
            #endif
            pinMode(43, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 43.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_43_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 43 pullup HIGH");
                #endif
                digitalWrite(43,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 43 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 43 pullup LOW");
                #endif
                digitalWrite(43,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 43 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_44
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 44 to input");
            #endif
            pinMode(44, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 44.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_44_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 44 pullup HIGH");
                #endif
                digitalWrite(44,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 44 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 44 pullup LOW");
                #endif
                digitalWrite(44,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 44 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_45
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 45 to input");
            #endif
            pinMode(45, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 45.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_45_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 45 pullup HIGH");
                #endif
                digitalWrite(45,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 45 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 45 pullup LOW");
                #endif
                digitalWrite(45,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 45 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_46
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 46 to input");
            #endif
            pinMode(46, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 46.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_46_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 46 pullup HIGH");
                #endif
                digitalWrite(46,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 46 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 46 pullup LOW");
                #endif
                digitalWrite(46,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 46 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_47
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 47 to input");
            #endif
            pinMode(47, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 47.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_47_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 47 pullup HIGH");
                #endif
                digitalWrite(47,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 47 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 47 pullup LOW");
                #endif
                digitalWrite(47,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 47 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_48
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 48 to input");
            #endif
            pinMode(48, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 48.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_48_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 48 pullup HIGH");
                #endif
                digitalWrite(48,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 48 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 48 pullup LOW");
                #endif
                digitalWrite(48,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 48 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_49
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 49 to input");
            #endif
            pinMode(49, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 49.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_49_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 49 pullup HIGH");
                #endif
                digitalWrite(49,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 49 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 49 pullup LOW");
                #endif
                digitalWrite(49,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 49 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_50
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 50 to input");
            #endif
            pinMode(50, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 50.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_50_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 50 pullup HIGH");
                #endif
                digitalWrite(50,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 50 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 50 pullup LOW");
                #endif
                digitalWrite(50,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 50 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_51
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 51 to input");
            #endif
            pinMode(51, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 51.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_51_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 51 pullup HIGH");
                #endif
                digitalWrite(51,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 51 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 51 pullup LOW");
                #endif
                digitalWrite(51,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 51 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_52
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 52 to input");
            #endif
            pinMode(52, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 52.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_52_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 52 pullup HIGH");
                #endif
                digitalWrite(52,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 52 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 52 pullup LOW");
                #endif
                digitalWrite(52,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 52 pullup LOW");
                #endif
            #endif
        #endif
        #ifdef DP_SAMPLE_PIN_53
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Setting pin 53 to input");
            #endif
            pinMode(53, INPUT);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Successfully set pin 53.000000 to input");
            #endif
            #ifdef DP_HOLD_PIN_53_HIGH
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 53 pullup HIGH");
                #endif
                digitalWrite(53,HIGH);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 53 pullup HIGH");
                #endif
            #elif
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Setting pin 53 pullup LOW");
                #endif
                digitalWrite(53,LOW);
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully set pin 53 pullup LOW");
                #endif
            #endif
        #endif
        DEBUG_1("Finished");
    }

    void digital_pin_sample(){
        DEBUG_1("Starting");
        int dstate;

        #ifdef DP_SAMPLE_PIN_0
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 0");
            #endif
            dstate = digitalRead(0);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 0");
            #endif
            #ifdef DP_INVERT_PIN_0
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 0");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 0");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 0");
            #endif
            logMessage(DP_PIN_0_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 0");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_1
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 1");
            #endif
            dstate = digitalRead(1);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 1");
            #endif
            #ifdef DP_INVERT_PIN_1
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 1");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 1");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 1");
            #endif
            logMessage(DP_PIN_1_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 1");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_2
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 2");
            #endif
            dstate = digitalRead(2);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 2");
            #endif
            #ifdef DP_INVERT_PIN_2
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 2");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 2");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 2");
            #endif
            logMessage(DP_PIN_2_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 2");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_3
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 3");
            #endif
            dstate = digitalRead(3);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 3");
            #endif
            #ifdef DP_INVERT_PIN_3
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 3");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 3");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 3");
            #endif
            logMessage(DP_PIN_3_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 3");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_4
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 4");
            #endif
            dstate = digitalRead(4);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 4");
            #endif
            #ifdef DP_INVERT_PIN_4
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 4");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 4");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 4");
            #endif
            logMessage(DP_PIN_4_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 4");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_5
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 5");
            #endif
            dstate = digitalRead(5);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 5");
            #endif
            #ifdef DP_INVERT_PIN_5
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 5");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 5");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 5");
            #endif
            logMessage(DP_PIN_5_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 5");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_6
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 6");
            #endif
            dstate = digitalRead(6);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 6");
            #endif
            #ifdef DP_INVERT_PIN_6
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 6");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 6");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 6");
            #endif
            logMessage(DP_PIN_6_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 6");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_7
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 7");
            #endif
            dstate = digitalRead(7);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 7");
            #endif
            #ifdef DP_INVERT_PIN_7
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 7");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 7");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 7");
            #endif
            logMessage(DP_PIN_7_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 7");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_8
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 8");
            #endif
            dstate = digitalRead(8);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 8");
            #endif
            #ifdef DP_INVERT_PIN_8
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 8");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 8");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 8");
            #endif
            logMessage(DP_PIN_8_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 8");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_9
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 9");
            #endif
            dstate = digitalRead(9);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 9");
            #endif
            #ifdef DP_INVERT_PIN_9
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 9");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 9");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 9");
            #endif
            logMessage(DP_PIN_9_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 9");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_10
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 10");
            #endif
            dstate = digitalRead(10);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 10");
            #endif
            #ifdef DP_INVERT_PIN_10
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 10");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 10");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 10");
            #endif
            logMessage(DP_PIN_10_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 10");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_11
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 11");
            #endif
            dstate = digitalRead(11);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 11");
            #endif
            #ifdef DP_INVERT_PIN_11
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 11");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 11");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 11");
            #endif
            logMessage(DP_PIN_11_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 11");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_12
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 12");
            #endif
            dstate = digitalRead(12);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 12");
            #endif
            #ifdef DP_INVERT_PIN_12
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 12");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 12");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 12");
            #endif
            logMessage(DP_PIN_12_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 12");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_13
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 13");
            #endif
            dstate = digitalRead(13);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 13");
            #endif
            #ifdef DP_INVERT_PIN_13
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 13");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 13");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 13");
            #endif
            logMessage(DP_PIN_13_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 13");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_14
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 14");
            #endif
            dstate = digitalRead(14);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 14");
            #endif
            #ifdef DP_INVERT_PIN_14
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 14");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 14");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 14");
            #endif
            logMessage(DP_PIN_14_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 14");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_15
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 15");
            #endif
            dstate = digitalRead(15);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 15");
            #endif
            #ifdef DP_INVERT_PIN_15
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 15");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 15");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 15");
            #endif
            logMessage(DP_PIN_15_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 15");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_16
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 16");
            #endif
            dstate = digitalRead(16);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 16");
            #endif
            #ifdef DP_INVERT_PIN_16
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 16");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 16");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 16");
            #endif
            logMessage(DP_PIN_16_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 16");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_17
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 17");
            #endif
            dstate = digitalRead(17);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 17");
            #endif
            #ifdef DP_INVERT_PIN_17
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 17");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 17");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 17");
            #endif
            logMessage(DP_PIN_17_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 17");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_18
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 18");
            #endif
            dstate = digitalRead(18);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 18");
            #endif
            #ifdef DP_INVERT_PIN_18
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 18");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 18");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 18");
            #endif
            logMessage(DP_PIN_18_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 18");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_19
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 19");
            #endif
            dstate = digitalRead(19);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 19");
            #endif
            #ifdef DP_INVERT_PIN_19
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 19");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 19");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 19");
            #endif
            logMessage(DP_PIN_19_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 19");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_20
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 20");
            #endif
            dstate = digitalRead(20);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 20");
            #endif
            #ifdef DP_INVERT_PIN_20
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 20");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 20");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 20");
            #endif
            logMessage(DP_PIN_20_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 20");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_21
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 21");
            #endif
            dstate = digitalRead(21);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 21");
            #endif
            #ifdef DP_INVERT_PIN_21
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 21");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 21");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 21");
            #endif
            logMessage(DP_PIN_21_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 21");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_22
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 22");
            #endif
            dstate = digitalRead(22);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 22");
            #endif
            #ifdef DP_INVERT_PIN_22
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 22");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 22");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 22");
            #endif
            logMessage(DP_PIN_22_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 22");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_23
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 23");
            #endif
            dstate = digitalRead(23);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 23");
            #endif
            #ifdef DP_INVERT_PIN_23
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 23");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 23");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 23");
            #endif
            logMessage(DP_PIN_23_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 23");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_24
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 24");
            #endif
            dstate = digitalRead(24);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 24");
            #endif
            #ifdef DP_INVERT_PIN_24
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 24");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 24");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 24");
            #endif
            logMessage(DP_PIN_24_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 24");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_25
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 25");
            #endif
            dstate = digitalRead(25);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 25");
            #endif
            #ifdef DP_INVERT_PIN_25
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 25");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 25");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 25");
            #endif
            logMessage(DP_PIN_25_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 25");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_26
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 26");
            #endif
            dstate = digitalRead(26);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 26");
            #endif
            #ifdef DP_INVERT_PIN_26
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 26");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 26");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 26");
            #endif
            logMessage(DP_PIN_26_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 26");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_27
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 27");
            #endif
            dstate = digitalRead(27);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 27");
            #endif
            #ifdef DP_INVERT_PIN_27
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 27");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 27");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 27");
            #endif
            logMessage(DP_PIN_27_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 27");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_28
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 28");
            #endif
            dstate = digitalRead(28);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 28");
            #endif
            #ifdef DP_INVERT_PIN_28
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 28");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 28");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 28");
            #endif
            logMessage(DP_PIN_28_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 28");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_29
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 29");
            #endif
            dstate = digitalRead(29);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 29");
            #endif
            #ifdef DP_INVERT_PIN_29
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 29");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 29");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 29");
            #endif
            logMessage(DP_PIN_29_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 29");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_30
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 30");
            #endif
            dstate = digitalRead(30);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 30");
            #endif
            #ifdef DP_INVERT_PIN_30
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 30");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 30");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 30");
            #endif
            logMessage(DP_PIN_30_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 30");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_31
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 31");
            #endif
            dstate = digitalRead(31);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 31");
            #endif
            #ifdef DP_INVERT_PIN_31
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 31");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 31");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 31");
            #endif
            logMessage(DP_PIN_31_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 31");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_32
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 32");
            #endif
            dstate = digitalRead(32);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 32");
            #endif
            #ifdef DP_INVERT_PIN_32
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 32");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 32");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 32");
            #endif
            logMessage(DP_PIN_32_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 32");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_33
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 33");
            #endif
            dstate = digitalRead(33);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 33");
            #endif
            #ifdef DP_INVERT_PIN_33
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 33");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 33");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 33");
            #endif
            logMessage(DP_PIN_33_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 33");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_34
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 34");
            #endif
            dstate = digitalRead(34);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 34");
            #endif
            #ifdef DP_INVERT_PIN_34
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 34");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 34");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 34");
            #endif
            logMessage(DP_PIN_34_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 34");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_35
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 35");
            #endif
            dstate = digitalRead(35);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 35");
            #endif
            #ifdef DP_INVERT_PIN_35
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 35");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 35");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 35");
            #endif
            logMessage(DP_PIN_35_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 35");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_36
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 36");
            #endif
            dstate = digitalRead(36);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 36");
            #endif
            #ifdef DP_INVERT_PIN_36
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 36");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 36");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 36");
            #endif
            logMessage(DP_PIN_36_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 36");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_37
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 37");
            #endif
            dstate = digitalRead(37);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 37");
            #endif
            #ifdef DP_INVERT_PIN_37
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 37");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 37");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 37");
            #endif
            logMessage(DP_PIN_37_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 37");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_38
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 38");
            #endif
            dstate = digitalRead(38);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 38");
            #endif
            #ifdef DP_INVERT_PIN_38
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 38");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 38");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 38");
            #endif
            logMessage(DP_PIN_38_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 38");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_39
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 39");
            #endif
            dstate = digitalRead(39);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 39");
            #endif
            #ifdef DP_INVERT_PIN_39
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 39");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 39");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 39");
            #endif
            logMessage(DP_PIN_39_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 39");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_40
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 40");
            #endif
            dstate = digitalRead(40);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 40");
            #endif
            #ifdef DP_INVERT_PIN_40
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 40");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 40");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 40");
            #endif
            logMessage(DP_PIN_40_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 40");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_41
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 41");
            #endif
            dstate = digitalRead(41);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 41");
            #endif
            #ifdef DP_INVERT_PIN_41
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 41");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 41");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 41");
            #endif
            logMessage(DP_PIN_41_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 41");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_42
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 42");
            #endif
            dstate = digitalRead(42);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 42");
            #endif
            #ifdef DP_INVERT_PIN_42
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 42");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 42");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 42");
            #endif
            logMessage(DP_PIN_42_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 42");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_43
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 43");
            #endif
            dstate = digitalRead(43);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 43");
            #endif
            #ifdef DP_INVERT_PIN_43
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 43");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 43");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 43");
            #endif
            logMessage(DP_PIN_43_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 43");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_44
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 44");
            #endif
            dstate = digitalRead(44);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 44");
            #endif
            #ifdef DP_INVERT_PIN_44
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 44");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 44");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 44");
            #endif
            logMessage(DP_PIN_44_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 44");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_45
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 45");
            #endif
            dstate = digitalRead(45);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 45");
            #endif
            #ifdef DP_INVERT_PIN_45
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 45");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 45");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 45");
            #endif
            logMessage(DP_PIN_45_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 45");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_46
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 46");
            #endif
            dstate = digitalRead(46);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 46");
            #endif
            #ifdef DP_INVERT_PIN_46
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 46");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 46");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 46");
            #endif
            logMessage(DP_PIN_46_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 46");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_47
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 47");
            #endif
            dstate = digitalRead(47);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 47");
            #endif
            #ifdef DP_INVERT_PIN_47
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 47");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 47");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 47");
            #endif
            logMessage(DP_PIN_47_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 47");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_48
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 48");
            #endif
            dstate = digitalRead(48);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 48");
            #endif
            #ifdef DP_INVERT_PIN_48
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 48");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 48");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 48");
            #endif
            logMessage(DP_PIN_48_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 48");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_49
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 49");
            #endif
            dstate = digitalRead(49);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 49");
            #endif
            #ifdef DP_INVERT_PIN_49
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 49");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 49");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 49");
            #endif
            logMessage(DP_PIN_49_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 49");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_50
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 50");
            #endif
            dstate = digitalRead(50);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 50");
            #endif
            #ifdef DP_INVERT_PIN_50
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 50");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 50");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 50");
            #endif
            logMessage(DP_PIN_50_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 50");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_51
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 51");
            #endif
            dstate = digitalRead(51);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 51");
            #endif
            #ifdef DP_INVERT_PIN_51
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 51");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 51");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 51");
            #endif
            logMessage(DP_PIN_51_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 51");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_52
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 52");
            #endif
            dstate = digitalRead(52);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 52");
            #endif
            #ifdef DP_INVERT_PIN_52
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 52");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 52");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 52");
            #endif
            logMessage(DP_PIN_52_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 52");
            #endif
        #endif
        
        #ifdef DP_SAMPLE_PIN_53
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Reading value for pin 53");
            #endif
            dstate = digitalRead(53);
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_3("Sucessfully read value for pin 53");
            #endif
            #ifdef DP_INVERT_PIN_53
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_5("Inverting value for pin 53");
                #endif
                dstate = !dstate;
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_3("Successfully inverted value for pin 53");
                #endif
            #endif
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_5("Logging value for pin 53");
            #endif
            logMessage(DP_PIN_53_NAME, dstate ? "On" : "Off", "N/A");
            #ifdef DEBUG_DIGITAL_POLLER
                DEBUG_2("Successfully logged value for pin 53");
            #endif
        #endif
        
        DEBUG_1("Finished");
    }
#endif

void readSensors(){
#ifdef ENABLE_DIGITAL_POLLER
    digital_pin_sample();
#endif
}

void logMessage(const char * name, const char * value, const char * unit){
}

void setupPollers(){
#ifdef ENABLE_DIGITAL_POLLER
    digital_pin_init();
#endif
}

void setupOutputs(){
}
