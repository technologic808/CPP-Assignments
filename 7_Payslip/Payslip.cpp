#include"Payslip.h"

// Default constructor
Payslip::Payslip(){cout << "\nDC\n";}

// Parametrized constructor
Payslip::Payslip(int e, string emp, int d, int h, int b):empNo{e}, empName{emp}, da{d}, hra{h}, basicSalary{b}{cout << "\nPC\n";}

// Function to accept data input
void Payslip::accept(){
	cout << "\nEmployee Number: ";
	cin >> empNo;
	cout << "\nName: ";
	cin >> empName;
	cout << "\nBasic Salary: ";
	cin >> basicSalary;
	cout << "\nDearness Allowance: ";
	cin >> da;
	cout << "\nHousing and Rent Allowance: ";
	cin >> hra;
	cout << endl;
}

// Function to display data 
void Payslip::display(){
	cout << "\nThe payslip details are as follows ";	
	cout << "\nEmployee Number: ";
	cout << empNo;
	cout << "\nName: ";
	cout << empName;
	cout << "\nBasic Salary: ";
	cout << basicSalary;
	cout << "\nDearness Allowance: ";
	cout << da;
	cout << "\nHousing and Rent Allowance: ";
	cout << hra;
	cout << endl;
}

// Function to calculate salary from da, basic and hra
int Payslip::calculate(){
	// Salary is equal to da + basic + hra
	return basicSalary + da + hra;
}

