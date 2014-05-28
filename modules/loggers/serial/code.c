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
