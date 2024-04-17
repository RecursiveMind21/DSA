#include<iostream>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;

bool uniqueOccurance(int *arr, int n){
    unordered_map<int,int> m;

    // Count occurrences of each element
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }

    unordered_set<int> occurrence_counts;
    for(auto &entry : m){
        if(occurrence_counts.find(entry.second) != occurrence_counts.end()){
            // If we've encountered this occurrence count before, return false
            return false;
        }
        occurrence_counts.insert(entry.second);
    }

    // If we've checked all occurrence counts and didn't find any duplicates, return true
    return true;
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
    if(uniqueOccurance(arr,size)){
        cout << "the array is unique" << endl;
    }
    else    
        cout << "the array is not unique" << endl;

    return 0;
}