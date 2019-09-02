#ifndef TIME_H
#define TIME_H

#include<iostream>
#include<cstdlib>
using std::cin;
using std::cout;
using std::endl;

class Time{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		// default constructor
		Time();

		// Parameterized constructor
		Time(int, int, int);

		// Destructor
		~Time();

		// Function to display time
		void display();

		// Function to convert time to integer value for calculations
		int timeToInt();

		// Function to convert integer value back to time
		static Time intToTime(int);

		// Function to compare two time objects 
		static bool compare(Time, Time);

		// Function to find out difference between two time objects
		static int difference(Time, Time);
};

#endif
