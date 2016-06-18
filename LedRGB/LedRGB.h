#ifndef LEDRGB_h
#define LEDRGB_h

#include "RGB.h"

class LedRGB
{
	private :
		uint8_t pin_red, pin_green, pin_blue;
	
	
	public :
		RGB bightness;
		int8_t fade_red, fade_green, fade_blue;
		
		LedRGB(uint8_t pin_red, uint8_t pin_green, uint8_t pin_blue)
		
	
		void setBrightnessAll(RGB brightness);
		inline void setBrightnessRed(uint8_t brightness_red)		{this->brightness.red = brightness_red;}
		inline void setBrightnessGreen(uint8_t brightness_green)	{this->brightness.green = brightness_green;}
		inline void setBrightnessBlue(uint8_t brightness_blue)		{this->brightness.blue = brightness_blue;}
		
		void setFadeAll(int8_t fade_red, int8_t fade_green, int8_t fade_blue);
		inline void setFadeRed(int8_t fade_red)		{this->fade_red = fade_red;}
		inline void setFadeGreen(int8_t fade_green)	{this->fade_green = fade_green;}
		inline void setFadeBlue(int8_t fade_blue)	{this->fade_blue = fade_blue;}
		
		void getBrightnessAll(RGB brightness) const;
		inline uint8_t getBrightnessRed() const		{return brightness.red;}
		inline uint8_t getBrightnessGreen() const	{return brightness.green;}
		inline uint8_t getBrightnessBlue() const		{return brightness.blue;}
		
		void getFadeAll(int8_t *fade_red, int8_t *fade_green, int8_t *fade_blue) const;
		inline int8_t getFadeRed() const		{return fade_red;}
		inline int8_t getFadeGreen() const		{return fade_green;}
		inline int8_t getFadeBlue() const		{return fade_blue;}
		
		void turnOnAll();
		inline void turnOnRed() const	{analogWrite(pin_red, brightness.red);} 
		inline void turnOnGreen() const	{analogWrite(pin_green, brightness.green);}
		inline void turnOnBlue()	const	{analogWrite(pin_blue, brightness.blue);}
	
		void turnOffAll();
		void turnOffRed();
		void turnOffGreen();
		void turnOffBlue();
	
		void fadingAll();
		void fadingRed();
		void fadingBlue();
		void fadingGreen();
		
}

#endif