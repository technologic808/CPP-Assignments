#include"Player.h"

// Default constructor
Player::Player(){}

//Parametric constructor
Player::Player(string n, int a, string c):name{n}, age{a}, country{c}{}

// Copy constructor
Player::Player(const Player &p2):name{p2.name}, age{p2.age}, country{p2.country}{}

// Function to accept player member input
void Player::accept(){
	cout << "\nEnter the name of the player: ";
	cin >> name;

	cout << "\nEnter the age of the player: ";
	cin >> age;
	
	cout << "\nEnter the country of the player: ";
	cin >> country;
}

// function to display player members
void Player::display(){
	cout << "\nThe name of the player is " << name << endl;
	cout << "\nThe age of the player is " << age << endl;
	cout << "\nThe country of the player is " << country << endl;
}

// Getter function for first letter of name
char Player::getFirstLetter(){
	return name[0];
}

// function to sort player array based on player name
void playerSortName(Player arr[], int n){
	for(int j = 0; j < n; j++){
		for(int i = 0; i < n - 1; i++){
			Player temp;
			if(arr[i].getFirstLetter() > arr[i+1].getFirstLetter()){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
}

