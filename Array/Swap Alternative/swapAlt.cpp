#include<iostream>
using namespace std;

void swapingAlt(int *arr, int n){
    
    int temp = 0;

    for(int i = 0,j = i+1; i<n-2,j<n;i=i+2,j=j+2){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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

    cout << "Array before swapping alternative: ";
    PrintArray(arr,n);

    swapingAlt(arr,n);

    cout << endl;
    cout << "Array after swapping alternative: ";
    PrintArray(arr,n);

    return 0;
}