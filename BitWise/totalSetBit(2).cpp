//program to calculate total number of set bits (1) in two number

#include<iostream>          //header file
using namespace std;

// time complexity - O(a)  -> if a > b
// time compplexity - O(b) -> if b > a
void SetBit(int a, int b){          //function to calculate the number of set bit

    int count = 0;

    while(a!=0 | b!=0){             //logic to calculate number of set bit

        if(a&1 == 1){
            count++;
            a = a >> 1;
        }
        else{
            a = a >> 1; 
        }
        if(b&1 == 1){
            count++;
            b = b >> 1;        
        }
        else{
            b = b >> 1;   
        }
    }

    cout << "Total Number of SetBits are: " << count << endl;

}

int main(){                         //main function

    int n1, n2;
    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;

    SetBit(n1,n2);                  //call to set bit function

    return 0;
}

//this code is more effective for smaller value of a and b