//program to calculate the sum of set bit of two numbers
#include<iostream>                          //header file
#include<math.h>
using namespace std;

// time complexity -> O(log(n))
int SetBit(int n){                          //function to return count of setbit

    int count = 0;      

    while(n!=0){                           //logic to calculate count of set bit

        int rem = n%10;

        if(rem == 1){
            count++;
        }

        n = n/10;
    }
    return count;
}

int Binary(int n){                      //function to convert decimal to binary
    
    int i = 0,ans = 0;

    while(n!=0){                        //logic to convert decimal to binary

        int bit = n&1;
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;

        i++;
    }
    return ans;                         //returning binary number;
}

int main(){                                     //main function

    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int bin1 = Binary(a);
    int bin2 = Binary(b);

    int count1 = SetBit(bin1);
    int count2 = SetBit(bin2);

    int ans = count1 + count2;

    cout << "Number of Set Bits in " << a << " and " << b << " are: " << ans << "." << endl;

    return 0;
}

//this program is more effective if value of a and b is large.