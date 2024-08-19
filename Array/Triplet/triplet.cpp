#include<iostream>
using namespace std;

//time comlexity -> O(n^3)
void Triplet(int *arr,int n,int sum){
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout << "Triplet: " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }

}

void ScanArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << "Enter element: " << i+1 << ": ";
        cin >> arr[i];
    }
}

void PrintArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout << arr[i];
    }
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter the elements in array: " << endl;
    ScanArray(arr,size);

    int sum;
    cout << "Enter the sum: ";
    cin >> sum;

    cout << endl;
    cout << "Elements in array: ";
    PrintArray(arr,size);

    Triplet(arr,size,sum);

    return 0;
}