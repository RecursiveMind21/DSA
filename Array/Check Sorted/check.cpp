//code to check whether the array is sorted or not(increasing order)
#include<iostream>
using namespace std;

bool CheckArr(int *arr, int n){

    for(int i = 0;(i+1)<n;i++){         //time complextiy -> O(n^2)
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}

void ScanArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements in array: " << endl;
    ScanArray(arr,size);
    cout << "Elements in array: ";
    PrintArray(arr,size);
    cout << endl;

    if(CheckArr(arr,size))
        cout << "The Array is sorted.";

    else    
        cout << "The Array is not sorted.";

    return 0;
}