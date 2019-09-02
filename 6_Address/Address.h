#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Address{
	private:
		string house;
		string colony;
		string area;
		string city;
		string pin;
	public:
		// Default constructor
		Address();

		// Parametric Constructor
		Address(string, string, string, string, string);

		// Function to accept data
		void accept();

		// Function to display data
		void display();

		// Function to compare addresses
		bool operator ==(Address);

		// Overload == and != operator
		bool operator !=(Address);
};

#endif
