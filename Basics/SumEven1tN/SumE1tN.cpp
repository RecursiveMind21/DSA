//program to calculate the sum of all even number from 1 to entered number
#include<iostream>                      //header file
using namespace std;

void EvenSum(int num){                  //function to calculate sum

    int sum = 0;

    //time complexity -> O(num)
    for(int i = 2;i<=num;i++){              //logic to calculate sum
        if(i%2 == 0){
            sum = sum + i;
        }
    }
    cout << "Sum of all even number till " << num << " is " << sum << endl;
}

int main(){                     //main function

    int num;
    cout << "Enter the last term till which you want the sum:";
    cin >> num;

    EvenSum(num);                   //call to user defined funton EvenSum

    return 0;
}