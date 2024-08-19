#include<iostream>
using namespace std;

void reverse(int *arr, int n){

    int start = 0;
    int end = n-1;
    int temp;

    while(start<=end){

        temp = start[arr];
        start[arr] = end[arr]; 
        arr[end] = temp;

        start++;
        end--;
    }
}

void ScanArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i]; 
    }
}

void PrintArray(int *arr, int n){
    for(int i =0;i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    ScanArray(arr,n);
    cout << endl;

    cout << "Array before reversing: ";
    PrintArray(arr,n);

    reverse(arr,n);

    cout << endl;
    cout << "Array after reversing: ";
    PrintArray(arr,n);

    return 0;
}