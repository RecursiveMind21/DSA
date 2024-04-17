#include<iostream>
#include<stack>
using namespace std;    

int main(){

    stack<int> s;

    s.push(5);
    s.push(8);

    cout << "Top: " << s.top() << endl;

    s.pop();

    cout << "Top: " << s.top() << endl; 

}