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

node* buildtree(node* root){

    int leftData, rightData;

    cout << "Enter data to the left of " << root -> data << " (-1 for no node): ";
    cin >> leftData;

    if(leftData != -1){
        root -> left = new node(leftData);
        buildtree(root -> left);
    }

    cout << "Enter data to the right of " << root -> data << " (-1 for no node): ";
    cin >> rightData;

    if(rightData != -1){
        root -> right = new node(rightData);
        buildtree(root -> right);
    }

    return root;
}

int main(){

    int data;
    cout << "Enter data for root node: ";
    cin >> data;

    if(data == -1){
        cout << "No tree formed." << endl;
        return 0;
    }

    node* root = new node(data);

    // creating tree
    buildtree(root);

    return 0;
}
