#include "LedRGB.h"

LedRGB::LedRGB(uint8_t pin_red, uint8_t pin_green, uint8_t pin_blue)
{
	this->pin_red=pin_red;
	this->pin_green=pin_green;
	this->pin_blue=pin_blue;
}

void LedRGB::setBrightnessAll(RGB brightness)
{
	setBrightnessRed(brightness.red);
	setBrightnessGreen(brightness.green);
	setBrightnessBlue(brightness.blue);
}

void LedRGB::setFadeAll(int8_t fade_red, int8_t fade_green, int8_t fade_blue)
{
	setFadeRed(fade_red);
	setFadeGreen(fade_green);
	setFadeBlue(fade_blue);
}

void LedRGB::getBrightnessAll(RGB &brightness) const
{
	brightness.red=red;
	brightness.green=green;
	brightness.blue=blue;
}

void LedRGB::getFadeAll(int8_t *fade_red, int8_t *fade_green, int8_t *fade_blue) const
{
	fade_red=this->fade_red;
	fade_green=this->fade_green;
	fade_blue=this->fade_blue;
}

void LedRGB::turnOnAll()
{
	turnOnRed();
	turnOnGreen();
	turnOnBlue();
}


void LedRGB::turnOnAll(RGB brightness)
{
	setBrightnessAll(brightness);
	turnOnAll();
}

void LedRGB::turnOnRed(uint8_t brightness)
{
	setBrightnessRed(brightness);
	turnOnRed();
}

void LedRGB::turnOnGreen(uint8_t brightness)
{
	setBrightnessGreen(brightness);
	turnOnGreen();
}

void LedRGB::turnOnBlue(uint8_t brightness)
{
	setBrightnessBlue(brightness);
	turnOnBlue();
}

void LedRGB::turnOffAll()
{
	turnOffRed();
	turnOffGreen();
	turnOffBlue();
}

void LedRGB::turnOffRed()
{
	analogWrite(pin_red, 0);
	setBrightnessRed(0);
}

void LedRGB::turnOffGreen()
{
	analogWrite(pin_green, 0);
	setBrightnessGreen(0);
}

void LedRGB::turnOffBlue()
{
	analogWrite(pin_blue, 0);
	setBrightnessBlue(0);
	
}

void LedRGB::fadingAll()
{
	fadingRed();
	fadingBlue();
	fadingGreen();
}

void LedRGB::fadingRed()
{
	if(brightness.red+fade_red>255)
	{
		fade_red=fade_red*(-1);
		brightness.red=255;
	}
	else if (brightness.red+fade<0)
	{
		fade_red=fade_red*(-1);
		brightness.red=0;
	}
	else
		brightness.red=brightness.red+fade_red;
	turnOnRed();
}

void LedRGB::fadingBlue()
{
	if(brightness.blue+fade_blue>255)
	{
		fade_blue=fade_blue*(-1);
		brightness.blue=255;
	}
	else if (brightness.blue+fade<0)
	{
		fade_blue=fade_blue*(-1);
		brightness.red=0;
	}
	else
		brightness.blue=brightness.blue+fade_blue;
	turnOnBlue();
}

void LedRGB::fadingGreen()
{
	if(brightness.green+fade_green>255)
	{
		fade_green=fade_green*(-1);
		brightness.green=255;
	}
	else if (brightness.green+fade<0)
	{
		fade_green=fade_green*(-1);
		brightness.green=0;
	}
	else
		brightness.green=brightness.green+fade_green;
	turnOnBlue();
}