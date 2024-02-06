#include<iostream>
#include<math.h>
using namespace std;

bool armstrong(int num)
{
    int store = num;
    int value = num;
    int sum = 0;
    int count = 0;

    while(num != 0){
        int rem = num % 10;
        count ++;
        num = num/10;
    }
    
    while(value != 0){

        int rem = value % 10;
        sum = sum + pow(rem, count);
        value = value / 10;
    }
    
    if(sum == store){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter the number to be checked as armstrong number: ";
    cin >> num;

    if(armstrong(num)){
        cout << "The number " << num << " is armstrong number";
    }
    else{
        cout << "The number " << num << " is not armstrong number ";
    }
}