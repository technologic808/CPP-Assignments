#include "MobilePhone.h"

int main(){
	int option; // Store the user choice
	int size = 1; // Store the number of mobile phone objects

	// Create vector to store phone objects
	vector<MobilePhone> phones;

	// Welcome
	cout << "\nHi There!\n";
	

	// Menu
	while(option != 0){
		cout << "\nPlease select an operation: \n";
		cout << "\n1. Add Mobile";
		cout << "\n2. Display List of available mobiles";
		cout << "\n3. Find out quantity of a particular mobile";
		cout << "\n4. Find out availability of a particular model";
		cout << "\n\n0. Exit";
		cout << endl;
		cin >> option;
		/*
		if (option == 1){
			if(size == 1) MobilePhone* m = new MobilePhone[1];
			else {
				MobilePhone* m1 = new MobilePhone[++size];
				for(int i = 0; i < size - 1; i ++){
					m1[i] = m[i];
				}
				MobilePhone m2 = m1[size];
			}
		}
		*/

		if (option == 1){
			size ++;	
			MobilePhone m;
			m.accept();
			phones.push_back(m);
			cout << "\nVec size is  " << phones.size();
		}
		if (option == 2){
			for(int i = 0; i < size - 1; i++){
				phones[i].display();
			}
		}
	
	}



	// Goodbye
	cout << "\nBye!\n\n";
	



	// Features to implement 
	//
	// 1. Add mobile
	//
	// This feature will  add a mobile phone to an existing array of mobile phone objects
	// If no array is present, it will initialize an array? No. 
	// The array will be initialized in the main function before starting the logic
	// The array feature needs to create an array dynamically 
	// then copy the existing array to the new array with size one greater than the old one
	// in the last location, it will create an object which will store the new device information
	// 
}

void addMobile(){
	
}


