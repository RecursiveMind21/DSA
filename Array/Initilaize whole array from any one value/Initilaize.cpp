#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];

    int val;
    cout << "Enter the number with which you want to initialize the array:";
    cin >> val;

    for(int i = 0;i<n;i++){
        arr[i] = val;
    }

    for(int i = 0; i<n; i++){
        cout << "element " << i+1 << " is: " << arr[i] << endl;
    }

    return 0;
}