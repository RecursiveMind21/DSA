#include<iostream>
using namespace std;

int FindMin(int *arr,int n){

    int min = arr[0];

    for(int i = 1;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min; 
}

int FindMax(int *arr,int n){
    
    int max = arr[0];

    for(int i = 1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void ScanArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i]; 
    }
}

void PrintArray(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " " ;
    }
}

int main()
{
    int n;
    cout << "Enter the size of an array:";
    cin >> n;

    int *arr = new int[n];

    ScanArray(arr,n);

    cout << "Elements in array are: ";
    PrintArray(arr,n);
    
    cout << endl << endl;
    cout << "----------------------------------------" << endl;
    cout << "The maximum element of an array is: " << FindMax(arr,n) << endl;
    cout << "----------------------------------------" << endl;
    cout << endl;
    cout << "----------------------------------------" << endl;
    cout << "The minimum element of an array is: " << FindMin(arr,n) << endl;
    cout << "----------------------------------------" << endl;
    
    return 0;
}