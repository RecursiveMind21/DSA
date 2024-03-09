#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    int value;
    cout << "Enter the number with which you want to initialize the array:";
    cin >> value;

    fill(arr,arr+n,value);

    for(int i = 0; i<n; i++){
        cout << "element " << i+1 << " is: " << arr[i] << endl;
    }

    return 0;
}