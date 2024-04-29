//program to check whether the gicen array has duplicate or not using xor bitwise operator
#include<iostream>
using namespace std;

int Duplicate(int *arr,int n){          //time complexity -> O(n^2)

    int ans = 0;

    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }

    for(int i = 1; i<n;i++){
        ans = ans^arr[i];
    }
    return ans;
}

void ScanArray(int* arr,int n){
    for(int i = 0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}
void PrintArray(int* arr,int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Input for array: " << endl;
    ScanArray(arr,n);

    cout << "Elements in array: " << endl;
    PrintArray(arr,n);

    cout << endl;
    cout << "Duplicate in array: " << Duplicate(arr,n) << endl;

    return 0;
}