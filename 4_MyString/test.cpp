#include<iostream>
using namespace std;


int main(){
	char* p = new char[10];
	

	char c = 'a';
	char d = 'd';

	p[0] = c;
	p[1] = d;
	
	int size = 3;

	cout << p;
	delete[]p;
}
