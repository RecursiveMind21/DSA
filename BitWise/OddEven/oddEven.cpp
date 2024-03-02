#include<iostream>
using namespace std;

bool OddEven(int num){

    if(num&1 == 1)
        return true;

    else   
        return false;
}
int main(){

    int num;
    cout << "Enter the number to be check as odd or even: ";
    cin >> num;

    if(OddEven(num))
        cout << "The number " << num << " is odd." << endl;

    else   
        cout << "The number " << num << " is even." << endl;

    return 0;
}