//code to check whether the given array has duplicate elements or not
#include<iostream>
using namespace std;

int DuplicateElement(int *arr, int n){      //time complexity -> O(n^2)
    
    for(int i = 0; i<n; i++){
        
        bool isUnique = false;

        for(int j = 0; j<n; j++){
            
            if(i != j && arr[i] == arr[j]){
                isUnique = true;
            }
        }

        if(isUnique){
            return arr[i];
        }
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