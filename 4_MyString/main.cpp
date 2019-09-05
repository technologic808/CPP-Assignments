#include"MyString.h"

int main(){
	MyString s;
	cout <<endl<< "enter string size  ";
	int size;
	cin >> size;

	cout << endl;
	cout << "\nEnter the string   ";
	s[size];
	char* sPtr = s.getStringPtr();
	for (int i = 0; i < size; i++){
		cin >> sPtr[i];
	}

	cout << endl;
	
	s.display();

	cout <<"\n\n\n";

	cout <<"\nSize: ";
	cin >> size; 
	MyString test(size);

	char* p = test.getStringPtr();
	cout << "\n\nString: ";
	for(int i = 0; i < size; i ++){
		cin >> p[i];
	}

	cout << "\n\n";
	test.display();
	cout << endl;

	cout << "\nTest copy constructor\n";
	MyString copy = test;
	copy.display();
	cout << endl;
	
	cout << "\nTest\n";
	



}
