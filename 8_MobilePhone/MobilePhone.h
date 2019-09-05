#ifndef _MOBILEPHONE_H_
#define _MOBILEPHONE_H_

#include<iostream>
#include<string>
#include<vector>
#include<exception>
#include<stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::runtime_error;

class MobilePhone{
	private:
		string modelNo;
		float price;
		string manufacturer;
		string quantity;
	public:
		// Default constructor
		MobilePhone();

		// Parametrized constructor
		MobilePhone(string, float, string, string);

		// Function to accept data input
		void accept();

		// Function to display data 
		void display();

		// Function to get model number
		string getModel();

		// Function to get quantity
		string getQuantity();

		// Function to search model availability 
		static string searchModel(string , vector<MobilePhone>);
};

#endif
