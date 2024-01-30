#include<iostream>
using namespace std;

bool isPrime(int num)
{   
    if(num <= 1){
        return true;
    }

    for(int i = 2; i<num; i++){
    
        if((num%i)==0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cout << "Enter a number to checked as prime:";
    cin >> num;

    if(isPrime(num))
        cout << "The number " << num << " is prime." << endl;

    else 
        cout << "The number " << num << " is not prime." << endl;
}