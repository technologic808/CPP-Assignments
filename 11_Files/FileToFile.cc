#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	ifstream fin("file1.txt");
	ofstream fout("file2.txt");
	
	string s;
	if(fin){
		getline(fin, s);
		fout << s;
	}

}
