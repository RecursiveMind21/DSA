//program to check whether the number is odd or even using bitwise and 
#include<iostream>                                  //header file
#include<math.h>
using namespace std;

bool isOdd(int num)                                 //bool function to check 
{
    int temp = num & 1;                           
    int ans = 0;
    int i = 0;

    while(temp!=0){                                 //logic to check whether the last bit is 1 
        int bit = temp&1;                           //or after and with 1;
        ans = (bit * pow(10,i)) + ans;
        temp = temp >> 1;
        i++;
    }
    if(ans == 1)
        return true;
    else
        return false;
}

int main()
{
    int num;                        //declaring variable for input
    cout << "Enter number to be checked as odd or even: ";
    cin >> num;

    if(isOdd(num)){
        cout << "The number " << num << " is odd number." << endl;
    }
    else{
        cout << "The number " << num << " is even number." << endl;
    }
    return 0;
}