#include<iostream>
using namespace std;

void ScanArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr, int n){
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int SecondLargest(int *arr, int n){

    int Largest = arr[0];
    int SLargest = -1;

    for(int i = 0;i<n;i++){

        if(arr[i] > Largest){
            
            int temp = Largest;
            Largest = arr[i];
            if(SLargest < temp){
                SLargest = temp;
            }
        }
    }
    return SLargest;
}

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements in array: " << endl;
    ScanArray(arr,size);
    cout << "Elements in array: ";
    PrintArray(arr,size);
    cout << endl;

    cout << "The second largest in an array " << SecondLargest(arr,size) << endl;

    return 0;
}
