#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        size = 0;
    }

    void insert(int data){
        size++;
        arr[size] = data;

        int index = size;

        while(index > 1){
            int parent = index/2;

            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            } else  break;
        }   
    }

    void print(){
        for(int i = 1; i<=size;i++){
            cout << arr[i] << " ";
        }
    }

    void deletion(){
        arr[1] = arr[size];
        size--;
        
        int i = 1;
        while(1<size){
            int leftindex = 2*i;
            int rightindex = 2*i+1;
            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i],arr[leftindex]);
                i = leftindex;
            } else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i], arr[rightindex]);
                i = rightindex;
            } else  return ;
        }
    }
};

int main(){

    heap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout << "Heap : ";
    h.print();
    cout << endl;    

    h.deletion();
    cout << "Heap : ";
    h.print();
    cout << endl;   

    return 0;
}