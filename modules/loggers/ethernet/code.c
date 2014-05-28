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



#ifdef ENABLE_ETHERNET_LOGGER
    #ifdef ETHERNET_ENABLE_SERVER
        EthernetServer eth_server = EthernetServer(ETHERNET_SERVER_PORT);
    #endif
    #ifdef ETHERNET_ENABLE_MQTT
        EthernetClient ethClient;
        byte mqtt_server[] = { ETHERNET_MQTT_SERVER };
        PubSubClient mqtt_client(mqtt_server, ETHERNET_MQTT_PORT, callback, ethClient);
    #endif

    void mq_callback(char* topic, byte* payload, unsigned int length) {
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
                    mqtt_client.connect(ETHERNET_MQTT_ID, ETHERNET_MQTT_USER, "ETHERNET_MQTT_PASS");
                #else
                    mqtt_client.connect(ETHERNET_MQTT_ID);
                #endif
                if (!mqtt_client.connected()){
                    return;
                }
            }
            mqtt_client.publish(name, value);
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
