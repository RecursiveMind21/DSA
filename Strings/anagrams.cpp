#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool anagrams(string str,string str1){

    if(str.length() != str1.length())
        return false;

    vector<int> store(0);
    vector<int> store1(0);

    for(int i = 0; i<str.length(); i++){
        store.push_back(str[i]);
        store1.push_back(str1[i]);
    }

    sort(store.begin(),store.end());
    sort(store1.begin(),store1.end());

    for(int i = 0; i<str.length(); i++){
        if(store[i] != store1[i])
            return false;
    }
    return true;
}   

int main(){

    string str;
    cout << "Enter the value for string: ";
    cin >> str;

    string str1;
    cout << "Enter the value for second string: ";
    cin >> str1;

    if(anagrams(str,str1))
        cout << "True." << endl;
    else
        cout << "False: " << endl;

    return 0;
}