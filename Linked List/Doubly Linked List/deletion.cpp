#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};
void insertAtHead(node* &head,int data){

    node* new_node = new node();

    new_node -> data = data;
    new_node -> prev = NULL;
    new_node -> next = head;
    head = new_node;
}
void insertAtTail(node* &head,int data){

    node* new_node = new node();
    node* copy = head;

    while(copy->next != NULL){
        copy = copy->next;
    }

    new_node -> data = data;
    new_node -> next = NULL;
    new_node -> prev = copy;
    copy -> next = new_node;
}
void insertiton(node* &head,int position,int data){

    if(position == 1){
        insertAtHead(head,data);
        return;
    }

    node* new_node = new node();
    node* copy = head;
    int cnt = 1;

    while(cnt < position-1){
        copy = copy -> next;
        cnt++;
    }

    if(copy->next == NULL){
        insertAtTail(head,data);
        return;
    }
    else{

        new_node -> data = data;

        new_node -> next = copy->next;
        copy -> next = new_node;
        copy -> next -> prev = new_node;
        new_node -> prev = copy;
    }
}

void deleteHead(node* &head){
    node* temp = head;

    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    
    delete temp;
}

void deletition(node* &head,int position){

    if(position == 1){
        deleteHead(head);
        return;
    }
    else{
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

void printNode(node* head){
    node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){

    node* head = NULL;

    insertiton(head,1,45);
    insertiton(head,1,23);

    cout << "Linked List: ";
    printNode(head);

    insertiton(head,2,67);
    insertiton(head,3,102);

    cout << "Linked List: ";
    printNode(head);

    insertiton(head,2,89);
    insertiton(head,3,3);

    cout << "Linked List: ";
    printNode(head);

    deletition(head,1);
    deletition(head,3);

    cout << "Linked List: ";
    printNode(head);

    return 0;
}