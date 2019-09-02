#include"Date.h"

int main(){
	//Date d1(21, 4, 1994);
	//Date d2(2, 5, 1995);
	
	Date d1;
	Date d2;
	d1.accept();
	d2.accept();

	int diff = d1 - d2;
	cout << "\nThe difference is " << diff << " days.\n";

	cout << "\nCheck equals to  and not equal to operator overloading\n";
	if (d1 == d2) cout << "\nThe dates are same.\n";
	else if(d1 != d2) cout << "\nThe dates are different.\n";
	else cout << "\nOperator overloading error\n";

	// check all functions
	
	// Check reconversion
	cout << "\nDate 1 is ";
	d1.display();
	cout << endl;

	cout << "\nDate 1 converted to integer is ";
	int conValue = d1.dateToInt();
	cout << conValue;
	cout << endl;
	
	cout << "\nDate 1 integer value converted back to date is ";
	Date dRecon = Date::intToDate(conValue);
	dRecon.display();
	cout << endl;

	// check the add operator 
	
	int daysToAdd;
	cout << "\nHow many days do you want to add to Date 1? ";
	cin >> daysToAdd;
	Date newDatePlusInt = d1 + daysToAdd;
	cout << "\nDate plus integer is ";
	newDatePlusInt.display();
	cout << endl;
	Date newIntPlusDate = daysToAdd + d1;
	cout << "\nInteger plus date is ";
	newIntPlusDate.display();
	cout << endl;

	// check if display is working
	
	cout << "\nDate 1 is ";
	d1.display();
	cout << endl;
	cout << "\nDate 2 is "; 
	d2.display();
	cout << endl;
}
