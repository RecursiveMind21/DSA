//program to find all duplicate in array
#include<iostream>              
using namespace std;

int* MultiCommon(int *arr, int n){
    
    int m = n;
    int *arr2 = new int[m];
    arr2[m] = {0};
    int k = 0;
    for(int i = 0; i<n; i++){                           //time complexity - O(n^2)
        for(int j =0; j<n; j++){
            if( i != j && arr[i] == arr[j]){
                arr2[k] = arr[i];
                k++;
            }
        }
    }
    return arr2;

}

void ScanArray(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];                      //dynamic allocation of array

    cout << "Enter values for array: ";
    ScanArray(arr,n);

    cout << endl;
    cout << "Values in array: ";
    PrintArray(arr,n);

    int *ptr;
    ptr = MultiCommon(arr,n);

    cout << "Common Values: ";
    for(int i = 0; i<n; i++){
        cout << "Arr: " << ptr[i] << " ";
    }

    return 0;
}