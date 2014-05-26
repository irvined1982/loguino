/* Copyright 2011 David Irvine
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
 * along with Loguino.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * $Rev: 139 $:   
 * $Author: irvined $: 
 * $Date: 2012-04-26 22:36:27 +0100 (Thu, 26 Apr 2012) $:  
 
 */
#include <SDLogger.h>
#ifdef ENABLE_SD_OUTPUT


/**
 * When sd_active is true, the file was succesfully opened and is accepting data.  When set to false
 * the file has not yet been initialized, or initialization failed.
 */
bool SDLogger::sd_active;

/**
 * File object to the open file.
 */
File SDLogger::SD_File;

/**
 * Writes the message to the open file on the SD card in CSV format if the logger
 * is active. 
 *
 */
void SDLogger::log(){
    if (sd_active){
                SD_File.println(m.toCSV());
            }
}

/**
 * Attempts to initialize the SD card and create an open filehand to a new file.  
 * 
 */
void SDLogger::begin(){
    sd_active=true;

	/*
	 * A buffer to store the filename into, the FAT library only supports
	 * 8.3 style filenames.
	 */
    char sd_fname[13];
    
	/** 
	 * Sets the default chip select pin to an output.  The Chipselect pin is held high
	 * when a device is being addressed over the SPI bus.  
	 *
	 * @todo Set this to be pin 10 or pin 53 if it is a mega.
	 */
    pinMode(10, OUTPUT);

	/**
	 * Attempts to iniitalize the SD card using the library.  This begins use of the SPI 
	 * bus (digital pins 11, 12, and 13 on most Arduino boards; 50, 51, and 52 on 
	 * the Mega) and the chip select pin, which defaults to the hardware SS 
	 * pin (pin 10 on most Arduino boards, 53 on the Mega). 
	 *
	 * @warning Note that even if you use a different chip select pin, the hardware SS pin 
	 * must be kept as an output or the SD library functions will not work. 
	 *
	 * @todo make the Chip Select pin selectable using cmake.
	 *
	 * If the operation fails, the sd_active becomes false, and the SD card initialization
	 * fails.
	 */
    sd_active=SD.begin(4);
    
	/**
	 * If the SD card was successfully initialized, then attempt to find a filename to use.
	 * The filenames are in the format XXXXXXXX.log where XXXXXXXX is a zero padded number 
	 * starting at 0 and incrementing until there are no numbers left.
	 *
	 * If all filenames are in use, then sd_active is set to false, and the SD logger
	 * initialization fails.
	 *
	 * @todo - make the maxiumum file number configurable, currently set to 200
	 */
    if (sd_active){
        byte sd_i=0;
        sprintf(sd_fname, "%08d.log",sd_i);
        while (sd_i<=250 && SD.exists(sd_fname)){
            sd_i++;
            sprintf(sd_fname, "%08d.log",sd_i);
        }
        if (SD.exists(sd_fname)){
            sd_active=false;
        } 
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
    if (sd_active){
        SD_File=SD.open(sd_fname,O_WRITE|O_CREAT);
        if (!SD_File){
            sd_active=false;
        }
        
        pinMode(SD_ACTIVE_PIN, OUTPUT);
        digitalWrite(SD_ACTIVE_PIN, true);
    }
    
}

/**
 * If the file is active, then the buffers are flushed out to the SD card.
 */
void SDLogger::flush(){
    if (sd_active){
           SD_File.flush();
    }
}
#endif

