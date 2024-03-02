#include<iostream>
#include<math.h>
using namespace std;

int Decimal(int dec){

    int i = 0;
    int ans;

    while(dec!=0){
        
        int rem = dec%10;

        if(rem==1){
            ans = ans + pow(2,i);
        }
        
        dec = dec/10;
        i++;
    }
    return ans;
}

int main(){

    int dec;
    cout << "Enter decimal number: ";
    cin >> dec;

    cout << "Binary decimal of " << dec << " is: " << Decimal(dec);

    return 0;
}