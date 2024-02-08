#include<iostream>
#include<string.h>
using namespace std; 

class Hero
{
    private:
    int health;

    public:
    char name[20];
    char level;

    void print()                //for printing of private access modifier
    {
        cout << health << endl;
    }

    void setHealth(int h)       //to insert value in health private variable
    {
        health = h;
    }

    int getHealth()         //to return value to main function
    {
        return health;
    }

};

int main()
{
    //creation of object
    Hero h1;

    

    strcpy(h1.name, "Hunter");                      //we need to use strcpy as char array does not
    cout << "Name: " << h1.name << endl;            //support == operator

    /*
        another way to add name will be -->

            declaring string name; in class
            and normally using h1.name = "Hunter";
            printing it cout << h1.name;
    
    */

    h1.level = 'D';
    cout << "Level: " << h1.level << endl;

    int h = 85;

    h1.setHealth(h);
    
    cout << "Health: " << h1.getHealth() << endl;

    

}