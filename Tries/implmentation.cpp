#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Trie{
public:
    char value;
    Trie* children[26];
    bool isTerminal;

    Trie(char val){
        this->value = val;
        for(int i = 0; i < 26; i++){
            this->children[i] = NULL;
        }
        this->isTerminal = false;
    }
};

void InsertInTrie(Trie* root, string str){   
    if(str.length() == 0){
        root->isTerminal = true;
        return;
    }

    char ch = tolower(str[0]);
    int index = ch - 'a';
    Trie* child;

    if(root->children[index] != NULL){
        child = root->children[index];
    } else {
        child = new Trie(ch);
        root->children[index] = child;
    }

    InsertInTrie(child, str.substr(1));   
}

void PrintTrie(Trie* root, string word){
    if(root == NULL) return;

    if(root->isTerminal){
        cout << word << endl;
    }

    for(int i = 0; i < 26; i++){
        if(root->children[i] != NULL){
            PrintTrie(root->children[i], word + root->children[i]->value);
        }
    }
}

void CompleteWords(Trie* root, string word, string initials) {
    for (char ch : initials) {
        int index = tolower(ch) - 'a'; 
        if (root->children[index] == NULL) {
            cout << "No words found with this prefix." << endl;
            return;
        }
        root = root->children[index]; 
        word += ch;
    }
    PrintTrie(root, word);
}

int main(){
    Trie* root = new Trie('-');
    InsertInTrie(root, "ABC");
    InsertInTrie(root, "ABCD");
    InsertInTrie(root, "ABACUS");
    InsertInTrie(root, "XYZ");

    cout << "Words in trie: " << endl;
    PrintTrie(root, "");

    cout << "\nWords with prefix 'AB':" << endl;
    CompleteWords(root, "", "AB");
    
    return 0;
}
