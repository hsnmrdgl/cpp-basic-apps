#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int array[50];
    int tmp;
    
	//insert random elements
    for(int i=1; i<=50; i++)
    {
        array[i]=(rand() % 100) + 1;
    }
    
    //print array
    for(int i=1; i<=50; i++)
    {
        if(i==1)
            cout << "array = [" << array[i] <<",";
        else if(i!=50)
            cout << array[i] <<",";
        else
            cout << array[i] <<"]\n";
    }
    
    //descending order
    for (int i=1; i<=50; i++)
    {
        for (int j=i+1; j<=50; j++)
        {
            if (array[i] < array[j])
            {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    
     //print array
    for(int i=1; i<=50; i++)
    {
        if(i==1)
            cout << "array(azalan) = [" << array[i] <<",";
        else if(i!=50)
            cout << array[i] <<",";
        else
            cout << array[i] <<"]\n";
    }
}