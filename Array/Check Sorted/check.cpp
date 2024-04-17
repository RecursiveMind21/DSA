#include<iostream>
using namespace std;

bool CheckArr(int *arr, int n){

    for(int i = 0;i<n;i++){
        for(int j = i+1; j<n; j++){

            if(arr[i]>arr[j]){
                return false;
            }
        }
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