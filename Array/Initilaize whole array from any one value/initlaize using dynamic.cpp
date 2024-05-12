#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter Size of array: ";
    cin >> n;

    int *arr = new int[n]();

    cout << "Array:";
    for(int i =0;i<n;i++){
        cout << arr[i] << endl;
    }
    
}