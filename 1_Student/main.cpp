#include"Student.h"

int main(){
	
	// take size of array
	int n;
	cout << "\nHow many students do you want to enter? ";
	cin >> n;	

	// declare array of student objects
	Student* arr = new Student[n];

	// accept values for the student array objects
	for (int i = 0; i < n; i++){
		arr[i].accept();
	}	
	
	// display values of the student array objects
	for (int i = 0; i < n; i++){
		arr[i].display();
	}
	
	// declare integer to store roll number to search in the array
	int r1;

	// take input from user to find roll number
	cout << "\nEnter roll number of student to find: ";
	cin >> r1;

	// find student by roll number
	Student::findStudent(r1, arr, n);

	// free the memory in the array	
	delete[]arr;
}
