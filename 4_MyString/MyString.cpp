#include"MyString.h"

// Default constructor
MyString::MyString():p{nullptr}, size{0}{cout<<"\nDC\n";}

// Parametrized constructor
MyString::MyString(int s){
	cout << "\nPC\n";
	size = s;
	p = new char[size];
}

// Copy Constructor
MyString::MyString(const MyString& s){
	cout << "\nCC\n";
	size = s.size;
	p = new char[size];
	for (int i = 0; i < size; i ++){
		p[i] = s.p[i];
	}	
}

// Destructor for clean up
MyString::~MyString(){
	delete[] p;
}

// Function to set the size of string
void MyString::operator [](int s){
	size = s;
	p = new char[size];
}

// Function to get size of string
int MyString::getSize(){
	return size;
}

// Function to get string pointer
char* MyString::getStringPtr(){
	return p;
}

// Function to accept string (overload asssignment operator)
//void MyString::operator =(){
	
//} 

// Function to display the string
void  MyString::display(){
	for(int i = 0; i < size; i ++){
		cout << p[i];
	}
}
