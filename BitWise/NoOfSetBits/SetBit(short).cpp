//program to calculate sum of count of set bit in two numbers
#include<iostream>                          //header file
using namespace std;

//time complexity if a>b -> O(a)
//time complexity if b>a -> O(b)
// time complexity in any case is linear
int NoOfSetBit(int a,int b){                //function to calculate set bit 
    
    int count = 0;

    while(a!=0 | b!=0){                    //logic to calculate set bit count

        if(a & 1 == 1){
            count++;
        }
        if(b & 1 == 1){
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    return count;
}

int main(){                                 //main function
    int a,b;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    cout << "No of set bit in a and b: " << NoOfSetBit(a,b) << endl;

    return 0;
}


//this program is only effective if values of a and b is smaller.