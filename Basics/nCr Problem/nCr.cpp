#include<iostream>
using namespace std;

int factorial(int n){
    
    int fact = 1;

    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){

    int n;
    cout << "Enter the value of n in nCr: ";
    cin >> n;

    int ansn;
    ansn = factorial(n);

    int r;
    cout << "Enter the value of r in nCr: ";
    cin >> r;

    int ansr;
    ansr = factorial(r);

    int ansnr;
    ansnr = factorial(n-r);

    if(n<r){
        cout << "Invalid values of n and r (as n cannot be smaller than r)";
        exit(0);
    }

    int ans;
    ans = ansn / (ansnr * ansr);

    cout << "The value in nCr: " << ans;
    cout << endl;
    
    return 0;
}