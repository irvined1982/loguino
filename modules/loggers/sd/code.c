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
        sd_active=SD.begin(SD_CS_PIN, 11, 12, 13);

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

        unsigned byte sd_i=0;
        sprintf(sd_fname, "%08d.log", sd_i);
        while (++sd_i <= 255 && SD.exists(sd_fname)){
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
        sd_file.print(millis(),DEC);
            sd_file.write(",");
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
