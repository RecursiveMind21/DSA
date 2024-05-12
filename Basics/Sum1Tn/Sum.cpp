//program to calculate the sum of number from 1 to entered number
#include<iostream>              //header file

using namespace std;

int main(){                     //main function

    int num;
    cout << "Enter the number till you want the sum from 1: ";
    cin >> num;

    int sum = 0;

    //time complexity -> O(num)
    for(int i = 1; i<=num; i++){            //logic to calculate sum
        sum = sum + i;
    }

    cout << "The sum of number from 1 to " << num << " is " << sum << endl;

    return 0;
}