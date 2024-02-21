#include<iostream>
using namespace std;

void convert(int num){
    for(int i = 31; i>=0;i--){
        int bit  = (num >> i) & 1;
        cout << bit;
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    convert(num);

    return 0;
}