#include<iostream>
using namespace std;

void findPair(int arr[], int n,int sum){

    for(int i = 0;i<n;i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]+arr[j]==sum){
                cout << "Sum Pair: " << arr[i] << " " << arr[j] << endl;
            }
        }
    }

}

void ScanArray(int arr[],int n){
    for(int i = 0;i<n; i++){
        cout << "Enter element: " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int arr[],int n){
    for(int i =0;i<n ;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter values in array: " << endl;
    ScanArray(arr,size);

    int sum;
    cout << "Enter the sum: ";
    cin >> sum;

    cout << "Elements in array: ";
    PrintArray(arr,size);
    cout << endl;
    findPair(arr,size,sum);

    return 0;
}