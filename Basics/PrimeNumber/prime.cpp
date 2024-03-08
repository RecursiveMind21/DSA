//program to check whether the entered number is prime or not 
#include<iostream>
using namespace std;

int main(){                 //amin function

    int num;
    cout << "Enter the number to be checked as prime: ";
    cin >> num;

    if(num == 0){                   //edge case
        cout << "The number " << num << " is not prime." << endl;
        exit(0);
    }

    if(num == 1){                   //edge case
        cout << "The number " << num << " is prime" << endl;
        exit(0);
    }

    //time complexity -> O(num)
    for(int i= 2; i<num; i++){                  //logic to check whether the number is prime or not
        if(num%2 == 0){
            cout << "The number " << num << " is not prime" << endl;
        }
    }
    cout << "The number " << num << " is prime" << endl;

    return 0;
}