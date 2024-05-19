#include<iostream>
using namespace std;

void heapify(int arr[], int n , int i){
        int largest = i;
        int left = i*2;
        int right =  2*i + 1;

        if(left < n && arr[largest] < arr[left]){
            largest = left;
        }   else if(right < n && arr[largest] < arr[right])
            largest = right;

        if(largest != i){
            swap(arr[largest], arr[i]);
            heapify(arr,n,largest);
        }
    }

int main(){

    int arr[6] = {-1,54,53,55,52,50};
    int size = 5;

    for(int i = size/2; i>0; i--){
        heapify(arr,size,i);
    }

    cout << "after: ";

    for(int i = 1; i<=size; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}