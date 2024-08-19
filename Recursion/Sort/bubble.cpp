#include<iostream>
using namespace std;

void bubbleSort(int *arr ,int end){

    //base case
    if(end == 0){
        return ;
    }

    for(int i = 0; i<end; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleSort(arr,end-1);
}

int main(){

    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements in array: ";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }   

    bubbleSort(arr,size-1);

    cout << "elements in array: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }   

    return 0;
}