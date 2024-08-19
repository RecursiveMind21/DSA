#include<iostream>
#include<strings.h>
using namespace std;

void reverseString(string &str,int start){

    //base case
    if(start > (str.length()-start-1)){
        return ;
    }

    swap(str[start],str[str.length()-start-1]);
    reverseString(str,++start);
}

int main(){

    string str;
    cout << "Enter value for string: ";
    cin >> str;

    cout << "String before reversing: " << str << endl;
    reverseString(str,0);
    cout << "String after reversing: " << str << endl;

    return 0;
}