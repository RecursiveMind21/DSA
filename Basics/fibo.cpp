//program to print fibonacci series 

#include<iostream>                          //header file
using namespace std;

void fibo(int num){                         //user defined function for fibo printing 

    int a = 0;                              //declaring variable
    int b = 1;
    int sum = 0;

    cout << "Fibonacci Series -->" << " ";

    if ( num == 1){
        cout << a << endl;
    }
    else if ( num == 2){
        cout << a << " " << b;
    }
    else if (num >= 2){

        cout << a << " " << b;

        for(int i = 0; i<(num-2); i++){             //logic for fibonacci
            sum = a + b;
            cout << " " << sum << " ";
            a = b;
            b = sum;
        }
    }
}

int main(){                                         //main function

    int element;                                    //declaring variable

    cout << "Enter the total elements you want in fibonacci:";      //for input from user
    cin >> element;

    if(element==0){
        return 0;
    }

    fibo(element);                  //calling user defined function

}