#include "Circle.h"
#include "Square.h"

int main(){
	Shape* s;
	
	Circle c(5);
	Square s(5);

	cout << "\nArea of circle is " << c.area() << endl;
	cout << "\nArea of square is " << s.area() << endl;
	cout << "\nPerimeter of circle is " << c.perimeter() << endl;
	cout << "\nPerimeter of square is " << s.perimeter() << endl;

}
