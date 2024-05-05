#include<iostream>
using namespace std;

void SelectionSort(int *arr, int start, int end) {
    // base case
    if (start == end) {
        return;
    }

    int minIndex = start;
    for (int i = start + 1; i < end; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    swap(arr[start], arr[minIndex]);
    start++;
    SelectionSort(arr, start, end);
}


int main(){

    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter elements in array: ";
    for(int i = 0; i<size; i++){
        cin >> arr[i];
    }   

    SelectionSort(arr,0,size);

    cout << "elements in array: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }   

    return 0;
}