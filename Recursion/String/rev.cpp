#include<iostream>
#include<strings.h>
using namespace std;

void reverseString(string &str,int start, int end){

    //base case
    if(start > end || end == 1){
        return ;
    }

    swap(str[start++],str[end--]);
    reverseString(str,start,end);
}

int main(){

    string str;
    cout << "Enter value for string: ";
    cin >> str;

    cout << "String before reversing: " << str << endl;
    reverseString(str,0,str.length()-1);
    cout << "String after reversing: " << str << endl;

    return 0;
}