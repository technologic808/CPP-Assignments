#include"Shape.h"

class Square : public Shape{
	private:
		int side;
	public:
		Square();
		Square(int);
		float perimeter();
		float area();
};
