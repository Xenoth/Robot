#ifndef LEDRGB_h
#define LEDRGB_h

class LedRGB
{
	private :
		uint8_t pin_red, pin_green, pin_blue;
	
	
	public :
		uint8_t brightness_red, brightness_green, brightness_blue;
		int8_t fade_red, fade_green, fade_blue;
	
		LedRGB(uint8_t pin_red, uint8_t pin_green, uint8_t pin_blue)
		
	
		void setBrightnessAll(uint8_t brightness_red, uint8_t brightness_green, uint8_t brightness_blue);
		inline void setBrightnessRed(uint8_t brightness_red)		{this->brightness_red = brightness_red;}
		inline void setBrightnessGreen(uint8_t brightness_green)	{this->brightness_green = brightness_green;}
		inline void setBrightnessBlue(uint8_t brightness_blue)		{this->brightness_blue = brightness_blue;}
		
		void setFadeAll(int8_t fade_red, int8_t fade_green, int8_t fade_blue);
		inline void setFadeRed(int8_t fade_red)		{this->fade_red = fade_red;}
		inline void setFadeGreen(int8_t fade_green)	{this->fade_green = fade_green;}
		inline void setFadeBlue(int8_t fade_blue)	{this->fade_blue = fade_blue;}
		
		void getBrightnessAll(uint8_t *brightness_red, uint8_t *brightness_green, uint8_t *brightness_blue) const;
		inline uint8_t getBrightnessRed() const		{return brightness_red;}
		inline uint8_t getBrightnessGreen() const	{return brightness_green;}
		inline uint8_t getBrightnessBlue() const		{return brightness_blue;}
		
		void getFadeAll(int8_t *fade_red, int8_t *fade_green, int8_t *fade_blue) const;
		inline int8_t getFadeRed() const		{return fade_red;}
		inline int8_t getFadeGreen() const		{return fade_green;}
		inline int8_t getFadeBlue() const		{return fade_blue;}
		
		void turnOnAll();
		void turnOnRed();
		void turnOnGreen();
		void turnOnBlue();
	
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