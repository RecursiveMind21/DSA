//program displaying polymorphism during run time
#include<iostream>              //header file
using namespace std;

class Human                         //parent class
{
    public:
    void speak()            
    {
        cout << "Speaking" << endl;
    }
};

class Animal: public Human          //inheritance
{
    public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Animal a;               //object creation

    a.speak();              //if we call speak function - function inside animal will be called
    a.Human::speak();       //this is the way to call function inside parent class

    return 0;
}