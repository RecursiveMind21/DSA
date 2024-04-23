#include<iostream>
using namespace std;

void sayNum(int num){

    if(num == 0){
        return ;
    }

    int rem = num%10;

    sayNum(num/10);

    if(rem == 1){
        cout << "One ";
    }
    else if(rem == 2){
        cout << "Two ";
    }
    else if(rem == 3){
        cout << "Three ";
    }
    else if(rem == 4){
        cout << "Four ";
    }
    else if(rem == 5){
        cout << "Five ";
    }
    else if(rem == 6){
        cout << "Six ";
    }
    else if(rem == 7){
        cout << "Seven ";
    }
    else if(rem == 8){
        cout << "Eight ";
    }
    else if(rem == 9){
        cout << "Nine ";
    }


}

int main(){

    int num;
    cout << "Enter num: ";
    cin >> num;

    sayNum(num);

    return 0;
}