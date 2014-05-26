
OPTION (DEBUG_MODE "Enable debugging output" ON)
IF (DEBUG_MODE)
	SET(DEBUG "debug")
ELSE()
	SET (DEBUG "//")
ENDIF(DEBUG_MODE)

SET(SD_RECURSE True)
SET (logger_RECURSE True)
set (loguino_RECURSE True)
SET (ELM327_RECURSE True)
SET (ELMPoller_RECURSE True)

OPTION( ENABLE_HS1101_POLLER "Enable polling of HS1101 Relative Humidity Sensor" OFF)
IF (ENABLE_HS1101_POLLER)
	SET(HS1101_PIN "2" CACHE STRING "Pin the sense pin of the HS1101 is connected to")
ELSE()
	SET (HS1101_PIN)
ENDIF(ENABLE_HS1101_POLLER)

OPTION( ENABLE_BMP085_POLLER "Enable polling of BMP085 Barometric Pressure Sensor" OFF)
OPTION( ENABLE_TMP102_POLLER "Enable polling of TMP102 Temperature Sensors" OFF)
IF (ENABLE_TMP102_POLLER)
	SET(TMP102_I2C_ADDRESS "72" CACHE STRING "Address of I2C device")
ELSE()
	SET(TMP102_I2C_ADDRESS)
ENDIF(ENABLE_TMP102_POLLER)

OPTION( ENABLE_GPS_POLLER "Enable poling of NMEA compatible GPS devices" OFF)
IF (ENABLE_GPS_POLLER)
	SET(GPS_SERIAL_DEV "Serial2" CACHE STRING "Serial device for GPS device" )
	SET(GPS_SERIAL_DEV_SPEED "4800" CACHE STRING "Speed of GPS device" )
	option(GPS_LED "Enabling this option will set the output of GPS_LED_PIN high when the GPS device has a fix")
	IF (GPS_LED)
		SET(GPS_LED_PIN "50" CACHE STRING "Pin used for ELM LED Indicator")
	ENDIF(GPS_LED)
ELSE()
	SET(GPS_SERIAL_DEV)
	SET(GPS_SERIAL_DEV_SPEED)
ENDIF(ENABLE_GPS_POLLER)



OPTION( ENABLE_ELM_POLLER "Enable poling of ELM327 compatible OBD2 devices" OFF)
IF (ENABLE_ELM_POLLER)
	SET(ELM_PORT "Serial3" CACHE STRING "Serial device for ELM device" )
	SET(ELM_BAUD_RATE "9600" CACHE STRING "BAUD rate of ELM327 Device" )
	SET(ELM_TIMEOUT "9000" CACHE STRING "Milliseconds to wait for ELM device to respond" )
	OPTION(ELMPOLLER_EXTENDED_VALS "Enabling this option logs all known PIDS rather than the most common")
	option(ELM_LED "Enabling this option will set the output of ELM_LED_PIN high when the ELM device is online")
	IF (ELM_LED)
		SET(ELM_LED_PIN "52" CACHE STRING "Pin used for ELM LED Indicator")
	ENDIF(ELM_LED)
	add_definitions( -DELM_PORT=${ELM_PORT} )
	add_definitions( -DELM_BAUD_RATE=${ELM_BAUD_RATE} )
	add_definitions( -DELM_TIMEOUT=${ELM_TIMEOUT} )
ELSE()
	SET (ELM_PORT)
	SET (ELM_BAUD_RATE)
	SET (ELM_TIMEOUT)
	SET (ELMPOLLER_EXTENDED_VALS)

ENDIF(ENABLE_ELM_POLLER)

OPTION( ENABLE_DUMMY_POLLER "Enable polling of the dummy poller" OFF)
OPTION( ENABLE_DIGITAL_POLLER "Enable polling of digital pins" OFF)
IF (ENABLE_DIGITAL_POLLER)
	SET(DIGITAL_PINS "31,32,33,34,35,36" CACHE STRING  "Digital pins to poll")
	SET(INVERT_DIGITAL_PINS "32,33" CACHE STRING  "Digital pins to invert")
ELSE()
	SET(DIGITAL_PINS)
	SET(INVERT_DIGITAL_PINS)
ENDIF(ENABLE_DIGITAL_POLLER)

OPTION( ENABLE_ANALOG_POLLER "Enable polling of analog pins" OFF)
IF (ENABLE_ANALOG_POLLER)
	SET (ANALOG_PINS "2,3,4" CACHE STRING  "Comma Seperated List of analog pins to use")
ELSE()
	SET(ANALOG_PINS)
ENDIF(ENABLE_ANALOG_POLLER)

OPTION( ENABLE_DS18B20_POLLER "Enable polling of the DS18B20 poller" OFF)
IF (ENABLE_DS18B20_POLLER)
        SET (ONE_WIRE_PIN "7" CACHE STRING  "Pin that onewire bus is attached to")
ELSE()
        SET(ONWIRE_PIN)
ENDIF(ENABLE_DS18B20_POLLER)






OPTION( ENABLE_ITG3200_POLLER "Enable polling of itg3200 gyrometers" OFF)
IF (ENABLE_ITG3200_POLLER)
	SET (ITG3200_ADDRESS "0x69" CACHE STRING "I2C Address of the ITG3200 Gyro" )
ELSE()
	SET(ITG3200_ADDRESS)
ENDIF (ENABLE_ITG3200_POLLER)



OPTION( ENABLE_LIS331_POLLER "Enable polling of LIS331 accelerometers" OFF)
IF (ENABLE_LIS331_POLLER)
	SET( LIS_BUS_ADDRESS "25" CACHE STRING "I2C Address of the LIS331 Accelerometer" )
ELSE()
	SET( LIS_BUS_ADDRESS)
ENDIF (ENABLE_LIS331_POLLER)

OPTION( ENABLE_MS_POLLER "Enable polling of MegaSquirt ECU" OFF)
IF (ENABLE_MS_POLLER)
	SET(MS_WAIT_TIME "100" CACHE STRING "Time number of polls to skip after a megasquirt timout" )
	SET(MS_STATUS_PIN "9" CACHE STRING "Pin to take high when megasquirt is online" )
	SET(MS_PORT "Serial1" CACHE STRING "Serial port to use for megasquirt" )
ELSE()
	SET(MS_WAIT_TIME)
	SET(MS_STATUS_PIN)
ENDIF(ENABLE_MS_POLLER)

OPTION( ENABLE_SERIAL_OUTPUT "Enable logging to a serial device" OFF)
if (ENABLE_SERIAL_OUTPUT)
	SET(SO_SERIAL_PORT "Serial" CACHE STRING "Serial port to write serial output to" )	
	SET(SO_SERIAL_PORT_SPEED "115200" CACHE STRING "Serial port speed")
ELSE()
	SET(SO_SERIAL_PORT)
	SET(SO_SERIAL_PORT_SPEED)
endif(ENABLE_SERIAL_OUTPUT)

	
OPTION( ENABLE_SD_OUTPUT "Enable logging to an SD card" OFF)
IF (ENABLE_SD_OUTPUT)
	SET (SD_ACTIVE_PIN "9" CACHE STRING "Pin to make high when SD card is active")
ELSE()
	SET(SD_ACTIVE_PIN)
ENDIF(ENABLE_SD_OUTPUT)

OPTION (ENABLE_ETHERNET_LOGGER "Enable the Ethernet Server" OFF)
IF (ENABLE_ETHERNET_LOGGER)
	SET ( ETHERNET_MAC_ADDRESS  "0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED" CACHE STRING "MAC Address in HEX Seperated by commas")
	SET ( ETHERNET_IP_ADDRESS  "192,168,10,23" CACHE STRING "IP Address seperated by commas")
	SET ( ETHERNET_DNS_ADDRESS  "8,8,8,8" CACHE STRING "DNS server IP address seperated by commas")
	SET ( ETHERNET_GW_ADDRESS  "192,168,10,1" CACHE STRING "Default Gateway IP seperated by commas")
	SET ( ETHERNET_NETMASK  "255,255,255,0" CACHE STRING "Netmask seperated by commas")
ELSE()
	SET ( ETHERNET_MAC_ADDRESS)
	SET ( ETHERNET_IP_ADDRESS)
	SET ( ETHERNET_DNS_ADDRESS)
	SET (ETHERNET_GW_ADDRESS)
	SET (ETHERNET_NETMASK)
ENDIF (ENABLE_ETHERNET_LOGGER)

OPTION(ENABLE_PULSE_POLLER "Enable polling of digital pins for a freqencies" OFF)
IF (ENABLE_PULSE_POLLER)
	SET (PULSE_DIGITAL_PINS "27" CACHE STRING "Comma seperated list of digital pins that will be held LOW")
	SET (INVERTED_PULSE_DIGITAL_PINS "28" CACHE STRING "Comma seperated list of digital pins that will be held HIGH")
	SET (PULSE_AVERAGE_COUNT "10" CACHE STRING "The number of times to read the value before taking an average")
	SET (PULSE_TIMEOUT "1000" CACHE STRING "The number of microseconds to wait before giving up on a reading")
ENDIF(ENABLE_PULSE_POLLER)

CONFIGURE_FILE( ${CMAKE_SOURCE_DIR}/src/libraries/config/config.in  ${CMAKE_SOURCE_DIR}/src/libraries/config/config.h)

generate_arduino_firmware(loguino
	SRCS loguino.cpp
)
generate_arduino_firmware(test-elm
	SRCS tests/elm.cpp
)
generate_arduino_firmware(test-serial
	SRCS tests/serial.cpp
)
