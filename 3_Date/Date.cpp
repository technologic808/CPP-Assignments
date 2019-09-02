#include"Date.h"
		
// Default constructor
Date::Date(){cout<<endl<<"DEF C"<<endl;}

// Parameteric constructor
Date::Date(int d, int m, int y): date{d}, month{m}, year{y}{cout<<endl<<"PAR C"<<endl;}

// Destructor
Date::~Date(){}

// Function to accept date from user
void Date::accept(){
	cout << "\nPlease enter date in DD MM YYYY format: ";
	cin >> date >> month >> year;
	cout << endl;
}

// Function to display date
void Date::display(){
	string monthStr[13] = {"", "January", "February", "March", "April",  "May", "June", "July", "August", "September", "October", "November", "December"};
	cout << monthStr[month] << " ";
	cout << date << ", ";
	cout << year;
}

// Function to convert dates to an integer for calculation
int Date::dateToInt(){
	int yearDays = 0;
	int monthDayRef[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int monthDays = 0;
	

	// Iterate through months in the current year
	for(int i = 1; i < month; i++){
		if (i == 2 && year % 4 == 0) monthDays += 29;
		else monthDays += monthDayRef[i];	
	}

	// Iterate through the years upto the current year
	for(int i = 0; i < year; i++){
		// leap year logic
		if (i % 4 == 0) yearDays += 366;
		else yearDays += 365;
	}
	
	// logic to implement
	// 
	// iterate through the months and add 29 in feb if its a leap year 
	// or add 1 to days at the end if feb is there
	//
	// for years, calculate the number of leap years there is since 0000 to year - 1
	// add it to the return value
	
	return yearDays + monthDays + date;
}

// Function to create date object from integer value
Date Date::intToDate(int days){
	// create an integer to keep track of days iterated
	// create integers to store year, month and date
	// iterate through each year and add 365/366 days to the tracker untill we reach a value less than 365/366
	// then move on to iterating months and adding days according to each month until we reach less than 30/31/28/29 
	// then put the remaining value as the date
	// using parametric constructor, create a date and return it
	
	int daysTracker = 0;
	int y = 0, m = 1, d = 0;
	int monthDayRef[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int reducingDays = days;
	// find out the year
	// max number of years possible
	int maxYear = days / 365;
	
	// increment year until we are left with less than one year (accounting for leap years)
	while((reducingDays > 365 && y % 4 == 0) || (reducingDays > 364 && y % 4 != 0)){
		if (y % 4 == 0) reducingDays -= 366;
		else reducingDays -= 365;
		y++;
	}

	// increment month until we have less than one month left (accounting for various month lengths)
	while((reducingDays > 27 && m == 1 && y % 4 != 0 ) || (reducingDays > 28 && m == 1 && y % 4 == 0) || (reducingDays > 29 && (m == 4 || m == 6 || m == 9 || m == 11)) || (reducingDays > 30)){
		if(m == 2 && y % 4 == 0) reducingDays -= 29;
		else reducingDays -= monthDayRef[m];
		m++;
	}
	
	// Remaining days become the date
	d = reducingDays;

	return Date(d, m, y);
}

// Function to find out difference between dates
int Date::operator -(Date d2){
	return abs(dateToInt()-d2.dateToInt());
}

// Function to add integer to date
Date Date::operator +(int days){
	return (intToDate(dateToInt() + days));	
}

// Corollary Function to add date to integer
Date operator +(int i, Date d1){
	return (d1 + i);
}

// Function to compare two dates
bool Date::operator ==(Date d2){
	int di1 = dateToInt();
	int di2 = d2.dateToInt();
	if (di1 == di2) return true;
	else return false;
}
// Corollary function to see if two dates are not equal
bool Date::operator !=(Date d2){
	if (*this == d2) return false;
	else return true;
}
