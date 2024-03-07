#include<iostream>

using namespace std;

int main(){

    int num;
    cout << "Enter the number till you want the sum from 1: ";
    cin >> num;

    int sum = 0;

    for(int i = 1; i<=num; i++){
        sum = sum + i;
    }

    cout << "The sum of number from 1 to " << num << " is " << sum << endl;
}