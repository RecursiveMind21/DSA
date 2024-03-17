#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Sort01(int *arr, int n){
    
    int start = 0;
    int end = n-1;

    while(start<=end){

        if(arr[start] == 0)
            start++;

        if(arr[end] == 1)
            end--;

        if(arr[start] == 1 && arr[end] == 0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

}

void ScanArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element: " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << arr[i];
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