#include<iostream>
#include<queue>
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

void buildTree(node* &root){
    int leftdata, rightdata;

    cout << "Enter data to the left of " << root -> data << ": ";
    cin >> leftdata;

    if(leftdata != -1){
        root -> left = new node(leftdata);
        buildTree(root -> left);
    }

    cout << "Enter data to the right of " << root->data << ": ";
    cin >> rightdata;

    if(rightdata != -1){
        root -> right = new node(rightdata);
        buildTree(root -> right);
    }
}

void levelordertraversal(node* root){
    if(root == NULL)
        return;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

int main(){
    int data;
    cout << "Enter data for root node: ";
    cin >> data;

    if(data == -1){
        cout << "No Tree formed ";
        return 0;
    }

    node* root = new node(data);

    // creation 
    buildTree(root);
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 

    levelordertraversal(root);

    return 0;
}
