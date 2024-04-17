//program using shallow copy in class
#include<iostream>      //header file
#include<string.h>

using namespace std;

class Hero              //class creation
{
    private:
    int health;
    char level;

    public:

    char *name;

    //default constructor
    Hero(){
        cout << "Default Constructor." << endl;
        name = new char[100];
        cout << endl;
    }

    void getValues(int h,char l){           //for accessing private data member
        health = h;
        level = l;
    }
    void Display(){                             //for display of data member
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
        cout << "Name: " << name << endl;
    }
    void getName(char ch[]){                //for input of name
        strcpy(name,ch);
    }
};

int main()                  //main function
{
    Hero h1;                    //object creation

    char ch[5]= "Sova";

    h1.getValues(80,'F');
    h1.getName(ch);

    cout << "-----------------------------------------" << endl;
    cout << "               \e[7mSHALLOW COPY\e[0m       " << endl;
    cout << "-----------------------------------------" << endl;

    cout << "h1 before updation: " << endl;
    h1.Display();

    cout << endl;

    Hero h2 = h1;            //copying h1 in h2 using deafult copy constructor

    cout << "h2 before updation: " << endl;
    h2.Display();

    cout << endl;

    h1.name[0] = 'G';
    cout << "h1 after updation: " << endl;
    h1.Display();                               //expected to print updated value

    cout << endl;

    cout << "h2 after updation: " << endl;
    h2.Display();                               //expected to print updated value

    cout << endl;

    return 0;
}
