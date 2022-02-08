#include <iostream>
using namespace std;

int main() {
	int grade1,grade2,fgrade;
	float avg;
	
	cout << "Enter first grade : ";
	cin >> grade1;
	cout << "Enter second grade : ";
	cin >> grade2;
	cout << "Enter final grade : ";
	cin >> fgrade;
	
	
	//%20first, %20second, %60final 
	avg = (grade1*20/100)+(grade2*20/100)+(fgrade*60/100);
	cout << "\nYour average is : " << avg << endl;
	
	if(avg>=85)
		cout << "You get A\n";
	
	else if((avg>=70) && (avg<85)) 
		cout << "You get B\n";
	
	else if((avg>=60) && (avg<70)) 
		cout << "You get C\n";
	
	else if((avg>=50) && (avg<60)) 
		cout << "You get D\n";
	
	else 
		cout << "You get F\n";
}