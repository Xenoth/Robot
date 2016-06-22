#include "Robot.h"

Robot::Robot()
{
	rgb=RGBLed(pinRGB_red, pinRGB_green, pinRGB_blue);
	bz=Buzzer(pin_buzzer);
	irs=IRSensor(pin_sensor);	
}

void Robot::begin()
{
	pinMode(pin_sensor, INPUT);
	pinMode(pinRGB_blue, OUTPUT);
	pinMode(pinRGB_green, OUTPUT);
	pinMode(pinRGB_red, OUTPUT);
	pinMode(pin_buzzer, OUTPUT);
	bz.setVoltage(127);
	bz.turnOn();
	delay(500);
	bz.turnOff();
	RGB color;
	color=RGB(255,255,255);
	rgb.setBrightnessAll(color);
	rgb.turnOnAll();
	delay(250);
	rgb.turnOffAll();
	delay(250);
	rgb.turnOnAll();
	delay(250);
	rgb.turnOffAll();	
}

bool Robot::update()
{
	if (irs.obstacleDetected())
	{
		alert();
		rgb.turnOffAll();
		rgb.setFadeAll(5, 5, 0);
		
	}
	else
		normal();
	return true;
}

void Robot::normal()
{
	rgb.fadingAll();
}

void Robot::alert()
{
	rgb.turnOffAll();
	rgb.red.setBrightness(255);
	rgb.turnOnAll();
	bz.turnOn(255);
	delay(100);
	rgb.turnOffAll();
	bz.turnOff();
	delay(100);
	rgb.red.setBrightness(255);
	rgb.turnOnAll();
	bz.turnOn(255);
	delay(100);
	rgb.turnOffAll();
	bz.turnOff();
	delay(100);
	rgb.red.setBrightness(255);
	rgb.turnOnAll();
	bz.turnOn(255);
	delay(100);
	rgb.turnOffAll();
	bz.turnOff();	
}
