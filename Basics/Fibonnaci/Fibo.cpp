#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter the total terms in fibbonaci series: ";
    cin >> num;

    int a = 0;
    int b = 1;

    if(num == 0){
        exit(0);
    }

    if(num == 1){
        cout << a << endl;
    }

    if(num == 2){
        cout << a << " " << b << " "; 
    }

    int sum = 0;

    if(num>2){

        cout << a << " " << b << " "; 

        for(int i = 1; i <= (num-2); i++){
            sum = a+b;
            cout << sum << " " ;

            a = b;
            b = sum;
        }
    }

    return 0;
}