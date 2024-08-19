//code to check whether the given array has duplicate elements or not
#include<iostream>
using namespace std;

int DuplicateElement(int *arr, int n){      //time complexity -> O(n)
    
    for(int i = 0; i<n; i++){

        int index = abs(arr[i]) - 1;
        if(arr[index] < 0){
            return abs(arr[i]);
        }
        arr[index] = -arr[index];
    }

    return -1;
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
    cout << "Duplicate Element in an array is: " << DuplicateElement(arr,n);
    cout << endl;

    return 0;
}