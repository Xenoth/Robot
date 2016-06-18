#ifndef RGB_h
#define RGB_h

class RGB
{
	public :
		uint8_t red, green, blue;
	
	RGB();
	RGB(uint8_t red, uint8_t green, uint8_t blue);
	
	inline void setRed(uint8_t red)		{this->res = red;}
	inline void setGreen(uint8_t green)		{this->green = green;}
	inline void setBlue(uint8_t blue)		{this->blue = blue;}
	
	inline uint8_t getRed() const		{return red;}
	inline uint8_t getGreen() const	{return green;}
	inline uint8_t getBlue() const		{return blue;}
}

#endif