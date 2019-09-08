#include"Circle.h"

Circle::Circle(){}

Circle::Circle(int r):radius(r){}

float Circle::perimeter(){
	return PI * 2 * radius;
}
float Circle::area(){
	return PI * radius * radius;
}
