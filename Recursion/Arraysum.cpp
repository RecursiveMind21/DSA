#include<iostream>
using namespace std;

int ToSum(int *arr, int size,int sum){

    //base case
    if(size == 0){
        return sum;
    }

    sum += arr[0];

    return ToSum(arr+1,size-1,sum);
}

int main(){

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int *arr = new int[size];

    for(int i= 0; i<size; i++){
        cin >> arr[i];
    }

    int sum = 0;

    cout << "Sum: " << ToSum(arr,size,sum) << endl;

    return 0;
}