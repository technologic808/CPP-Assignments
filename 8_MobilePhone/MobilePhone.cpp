#include"MobilePhone.h"

// Default constructor
MobilePhone::MobilePhone():modelNo{""}, price{0}, manufacturer{""}, quantity{""}{}

// Parametrized constructor
MobilePhone::MobilePhone(string model, float p, string manu, string q):modelNo{model}, price{p}, manufacturer{manu}, quantity{q}{}

// Function to accept data input
void MobilePhone::accept(){
	cout << "\nModel Number: ";
	cin >> modelNo;
	cout << "\nPrice: ";
	cin >> price;
	cout << "\nManufacturer: ";
	cin >> manufacturer;
	cout << "\nQuantity: ";
	cin >> quantity;
	cout << endl;
}

// Function to display data 
void MobilePhone::display(){
	cout << "\nMobile Phone Details\n";
	cout << "\nModel Number: " << modelNo << endl;
	cout << "\nPrice: " << price << endl;
	cout << "\nManufacturer: " << manufacturer << endl;
	cout << "\nQuantity: " << quantity << endl;
}

// Function to search model availability 
MobilePhone MobilePhone::searchModel(string model){
	
}


