#include"Payslip.h"

int main(){
	cout << "\nInitiailize payslip objects\n";
	Payslip p1, p2;
	cout << "\nEnter payslip details\n";
	p1.accept();
	p2.accept();

	cout << "\nCalculate salary for p1 and p2\n";
	cout <<"\nSalary 1 is : " << p1.calculate() << endl;
	cout <<"\nSalary 2 is : " << p2.calculate() << endl;

	cout << "\nDisplay payslips\n";
	p1.display();
	p2.display();

}
