#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node* next;
    node* prev;
};

void insertion(node* &tail,int element, int data){

    node* new_node = new node();

    //for empty linked list
    if(tail == NULL){
        new_node -> data = data;
        new_node -> next = new_node;
        new_node -> prev = new_node;
        tail = new_node;
    }
    //for non empty linked list
    else{

        node* copy = tail;

        while(copy->data != element){
            copy = copy -> next;
        }
        new_node -> data = data;
        new_node->next = copy->next;
        copy->next = new_node;
        copy->next->prev = new_node;
        new_node->prev = copy;
    }

}

void print(node* tail){
    node* copy = tail;
    do{
        cout << copy -> data << " ";
        copy = copy -> next;
    }while(copy!=tail);
    cout << endl;
}

int main(){

    node* tail = NULL;

    insertion(tail,0,5);
    insertion(tail,5,2);

    cout << "Linked List: ";
    print(tail);

    insertion(tail,2,8);
    insertion(tail,8,1);

    cout << "Linked List: ";
    print(tail);

    return 0;
}