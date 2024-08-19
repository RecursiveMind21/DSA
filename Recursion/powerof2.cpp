#include<iostream>
using namespace std;

int power(int num){

    //base case
    if(num == 0){
        return 1;
    }
    return 2* power(num -1);
}

int main(){

    int num;
    cout << "Enter power of two: ";
    cin >> num;

    cout << "Ans: " << power(num) << endl;

    return 0;
}