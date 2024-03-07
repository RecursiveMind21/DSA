#include<iostream>
using namespace std;

void EvenSum(int num){

    int sum = 0;

    for(int i = 2;i<=num;i++){
        if(i%2 == 0){
            sum = sum + i;
        }
    }
    cout << "Sum of all even number till " << num << " is " << sum << endl;
}

int main(){

    int num;
    cout << "Enter the last term till which you want the sum:";
    cin >> num;

    EvenSum(num);

    return 0;
}