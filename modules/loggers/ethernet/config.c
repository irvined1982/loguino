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



// If enabled, Loguino will configure the ethernet shield for logging
//#define ENABLE_ETHERNET_LOGGER

// If defined, debug messages shall be enabled for this module
//#define DEBUG_ETHERNET_LOGGER

// the media access control (ethernet hardware) address for the shield:
// Must be unique, and on newer shields is printed on the board.
#define ETHERNET_MAC_ADDRESS 0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED

// IP address to use for the shield, if it is undefined, the shield will
// use DHCP to obtain an address.
// Note: Do not use DHCP with ETHERNET_SERVER enabled.
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
