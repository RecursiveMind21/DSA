#include<iostream>
using namespace std;

int main(){

    int num;
    cout << "Enter total amount: ";
    cin >> num;

    int fivehundred;

    fivehundred = num /500;
    cout << "Total Notes of hundred required are: " << fivehundred << endl;
    num = num - (fivehundred*500);

    int hundred;

    hundred = num /100;
    cout << "Total Notes of hundred required are: " << hundred << endl;
    num = num - (hundred*100);

    int fifty;

    fifty = num /50;
    cout << "Total Notes of hundred required are: " << fifty << endl;
    num = num - (fifty*50);

    int twenty;

    twenty = num /20;
    cout << "Total Notes of hundred required are: " << twenty << endl;
    num = num - (twenty*20);

    int tens;

    tens = num /10;
    cout << "Total Notes of hundred required are: " << tens << endl;
    num = num - (tens*10);

    int ones = num;

    cout << "Total Notes of hundred required are: " << ones << endl;

    return 0;
}