//LNR
#include<iostream>
using namespace std;

class node{
    public: 
        int data;
        node* left;
        node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};


void buildtree(node* &root){
    
    int leftdata, rightdata;

    cout << "Enter data to the left of " << root -> data << ": ";
    cin >> leftdata;

    if(leftdata != -1){
        root -> left = new node(leftdata);
        buildtree(root -> left);
    }

    cout << "Enter data to the right of " << root -> data << ": ";
    cin >> rightdata;

    if(rightdata != -1){
        root -> right = new node(rightdata);
        buildtree(root -> right);
    }   
}

void inorderTraversal(node* root){

    if(root == NULL)
        return ;
    
    inorderTraversal(root -> left);
    cout << root -> data  << " ";
    inorderTraversal(root -> right);
}

int main(){

    int data;
    cout << "Enter data for root node: ";
    cin >> data;

    if(data == -1)
        return 0;

    node* root = new node(data);

    buildtree(root);

    inorderTraversal(root);

    return 0;
}