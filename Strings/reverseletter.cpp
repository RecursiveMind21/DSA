#include<iostream>
#include<strings.h>
using namespace std;

void reverse(string str){

    int start = 0;
    int end = 0;

    while(end<str.length()){

        while(end<str.length() && str[end] != ' '){
            cout << "End in loop: " << end << endl;
            end++;
        }

        int tempstart = start;
        int tempend = end - 1;

        cout << "End: " << end << endl;
        cout << "STart: " << start << endl;

        while(tempstart<tempend){
            swap(str[tempstart++],str[tempend--]);
        }
        
        end++;
        start = end;
    }
    cout << "After reversing each word in string: " << str << endl;
}

int main(){

    string str;
    cout << "Enter the value for string: ";
    getline(cin,str);

    cout << "Value in string: " << str << endl;

    reverse(str);
    
    return 0;
}