#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the number to be checked as prime: ";
    cin >> num;

    if(num == 0){
        cout << "The number " << num << " is not prime." << endl;
        exit(0);
    }

    if(num == 1){
        cout << "The number " << num << " is prime" << endl;
        exit(0);
    }

    for(int i= 2; i<num; i++){
        if(num%2 == 0){
            cout << "The number " << num << " is not prime" << endl;
        }
    }
    cout << "The number " << num << " is prime" << endl;

}