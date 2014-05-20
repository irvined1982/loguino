#!/bin/bash
[ -d build ] || mkdir build
cat base/config.c > build/config.c
cat base/include.c > build/include.c
cat base/code.c > build/code.c
> build/readSensors.c
> build/logMessage.c
> build/setupPollers.c
> build/setupOutputs.c

for i in modules/pollers/*
do
    [ -e $i/build ] && ( cd $i; ./build ) # Run the build if there is anything to be built

	[ -e $i/config.c ] && cat $i/config.c >> build/config.c
	[ -e $i/include.c ] && cat $i/include.c >> build/include.c
	[ -e $i/code.c ] && cat $i/code.c >> build/code.c

	. $i/build_env.sh

	echo "#ifdef $ENABLE_VARIABLE" >> build/readSensors.c
	echo "    $SAMPLE_FUNCTION();" >> build/readSensors.c
	echo "#endif" >> build/readSensors.c

	echo "#ifdef $ENABLE_VARIABLE" >> build/setupPollers.c
	echo "    $INIT_FUNCTION();" >> build/setupPollers.c
	echo "#endif" >> build/setupPollers.c



done
cat build/config.c build/include.c build/code.c > loguino.ino
echo >> loguino.ino
echo 'void readSensors(){' >> loguino.ino
cat build/readSensors.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void logMessage(const char * name, const char * value, const char * unit){' >> loguino.ino
cat build/logMessage.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void setupPollers(){' >> loguino.ino
cat build/setupPollers.c >> loguino.ino
echo '}' >>loguino.ino

echo >> loguino.ino
echo 'void setupOutputs(){' >> loguino.ino
cat build/setupOutputs.c >> loguino.ino
echo '}' >>loguino.ino


