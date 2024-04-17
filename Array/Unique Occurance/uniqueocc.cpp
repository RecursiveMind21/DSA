#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

void uniqueOccurance(int *arr, int n){
    
    unordered_map<int,int> m;

    for(int i = 0; i<n; i++){
        int count = 1;
        for(int j = 0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
            }
        }
        if(arr[i-1] != arr[i]){
            m[arr[i]] = count;
        }
        
    }
    
    // if(m[arr[0]] != m[arr[1]]){
    //     return true;
    // }
    // else    
    //     return false;
}

void ScanArray(int *arr, int n){
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }
    
}

void PrintArray(int *arr, int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter values in array: "<< endl;
    ScanArray(arr,size);

    cout << endl;
    cout << "Values in array: " << endl;
    PrintArray(arr,size);

    cout << endl;
    uniqueOccurance(arr,size);

    // cout << endl;
    // if(uniqueOccurance(arr,size)){
    //     cout << "the array is unique" << endl;
    // }
    // else    
    //     cout << "the array is not unique" << endl;

    return 0;
}