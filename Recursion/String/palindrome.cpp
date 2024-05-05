#include<iostream>
#include<strings.h>
using namespace std;

bool isPalindrome(string &str,int start, int end){
    
    //base case
    if(start >= end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    return isPalindrome(str, start+1, end+1);
}

int main(){

    string str;
    cout << "Enter value for string: ";
    cin >> str;

    if(isPalindrome(str,0,str.length()-1)){
        cout << "The string is palindrome. " << endl;
    }else{
        cout << "The string is not palindrome. "<< endl;
    }

    return 0;
}