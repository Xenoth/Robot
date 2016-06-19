#ifndef IRSENSOR_H
#define IRSENSOR_H

class IRSensor
{
	private :
		
		uint8_t output_pin;
	
	public :
		
		IRSensor(uint8_t output_pin);
	
		bool obstacleDetected();
}

#endif