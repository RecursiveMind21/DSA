#include<iostream>
using namespace std;

int UniqueElement(int *arr, int n){
    int ans = 0;

    for(int i = 0;i<n; i++){
        ans = ans^arr[i];
    }
    return ans;
}

void ScanArray(int *arr, int n){
    for(int i = 0; i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr, int n){
    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    ScanArray(arr,n);

    cout << endl;
    cout << "Elements in array: ";
    PrintArray(arr,n);

    cout << endl;
    cout << "Unique Element in an array is: " << UniqueElement(arr,n);
    cout << endl;

    return 0;
}