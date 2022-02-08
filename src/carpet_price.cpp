#include <iostream>
#include <string>
using namespace std;

int main()
{
    string type;
    float msquare;
    float total;
  
    cout << "Enter the size of carpet: ";
    cin >> msquare;  
    cout << "Select carpet type(T/B/S): ";
    cin >> type;
    
	
    if(type == "T"){
        total = (msquare*18.80);
        cout <<"Total :"<<total<<"$"<< endl;
      
    }
    
    else if(type == "B"){
        total = (msquare*17.80);
        cout <<"Total :"<<total<<"$"<< endl;
      
    }
	
    else if(type == "S"){
        total = (msquare*19.20);
        cout <<"Total :"<<total<<"$"<< endl;
      
    }
	
    else
        cout <<"Please enter valid input!"<< endl;
}
