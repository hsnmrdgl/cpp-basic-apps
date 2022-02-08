#include<iostream>
using namespace std;


int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

int main()
{
	int input;
	
    cout << "Enter a number:";
	cin >> input;
	
	if(input<0){
	    cout << "Please enter positive valid input!";
	    return 0;
	}
	
	cout << "Factorial of " << input << " is: " << factorial(input);
	
    return 0;
}