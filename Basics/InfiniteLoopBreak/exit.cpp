#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter a number between 1 and 5: ";
    cin >> num;

    while(1){

        switch(num){

            case 1: cout << "one" << endl;

            case 2: cout << "two" << endl;

            case 3: cout << "three" << endl;

            case 4: cout << "four" << endl;

            case 5: cout << "five" << endl;

            default: exit(0);

            exit(0);
        }

    }

    return 0;
}