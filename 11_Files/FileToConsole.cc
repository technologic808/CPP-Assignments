#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){	


	// Create object of input file stream
	ifstream fin("file1.txt");
	
	string s;
	while(fin){
		getline(fin, s);
		cout << s << endl;
	}
}
