#include<iostream>
using namespace std;

void reverse(int *arr, int n){

    int temp = 0;

    if(n%2==0){
        for(int i = 0,j = n-1;i<=n/2,j>=2;i++,j--){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    else{
        for(int i = 0,j = n-1;i<n/2,j>2;i++,j--){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
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