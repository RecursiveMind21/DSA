//program to exit switch inside infinte loop
#include<iostream>              //header file
using namespace std;

int main(){                     //main function

    int num;
    cout << "Enter a number between 1 and 5: ";
    cin >> num;

    while(1){                   //infinite loop

        switch(num){            //switch inside infinite loop

            case 1: cout << "one" << endl;

            case 2: cout << "two" << endl;

            case 3: cout << "three" << endl;

            case 4: cout << "four" << endl;

            case 5: cout << "five" << endl;

            default: exit(0);               //use of exit function to get out of infinite loop

            exit(0);                    //use of exit function to get out of infinite loop
        }

    }

    return 0;
}