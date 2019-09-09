#ifndef TIGER_H_
#define TIGER_H_

#include "Animal.h"

class Tiger : public Animal{
	private:
		float length;
	public:
		Tiger();
		Tiger(float);
		void setLength(float);	
};

#endif
