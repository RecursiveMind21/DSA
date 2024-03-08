//program to get total number of notes required to fulfil the amount entered
#include<iostream>                      //header file
using namespace std;

int main(){                             //main function

    int num;
    cout << "Enter total amount: ";
    cin >> num;

    int fivehundred;                

    fivehundred = num /500;             //to calculate 500 rupees notes
    cout << "Total Notes of hundred required are: " << fivehundred << endl;
    num = num - (fivehundred*500);

    int hundred;

    hundred = num /100;                 //to calculate 100 rupees notes
    cout << "Total Notes of hundred required are: " << hundred << endl;
    num = num - (hundred*100);

    int fifty;

    fifty = num /50;                    //to calculate 50 rupees notes
    cout << "Total Notes of hundred required are: " << fifty << endl;
    num = num - (fifty*50);

    int twenty;

    twenty = num /20;                   //to calculate 20 rupees notes
    cout << "Total Notes of hundred required are: " << twenty << endl;
    num = num - (twenty*20);

    int tens;

    tens = num /10;                   //to calculate 10 rupees notes
    cout << "Total Notes of hundred required are: " << tens << endl;
    num = num - (tens*10);

    int ones = num;                 //remaining notes required will be of ones

    cout << "Total Notes of hundred required are: " << ones << endl;

    return 0;
}