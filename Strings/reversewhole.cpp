#include<iostream>
#include<string>
using namespace std;

void reversewhole(string &str){

    int start = 0;
    int end = str.length()-1;

    while(start < end){
        swap(str[start++],str[end--]);
    }

}
void reverseletter(string &str){

    int start = 0;
    int end = 0;

    while(end < str.length()){

        while(end<str.length() && str[end] != ' '){
            end++;
        }

        int tempstart = start;
        int tempend = end - 1;

        while(tempstart < tempend){
            swap(str[tempstart++],str[tempend--]);
        }

        end++;
        start = end;
    }   
}

int main(){

    string str;
    cout << "Enter the value for string: ";
    getline(cin,str);

    cout << "Value in string: " << str << endl;

    reversewhole(str);
    reverseletter(str);

    cout << "After reversing: " << str << endl;

    return 0;
}