// Example sketch showing how to send in OneWire temperature readings
#include <Arduino.h>
#include <EEPROM.h>

#include <serial.hpp>
void setup()
{
	Serial.begin(115200);
	setup_serial();

	Serial.println("Clearing EEPROM");
	for (int i=0;i<512;i++)
	{
		EEPROM.write(i, 0xff);
	}
}


void loop()
{
	while(true)
	{
		Serial.println("EEPROM cleared : waiting in endless loop");
		delay(2000);
	}
}



