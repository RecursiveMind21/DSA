//program to check whether the entered number is prime or not using boolean function
#include<iostream>                  //header file
using namespace std;

bool isPrime(int num){              //boolean function to check whether the number is prime or not

    if(num==1)                      //edge case
        return true;

    if(num==2)                      //edge case
        return true;

    if(num>2){                          //logic to check whether the number is prime or not

        //time complexity -> O(num)
        for(int i = 2; i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main(){                             //main function

    int number;
    cout << "Enter the number to be checked as prime: ";
    cin >> number;

    if(number==0){                          //edge case
        cout << "The number " << number << "is neither prime nor composite." << endl;
        exit(0);
    }
        

    if(isPrime(number))                    
        cout << "The number " << number << " is prime number."<< endl;

    else    
        cout << "The number " << number << " is not prime number."<< endl;
}