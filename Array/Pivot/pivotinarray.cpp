#include<iostream> 
using namespace std;

int pivot(int *arr, int n){

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid - 1]){
            return mid;
        }
        else if(arr[mid] > arr[mid + 1]){
            start = mid;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return end;
}

int main(){

    int size;
    cout << "Enter size: "; 
    cin >> size;

    int *arr = new int[size];

    for(int i = 0; i<size; i++){
        cout << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array: ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " " ;
    }

    cout << endl;
    cout << "Pivot: " << pivot(arr,size) << endl;

    return 0;
}