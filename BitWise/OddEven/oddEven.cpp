//program to check whether the number is odd or even using bitwise and (without using arithemetic operator)

#include<iostream>                      //header file
using namespace std;

bool OddEven(int num){                  //boolean function to check number is odd or not

    if(num&1 == 1)                      //logic for odd
        return true;

    else   
        return false;
}
int main(){                                                             //main function

    int num;                                                            //declaring variable for input
    cout << "Enter the number to be check as odd or even: ";
    cin >> num;

    if(OddEven(num))                                                    //calling userdefined function
        cout << "The number " << num << " is odd." << endl;

    else   
        cout << "The number " << num << " is even." << endl;

    return 0;
}