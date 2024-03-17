#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void ScanArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element: " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void Sort01(int *arr, int n){
    
    
    for(int i = 0;i<n;i++){
        for(int j = n-1;j>i;j--){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
    }
    }
    
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements in array: ";
    ScanArray(arr,n);

    cout << endl;
    cout << "Elements in arrays before sorting: ";
    PrintArray(arr,n);
    cout << endl;

    Sort01(arr,n);

    cout << "Elements in arrays after sorting: ";
    PrintArray(arr,n);
    cout << endl;

    return 0;
}