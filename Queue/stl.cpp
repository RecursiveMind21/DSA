#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creating a queue
    queue<int> q;

    q.push(11);
    cout << "Top: " << q.front() << endl;
    q.push(15);
    q.push(16);
    cout << "Size of queue is: " << q.size() << endl;
    q.pop();
    cout << "Top: " << q.front() << endl;
    cout << "Size of queue is: " << q.size() << endl;

    if(q.empty())
        cout << "queue is empty. " << endl;
    else    
        cout << "queue is not empty. " << endl;
}