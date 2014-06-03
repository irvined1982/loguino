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

//#define ENABLE_DEBUG
#define DEBUG_LEVEL 2
#define DEBUG_SERIAL_DEV Serial
#define DEBUG_SERIAL_BAUD 115200



/*

###############################################################################
###############################################################################
#
# Module Configuration
#
###############################################################################
###############################################################################

*/
/*
###############################################################################
###############################################################################

BMP085 Barometric Pressure Sensor

###############################################################################

The ELM327 is a programmed microcontroller produced by ELM Electronics for
translating the on-board diagnostics (OBD) interface found in most modern cars.
The ELM327 command protocol is one of the most popular PC-to-OBD interface
standards and is also implemented by other vendors.

Loguino can communicate with the ELM327 via a serial interface, and logs the
standard OBDII metrics.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/bmp085-barometric-pressure-sensor/

*/



// If enabled, loguino will query the BMP085 sensor for temperature
// and pressure data
//#define ENABLE_BMP085_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_BMP085_POLLER

/*
###############################################################################
###############################################################################

DHT Sensors

###############################################################################

The DHT11 is a low cost temperature and humidity sensor that uses a single
digital pin for communication.  It uses a capacitive humidity sensor and a
thermistor to measure the surrounding air, and spits out a digital signal on
the data pin (no analog input pins needed).
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/dht11-humidity-and-temperature-sensor/

*/



// When defined, the poller is enabled.
//#define ENABLE_DHT_POLLER

// When enabled, debug output for the DHT poller will be displayed.
//#define DEBUG_DHT_POLLER

// The digital pin that the DHT sensor is connected to. Default: 3

#define DHT_PIN 3

// The type of sensor being used, default: DHT11 can be: DHT11, DHT22, DHT21
#define DHT_TYPE DHT11
//#define DHT_TYPE DHT22
//#define DHT_TYPE DHT21
/*
###############################################################################
###############################################################################

DS18B20 1-Wire Temperature Sensor

###############################################################################

The Maxim DS18B20 digital thermometer provides 9-bit to 12-bit Celsius
temperature measurements over a 1-Wire interface providing accurate and
inexpensive temperature readings.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/ds18b20-one-wire-temperature-sensors/

*/



// If enabled, loguino will poll for DS18B20 sensors and log the temperature of each one connected.
//#define ENABLE_DS18B20_POLLER
// Enable debug information for this sensor
//#define DEBUG_DS18B20_POLLER
// The data pin used for the DS18B20 sensors.
#define DS18B20_PIN 1


/*
###############################################################################
###############################################################################

ELM327 OBD2 Support

###############################################################################

The ELM327 is a programmed microcontroller produced by ELM Electronics for
translating the on-board diagnostics (OBD) interface found in most modern cars.
The ELM327 command protocol is one of the most popular PC-to-OBD interface
standards and is also implemented by other vendors.

Loguino can communicate with the ELM327 via a serial interface, and logs the
standard OBDII metrics.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/query-obdii-using-the-elm327-module/

*/



// If enabled, loguino will attempt to query the ELM327 device
//#define ENABLE_ELM327_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_ELM327_POLLER
// The number of times to skip before trying again.
#define ELM_SKIP 100
// The digital pni to set high when the ELM is responding, if undefined
// no pin will be used.
#define ELM_LED_PIN 6
// The Serial port that the ELM327 is connected to
#define ELM_PORT Serial
/*
###############################################################################
###############################################################################

HS1101 Relative Humidity Sensor

###############################################################################

The HS1101 humidity sensor is a cost-effective solution for measuring relative
humidity within ±5% accuracy. The sensor’s design is based on a unique
capacitive cell; therefore, by using simple RC circuit wiring it is easy to
interface.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/hs1101-relative-humidity-sensor/

*/



// If enabled, loguino will log humidity data from the HS1101
//#define ENABLE_HS1101_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_HS1101_POLLER
// Digital pin that the HS1101 is connected to
#define HS1101_PIN 4
/*
###############################################################################
###############################################################################

ITG3200 Triple Axis Gyroscope

###############################################################################

InvenSense’s ITG-3200 is a groundbreaking triple-axis, digital output
gyroscope. The ITG-3200 features three 16-bit analog-to-digital converters
(ADCs) for digitizing the gyro  outputs, a user-selectable internal low-pass
filter bandwidth, and a Fast-Mode I2C (400kHz) interface.

Communication with the ITG-3200 is achieved over a two-wire (I2C) interface.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/itg3200-triple-axis-gyroscope/

*/



// If enabled, loguino will query the ITG3200 gyro over the 2wire interface
//#define ENABLE_ITG3200_POLLER
// If enabled, Loguino will write debug information for this module
//#define DEBUG_ITG3200_POLLER


/*
###############################################################################
###############################################################################

LIS331 Triple Axis Accelerometer

###############################################################################

The LIS331 Triple Axis Linear Accelerometer is supported over the I2C
interface. The device features ultra low-power operational modes that
allow advanced power saving and smart sleep to wake-up functions.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/lis331-triple-axis-accelerometer/

*/



// If enabled, Loguino will attempt to query the LIS331 sensor using
// the 2-wire interface.
//#define ENABLE_LIS331_POLLER
// If enabled, Loguino will write debug information for this module
//#define DEBUG_LIS331_POLLER
// The I2C address of the LIS331 device.
#define LIS331_I2C_ADDR 25  //SA0 Pin held high
//#define LIS331_I2C_ADDR 24  // SA0 Pin held low
/*
###############################################################################
###############################################################################

Megasquirt Engine Management System

###############################################################################

A MegaSquirt is a complete standalone fuel injection controller with software
and hardware, developed by Bruce Bowling and Al Grippo. The software for the
platform is open for modification and provides for fuel, ignition and idle air
control in most cases, keeping the cost low. Whilst lacking in features
compared to some controllers, for the cost it provides an excellent solution.
Loguino can poll MegaSquirt ECU’s over the Serial line at about 5-10Hz,
providing in depth metrics on the Engine Management System.

This poller reads the data table from the Megasquirt over the Serial interface
and extracts the data into metrics.  The amount of data retrieved from the
Megasquirt is not insignificant, it is possible to configure which metrics
are logged in order to save space or improve logging performance.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/megasquirt-engine-management-systems/

*/



// If enabled, loguino will poll the Megasquirt Engine Management System
//#define ENABLE_MEGASQUIRT_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_MEGASQUIRT_POLLER
// The number of cycles to wait before retrying communication with the
// megasquirt ECU.
#define MS_WAIT_TIME 10
// The pin to illuminate when the ECU is online and functioning.
#define MS_STATUS_PIN 5

/*
###############################################################################
###############################################################################

Analog Input Pins

###############################################################################

Loguino can log the value of any of the connected analog pins.  Each enabled
pin is polled each cycle and the value of the pin logged.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/analog-input-pins/

*/


// If enabled, Loguino will poll analog pins for their value each iteration.
//#define ENABLE_ANALOG_POLLER

// If defined, debug messages shall be enabled for this poller
//#define DEBUG_ANALOG_POLLER

// If enabled, will use the external reference voltage.
// See: http://arduino.cc/en/Reference/AnalogReference
// #define ANALOG_USE_EXTERN_REF

// ----- PIN: 0 -----

// If enabled, Analog Pin 0 will be polled.
//#define AP_SAMPLE_PIN_0

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_0_HIGH

// The name to use when logging this pin
#define AP_PIN_0_NAME "ap.pin0"


// ----- PIN: 1 -----

// If enabled, Analog Pin 1 will be polled.
//#define AP_SAMPLE_PIN_1

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_1_HIGH

// The name to use when logging this pin
#define AP_PIN_1_NAME "ap.pin1"


// ----- PIN: 2 -----

// If enabled, Analog Pin 2 will be polled.
//#define AP_SAMPLE_PIN_2

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_2_HIGH

// The name to use when logging this pin
#define AP_PIN_2_NAME "ap.pin2"


// ----- PIN: 3 -----

// If enabled, Analog Pin 3 will be polled.
//#define AP_SAMPLE_PIN_3

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_3_HIGH

// The name to use when logging this pin
#define AP_PIN_3_NAME "ap.pin3"


// ----- PIN: 4 -----

// If enabled, Analog Pin 4 will be polled.
//#define AP_SAMPLE_PIN_4

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_4_HIGH

// The name to use when logging this pin
#define AP_PIN_4_NAME "ap.pin4"


// ----- PIN: 5 -----

// If enabled, Analog Pin 5 will be polled.
//#define AP_SAMPLE_PIN_5

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_5_HIGH

// The name to use when logging this pin
#define AP_PIN_5_NAME "ap.pin5"


// ----- PIN: 6 -----

// If enabled, Analog Pin 6 will be polled.
//#define AP_SAMPLE_PIN_6

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_6_HIGH

// The name to use when logging this pin
#define AP_PIN_6_NAME "ap.pin6"


// ----- PIN: 7 -----

// If enabled, Analog Pin 7 will be polled.
//#define AP_SAMPLE_PIN_7

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_7_HIGH

// The name to use when logging this pin
#define AP_PIN_7_NAME "ap.pin7"


// ----- PIN: 8 -----

// If enabled, Analog Pin 8 will be polled.
//#define AP_SAMPLE_PIN_8

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_8_HIGH

// The name to use when logging this pin
#define AP_PIN_8_NAME "ap.pin8"


// ----- PIN: 9 -----

// If enabled, Analog Pin 9 will be polled.
//#define AP_SAMPLE_PIN_9

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_9_HIGH

// The name to use when logging this pin
#define AP_PIN_9_NAME "ap.pin9"


// ----- PIN: 10 -----

// If enabled, Analog Pin 10 will be polled.
//#define AP_SAMPLE_PIN_10

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_10_HIGH

// The name to use when logging this pin
#define AP_PIN_10_NAME "ap.pin10"


// ----- PIN: 11 -----

// If enabled, Analog Pin 11 will be polled.
//#define AP_SAMPLE_PIN_11

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_11_HIGH

// The name to use when logging this pin
#define AP_PIN_11_NAME "ap.pin11"


// ----- PIN: 12 -----

// If enabled, Analog Pin 12 will be polled.
//#define AP_SAMPLE_PIN_12

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_12_HIGH

// The name to use when logging this pin
#define AP_PIN_12_NAME "ap.pin12"


// ----- PIN: 13 -----

// If enabled, Analog Pin 13 will be polled.
//#define AP_SAMPLE_PIN_13

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_13_HIGH

// The name to use when logging this pin
#define AP_PIN_13_NAME "ap.pin13"


// ----- PIN: 14 -----

// If enabled, Analog Pin 14 will be polled.
//#define AP_SAMPLE_PIN_14

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_14_HIGH

// The name to use when logging this pin
#define AP_PIN_14_NAME "ap.pin14"


// ----- PIN: 15 -----

// If enabled, Analog Pin 15 will be polled.
//#define AP_SAMPLE_PIN_15

// If enabled, this pullup resistor will be enabled on this pin.
#define AP_HOLD_PIN_15_HIGH

// The name to use when logging this pin
#define AP_PIN_15_NAME "ap.pin15"

/*
###############################################################################
###############################################################################

Digital Input

###############################################################################

Loguino can log the state of any of the digital input pins.  Each log cycle
Loguino writes the output as a boolean value, either HIGH or LOW.  Pins can
be pulled high or low.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/digital-input-pins/

*/



// If enabled, Loguino will log the state of configured digital pins
//#define ENABLE_DIGITAL_POLLER
// If enabled, Loguino will write debug information about this module
#define DEBUG_DIGITAL_POLLER

// ----- PIN: 0 -----

// If enabled, Digital Pin 0 will be polled.
//#define DP_SAMPLE_PIN_0
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_0_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_0
// The name to use when logging this pin
#define DP_PIN_0_NAME "dp.pin0"


// ----- PIN: 1 -----

// If enabled, Digital Pin 1 will be polled.
//#define DP_SAMPLE_PIN_1
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_1_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_1
// The name to use when logging this pin
#define DP_PIN_1_NAME "dp.pin1"


// ----- PIN: 2 -----

// If enabled, Digital Pin 2 will be polled.
//#define DP_SAMPLE_PIN_2
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_2_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_2
// The name to use when logging this pin
#define DP_PIN_2_NAME "dp.pin2"


// ----- PIN: 3 -----

// If enabled, Digital Pin 3 will be polled.
//#define DP_SAMPLE_PIN_3
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_3_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_3
// The name to use when logging this pin
#define DP_PIN_3_NAME "dp.pin3"


// ----- PIN: 4 -----

// If enabled, Digital Pin 4 will be polled.
//#define DP_SAMPLE_PIN_4
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_4_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_4
// The name to use when logging this pin
#define DP_PIN_4_NAME "dp.pin4"


// ----- PIN: 5 -----

// If enabled, Digital Pin 5 will be polled.
//#define DP_SAMPLE_PIN_5
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_5_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_5
// The name to use when logging this pin
#define DP_PIN_5_NAME "dp.pin5"


// ----- PIN: 6 -----

// If enabled, Digital Pin 6 will be polled.
//#define DP_SAMPLE_PIN_6
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_6_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_6
// The name to use when logging this pin
#define DP_PIN_6_NAME "dp.pin6"


// ----- PIN: 7 -----

// If enabled, Digital Pin 7 will be polled.
//#define DP_SAMPLE_PIN_7
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_7_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_7
// The name to use when logging this pin
#define DP_PIN_7_NAME "dp.pin7"


// ----- PIN: 8 -----

// If enabled, Digital Pin 8 will be polled.
//#define DP_SAMPLE_PIN_8
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_8_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_8
// The name to use when logging this pin
#define DP_PIN_8_NAME "dp.pin8"


// ----- PIN: 9 -----

// If enabled, Digital Pin 9 will be polled.
//#define DP_SAMPLE_PIN_9
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_9_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_9
// The name to use when logging this pin
#define DP_PIN_9_NAME "dp.pin9"


// ----- PIN: 10 -----

// If enabled, Digital Pin 10 will be polled.
//#define DP_SAMPLE_PIN_10
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_10_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_10
// The name to use when logging this pin
#define DP_PIN_10_NAME "dp.pin10"


// ----- PIN: 11 -----

// If enabled, Digital Pin 11 will be polled.
//#define DP_SAMPLE_PIN_11
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_11_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_11
// The name to use when logging this pin
#define DP_PIN_11_NAME "dp.pin11"


// ----- PIN: 12 -----

// If enabled, Digital Pin 12 will be polled.
//#define DP_SAMPLE_PIN_12
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_12_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_12
// The name to use when logging this pin
#define DP_PIN_12_NAME "dp.pin12"


// ----- PIN: 13 -----

// If enabled, Digital Pin 13 will be polled.
//#define DP_SAMPLE_PIN_13
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_13_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_13
// The name to use when logging this pin
#define DP_PIN_13_NAME "dp.pin13"


// ----- PIN: 14 -----

// If enabled, Digital Pin 14 will be polled.
//#define DP_SAMPLE_PIN_14
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_14_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_14
// The name to use when logging this pin
#define DP_PIN_14_NAME "dp.pin14"


// ----- PIN: 15 -----

// If enabled, Digital Pin 15 will be polled.
//#define DP_SAMPLE_PIN_15
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_15_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_15
// The name to use when logging this pin
#define DP_PIN_15_NAME "dp.pin15"


// ----- PIN: 16 -----

// If enabled, Digital Pin 16 will be polled.
//#define DP_SAMPLE_PIN_16
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_16_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_16
// The name to use when logging this pin
#define DP_PIN_16_NAME "dp.pin16"


// ----- PIN: 17 -----

// If enabled, Digital Pin 17 will be polled.
//#define DP_SAMPLE_PIN_17
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_17_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_17
// The name to use when logging this pin
#define DP_PIN_17_NAME "dp.pin17"


// ----- PIN: 18 -----

// If enabled, Digital Pin 18 will be polled.
//#define DP_SAMPLE_PIN_18
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_18_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_18
// The name to use when logging this pin
#define DP_PIN_18_NAME "dp.pin18"


// ----- PIN: 19 -----

// If enabled, Digital Pin 19 will be polled.
//#define DP_SAMPLE_PIN_19
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_19_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_19
// The name to use when logging this pin
#define DP_PIN_19_NAME "dp.pin19"


// ----- PIN: 20 -----

// If enabled, Digital Pin 20 will be polled.
//#define DP_SAMPLE_PIN_20
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_20_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_20
// The name to use when logging this pin
#define DP_PIN_20_NAME "dp.pin20"


// ----- PIN: 21 -----

// If enabled, Digital Pin 21 will be polled.
//#define DP_SAMPLE_PIN_21
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_21_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_21
// The name to use when logging this pin
#define DP_PIN_21_NAME "dp.pin21"


// ----- PIN: 22 -----

// If enabled, Digital Pin 22 will be polled.
//#define DP_SAMPLE_PIN_22
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_22_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_22
// The name to use when logging this pin
#define DP_PIN_22_NAME "dp.pin22"


// ----- PIN: 23 -----

// If enabled, Digital Pin 23 will be polled.
//#define DP_SAMPLE_PIN_23
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_23_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_23
// The name to use when logging this pin
#define DP_PIN_23_NAME "dp.pin23"


// ----- PIN: 24 -----

// If enabled, Digital Pin 24 will be polled.
//#define DP_SAMPLE_PIN_24
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_24_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_24
// The name to use when logging this pin
#define DP_PIN_24_NAME "dp.pin24"


// ----- PIN: 25 -----

// If enabled, Digital Pin 25 will be polled.
//#define DP_SAMPLE_PIN_25
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_25_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_25
// The name to use when logging this pin
#define DP_PIN_25_NAME "dp.pin25"


// ----- PIN: 26 -----

// If enabled, Digital Pin 26 will be polled.
//#define DP_SAMPLE_PIN_26
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_26_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_26
// The name to use when logging this pin
#define DP_PIN_26_NAME "dp.pin26"


// ----- PIN: 27 -----

// If enabled, Digital Pin 27 will be polled.
//#define DP_SAMPLE_PIN_27
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_27_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_27
// The name to use when logging this pin
#define DP_PIN_27_NAME "dp.pin27"


// ----- PIN: 28 -----

// If enabled, Digital Pin 28 will be polled.
//#define DP_SAMPLE_PIN_28
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_28_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_28
// The name to use when logging this pin
#define DP_PIN_28_NAME "dp.pin28"


// ----- PIN: 29 -----

// If enabled, Digital Pin 29 will be polled.
//#define DP_SAMPLE_PIN_29
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_29_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_29
// The name to use when logging this pin
#define DP_PIN_29_NAME "dp.pin29"


// ----- PIN: 30 -----

// If enabled, Digital Pin 30 will be polled.
//#define DP_SAMPLE_PIN_30
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_30_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_30
// The name to use when logging this pin
#define DP_PIN_30_NAME "dp.pin30"


// ----- PIN: 31 -----

// If enabled, Digital Pin 31 will be polled.
//#define DP_SAMPLE_PIN_31
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_31_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_31
// The name to use when logging this pin
#define DP_PIN_31_NAME "dp.pin31"


// ----- PIN: 32 -----

// If enabled, Digital Pin 32 will be polled.
//#define DP_SAMPLE_PIN_32
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_32_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_32
// The name to use when logging this pin
#define DP_PIN_32_NAME "dp.pin32"


// ----- PIN: 33 -----

// If enabled, Digital Pin 33 will be polled.
//#define DP_SAMPLE_PIN_33
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_33_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_33
// The name to use when logging this pin
#define DP_PIN_33_NAME "dp.pin33"


// ----- PIN: 34 -----

// If enabled, Digital Pin 34 will be polled.
//#define DP_SAMPLE_PIN_34
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_34_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_34
// The name to use when logging this pin
#define DP_PIN_34_NAME "dp.pin34"


// ----- PIN: 35 -----

// If enabled, Digital Pin 35 will be polled.
//#define DP_SAMPLE_PIN_35
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_35_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_35
// The name to use when logging this pin
#define DP_PIN_35_NAME "dp.pin35"


// ----- PIN: 36 -----

// If enabled, Digital Pin 36 will be polled.
//#define DP_SAMPLE_PIN_36
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_36_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_36
// The name to use when logging this pin
#define DP_PIN_36_NAME "dp.pin36"


// ----- PIN: 37 -----

// If enabled, Digital Pin 37 will be polled.
//#define DP_SAMPLE_PIN_37
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_37_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_37
// The name to use when logging this pin
#define DP_PIN_37_NAME "dp.pin37"


// ----- PIN: 38 -----

// If enabled, Digital Pin 38 will be polled.
//#define DP_SAMPLE_PIN_38
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_38_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_38
// The name to use when logging this pin
#define DP_PIN_38_NAME "dp.pin38"


// ----- PIN: 39 -----

// If enabled, Digital Pin 39 will be polled.
//#define DP_SAMPLE_PIN_39
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_39_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_39
// The name to use when logging this pin
#define DP_PIN_39_NAME "dp.pin39"


// ----- PIN: 40 -----

// If enabled, Digital Pin 40 will be polled.
//#define DP_SAMPLE_PIN_40
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_40_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_40
// The name to use when logging this pin
#define DP_PIN_40_NAME "dp.pin40"


// ----- PIN: 41 -----

// If enabled, Digital Pin 41 will be polled.
//#define DP_SAMPLE_PIN_41
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_41_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_41
// The name to use when logging this pin
#define DP_PIN_41_NAME "dp.pin41"


// ----- PIN: 42 -----

// If enabled, Digital Pin 42 will be polled.
//#define DP_SAMPLE_PIN_42
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_42_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_42
// The name to use when logging this pin
#define DP_PIN_42_NAME "dp.pin42"


// ----- PIN: 43 -----

// If enabled, Digital Pin 43 will be polled.
//#define DP_SAMPLE_PIN_43
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_43_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_43
// The name to use when logging this pin
#define DP_PIN_43_NAME "dp.pin43"


// ----- PIN: 44 -----

// If enabled, Digital Pin 44 will be polled.
//#define DP_SAMPLE_PIN_44
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_44_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_44
// The name to use when logging this pin
#define DP_PIN_44_NAME "dp.pin44"


// ----- PIN: 45 -----

// If enabled, Digital Pin 45 will be polled.
//#define DP_SAMPLE_PIN_45
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_45_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_45
// The name to use when logging this pin
#define DP_PIN_45_NAME "dp.pin45"


// ----- PIN: 46 -----

// If enabled, Digital Pin 46 will be polled.
//#define DP_SAMPLE_PIN_46
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_46_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_46
// The name to use when logging this pin
#define DP_PIN_46_NAME "dp.pin46"


// ----- PIN: 47 -----

// If enabled, Digital Pin 47 will be polled.
//#define DP_SAMPLE_PIN_47
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_47_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_47
// The name to use when logging this pin
#define DP_PIN_47_NAME "dp.pin47"


// ----- PIN: 48 -----

// If enabled, Digital Pin 48 will be polled.
//#define DP_SAMPLE_PIN_48
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_48_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_48
// The name to use when logging this pin
#define DP_PIN_48_NAME "dp.pin48"


// ----- PIN: 49 -----

// If enabled, Digital Pin 49 will be polled.
//#define DP_SAMPLE_PIN_49
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_49_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_49
// The name to use when logging this pin
#define DP_PIN_49_NAME "dp.pin49"


// ----- PIN: 50 -----

// If enabled, Digital Pin 50 will be polled.
//#define DP_SAMPLE_PIN_50
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_50_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_50
// The name to use when logging this pin
#define DP_PIN_50_NAME "dp.pin50"


// ----- PIN: 51 -----

// If enabled, Digital Pin 51 will be polled.
//#define DP_SAMPLE_PIN_51
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_51_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_51
// The name to use when logging this pin
#define DP_PIN_51_NAME "dp.pin51"


// ----- PIN: 52 -----

// If enabled, Digital Pin 52 will be polled.
//#define DP_SAMPLE_PIN_52
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_52_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_52
// The name to use when logging this pin
#define DP_PIN_52_NAME "dp.pin52"


// ----- PIN: 53 -----

// If enabled, Digital Pin 53 will be polled.
//#define DP_SAMPLE_PIN_53
// If enabled, this pullup resistor will be enabled on this pin.
#define DP_HOLD_PIN_53_HIGH
// If enabled, the state of this pin will be inverted, ie: High becomes Low, Low becomes High.
#define DP_INVERT_PIN_53
// The name to use when logging this pin
#define DP_PIN_53_NAME "dp.pin53"

/*
###############################################################################
###############################################################################

GPS Devices

###############################################################################

Usually, connection to a GPS device is straightforward, you can either use a
shield, such as the one from Adafruit, which makes life very easy, or connect
the GPS right up to the Arduino board itself.

Make sure that your GPS outputs data at TTL levels, else you will need to make
a TTL to Serial Adaptor using something like the MAX232 chip.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/nmea-compatible-gps-devices/

*/



// If enabled, loguino will listen for NMEA position data
//#define ENABLE_GPS_POLLER
// If enabled, loguino will write debug information for this poller
//#define DEBUG_GPS_POLLER
// Pin to illuminate if the GPS has a valid fix.  Use this for visual
// confirmation that the GPS is working correctly.
#define GPS_LED_PIN 10
// Serial device that the GPS is connected to.
#define GPS_SERIAL_DEV Serial
// BAUD rate of the GPS device.
#define GPS_SERIAL_DEV_SPEED 4800

/*
###############################################################################
###############################################################################

TMP102 I2C Temperature Sensor

###############################################################################

The TMP102 is a digital temperature sensor from Texas Instruments with an I2C
interface.

The temperature sensor in the TMP102 is the chip itself. Thermal paths run
through the package leads, as well as the plastic package. The lower thermal
resistance of metal causes the leads to provide the primary thermal path.

To maintain accuracy in applications requiring air or surface temperature
measurement, care should be taken to isolate the package and leads from
ambient air temperature. A thermally-conductive adhesive is helpful in
achieving accurate surface temperature measurement.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/tmp102-i2c-temperature-sensor/

*/



// If enabled, Loguino will query the TMP102 temperature sensor using I2C
//#define ENABLE_TMP102_POLLER
// IF enabled, Loguino will write debug information for this module
//#define DEBUG_TMP102_POLLER
// The I2C address of the TMP102 sensor
#define TMP102_I2C_ADDRESS 72
/*
###############################################################################
###############################################################################

Network Output

###############################################################################

Loguino can function as a network server listening on a TCP port using the
Loguino Ethernet, or the Ethernet shield.  The network logger supports the
following modes of operation:

Network Server

When server mode is enabled, the logger listens for incoming connections on a
configurable (Default is 23/Telnet) TCP port. Up to four clients can connect,
each client receives the log messages each time they are sent from a poller.
In this mode all data is sent in clear text and no authentication is possible.

MQTT Client

When the MQTT client is enabled, Loguino will publish to a preconfigured MQTT
broker. The topic of each message is set to the Loguino logger name, and the
value is logged as the data.

###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/logging-over-the-network/

*/


// If enabled, Loguino will configure the ethernet shield for logging
//#define ENABLE_ETHERNET_LOGGER

// If defined, debug messages shall be enabled for this module
//#define DEBUG_ETHERNET_LOGGER

// the media access control (ethernet hardware) address for the shield:
// Must be unique, and on newer shields is printed on the board.
#define ETHERNET_MAC_ADDRESS 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED

// IP address to use for the shield, if it is undefined, the shield will
// use DHCP to obtain an address.
//#define ETHERNET_IP_ADDRESS 0, 1, 2, 3

// DNS Server to use, ignored if DHCP is being used.
//#define ETHERNET_DNS_ADDRESS 8, 8, 8, 8,

// Gateway address to use, ignored if DHCP is being used.
//#define ETHERNET_GW_ADDRESS 1, 1, 1, 1

// Subnet Mask to use, ignored if DHCP is being used.
//#define ETHERNET_NETMASK 255, 255, 255, 0

// If enabled, will listen on specified port for incoming connections.else
#define ETHERNET_ENABLE_SERVER

// The port to listen on, 23 is default telnet port.
#define ETHERNET_SERVER_PORT 23

// If enabled, will send MQTT messages to the configured server
#define ETHERNET_ENABLE_MQTT

// The IP address of the server to connect to when sending MQTT data
#define ETHERNET_MQTT_SERVER 1, 2, 3, 4

// The port to connect to on the MQTT server
#define ETHERNET_MQTT_PORT 1883

// The user name to give to the MQTT server.  If undefined will use anonymous
#define ETHERNET_MQTT_USER "J.Random.User"

// The password to give to the MQTT server
#define ETHERNET_MQTT_PASS "T0p$3cr37"

// The name of the MQTT client
#define ETHERNET_MQTT_CLIENT "LoguinoMQTT"
/*
###############################################################################
###############################################################################

Write to SD card

###############################################################################

Loguino can save each log message to an SD Card using the SPI bus providing
an easy way to store logged data for later retrieval.  Each time Loguino
starts, it will attempt to create a new file on the SD card.  If it is
successful, it can be configured to illuminate an LED.
###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/logging-to-an-sd-card/

*/


// If enabled, Loguino will write log data to the SD card.
#define ENABLE_SD_LOGGER
// If defined, debug messages shall be enabled for this module
//#define DEBUG_SD_LOGGER
// Pin used for Chip Select
#define SD_CS_PIN 10
// Pin LED is connected to, will illuminate when SD card is online
#define SD_ACTIVE_PIN 11



/*
###############################################################################
###############################################################################

Serial Output

###############################################################################

Loguino can send log output to any available serial interface.  When enabled,
each time a message is logged, it is sent out the chosen serial interface.



###############################################################################

For build and configuration information see the following url.

https://www.clusterfsck.io/loguino/loguinosupported-sensors-and-loggers/log-to-a-serial-interface/

*/


// If enabled, Loguino will write log data to the configured
// serial interface.
#define ENABLE_SERIAL_LOGGER
// If defined, debug messages shall be enabled for the
// serial logger.
//#define DEBUG_SERIAL_LOGGER
#ifdef ENABLE_DEBUG
    // If enabled, the serial poller will not initialize the serial interface.
    #define NO_SERIAL_INIT
#endif
// The speed to output data on the chosen serial interface.
// Note: If NO_SERIAL_INIT is defined, this will be ignored.
#define SERIAL_LOGGER_BAUD 115200
// The physical interface to use, on the Arduino Mega, this can be Serial, Serial1, Serial2, or Serial3.
// Note: If NO_SERIAL_INIT is defined, this will be ignored.
#define SERIAL_LOGGER_DEVICE Serial




/*

###############################################################################
###############################################################################
#
# End Module Configuration
#
###############################################################################
###############################################################################

*/
#if (ARDUINO >= 100)
	#include <Arduino.h>
#else
	#include <WProgram.h>
#endif
#include "Adafruit_BMP085.h"


#include <DHT.h>
#include <stdlib.h>

#include <OneWire.h>
#include <DallasTemperature.h>


#include "ELM327.h"



#include <stdlib.h>
#include <Wire.h>
#include <ITG3200.h>


#include <Wire.h>
#include <LIS331.h>

#include <MegaSquirt.h>

#include <NMEA.h>


#include <Wire.h>
#include <stdlib.h>
#include "SPI.h"
#include "Ethernet.h"
#include "PubSubClient.h"
#include "SPI.h"
#include "SD.h"

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
	String s;
	char txt[20];
	sprintf(txt, "%9d,", millis() );
	s="#";
	s+= txt;
	s+= ", ";
	s+= fname;
	s+= ", ";
	s+= func;
	s+= ", ";
	s+= lnum;
	s+= ", ";
	s+= message;
	DEBUG_SERIAL_DEV.println(s);
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

void logMessage(const char* name, bool value, const char* unit){
    DEBUG_1("Begin");
    if (value){
        logMessage(name, "True", unit);
    }else{
        logMessage(name, "False", unit);
    }
    DEBUG_4("Logged");
    DEBUG_1("Finished");
}


void logMessage(const char* name, float value, const char* unit){
    DEBUG_1("Begin");
    char buf[33];
    dtostrf(value, 1, 2, buf);
    logMessage(name, buf, unit);
    DEBUG_4("Logged");
    DEBUG_1("Finished");
}

void logMessage(const char* name, long value, const char* unit){
    DEBUG_1("Begin");
    char buf[100];
    sprintf (buf, "%ld", value);
    logMessage(name, buf, unit);
    DEBUG_4("Logged");
    DEBUG_1("Finished");
}

void logMessage(const char* name, int value, const char* unit){
    DEBUG_1("Begin");
    char buf[33];
    sprintf (buf, "%i", value);
    logMessage(name, buf, unit);
    DEBUG_4("Logged");
    DEBUG_1("Finished");
}

void logMessage(const char* name, unsigned int value, const char* unit){
    DEBUG_1("Begin");
    char buf[33];
    sprintf (buf, "%u", value);
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

#ifdef ENABLE_BMP085_POLLER

    Adafruit_BMP085 bmp;
    void BMP085_init(){
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Starting");
        #endif
        bmp.begin();
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void BMP085_sample(){
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Starting");
        #endif
        logMessage("BMP085.Temp", bmp.readTemperature(), "Degrees C");
        logMessage("BMP085.Pressure", bmp.readPressure(), "Pa");
        #ifdef DEBUG_BMP085_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif


#ifdef ENABLE_DHT_POLLER
    DHT dht(DHT_PIN, DHT_TYPE);
    void DHT_init(){
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Starting");
        #endif
        dht.begin();
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Finished");
        #endif
    }


    void DHT_sample(){
        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Starting");
        #endif
        float h = dht.readHumidity();
        float t = dht.readTemperature();

        if (isnan(t) ){
            // temperature is NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_1("Invalid Temperature received, not logging value");
            #endif
        }else{
            // Temperature isnt NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_3("Valid Temperature received, logging");
            #endif

            logMessage("DHT.Temp", t, "C");
            #ifdef DEBUG_DHT_POLLER
                DEBUG_2("Temperature Logged");
            #endif
        }

        if (isnan(h)){
            // Humidity is NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_1("Invalid Humidity received, not logging value");
            #endif
        }else{
            // Humidity isnt NaN
            #ifdef DEBUG_DHT_POLLER
                DEBUG_3("Valid Humidity received, logging");
            #endif

            logMessage("DHT.Humidity", h, "%");
            #ifdef DEBUG_DHT_POLLER
                DEBUG_2("Humidity Logged");
            #endif
        }

        #ifdef DEBUG_DHT_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif



#ifdef ENABLE_DS18B20_POLLER

    OneWire ds_oneWire(DS18B20_PIN);
    DallasTemperature ds_sensors(&ds_oneWire);
    int ds_count;
    void DS18B20_init(){
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Starting");
        #endif
        ds_sensors.begin();
        ds_count = ds_sensors.getDeviceCount();
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void DS18B20_sample(){
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Starting");
        #endif
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_5("Requesting Temperatures");
        #endif
        char buf[25];
        ds_sensors.requestTemperatures();
        for (int i=0; i < ds_count; i++){
            #ifdef DEBUG_DS18B20_POLLER
                DEBUG_5("Logging DSB Pin");
            #endif
            sprintf(buf, "DS18B20.%d", i);
            logMessage(buf, ds_sensors.getTempCByIndex(i), "Degrees/C");
            #ifdef DEBUG_DS18B20_POLLER
                DEBUG_5("Logged DSB Pin");
            #endif
        }
        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_2("Requested Temperatures");
        #endif


        #ifdef DEBUG_DS18B20_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
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
#ifdef ENABLE_HS1101_POLLER
    #define HS1101_RH_CONSTANT 12169

    void HS1101_init(){
        #ifdef DEBUG_HS1101_POLLER
            DEBUG_1("Starting");
        #endif
        return;
        #ifdef DEBUG_HS1101_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void HS1101_sample(){
        #ifdef DEBUG_HS1101_POLLER
            DEBUG_1("Starting");
        #endif

       	//! The time the capacitor was fully discharged
        unsigned long startTime;
        //! The time in micros() to abort if there is no change from the sensor
        unsigned long timeoutTime;
        //! The time in micros() when the sensor changed
        unsigned long endTime;
        //! Boolean value indicating if the sensor has changed.
        bool changed;
        changed=false;
        char buf[33];

        startTime=micros();
        timeoutTime=startTime+100000;
        pinMode(HS1101_PIN, OUTPUT);
        digitalWrite(HS1101_PIN, HIGH);
        delay(1);
        pinMode(HS1101_PIN, INPUT);
        digitalWrite(HS1101_PIN, LOW);
        while(!changed && micros()<timeoutTime){
            changed=!digitalRead(HS1101_PIN);
            if (changed){
                endTime=micros()-startTime;
                endTime=endTime/2;
                endTime=endTime*10;
                endTime=endTime-HS1101_RH_CONSTANT;
                endTime=(endTime)/24;
                sprintf(buf, "%lu", endTime);
                logMessage("HS1101.Humidity", buf, "%");
            }
    	}
    #ifdef DEBUG_HS1101_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
#ifdef ENABLE_ITG3200_POLLER
    ITG3200 itg = ITG3200();
    void ITG3200_init(){
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Starting");
        #endif
        Wire.begin();
        delay(1000);
        itg.init(ITG3200_ADDR_AD0_HIGH);
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Finished");
        #endif
    }



    void ITG3200_sample(){
        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Starting");
        #endif
        float x,y,z;

        if (itg.isRawDataReady()){
            itg.readGyro(&x,&y,&z);

            logMessage("Gyro.ITG3200.X",x, "Degrees*1000/Second");
            logMessage("Gyro.ITG3200.Y",y, "Degrees*1000/Second");
            logMessage("Gyro.ITG3200.Z",z, "Degrees*1000/Second");

        }

        #ifdef DEBUG_ITG3200_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif


LIS331 lis;
#ifdef ENABLE_LIS331_POLLER
    void LIS331_init(){
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Starting");
        #endif
        lis.setPowerStatus(LR_POWER_NORM);
        lis.setXEnable(true);
        lis.setYEnable(true);
        lis.setZEnable(true);
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void LIS331_sample(){
        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Starting");
        #endif
        char buf[33];
        int16_t val;
        lis.getXValue(&val);
        logMessage("LIS331.X", val, "mG");
        lis.getYValue(&val);
        logMessage("LIS331.Y", val, "mG");
        lis.getZValue(&val);
        logMessage("LIS331.Z", val, "mG");

        #ifdef DEBUG_LIS331_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif
#ifdef ENABLE_MEGASQUIRT_POLLER
    #ifndef MS_WAIT_TIME
        #error MS_WAIT_TIME not defined.
    #endif
    #ifndef MS_STATUS_PIN
        #error MS_STATUS_PIN not defined.
    #endif


    bool ms_active;
    byte ms_timeouts;
    MegaSquirtData ms_data;


    void MegaSquirt_init(){
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Starting");
        #endif
        ms_active=true;
        ms_timeouts=0;
        pinMode(MS_STATUS_PIN, OUTPUT);
        digitalWrite(MS_STATUS_PIN, LOW);
        MegaSquirt::begin();
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Finished");
        #endif
    }

    void MegaSquirt_sample(){
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Starting");
        #endif
        // IF inactive, check if its time to try again.
        if (!ms_active)
        {
            // If timeouts > max time out time, then become active, and reset timeouts.
            if (ms_timeouts++ > MS_WAIT_TIME){
                ms_active=true;
                ms_timeouts=0;
                #ifdef DEBUG_MEGASQUIRT_POLLER
                    DEBUG_2("Megasquirt timeout reached, retrying");
                #endif
            }
            // timeouts not reached, just return.
            else
            {
                #ifdef DEBUG_MEGASQUIRT_POLLER
                    DEBUG_2("Megasquirt Inactive");
                #endif
                return;
            }
        }

        byte status;
        byte table[MS_TABLE_LENGTH];
        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_2("Querying Megasquirt");
        #endif
        status=MegaSquirt::getData(table);
        if (status != MS_COMM_SUCCESS)
        {
            #ifdef DEBUG_MEGASQUIRT_POLLER
                DEBUG_1("Megasquirt Error, setting timeout");
            #endif
            ms_active=false;
            digitalWrite(MS_STATUS_PIN, LOW);
            return;
        }
        digitalWrite(MS_STATUS_PIN, HIGH);
        ms_data.loadData(table);

        logMessage("Megasquirt.PulseWidth1", ms_data.pulseWidth1(),"ms*1000");
        logMessage("Megasquirt.PulseWidth2", ms_data.pulseWidth2(),"ms*1000");
        logMessage("Megasquirt.Advance", ms_data.advance(),"Degrees*10");
        logMessage("RPM", ms_data.rpm(),"RPM");
        logMessage("Megasquirt.BatteryVoltage", ms_data.batteryVoltage(),"Voltsx10");
        logMessage("Megasquirt.ManifoldAirPressure", ms_data.map(),"kPa");
        logMessage("Megasquirt.CoolantTemperature", ms_data.coolant(),"F*10");
        logMessage("Megasquirt.ThrottlePosition", ms_data.tps(),"%x10");
        logMessage("Megasquirt.ManifoldAirTemperature", ms_data.mat(),"DegreesC");

        #ifdef DEBUG_MEGASQUIRT_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif




#ifdef ENABLE_ANALOG_POLLER
    void analog_pin_init(){
        DEBUG_1("Starting");
        #ifdef ANALOG_USE_EXTERN_REF
            analogReference(EXTERNAL);
        #endif

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
        #if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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

            #ifdef AP_SAMPLE_PIN_0
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 0");
                #endif
                logMessage(AP_PIN_0_NAME, analogRead(0), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 0");
                #endif
            #endif
        
            #ifdef AP_SAMPLE_PIN_1
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 1");
                #endif
                logMessage(AP_PIN_1_NAME, analogRead(1), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 1");
                #endif
            #endif
        
            #ifdef AP_SAMPLE_PIN_2
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 2");
                #endif
                logMessage(AP_PIN_2_NAME, analogRead(2), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 2");
                #endif
            #endif
        
            #ifdef AP_SAMPLE_PIN_3
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 3");
                #endif
                logMessage(AP_PIN_3_NAME, analogRead(3), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 3");
                #endif
            #endif
        
            #ifdef AP_SAMPLE_PIN_4
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 4");
                #endif
                logMessage(AP_PIN_4_NAME, analogRead(4), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 4");
                #endif
            #endif
        
            #ifdef AP_SAMPLE_PIN_5
                #ifdef DEBUG_ANALOG_POLLER
                    DEBUG_5("Reading value for pin 5");
                #endif
                logMessage(AP_PIN_5_NAME, analogRead(5), "(volts * 5)/1024");
                #ifdef DEBUG_DIGITAL_POLLER
                    DEBUG_2("Sucessfully read and logged value for pin 5");
                #endif
            #endif
        #if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
#if defined(__AVR_ATmega2560__)

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
        #if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega32U4__) || defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif
#if defined(__AVR_ATmega2560__)

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
        #endif

        DEBUG_1("Finished");
    }
#endif
#ifdef ENABLE_GPS_POLLER

/**
 * Configures the serial port in order to connect to the GPS.  Attempts to
 * turn off messages that are not used, this puts less pressure on the
 * serial buffer which has been reduced to 64 bytes.
 *
 * If your GPS does not support disabling messages, there are two other
 * options, the first is to increase the buffer used in arduino by
 * editing HardwareSerial.h, the other is to poll this poller more
 * frequently.
 */
    void gps_init(){
        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Starting");
        #endif
        #ifdef GPS_LED_PIN
                DEBUG_5 ("Setting GPS_LED_PIN to OUTPUT, and LOW");
                pinMode(GPS_LED_PIN, OUTPUT);
                digitalWrite(GPS_LED_PIN,LOW);
                DEBUG_2("Set LED Pin");
        #endif

        GPS_SERIAL_DEV.begin(GPS_SERIAL_DEV_SPEED);
        DEBUG_5("Switching off unneeded GPS data");
        GPS_SERIAL_DEV.println("$PSRF103,0,0,0,1*24");
        GPS_SERIAL_DEV.println("$PSRF103,1,0,0,1*25");
        GPS_SERIAL_DEV.println("$PSRF103,2,0,0,1*26");
        GPS_SERIAL_DEV.println("$PSRF103,3,0,0,1*27");
        GPS_SERIAL_DEV.println("$PSRF103,4,0,0,1*20");
        GPS_SERIAL_DEV.println("PSRF103,5,0,0,1*21");
        GPS_SERIAL_DEV.println("$PSRF103,8,0,0,1*2C");
        DEBUG_5 ("Switching on RMC data");
        GPS_SERIAL_DEV.println("$PSRF103,4,0,1,1*21");
        DEBUG_2 ("Switched off unneeded data and enabled RMC data. ");


        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Finished");
        #endif
    }


 /**
 * NMEA GPS devices continually output data over the serial line, data forms
 * NMEA sentances.  The GPS may send multiple types of NMEA sentances depending
 * on the GPS, type of fix etc.  The GPS may send data only when it has a fix, or
 * at a specified interval.
 *
 * As such rather than block until a valid sentance is received, each time the
 * poller is called, it appends any data in the serial buffer to the NMEA object.
 *
 * When the appended data completes the sentance, the poller queries the NMEA object
 * to see if the fix is valid, if so it logs each metric.
 *
 */
    NMEA gps;
    void gps_sample(){
        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Starting");
        #endif

        while(GPS_SERIAL_DEV.available()){
            if (gps.addChar(GPS_SERIAL_DEV.read())){
                #ifdef DEBUG_GPS_POLLER
                    DEBUG_2("Completed Sentence");
                #endif
                if (gps.validFix()){
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("Valid Fix");
                    #endif
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_5("Logging Messages");
                    #endif
                    logMessage("GPS.Course", gps.getCourse(), "Degrees");
                    logMessage("GPS.Speed", gps.getSpeed(), "Knots");
                    logMessage("GPS.Latitude", gps.getLatitude(), "N/A");
                    logMessage("GPS.Longitude", gps.getLongitude(), "N/A");
                    logMessage("GPS.Date", gps.getDate(), "N/A");
                    logMessage("GPS.Time", gps.getTime(), "UTC");
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("Successfully Logged Messages");
                    #endif
                }else{
                    #ifdef DEBUG_GPS_POLLER
                        DEBUG_2("No valid fix available");
                    #endif
                }
            }else{
                #ifdef DEBUG_GPS_POLLER
                    DEBUG_3("Not a valid sentence");
                #endif
            }
        }

        #ifdef DEBUG_GPS_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif



#ifdef ENABLE_TMP102_POLLER
    void tmp102_init(){
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Starting");
        #endif
        Wire.begin();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Finished");
        #endif
    }
    void tmp102_sample(){
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Starting");
        #endif
        byte firstbyte, secondbyte;
        int val;
        float convertedtemp;
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Calling beginTransmission");
        #endif
        Wire.beginTransmission(TMP102_I2C_ADDRESS);
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully Called beginTransmission");
        #endif

        byte i = 0x00;

        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Sending cmd to tmp102");
        #endif
        Wire.write(i);
        Wire.endTransmission();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully sent cmd to tmp102, attempting to read");
        #endif
        Wire.requestFrom(TMP102_I2C_ADDRESS, 2);
        Wire.endTransmission();
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully read from tmp102");
        #endif

        firstbyte      = (Wire.read());
        secondbyte     = (Wire.read());

        val = ((firstbyte) << 4);
        val |= (secondbyte >> 4);

        convertedtemp = val*0.0625;


        #ifdef DEBUG_TMP102_POLLER
            DEBUG_5("Logging Message");
        #endif
        logMessage("TMP102.Temp", convertedtemp, "C");
        #ifdef DEBUG_TMP102_POLLER
            DEBUG_2("Successfully logged message");
        #endif

        #ifdef DEBUG_TMP102_POLLER
            DEBUG_1("Finished");
        #endif
    }
#endif


#ifdef ENABLE_ETHERNET_LOGGER
    #ifdef ETHERNET_ENABLE_SERVER
        EthernetServer eth_server = EthernetServer(ETHERNET_SERVER_PORT);
    #endif
    #ifdef ETHERNET_ENABLE_MQTT
        EthernetClient ethClient;
        byte mqtt_server[] = { ETHERNET_MQTT_SERVER };
        PubSubClient mqtt_client(mqtt_server, ETHERNET_MQTT_PORT, mqtt_callback, ethClient);
    #endif

    void mqtt_callback(char* topic, byte* payload, unsigned int length) {
        // handle message arrived, there wont be any however.
        return;
    }

    void init_ethernet_logger(){
        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Starting");
        #endif
        byte mac[]={ETHERNET_MAC_ADDRESS};
        #ifdef ETHERNET_IP_ADDRESS
            byte ip[]={ETHERNET_IP_ADDRESS};
            byte dns[]={ETHERNET_DNS_ADDRESS};
            byte gw[]={ETHERNET_GW_ADDRESS};
            byte nm[]={ETHERNET_NETMASK};
            Ethernet.begin(mac,ip,dns,gw,nm);
        #else
            // Use DHCP
            Ethernet.begin(mac);
        #endif
        #ifdef ETHERNET_ENABLE_SERVER
            eth_server.begin();
        #endif


        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Finishing");
        #endif
        }



    void log_ethernet_logger(const char * name, const char * value, const char * unit){
        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Starting");
        #endif
        #ifdef ETHERNET_ENABLE_SERVER
            eth_server.write(name);
            eth_server.write(",");
            eth_server.write(value);
            eth_server.write(",");
            eth_server.write(unit);
            eth_server.println(",");
        #endif
        #ifdef ETHERNET_ENABLE_MQTT
            if (!mqtt_client.connected()){
                #ifdef ETHERNET_MQTT_USER
                    mqtt_client.connect(ETHERNET_MQTT_CLIENT, ETHERNET_MQTT_USER, "ETHERNET_MQTT_PASS");
                #else
                    mqtt_client.connect(ETHERNET_MQTT_CLIENT);
                #endif
                if (!mqtt_client.connected()){
                    return;
                }
            }
            char *nbuf;
            char *vbuf;
            int len;

            nbuf=(char*)malloc(sizeof(char)*(strlen(name)+1));
            vbuf=(char*)malloc(sizeof(char)*(strlen(name)+1));
            strcpy(nbuf, name);
            strcpy(vbuf,value);

            mqtt_client.publish(nbuf, vbuf);

            free(nbuf);
            free(vbuf);
        #endif
        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Finishing");
        #endif
    }
    void flush_ethernet_logger(){
        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Starting");
        #endif

        // Nothing needs to be done.
        return;

        #ifdef DEBUG_ETHERNET_LOGGER
            DEBUG_1("Finishing");
        #endif
    }
#endif


#ifdef ENABLE_SD_LOGGER
    bool sd_active;
    File sd_file;


    void init_sd_logger(){
        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Starting");
        #endif
        sd_active=true;

        #ifdef SD_ACTIVE_PIN
            pinMode(SD_ACTIVE_PIN, OUTPUT);
            digitalWrite(SD_ACTIVE_PIN, false);
        #endif

        // A buffer to store the filename into, the FAT library only supports
        // 8.3 style filenames.
        char sd_fname[13];

        // Sets the default chip select pin to an output.  The Chipselect pin
        // is held high when a device is being addressed over the SPI bus.
        pinMode(SD_CS_PIN, OUTPUT);

        /**
         * Attempts to iniitalize the SD card using the library.  This begins use of the SPI
         * bus (digital pins 11, 12, and 13 on most Arduino boards; 50, 51, and 52 on
         * the Mega) and the chip select pin, which defaults to the hardware SS
         * pin (pin 10 on most Arduino boards, 53 on the Mega).
         *
         * @warning Note that even if you use a different chip select pin, the hardware SS pin
         * must be kept as an output or the SD library functions will not work.
         *
         * If the operation fails, the sd_active becomes false, and the SD card initialization
         * fails.
         */
        sd_active=SD.begin(SD_CS_PIN);

        /**
         * If the SD card was successfully initialized, then attempt to find a filename to use.
         * The filenames are in the format XXXXXXXX.log where XXXXXXXX is a zero padded number
         * starting at 0 and incrementing until there are no numbers left.
         *
         * If all filenames are in use, then sd_active is set to false, and the SD logger
         * initialization fails.
         */
        if (!sd_active){
            return;
        }

        byte sd_i=0;
        sprintf(sd_fname, "%08d.log", sd_i);
        while (sd_i++ <= 99999999 && SD.exists(sd_fname)){
            sprintf(sd_fname, "%08d.log",sd_i);
        }
        if (SD.exists(sd_fname)){
            sd_active=false;
        }

        /**
         * If there was a filename available, then SD_File is initialized as an open filehandle
         * to the new file.  Once the file has been opened, SD_ACTIVE_PIN is pulled high to turn
         * on the LED.
         *
         * If there were no filenames available, then sd_active is set to false, and the
         * initialization fails.
         *
         */
        if (!sd_active){
            return;
        }

        sd_file=SD.open(sd_fname,O_WRITE|O_CREAT);
        if (!sd_file){
            sd_active=false;
            return;
        }

        #ifdef SD_ACTIVE_PIN
            digitalWrite(SD_ACTIVE_PIN, true);
        #endif

        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Finishing");
        #endif
        }



    void log_sd_logger(const char * name, const char * value, const char * unit){
        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Starting");
        #endif
        if (sd_active){
            sd_file.write(name);
            sd_file.write(",");
            sd_file.write(value);
            sd_file.write(",");
            sd_file.write(unit);
            sd_file.println(",");
        }
        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Finishing");
        #endif

    }
    void flush_sd_logger(){
        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Starting");
        #endif

        if (sd_active){
           sd_file.flush();
        }

        #ifdef DEBUG_SD_LOGGER
            DEBUG_1("Finishing");
        #endif
    }
#endif


#ifdef ENABLE_SERIAL_LOGGER
    void init_serial_logger(){
        #ifdef DEBUG_SERIAL_LOGGER
            DEBUG_1("Starting");
        #endif
            #ifndef NO_SERIAL_INIT
                SERIAL_LOGGER_DEVICE.begin(SERIAL_LOGGER_BAUD);
            #endif
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
#ifdef ENABLE_BMP085_POLLER
    BMP085_sample();
#endif
#ifdef ENABLE_DHT_POLLER
    DHT_sample();
#endif
#ifdef ENABLE_DS18B20_POLLER
    DS18B20_sample();
#endif
#ifdef ENABLE_ELM327_POLLER
    ELM327_sample();
#endif
#ifdef ENABLE_HS1101_POLLER
    HS1101_sample();
#endif
#ifdef ENABLE_ITG3200_POLLER
    ITG3200_sample();
#endif
#ifdef ENABLE_LIS331_POLLER
    LIS331_sample();
#endif
#ifdef ENABLE_MEGASQUIRT_POLLER
    MegaSquirt_sample();
#endif
#ifdef ENABLE_ANALOG_POLLER
    analog_pin_sample();
#endif
#ifdef ENABLE_DIGITAL_POLLER
    digital_pin_sample();
#endif
#ifdef ENABLE_GPS_POLLER
    gps_sample();
#endif
#ifdef ENABLE_TMP102_POLLER
    tmp102_sample();
#endif
}

void setupPollers(){
#ifdef ENABLE_BMP085_POLLER
    BMP085_init();
#endif
#ifdef ENABLE_DHT_POLLER
    DHT_init();
#endif
#ifdef ENABLE_DS18B20_POLLER
    DS18B20_init();
#endif
#ifdef ENABLE_ELM327_POLLER
    ELM327_init();
#endif
#ifdef ENABLE_HS1101_POLLER
    HS1101_init();
#endif
#ifdef ENABLE_ITG3200_POLLER
    ITG3200_init();
#endif
#ifdef ENABLE_LIS331_POLLER
    LIS331_init();
#endif
#ifdef ENABLE_MEGASQUIRT_POLLER
    MegaSquirt_init();
#endif
#ifdef ENABLE_ANALOG_POLLER
    analog_pin_init();
#endif
#ifdef ENABLE_DIGITAL_POLLER
    digital_pin_init();
#endif
#ifdef ENABLE_GPS_POLLER
    gps_init();
#endif
#ifdef ENABLE_TMP102_POLLER
    tmp102_init();
#endif
}

void setupLoggers(){
#ifdef ENABLE_ETHERNET_LOGGER
    init_ethernet_logger();
#endif
#ifdef ENABLE_SD_LOGGER
    init_sd_logger();
#endif
#ifdef ENABLE_SERIAL_LOGGER
    init_serial_logger();
#endif
}

void logMessage(const char * name, const char * value, const char * unit){
#ifdef ENABLE_ETHERNET_LOGGER
    log_ethernet_logger(name, value, unit);
#endif
#ifdef ENABLE_SD_LOGGER
    log_sd_logger(name, value, unit);
#endif
#ifdef ENABLE_SERIAL_LOGGER
    log_serial_logger(name, value, unit);
#endif
}

void flushLoggers(){
#ifdef ENABLE_ETHERNET_LOGGER
    flush_ethernet_logger();
#endif
#ifdef ENABLE_SD_LOGGER
    flush_sd_logger();
#endif
#ifdef ENABLE_SERIAL_LOGGER
    flush_serial_logger();
#endif
}
