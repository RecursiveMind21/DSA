//program with nCr concept in cpp
#include<iostream>                  //header file
using namespace std;

//time complexity -> O(n)
int factorial(int n){               //user defined function to calculate factorial
    
    int fact = 1;

    for(int i = 1;i<=n;i++){        //logic to calculate factorial
        fact = fact * i;
    }
    return fact;
}

int main(){                         //main function

    int n;
    cout << "Enter the value of n in nCr: ";
    cin >> n;

    int ansn;
    ansn = factorial(n);            //storing value returned from factorial function

    int r;
    cout << "Enter the value of r in nCr: ";
    cin >> r;

    int ansr;
    ansr = factorial(r);            //storing value returned from factorial function

    int ansnr;
    ansnr = factorial(n-r);         //storing value returned from factorial function

    if(n<r){
        cout << "Invalid values of n and r (as n cannot be smaller than r)";
        exit(0);
    }

    int ans;
    ans = ansn / (ansnr * ansr);                        //calculating nCr 

    cout << "The value in nCr: " << ans;
    cout << endl;
    
    return 0;
}