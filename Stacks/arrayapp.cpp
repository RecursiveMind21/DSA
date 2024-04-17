#include<iostream>
using namespace std;

class stack{
    public:
    int* arr;
    int top;
    int size;

    stack(int size) {
        this -> size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(size - top > 1){
            top++;
            arr[top] = data;
        }else cout << "Stack Overflow! " << endl;
    }
    void pop(){
        if(top >= 0) top --;
        else cout << "Stack is empty";
    }
    int peek(){
        if(top >= 0) return arr[top];
        else{
            cout << "Stack is empty. " << endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top >= 0) return true;
        else return false;
    }     
};

int main(){
    
    stack s1(6);

    s1.push(9);
    s1.push(6);
    s1.push(8);
    s1.push(3);
    s1.push(5);
    s1.push(8);

    cout << "Top: " << s1.peek() << endl; 

    s1.pop();

    cout << "Top: " << s1.peek() << endl; 
    
    if(s1.isEmpty()) cout << "Stack is not empty." << endl;
    else cout << "Stack is empty. " << endl;

    return 0;
}