#include<iostream>
using namespace std;

int fibo(int num){

    if(num <= 1){
        return num;
    }
    return fibo(num-1) + fibo(num-2);
}

int main(){

    int num;
    cout << "Enter term: ";
    cin >> num;

    cout << "The term in fibonacci: " << fibo(num) << endl;

    return 0;
}