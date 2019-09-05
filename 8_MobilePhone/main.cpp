#include "MobilePhone.h"

int main(){
	int option = 1; // Store the user choice
	int size = 1; // Store the number of mobile phone objects

	// Create vector to store phone objects
	vector<MobilePhone> phones;
	MobilePhone m1, m2, m3, m4;

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
		switch (option){

			// Add a mobile phone
			case 1:
				{
				size ++;	
				//MobilePhone m1;
				m1.accept();
				phones.push_back(m1);
				cout << "\nVec size is  " << phones.size();
				break;
				}
		
			// Display the list of mobile phones in the array
			case 2:
				{
				for(int i = 0; i < size - 1; i++){
					phones[i].display();
				}
				break;
				}

			// Find out quantity of a particular mobile model
			case 3:
				{
				// Take input from user for model of phone
				string s;
				cout << "\nEnter the phone model to search ";
				cin >> s;
				cout << endl;

				// Search in vector
				String sq = MobilePhone::searchModel(s, phones);
			
				// Display the quantity if available
				if (sq == "") cout << "\nSorry, the mobile is not available\n";
				else{
					cout << endl << "The quantity for model " << s << " is ";
					cout << sq << " units\n";
				}
				break;
				}

			// Find out availability of a particular model
			case 4:
				{
				// Copy Input code from case 3

				// Take input from user for model of phone
				string s1;
				cout << "\nEnter the phone model to search ";
				cin >> s1;
				cout << endl;

				// Search in vector
				try {
					m4 = MobilePhone::searchModel(s1, phones);
				}

				catch (runtime_error e){
					cout << endl <<  e.what() << endl;
				}
				
				// Tell user about availability
				
				cout << "\nThe model you searched is available with us \n";

				break;
				}
			
			default:
				{
				cout << "\n\nPlease enter a valid input...\n\n";				
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


