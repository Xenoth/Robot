#ifndef ROBOT_H
#define ROBOT_H

#include "RGBLed.h"
#include "Buzzer.h"
#include "IRSensor.h"

class Robot
{
	public :
	
	//OUTPUTS
	const uint8_t pinRGB_red=6;
	const uint8_t pinRGB_green=5;
	const uint8_t pinRGB_blue=3;
	
	const uint8_t pin_buzzer=9;
	
	
	//INPUTS
	const uint8_t pin_sensor=1;
	
	//MODULES
	RGBLed rgb;
	Buzzer bz;
	IRSensor irs;
	
	Robot();
	
	void begin();
	
	bool update();
	
	void alert();
	
	void normal();
};

#endif
