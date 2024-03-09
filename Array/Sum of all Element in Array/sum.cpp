#include<iostream>
using namespace std;

void ScanArray(int *arr, int n){
    for(int i =0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}

int GetSum(int *arr, int n){

    int sum = 0;

    for(int i = 0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];

    ScanArray(arr,n);

    cout << "Sum of all elements in an array is: " << GetSum(arr,n) << endl;

    return 0;
}