//program to check whether the number is armstrong number or nor
#include<iostream>              //header file
#include<math.h>                
using namespace std;

bool armstrong(int num)         //bool user defined function to check whether the number is 
{                               //armstrong number or not 
    int store = num;            //storing original number
    int value = num;
    int sum = 0;                
    int count = 0;

    while(num != 0)                 //loop to count total digit in the number
    {
        int rem = num % 10;
        count ++;
        num = num/10;
    }
    
    while(value != 0)                   //loop to checking armstrong number
    {
        int rem = value % 10;
        sum = sum + pow(rem, count);
        value = value / 10;
    }
    
    if(sum == store){               //checking armstrong number
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int num;                            //declaring variable for input
    cout << "Enter the number to be checked as armstrong number: "; //for input from user
    cin >> num;

    if(armstrong(num))                  //calling and checking returned value from user defined function
    {
        cout << "The number " << num << " is armstrong number";
    }
    else{
        cout << "The number " << num << " is not armstrong number ";
    }

    return 0;
}