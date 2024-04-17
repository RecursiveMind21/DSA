#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};

void insertion(node* &tail,int element,int data){

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

        while(copy -> data != element){
            copy = copy -> next;
        }
        new_node -> data = data;
        new_node->next = copy->next;
        copy->next = new_node;
        copy->next->prev = new_node;
        new_node->prev = copy;
    }

}

void deletion(node* &tail,int element){

    //empty linked list
    if(tail == NULL) return;

    //for non empty liked list
    else{

        node* curr = tail;
        node* prev = NULL;

        while(curr -> data != element){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next -> prev = prev;
        curr -> next = NULL;
        curr -> prev = NULL;
        delete curr;
    }   
}

void print(node* tail){
    node* copy = tail;
    do{
        cout << copy -> data << " ";
        copy = copy -> next;
    }while(copy != tail);
    cout << endl;
}


int main(){


    node* tail = NULL;

    insertion(tail,0,5);

    cout << "Linked List: ";
    print(tail);

    insertion(tail,5,1);
    insertion(tail,1,7);
    insertion(tail,5,10);
    insertion(tail,1,9);

    cout << "Linked List: ";
    print(tail);

    deletion(tail,10);

    cout << "Linked List: ";
    print(tail);

    return 0;
}