#include <Arduino.h>
#include <ELM327.h>
void setup(){
	Serial2.begin(4800);
	Serial.begin(115200);

}
void loop(){
	while(Serial.available()){
		Serial2.write(Serial.read());
	}
	while (Serial2.available()){
		Serial.write(Serial2.read());
	}

}



