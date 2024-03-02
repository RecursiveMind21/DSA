#include<iostream>
#include<math.h>
using namespace std;

int Decimal(int num){

    int i = 0,ans = 0;

    while(num!=0){
        int bit = num%10;
        if(bit == 1){
            ans = pow(2,i) + ans;
        }
        i++;
        num = num/10;
    }
    return ans;
}

int main(){

    int dec;
    cout << "Enter the binary number: ";
    cin >> dec;

    cout << "Decimal convertion of " << dec << " is: " << Decimal(dec);
    cout << endl;

    return 0;
}