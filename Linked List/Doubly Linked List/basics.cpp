#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
};
void insetHead(node* &head,int data){
    node* new_node = new node();

    new_node -> data = data;
    new_node -> next = head;
    new_node -> prev = NULL;
    head = new_node;
}
void insertTail(node* &head,int data){

    node* new_node = new node();
    node *copy = head;

    while(copy->next != NULL){
        copy = copy -> next;
    }
    new_node -> data = data;
    new_node -> prev = copy;
    new_node -> next = NULL;
    copy -> next = new_node;
}
void insertNode(node* &head,int position,int data){

    if(position == 1){
        insetHead(head,data);
        return;
    }
    node* new_node = new node();
    node* copy = head;

    int cnt = 1;
        while(cnt < position){
            copy = copy->next;
            cnt++;
        }

    if(copy -> next == NULL){
        insertTail(head,data);
        return;
    }

    else{
        new_node -> data = data;

        new_node -> next = copy -> next;
        copy -> next -> prev = new_node;
        copy -> next = new_node;
        new_node -> prev = copy;

    }
}

void print(node *head){
    node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " "; 
        temp = temp->next;
    }
    cout << endl;
}

int main(){

    node* head = NULL;

    insertNode(head,1,15);
    insertNode(head,1,16);
    insertNode(head,1,35);
    insertNode(head,1,45);

    cout << "Linked List: ";
    print(head);

    insertTail(head,67);
    insertTail(head,34);

    cout << "Linked List: ";
    print(head);

    insertNode(head,2,98);
    insertNode(head,6,100);

    cout << "Linked List: ";
    print(head);

    return 0;
}