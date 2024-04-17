#include<iostream>
using namespace std;

void Intersection(int *arr1, int *arr2, int n, int m){

    if(n>=m){
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++){
                if(arr1[i] == arr2[j]){
                    cout << arr1[i] << " ";
                    arr1[i] = 0;
                    arr2[j] = 0;
                    break;
                }
            }
        }
    }
    if(n>m){
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++){

                if(arr2[i] == arr1[j]){
                    cout << arr1[i] << " ";
                    arr1[i] = 0;
                    arr2[j] = 0;
                    break;
                }
            }
        }
    }
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
    cout << "Enter the size of first array: ";
    cin >> n;

    int *arr1 = new int[n];
    
    cout << "For elements of first arry: ";
    cout << endl;
    ScanArray(arr1,n);

    int m;
    cout << "Enter the size of second array: ";
    cin >> m;

    int *arr2 = new int[m];

    cout << "For elements of second arry: ";
    cout << endl;
    ScanArray(arr2,m);

    cout << endl;
    cout << "Elements in first array: ";
    PrintArray(arr1,n);

    cout << endl;
    cout << "Elements in first array: ";
    PrintArray(arr2,m);
    
    cout << endl;
    cout << "Common Element in array are : ";
    Intersection(arr1,arr2,n,m);

    return 0;
}