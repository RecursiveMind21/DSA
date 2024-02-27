//program to check whether then number is strong number or not

/*a number is said to be a strong number if the sum of factorial of each digit 
is equal to the number

    ex: 145 - 1! + 4! + 5! = 145
*/

#include<iostream>              //header file
using namespace std;

int factorial[10];              //array to store factorail from 0 to 9

//time complexity - O(1)
void fact(){                    //function to calculate factorail

    factorial[0] = 1;   

    for(int i = 1; i<10; i++){
        factorial[i] = i * factorial[i - 1];
    }
}

//time complexity = O(log(num))
bool StrongNumber(int num){         //function to check whether the number is strong or not 
    
    int temp = num;
    int ans = 0;

    while(num!=0){                  //logic check armstrong
        int rem = num%10;
        ans = ans + factorial[rem];
        num = num/10;
    }
    if(ans == temp)
        return true;

    else    
        return false;
}

int main(){

    fact();             //call to fact function to pre calculate factorail

    int num;
    cout << "Enter the number to be checked as strong number:";
    cin >> num;

    if(StrongNumber(num))           //call to strong number function
        cout << "The number " << num << " is a strong number";
    else
        cout << "The number " << num << " is not a strong number";

    return 0;
}