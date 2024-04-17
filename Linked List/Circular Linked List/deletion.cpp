#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertion(node* &tail, int element, int data){

    node* new_node = new node();

    //if linked list is empty
    if(tail == NULL){
        new_node -> data = data;
        new_node -> next = new_node;
        tail = new_node;
    }
    //non empty linked list
    else{

        node* curr = tail;

        while(curr->data != element){
            curr = curr -> next;
        }
        new_node -> data = data;
        new_node -> next = curr -> next;
        curr -> next = new_node;
    }
}

void deletion(node* &tail, int element){

    //empty linked list
    if(tail == NULL)
        return;
    else{

        node* curr = tail;
        node* prev = NULL;

        while(curr->data != element){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }   

}

void print(node* &tail){

    node* copy = tail;
    do{
        cout << copy->data << " ";
        copy = copy -> next;
    }while(copy != tail);
    cout << endl;
}

int main(){

    node* tail = NULL;

    insertion(tail,0,5);
    insertion(tail,5,2);

    cout << "Linked List: ";
    print(tail);
    
    insertion(tail,2,7);
    insertion(tail,7,3);
    insertion(tail,5,6);

    cout << "Linked List: ";
    print(tail);

    deletion(tail,3);
    
    cout << "Linked List: ";
    print(tail);

    return 0;
}