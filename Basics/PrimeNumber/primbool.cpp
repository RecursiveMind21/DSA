#include<iostream>
using namespace std;

bool isPrime(int num){

    if(num==1)
        return true;

    if(num==2)
        return true;

    if(num>2){
        for(int i = 2; i<num;i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    return false;
}

int main(){

    int number;
    cout << "Enter the number to be checked as prime: ";
    cin >> number;

    if(number==0){
        cout << "The number " << number << "is neither prime nor composite." << endl;
        exit(0);
    }
        

    if(isPrime(number))
        cout << "The number " << number << " is prime number."<< endl;

    else    
        cout << "The number " << number << " is not prime number."<< endl;
}