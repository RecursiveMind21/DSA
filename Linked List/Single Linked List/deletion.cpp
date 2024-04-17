#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

void insertion(node* &head,int position,int data){

    if(position == 1){
        node *new_node = new node();
        new_node -> data = data;
        new_node -> next = head;
        head = new_node;
    }
    else{

        node* new_node = new node();
        node* copy = head;

        new_node -> data = data;

        for(int i = 1; i<position-1;i++){
            copy = copy->next;
        }

        new_node -> next = copy->next;
        copy-> next = new_node;        
    }
}

void deletion(node* &head, int position){

    if(position == 1){
        node*temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        node *curr = head;
        node *prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }

}

void deleteLast(node* &head){

    node* temp = head;
    node* prev = NULL;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    delete temp;
}

void printNode(node *head){
    node *copy = head;

    while(copy != NULL){
        cout << copy->data << " ";
        copy = copy->next;
    }
    cout << endl;
}

int main(){

    node *head = NULL;

    insertion(head,1,15);
    insertion(head,1,45);
    insertion(head,1,25);
    insertion(head,1,55);
    
    cout << "Linked List: ";
    printNode(head);

    insertion(head,2,55);

    cout << "Linked List: ";
    printNode(head);

    deletion(head,1);

    cout << "Linked List: ";
    printNode(head);

    deletion(head,3);

    cout << "Linked List: ";
    printNode(head);

    insertion(head,3,7);
    insertion(head,3,9);

    cout << "Linked List: ";
    printNode(head);

    deleteLast(head);
    
    cout << "Linked List: ";
    printNode(head);


    return 0;
}
