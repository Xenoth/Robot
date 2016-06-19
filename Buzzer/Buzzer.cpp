#include "Buzzer.h"

Buzzer::Buzzer(uint8_t pin)
{
	this->pin=pin;
}

void Buzzer::turnOn(uint8_t voltage)
{
	this->voltage=voltage;
	turnOn();
}

void turnOf()
{
	voltage=0;
	analogWrite(pin, voltage);
}