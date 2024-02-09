//program using deep copy 
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
        cout << "Default Constructor" << endl;
        name = nullptr;
        cout << endl;
    }

    //copy constructor for deep copy 
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name) + 1];             //dynamic memory allocation
        strcpy(ch,temp.name);                                   //string copy
        this -> name = ch;                                      

        this -> health = temp.health;
        this -> level = temp.level;
    }

    void setName(char ch[]){                                //for input of name
        this -> name = ch;
    }

    void getValues(int h,char l){                       //for input of values
        health = h;
        level = l;
    }
    void display(){                                     //for display of values
        cout << "Health: " << health << endl;
        cout << "Level: " << level << endl;
        cout << "Name: " << name << endl;
    }
};

int main()                                  //main function
{
    Hero h1;                                //object creation

    char ch[5] = "Skye"; 
    h1.getValues(80,'D');       
    h1.setName(ch);

    cout << "-----------------------------------------" << endl;
    cout << "               \e[3mDEEP COPY\e[0m       " << endl;
    cout << "-----------------------------------------" << endl;

    cout << "h1 before updation: " << endl;
    h1.display();

    cout << endl;

    cout << "h2 before updation: " << endl; 
    Hero h2(h1);
    h2.display();

    cout << endl;

    //updatation
    h1.name[0] = 'P';

    cout << "h1 after updation: " << endl;
    h1.display();                               //expected to print updated value

    cout << endl;

    cout << "h2 after updation: " << endl;
    h2.display();                               //not expected to print updated value

    cout << "-----------------------------------------" << endl;
    cout << endl;

    return 0;
}