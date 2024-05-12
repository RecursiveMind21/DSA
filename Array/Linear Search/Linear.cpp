#include<iostream>
using namespace std;

int LinearSearch(int *arr, int n, int key){
    for(int i = 0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
}

void ScanArray(int *arr, int n){
    for(int i =0 ;i<n;i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> arr[i];
    }
}

int main(){

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    ScanArray(arr,n);
    cout << endl;

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    cout << "Element is found at: " << " Index -> " << LinearSearch(arr,n,key) << endl;

}