#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertNode(node* &tail, int element,int data){
    
    //empty list
    if(tail == NULL){

        node* new_node = new node(data);
        new_node -> next = new_node;
        tail = new_node;
    }
    //non empty list
    else{
        node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }

        node* new_node = new node(data);
        new_node -> next = curr -> next;
        curr -> next = new_node;

    }
}

void print(node* tail){

    node* copy = tail;
    
    do{
        cout << copy -> data << " ";
        copy = copy -> next;
    } while(copy != tail);
    cout << endl;
}

int main(){

    node* tail = NULL;

    insertNode(tail,5,3);

    cout << "Linked List: ";
    print(tail);

    insertNode(tail,3,5);
    insertNode(tail,5,8);

    cout << "Linked List: ";
    print(tail);

    return 0;
}