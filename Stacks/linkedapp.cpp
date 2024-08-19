#include<iostream>
using namespace std;

class node{
    public:
    int data; 
    node* next;
};

class stack{
    public:
    void push(node* &head,int data){
        //empty linked list
        if(head == NULL){
            node* new_node = new node();
            new_node -> data = data;
            new_node -> next = NULL;
            head = new_node;
        }
        else{
            node* copy = head;
            node* new_node= new node();

            while(copy->next != NULL){
                copy = copy -> next;
            }

            new_node -> data = data;
            copy -> next = new_node;
            new_node -> next = NULL;
        }
    }

    void pop(node* &head){
        
        node*copy = head;
        node* prev = NULL;
        while(copy->next != NULL){
            prev = copy;
            copy = copy -> next;
        }
        prev -> next = NULL;
        delete copy;
    }

    int peek(node* head){

        if(head != NULL){

            while(head -> next != NULL){
             head = head -> next;
            }
            return head->data;
        }
        cout << "Stack Empty! " << endl;
        return -1;
    }

};

int main(){

    node* head = NULL;
    stack s1;

    s1.push(head,8);
    cout << "Top: " << s1.peek(head) << endl;

    s1.push(head,9);
    s1.push(head,11);
    s1.push(head,3);
    cout << "Top: " << s1.peek(head) << endl;

    s1.pop(head);
    cout << "Top: " << s1.peek(head) << endl;

    return 0;
}