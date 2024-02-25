//program involving use of exit statement
#include<iostream>          //header file
using namespace std;

int main(){                 //main function

    int a;                  //declaring variable 
    cin >> a;

    while(1){               //infinite loop
        switch(a){          //switch
            
            case 1: cout << "one" << endl;

            case 2: cout << "two" << endl;

            case 3: cout << "three" << endl;

            case 4: cout << "four" << endl;

            case 5: cout << "five" << endl;

            case 6: cout << "six" << endl;

            default: exit(0);           //exit statement as default case

            exit(0);                    //exit statement to get out of infinite loop
        }
    }
    return 0;
}