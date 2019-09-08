#include"Shape.h"

const float PI = 3.14;

class Circle : public Shape{
	private:
		int radius;
	public:
		Circle();
		Circle(int);
		float perimeter();
		float area();
};
