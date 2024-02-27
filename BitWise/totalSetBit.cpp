//program to calculate total number of set bits in two given number
#include<iostream>          //header file
#include<math.h>    
using namespace std;

//time complexity - O(log(num))
int binary(int num){                //function to convert decimal to binary
    int bin = 0,i = 0;
    while(num!=0){                  //logic to convert decimal to binary
        int bit = num&1;
        bin = (bit * pow(10,i)) + bin;
        num = num >> 1;
        i++;
    }
    return bin;
}

// time complexity - O(log(num))
int SetBit(int num){            //function to calculate number of set bit

    int count = 0;
    while (num!=0){             //logic to calculate number of set bit

        int rem = num%10;   
        if(rem == 1){
            count++;
        }
        num = num/10;
    }
    return count;
}

int main(){
    int n1;                         //variable for input of first number
    cout << "Enter number 1:";
    cin >> n1;

    int n2;                         //variable for input of second number
    cout << "Enter number 2:";
    cin >> n2;

    int binary1 = binary(n1);           //call to binary function with first number
    int binary2 = binary(n2);           //call to bianry function with second number

    int s1 = SetBit(binary1);           //call to calculate set bit of first number
    int s2 = SetBit(binary2);           //call to calculate set bit of second number

    int finalAns = s1 + s2;             //sum of set bit of both number
 
    cout << "Ans: " << finalAns << endl;    

    return 0;
}


//this program is more effective in case of large value of a and b