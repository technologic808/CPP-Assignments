#include"Student.h"

// Default constructor
Student::Student(){
	//cout << "\nDefault Constructor"<<endl;
}

// Parametric constructor
Student::Student(int r, string n, string c):roll{r}, name{n}, course{c}{
	//cout << "\nParametric Constructor"<<endl;
}

// Destructor
Student::~Student(){}

// Function to accept data
void Student::accept(){
	cout << "\nPlease enter the roll number: ";
	cin >> roll;
	cout << "\nPlease enter the student name: ";
	cin.ignore();
	getline(cin, name);
	cout << "\nPlease enter the course name: ";
	cin >> course;
	cout << endl;
}

// Function to display data
void Student::display(){
	cout << "\nStudent Details ";
	cout << "\nRoll Number " << roll;
	cout << "\nName: " << name;
	cout << "\nCourse: " << course << endl;
}

// Getter function for roll number
int Student::getRoll(){return roll;}

// Function to find student by roll no

void Student::findStudent(int r, Student *s, int size){
	for(int i = 0; i < size; i++){
		if(s[i].roll == r) s[i].display();
	}
}


