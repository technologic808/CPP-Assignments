#include"Time.h"

int main(){
	Time t1(17, 26, 30);
	Time t2(18, 0, 0);
	cout<<"\nT1 is ";
	t1.display();
	cout<<"\nT2 is ";
	t2.display();

	// code to test compare function
	if (Time::compare(t1, t2)){
		cout<<"\nTimes are same";
	}
	else{
		cout<<"\nTimes are different";
	}


	// code to test difference function
	cout << "\nThe difference in times is ";
	Time::intToTime(Time::difference(t1, t2)).display(); 

	// code to test the reconversion feature
	
	int testReconversion = t1.timeToInt();
	cout << "\nt1.timeToInt() is " << testReconversion;
	Time t3 = Time::intToTime(testReconversion);
	cout << "\nT3 is ";
	t3.display();
}
