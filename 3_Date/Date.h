#ifndef DATE_H
#define DATE_H

#include<iostream>
#include<cstdlib>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Date{
	private:
		int date;
		int month;
		int year;
	public:
		// Default constructor
		Date();

		// Parameteric constructor
		Date(int, int, int);

		// Destructor
		~Date();

		// Function to accept date from user
		void accept();
		
		// Function to display date
		void display();

		// Function to convert date to integer for calculation
		int dateToInt();

		// Function to convert integer back to a date
		static Date intToDate(int);
		
		// Function to find out difference between dates
		int operator -(Date);

		// Function to add days to a date
		Date operator +(int);

		// Corollary function to overload addition in the reverse order (i.e. "integer +  date" vs "date + integer" )
		//Date operator +(int, Date);

		// Function to compare two dates
		bool operator ==(Date);

		// Corollary Funtion to check if dates are not equal
		bool operator !=(Date);

};
Date operator +(int, Date);

#endif
