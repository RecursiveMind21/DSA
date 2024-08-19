#include<iostream>
#include<strings.h>
using namespace std;

int main(){

    string str;
    cout << "Enter the value for string: ";
    cin >> str;

    cout << "Value in string: " << str << endl;

    int i = 0, j = str.length() - 1;

    while(i<j){
        swap(str[i++],str[j--]);
    }

    cout << "Value in string after reversing: " << str << endl;
    
    return 0;
}