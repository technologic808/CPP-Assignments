#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iostream>

using namespace std;

class Animal{
	private:
		float weight;
	public:
		Animal();
		Animal(float);
		virtual void setWeight(float);	
};

#endif
