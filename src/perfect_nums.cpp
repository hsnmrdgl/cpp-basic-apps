#include <iostream>
#include <string>
using namespace std;

int main(){

    int small,big,sum;
  
    cout << "Enter lower bound: ";
    cin >> small;
    cout << "Enter higher bound: ";
    cin >> big;
    
    for(int num = small; num <= big; num++){
        sum = 0;
		
        for (int i = 1; i <= num/2; i++){
            if (num % i == 0){
                sum += i;
            }
        }
		
        if (sum == num){
             cout << num <<" is a perfect number.\n";
        }
    }

    return 0;
}
