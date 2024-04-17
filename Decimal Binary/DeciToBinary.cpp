#include<iostream>
#include<math.h>
using namespace std;

void Print(int arr[], int n){
    cout << "<---------------------------------------------------->" << endl;
    cout << "Binary: ";
    for(int i = 0; i<n; i++){
        cout << arr[i];
    }
    cout << endl;
    cout << "<---------------------------------------------------->" << endl;
}

void Binary(int num){

    int arr[32] = {0};
    int index = 31;

    while(num!=0 && index >=0){
        arr[index] = num & 1;
        num = num >> 1;
        index--;
    }
    Print(arr,32);
}

int main(){

    int num;
    cout << "Enter number: ";
    cin >> num;

    Binary(num); 

    cout << endl;
    
    return 0;
}