#include<iostream>
using namespace std;

int Power(int a,int b){
    int ans = a;
    for(int i = a; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){

    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    cout << "answer of a to the power b is: "<< Power(a,b) << endl;

    return 0;
}