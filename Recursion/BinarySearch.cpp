#include<iostream>
using namespace std;

bool BinarySearch(int *arr, int size, int key, int start, int end){

    //base case
    if(start > end){
        return false;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] > key){
        return BinarySearch(arr,size,key,start,mid - 1);
    }
    else{
        return BinarySearch(arr,size,key,mid + 1,end);
    }
}

int main(){

    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements in array: ";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the elment to be searched: ";
    cin >> key;

    int start = 0;
    int end = size -1;

    if(BinarySearch(arr,size,key,start,end)){
        cout << "Element Found " << endl;
    }else{
        cout << "Element not found " << endl;
    }



    return 0;
}