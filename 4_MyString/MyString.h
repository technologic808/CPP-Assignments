#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

class MyString{
	private:
		char* p;
		int size;
	public:
		// Default constructor
		MyString();

		// Parametrized constructor
		MyString(int);

		// Copy Constructor
		MyString(const MyString&);

		// Destructor for clean up
		~MyString();

		// Function to set the size of string
		void operator[](int);

		// Function to get size of string
		int getSize();

		// Function to get string ptr
		char* getStringPtr();

		// Function to display the string
		void display();

};

#endif
