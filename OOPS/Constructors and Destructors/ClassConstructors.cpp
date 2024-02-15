//program with constructor in cpp
#include<iostream>          //header file
#include<string.h>

using namespace std;            

class Hero                 //class declaration
{
    int health;            
    char level;
    

    public:
    //this is called as default constructor
    Hero(){
        cout << "Default Constructor Called";
        cout << endl << endl;
    }

    //parameterised Constructor with single parameter
    Hero(int health){
        this->health = health;
    }

    //parameterised Constructor with multiple parameter
    Hero(int health,char level){
        this->health = health;
        this->level = level;
    }
    void Display()                      //function 
    {
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
    }
    void setHealth(int h){              //setter to set health
        health = h;
    }
    void setLevel(int l){               //setter to ser level
        level = l;
    }
};

int main()
{
    Hero h1;                //creating object

    cout << "                   \e[7mPARAMETERISED CONSTRUCTOR\e[0m              " << endl;
    cout << "-------------------------------------------------------------------" << endl;

    cout << "Display of object with parameterised constructor." << endl;
    Hero h2(70);            //creating object with parameterised constructor
    h2.Display();           //for display

    cout << "-------------------------------------------------------------------" << endl;

    cout << "Display object with parameterised constructor with multiple parameter" << endl;
    Hero h3(80,'D');        //creating object with parameterised constructor
    h3.Display();           //with multiple parameter

    cout << endl;
    cout << endl;

    return 0;
}