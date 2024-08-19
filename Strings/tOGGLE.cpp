#include<iostream>
#include<string>
using namespace std;

char toUpperCase(char ch){
    if(ch>= 'a' && ch<='z'){
        return ch-32;
    }
    else{
        return ch;
    }
}

void toogle(string& str){

    int start = 0;
    int end = 0;

    while(end < str.length()){
        
        while(end<str.length() && str[end] != ' '){
            end++;
        }

        int tempstart = start + 1;
        int tempend = end;

        while(tempstart < tempend){
            str[tempstart] = toUpperCase(str[tempstart]);
            tempstart++;
        }

        end++;
        start = end;
    }

}

int main(){

    string str;
    cout << "Enter the value for string: ";
    getline(cin, str);

    cout << "String Before toogle: " << str << endl;
    toogle(str);
    cout << "String after toogle: " << str << endl;


    return 0;
}