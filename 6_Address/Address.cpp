#include"Address.h"

// Default constructor
Address::Address(){cout << "\nDC\n";}

// Parametric Constructor
Address::Address(string h, string co, string a, string ci, string p):house{h}, colony{co}, area{a}, city{ci}, pin{p}{cout << "\nPC\n";}

// Function to accept data
void Address::accept(){
	cout << "\nHouse: ";
	cin >>  house;
	cout << "\nColony: ";
	cin >> colony;
	cout << "\nArea: ";
	cin >> area;
	cout << "\nCity: ";
	cin >> city;
	cout << "\nPin: ";
	cin >> pin;
}

// Function to display data
void Address::display(){
	cout << "\nThe address is \n";
	cout << house << endl;
	cout << colony << endl;
	cout << area << endl;
	cout << city << endl;
	cout << pin << endl;
}

// Function to compare addresses
bool Address::operator ==(Address a2){
	if (house == a2.house && colony == a2.colony && area == a2.area && city == a2.city && pin == a2.pin) return true;
	else return false;
}

// Overload == and != operator
bool Address::operator !=(Address a2){
	if (*this == a2) return false;
	else return true;
}
