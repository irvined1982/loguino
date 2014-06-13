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
#define USE_LOGUINO_CONFIG
#ifdef USE_LOGUINO_CONFIG
    #include "loguinoConfig.h"
#else
    //#define ENABLE_DEBUG
    #define DEBUG_LEVEL 5
    #define DEBUG_SERIAL_DEV Serial
    #define DEBUG_SERIAL_BAUD 115200
#endif


