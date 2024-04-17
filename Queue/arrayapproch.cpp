#include<iostream>
using namespace std;

class Queue{

    public:
    int *arr;
    int size;
    int qfront;
    int rear;

    Queue(int size){
        this -> size = size;
        arr = new int(size);
        qfront = 0;
        rear = 0;
    }   

    void push(int element){
        
        if(rear == size)
            cout << "Queue is full. ";
        else{
            arr[rear] = element;
            rear++;
        }
    }
    
    void pop(){
        if(rear == qfront)
            cout << "Queue is empty. ";
        else{
            arr[qfront] = -1;
            qfront++;

            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
        }
    }
    int front(){
        if(rear == qfront)
            cout << "Queue is empty. ";
        else{
            int ans = arr[qfront];
            return ans;
        }
        return 0;
    }
    bool empty(){
        if(rear == qfront)
            return true;
        else
            return false;
    }      
};

int main(){

    int size;
    cout << "Enter size of queue: ";
    cin >> size;

    Queue q(size);

    q.push(15);
    q.push(10);
    q.push(10);
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "Front: " << q.front() << endl;
    q.pop();
    if(q.empty())
        cout << "Queue is empty! ";
    else    
        cout << "Queue is not empty:) "; 

    cout << endl;
    cout << endl;
    return 0;
}