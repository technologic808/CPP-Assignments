#include "Time.h"

// default constructor
Time::Time(){
//cout<<endl<<"DEF CTOR"<<endl;
}

// Parameterized constructor
Time::Time(int h, int m, int s):hours{h}, minutes{m}, seconds{s}{
//cout<<endl<<"PARA CTOR"<<endl;
}

// Destructor
Time::~Time(){}

// Function to display time
void Time::display(){
cout << hours << " : " << minutes << " : " << seconds << endl;
}

// Function to convert time to integer for calculations
int Time::timeToInt(){
	return (hours * 3600) + (minutes * 60) + (seconds);
}

// Function to convert integer back to time object 

Time Time::intToTime(int t){
	Time t1;
	t1.hours = t / 3600;
	t1.minutes = (t % 3600) / 60;
	t1.seconds = (t % 3600) % 60;
	return t1;
}

// Function to compare two time objects 
bool Time::compare(Time t1,Time t2){
	if (t1.timeToInt() == t2.timeToInt()) return true;
	else return false;
}

// Function to find out difference between two time objects
int Time::difference(Time t1, Time t2){
	return abs(t1.timeToInt() - t2.timeToInt());
}
