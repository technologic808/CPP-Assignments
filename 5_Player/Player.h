// preprocessor statements
#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string>

// import functions from std library
using std::cout;
using std::cin;
using std::endl;
using std::string;

// Class Definition
class Player{
	private:	// private members
		string name;
		int age;
		string country;
	public:		// public members and functions
		Player();
		Player(string, int, string);
			
		// Copy constructor
		Player(const Player&);

		void accept();
		void display();
		char getFirstLetter();		
};

void playerSortName(Player[], int);
void playerSortAge(Player[], int);

#endif
