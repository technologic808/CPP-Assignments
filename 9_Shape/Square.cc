#include"Square.h"

Square::Square(){}

Square::Square(int s):side(s){}

float Square::perimeter(){
	return side * 4;
}
float Square::area(){
	return side * side;
}
