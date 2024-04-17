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

void Duplicate(int *arr, int n){

    int count2 = 0;

    for(int i = 0; i<n;i++){
        int count1 = 0;
        for(int j = i+1; j<n; j++){
            if(i!=j && arr[i] == arr[j]){
                count1++;
            }
        }
        if(count1 == 0){
            count2++;
        }
    }

    int *arr1 = new int[count2]();
    int k = 0;

    for(int i = 0; i<n;i++){
        int countrev = 0;
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                countrev++;
            }
        }
        if(countrev == 0){
            arr1[k] = arr[i];
            k++;
        }
    }

    cout << "Array with deleted duplicate elements: ";
    PrintArray(arr1,count2);
    cout << endl;
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

    Duplicate(arr,size);

    return 0;
}