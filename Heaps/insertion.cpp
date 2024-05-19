#include<iostream>
#include<vector>
using namespace std;

class heap{
    public:
    vector<int> vt;
    int size;

    heap(){
        size = 0;
        vt.resize(100);
    }

    void insertion(int data){
        size++;
        vt[size] = data;

        int index = size;

        while(index > 1){
            int parent = index/2;

            if(vt[parent] < vt[index]){
                swap(vt[parent], vt[index]);
                index = parent;
            } else{
                break;
            }
        }
    }

    void print(){
        for(int i = 1; i<=size; i++){
            cout <<  vt[i] << " ";
        }
    }
};

int main(){

    heap h1;

    h1.insertion(50);
    h1.insertion(55);
    h1.insertion(53);
    h1.insertion(52);
    h1.insertion(54);

    h1.print();

    return 0;
}