#include<iostream>
using namespace std;

int main(){

    Again:

    cout << "1. Add(+) " << " 2. Difference(-) " << " 3. Product(*) " << endl;
    
    char var;
    cout << "Enter the operation (symbol) you want to operate: ";
    cin >> var;
    
    if(var != '+' && var != '-' && var != '*'){
        cout << "Invalid Operator" << endl;
        goto Again;
    }

    double a,b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    switch (var)
    {
    case '+':  cout << "Sum of " << a << " and " << b << " is " << a+b << "." << endl; 
        break;
    
    case '-':  cout << "Sum of " << a << " and " << b << " is " << a-b << "." << endl; 
        break;

    case '*':  cout << "Sum of " << a << " and " << b << " is " << a*b << "." << endl; 
        break;
    }

    return 0;
}