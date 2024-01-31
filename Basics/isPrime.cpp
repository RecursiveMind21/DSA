//program to check whether the entered number is prime or not 

#include<iostream>                          //header file
using namespace std;

bool isPrime(int num)                       //user defined funcrion for checking prime number
{   
    if(num <= 1){                           //edge case
        return true;
    }

    for(int i = 2; i<num; i++){             //to check whether the number is prime or not 
    
        if((num%i)==0)                      
            return false;
    }
    return true;
}

int main()                                  //main function
{
    Again:

    int num;                                            //declaring variable for input
    cout << "Enter a positive number to checked as prime:";      //for input from user
    cin >> num; 

    if(num < 0){
        goto Again;
    }

    if(isPrime(num))                                                //calling user defined function
        cout << "The number " << num << " is prime." << endl;

    else 
        cout << "The number " << num << " is not prime." << endl;
}