//program to check whether then number is strong number or not

/*a number is said to be a strong number if the sum of factorial of each digit 
is equal to the number

    ex: 145 - 1! + 4! + 5! = 145
*/

#include<iostream>                              //header file
using namespace std;    

// time complexity - O(num)
int fact(int num){                              //recursive function to calculate factorial

    if(num == 0){
        return 1;
    }

    return num * fact(num - 1);
}


//time complexity - O(log(num) * num)
bool StrongNumber(int num){                     //function to check whether the number is strong number or not

    int temp = num;
    int sum = 0;

    while(num != 0){                            //logic to check armstrong number

        int rem = num%10;

        //here time complexity of fact(rem) is O(num)
        sum = sum + fact(rem);

        num = num/10;
    }

    if(sum == temp)     
        return true;
    else
        return false;
}

int main(){                                 //main function

    int num;
    cout << "Enter the number: ";
    cin >> num;

    if(StrongNumber(num))                   //calling to function
        cout << "The number " << num << " is a strong number" << endl;
    else    
        cout << "The numebr " << num << " is not a strong number" << endl;

    return 0;
}