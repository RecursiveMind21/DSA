//program to calculate a to the power b in cpp
#include<iostream>              //header file
using namespace std;

int Power(int a,int b){             //function to calculate a to power b
    int ans = a;

    //time complexity -> O(b)
    for(int i = a; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){                         //main function

    int a;
    cout << "Enter a: ";
    cin >> a;

    int b;
    cout << "Enter b: ";
    cin >> b;

    cout << "answer of a to the power b is: "<< Power(a,b) << endl;

    return 0;
}