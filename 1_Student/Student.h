#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


class Student{
	private:
		int roll;
		string name;
		string course;
	public:
		// Default constructor
		Student();

		// Parametric constructor
		Student(int, string, string);

		// Function to accept data
		void accept();

		// Function to display data
		void display();

		// Getter function for roll number
		int getRoll();

		// Function to find student by roll no
		static void findStudent(int, Student *, int);
	
		// Destructor
		~Student();

};


#endif
