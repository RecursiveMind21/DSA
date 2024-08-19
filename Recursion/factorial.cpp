#include<iostream>
using namespace std;

int factorial(int num){

    //base case
    if(num == 0){
        return 1;
    }

    return num * factorial(num-1);
}

int main(){

    int num;
    cout << "Enter the number whose factorail you want: ";
    cin >> num;

    cout << "Factorail: " << factorial(num) << endl;


    return 0;
}