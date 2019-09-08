/* Create an interface class called shape
 * Create classes that inherit shape class and implement the functionality of the interface
 */


#ifndef SHAPE_H_
#define SHAPE_H_

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

class Shape{
	public:
		virtual float perimeter() = 0;
		virtual float area() = 0;
};

#endif
