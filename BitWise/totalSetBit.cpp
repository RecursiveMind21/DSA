#include<iostream>
#include<math.h>
using namespace std;

int binary(int num){
    int bin = 0,i = 0;
    while(num!=0){
        int bit = num&1;
        bin = (bit * pow(10,i)) + bin;
        num = num >> 1;
        i++;
    }
    return bin;
}

int SetBit(int num){

    int count = 0;
    while (num!=0){

        int rem = num%10;
        if(rem == 1){
            count++;
        }
        num = num/10;
    }
    return count;
}

int main(){
    int n1;
    cout << "Enter number 1:";
    cin >> n1;

    int n2;
    cout << "Enter number 2:";
    cin >> n2;

    int binary1 = binary(n1);
    int binary2 = binary(n2);

    int s1 = SetBit(binary1);
    int s2 = SetBit(binary2);

    int finalAns = s1 + s2;
 
    cout << "Ans: " << finalAns << endl;

    return 0;
}