#include<iostream>
#include<strings.h>
using namespace std;

bool isPalindrome(string &str,int start){

    //base case
    if(start == (str.length() - start - 1)){
        return true;
    }
    if(str[start] != str[str.length() - start - 1]){
        return false;
    }
    return isPalindrome(str, start+1);
}

int main(){

    string str;
    cout << "Enter value for string: ";
    cin >> str;

    if(isPalindrome(str,0)){
        cout << "The string is palindrome. " << endl;
    }else{
        cout << "The string is not palindrome. "<< endl;
    }

    return 0;
}