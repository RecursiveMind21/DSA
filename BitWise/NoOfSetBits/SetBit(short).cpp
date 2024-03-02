#include<iostream>
using namespace std;

int NoOfSetBit(int a,int b){
    
    int count = 0;

    while(a!=0 | b!=0){

        if(a & 1 == 1){
            count++;
        }
        if(b & 1 == 1){
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}

int main(){
    int a,b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "No of set bit in a and b: " << NoOfSetBit(a,b) << endl;

    return 0;
}