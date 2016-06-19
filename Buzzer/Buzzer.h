#ifndef BUZZER_H
#define BUZZER_H

class Buzzer
{
	private :
		
		uint8_t pin;
	
	public :
		
		uint8_t voltage;
	
		Buzzer(uint8_t pin);
		
		inline void setVoltage(uint8_t voltage)		{this->voltage=voltage;}
		inline uint8_t getVoltage() const			{return voltage;}
		
		inline void turnOn() const				{analogWrite(pin, voltage);}
		void turnOn(uint8_t voltage);
		
		void turnOf();
}

#endif