#!/bin/bash
[ -d build ] || mkdir build
cat base/config.c > build/config.c
cat base/include.c > build/include.c
cat base/code.c > build/code.c
> build/readSensors.c
> build/logMessage.c
> build/setupPollers.c
> build/setupOutputs.c

for i in modules/pollers/* modules/outputs/*
do
	[ -e $i/config.c ] && cat $i/config.c >> build/config.c
	[ -e $i/include.c ] && cat $i/include.c >> build/include.c
	[ -e $i/code.c ] && cat $i/code.c >> build/code.c
	[ -e $i/readSensors.c ] && cat $i/readSensors.c >> build/readSensors.c
	[ -e $i/logMessage.c ] && cat $i/poll.c >> build/logMessage.c
	[ -e $i/setupPollers.c ] && cat $i/setupPollers.c >> build/setupPollers.c
	[ -e $i/setupOutputs.c ] && cat $i/setupOutputs.c >> build/setupOutputs.c
	

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


