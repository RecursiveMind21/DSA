#include<iostream>
using namespace std;

void SetBit(int a, int b){

    int count = 0;

    while(a!=0 | b!=0){

        if(a&1 == 1){
            count++;
            a = a >> 1;
        }
        else{
            a = a >> 1; 
        }
        if(b&1 == 1){
            count++;
            b = b >> 1;        }
        else{
            b = b >> 1;   
        }
    }

    cout << "Total Number of SetBits are: " << count << endl;

}

int main(){

    int n1, n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;

    SetBit(n1,n2);

    return 0;
}