#include<iostream>
#include<string>
#include<vector>
using namespace std;

string duplicate(string str){

    vector<int> count(256,0);

    for(int i = 0; i<str.length(); i++){
        count[str[i]]++;
    }

    string ans;

    for(int i = 0; i<count.size(); i++){
        if(count[i] > 1)
            ans.push_back(i);
    }
    return ans;
}

int main(){

    string str;

    cout << "Enter value for string: ";
    cin >> str;

    string ans1 = duplicate(str);
    
    cout << "String of all duplicate in string: " << ans1 << endl;

    return 0;
}