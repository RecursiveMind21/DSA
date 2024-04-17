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
        qfront = -1;
        rear = -1;
    }   
    void push(int element){
        if((qfront == 0 && rear == size-1) || (rear == (qfront-1)%(size-1)))
            cout << "Queue is full! " << endl;
        else if(qfront == -1){
            qfront =0;
            rear = 0;
            arr[rear] = element;
        }
        else if(rear == size-1 && qfront!=0){
            rear = 0;
            arr[rear] = element;
        }
        else{
            rear++;
            arr[rear] = element;
        }
    }
    void pop(){
        if(qfront == -1)
            cout << "Queue is empty! " << endl;
        else if(qfront == rear){
            qfront = rear -1;
        }
        else if(qfront == size -1){
            qfront = 0;
        }
        else{
            qfront++;
        }
    }
    bool empty(){
        if((qfront == 0 && rear == size-1) || rear == (qfront-1)%(size-1))
            return false;
        else    
            return true;
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