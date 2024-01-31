#include<iostream>
using namespace std;

void fibo(int num){

    int a = 0;
    int b = 1;
    int sum = 0;

    if ( num == 1){
        cout << a << endl;
    }
    else if ( num == 2){
        cout << a << " " << b << endl;
    }
    else if (num >= 2){

        cout << a << " " << b << endl;

        for(int i = 0; i<(num-2); i++){
            sum = a + b;
            cout << sum << " " << endl;
            a = b;
            b = sum;
        }
    }
}

int main(){

    int element;

    cout << "Enter the total elements you want in fibonacci:";
    cin >> element;

    if(element==0){
        return 0;
    }

    fibo(element);

}