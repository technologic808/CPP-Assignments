#include"Address.h"

int main(){
	cout << "\nCreate two instances of address\n";
	Address a1, a2;

	cout << "\nAccept inputs for them\n";
	a1.accept();
	a2.accept();

	cout << "\nCompare them\n";
	if (a1 == a2) cout << "\nSame ==\n";
	else cout << "\nDifferent ==\n";

	if (a1 != a2) cout << "\nDifferent !=\n";
	else cout << "\nSame !=\n";

	cout << "\nDisplay the two addresses\n";
	a1.display();
	a2.display();
	
}
