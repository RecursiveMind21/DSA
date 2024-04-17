//program which is an example of inheritance ambiguity
#include<iostream>              //header file
#include<string.h>

using namespace std;

class Country               //class creation
{
    string name;

    public:                         //public access modifier
    void setName(string name){      //setter
        this -> name = name;
    }
    void getName(){                 //getter
        cout << "Country name: " << name << endl;
    }
};

class Player
{
    string name;

    public:                                 //public access modifier
    void setName(string name){              //setter
        this -> name = name;
    }
    void getName(){                         //getter
        cout << "Player name: " << name << endl;
    }
};

//inherited class
class access: public Country, public Player
{

};

int main()
{
    access a;

    cout << "<------------------------>" << endl;
    a.Country::setName("India");
    a.Country::getName();
    cout << "<------------------------>" << endl;
    a.Player::setName("Rohit");
    a.Player::getName();
    cout << "<------------------------>" << endl;

    /* in this code there are three classes one country
    another player and access which inherit both country 
    and player. In both of the classes country and player
    and example of function overloading is visible both 
    has a function with same name setName and getName.
    So to access these function from access class we need 
    to use scope resolution operator (::).
    */
}