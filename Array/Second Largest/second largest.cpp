#include<iostream>
using namespace std;

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

void Sorting(int *arr, int n){

    for(int i = 0; i<n ;i ++){
        for(int j = i+1;j<n;j++){
            if(arr[i]<arr[j]){
                swap(arr[i],arr[j]);
            }
        }
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

    Sorting(arr,size);

    int largest = arr[0];

    for(int i = 1;i<size;i++){
        if(arr[i] != largest){
            largest = arr[i];
            break;
        }
    }

    cout << endl;
    cout << "The Second Largest value in array is: " << largest << endl;

    return 0;
}