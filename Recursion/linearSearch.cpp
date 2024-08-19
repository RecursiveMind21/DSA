#include<iostream>
using namespace std;

bool Search(int *arr, int size, int key){

    //base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }

    return Search(arr+1,size-1,key);
}

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];
    
    cout << "Enter element for array: ";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    if(Search(arr,size,key)){
        cout << "Element found:)";
    }else{
        cout << "Element not found!";
    }

    return 0;
}