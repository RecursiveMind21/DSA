#include<iostream>
#include<string>
using namespace std;

char touppercase(char ch){
    
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
        return ch;
    }
    else{
        return ch;
    }
}

void capatilize(string &str){

    int start = 0;
    int end = 0;

    while(end < str.length()){

        while(end<str.length() && str[end] != ' '){
            end++;
        }
        
        str[start] = touppercase(str[start]);
        end++;
        start = end;
    }


}

int main(){

    string str;
    cout << "Enter value for string: ";
    getline(cin , str);

    cout << "String before capitalizing: " << str << endl;
    capatilize(str);
    cout << "String before capitalizing: " << str << endl;

    return 0;
}