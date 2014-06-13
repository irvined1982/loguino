#!/bin/bash
# Copyright 2014 David Irvine
#
# This file is part of Loguino
#
# Loguino is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Loguino is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Loguino.  If not, see "http://www.gnu.org/licenses/".
#
#

[ -d build ] || mkdir build
cat base/config.c > build/config.c
tail -n +20 base/include.c > build/include.c
tail -n +20 base/code.c > build/code.c
> build/setupPollers.c
> build/readSensors.c
> build/setupLoggers.c
> build/logMessage.c
> build/flushLoggers.c
echo "
/*

###############################################################################
###############################################################################
#
# Module Configuration
#
###############################################################################
###############################################################################

*/

#ifndef USE_LOGUINO_CONFIG
" >> build/config.c

for i in modules/pollers/*
do
    [ -e $i/build ] && ( cd $i; ./build ) # Run the build if there is anything to be built
    . $i/build_env.sh
    echo "/*
###############################################################################
###############################################################################" >> build/config.c
    echo >> build/config.c
    echo $MODULE_NAME >> build/config.c
    echo >> build/config.c
    echo "###############################################################################" >> build/config.c
    echo >> build/config.c
    [ -e $i/description.txt ] && cat $i/description.txt >> build/config.c
    echo >> build/config.c
    echo "###############################################################################" >> build/config.c
    echo >> build/config.c
    echo "For build and configuration information see the following url." >> build/config.c
    echo >> build/config.c
    echo $MODULE_URL >> build/config.c
    echo >> build/config.c
    echo "*/" >> build/config.c

	[ -e $i/config.c ] && tail -n +20 $i/config.c >> build/config.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/include.c
	[ -e $i/include.c ] && tail -n +20 $i/include.c >> build/include.c
	echo "" >> build/include.c
	echo "#endif" >> build/include.c

	[ -e $i/code.c ] && tail -n +20 $i/code.c >> build/code.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/readSensors.c
	echo "    $SAMPLE_FUNCTION();" >> build/readSensors.c
	echo "#endif" >> build/readSensors.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/setupPollers.c
	echo "    $INIT_FUNCTION();" >> build/setupPollers.c
	echo "#endif" >> build/setupPollers.c
done

echo "
#endif
" >> build/config.c


for i in modules/loggers/*
do
    [ -e $i/build ] && ( cd $i; ./build ) # Run the build if there is anything to be built

    . $i/build_env.sh
    echo "/*
###############################################################################
###############################################################################" >> build/config.c
    echo >> build/config.c
    echo $MODULE_NAME >> build/config.c
    echo >> build/config.c
    echo "###############################################################################" >> build/config.c
    echo >> build/config.c
    [ -e $i/description.txt ] && cat $i/description.txt >> build/config.c
    echo >> build/config.c
    echo "###############################################################################" >> build/config.c
    echo >> build/config.c
    echo "For build and configuration information see the following url." >> build/config.c
    echo >> build/config.c
    echo $MODULE_URL >> build/config.c
    echo >> build/config.c
    echo "*/" >> build/config.c

	[ -e $i/config.c ] && tail -n +20 $i/config.c >> build/config.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/include.c
	[ -e $i/include.c ] && tail -n +20 $i/include.c >> build/include.c
	echo "" >> build/include.c
	echo "#endif" >> build/include.c

	[ -e $i/code.c ] && tail -n +20 $i/code.c >> build/code.c


	echo "#ifdef $ENABLE_VARIABLE" >> build/logMessage.c
	echo "    $LOG_FUNCTION(name, value, unit);" >> build/logMessage.c
	echo "#endif" >> build/logMessage.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/setupLoggers.c
	echo "    $INIT_FUNCTION();" >> build/setupLoggers.c
	echo "#endif" >> build/setupLoggers.c

    echo "#ifdef $ENABLE_VARIABLE" >> build/flushLoggers.c
	echo "    $FLUSH_FUNCTION();" >> build/flushLoggers.c
	echo "#endif" >> build/flushLoggers.c

done

echo "
/*

###############################################################################
###############################################################################
#
# End Module Configuration
#
###############################################################################
###############################################################################

*/" >> build/config.c


# Sensors
cat build/config.c build/include.c build/code.c > loguino.ino
echo >> loguino.ino
echo 'void readSensors(){' >> loguino.ino
cat build/readSensors.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void setupPollers(){' >> loguino.ino
cat build/setupPollers.c >> loguino.ino
echo '}' >>loguino.ino

# Loggers
echo >> loguino.ino
echo 'void setupLoggers(){' >> loguino.ino
cat build/setupLoggers.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void logMessage(const char * name, const char * value, const char * unit){' >> loguino.ino
cat build/logMessage.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void flushLoggers(){' >> loguino.ino
cat build/flushLoggers.c >> loguino.ino
echo '}' >> loguino.ino



