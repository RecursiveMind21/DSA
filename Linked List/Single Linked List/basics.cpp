#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void pushAtBegin(node* &head,int data){

    node *new_node = new node();
    new_node -> data = data;
    new_node -> next = head;
    head = new_node;

}
void pushAtEnd(node* &tail,int data){

    node *new_node = new node();
    node *last = tail;
    
    new_node -> data = data;

    if(tail == NULL){
        tail = new_node;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last -> next = new_node;
    return;
}
void pushAtMiddle(node* &head,int element,int data){

    node* new_node = new node();
    node* copy = head; 

    new_node -> data = data;

    for(int i = 1;i<element;i++){
        copy = copy->next;
    }

    new_node -> next = copy -> next;
    copy->next = new_node;

    return;
}

void deleteAtMiddle(node* &head,int element){

    if(element == 0){
        if(head == NULL)
            return;

        node* temp = head;
        head = head->next;
        temp->next = NULL;
        return;
    }

    node* copy = head;

    for(int i = 1;i<element;i++){
        copy = copy->next;
    }

    node* prev = copy->next;
    copy->next = prev->next;
}
void deleteFirst(node* &head){
    head = head->next;
}
void deleteLast(node* &head){
    node* copy = head;
}
void printlist(node * head){

    node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    node* head = NULL;

    pushAtBegin(head,10);
    pushAtBegin(head,15);
    
    cout << "List: ";
    printlist(head);

    pushAtEnd(head,16);
    pushAtEnd(head,23);
    pushAtEnd(head,45);

    cout << "List: ";
    printlist(head);

    pushAtMiddle(head,2,5);
    
    cout << "List: ";
    printlist(head);

    deleteAtMiddle(head,3);
    
    cout << "List: ";
    printlist(head);

    deleteFirst(head);

    cout << "List: ";
    printlist(head);

    return 0;
}
