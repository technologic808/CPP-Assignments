#ifndef PAYSLIP_H
#define PAYSLIP_H

#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Payslip{
	private:
		int empNo;
		string empName;
		int da;
		int hra;
		int basicSalary;
	public:
		// Default constructor
		Payslip();

		// Parametrized constructor
		Payslip(int, string, int, int, int);

		// Function to accept data input
		void accept();

		// Function to display data 
		void display();

		// Function to calculate salary from da, basic and hra
		int calculate();
};

#endif
