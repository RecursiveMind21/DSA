//program displyaing Hybrid inheritance in cpp
#include<iostream>              //header file
#include<string.h>
using namespace std;

class Country                      //class creation
{
    public:                     //public access modifier
    string CountryName;
    
    void setCname(string name)          //setter
    {
        this -> CountryName = name;
    }
};

class Player
{
    public:
    string Name;

    void setPName(string name)
    {
        this -> Name = name;
    }
};


class Bat: public Country, public Player 
{   
    public:                     //public access modifier
    string BatBrand;

    public:                     //public access modifier
    void setBatBrand(string name)
    {
        this -> BatBrand = name;
    }
    string getBatName()           //getter
    {
        return BatBrand;
    }

};

class Ball: public Country    
{   
    public:                             //public access modifier
    string BallBrand;

    public:                             //public access modifier
    void setBallBrand(string name)      //setter
    {
        this -> BallBrand = name;
    }
    string getBallBrand()               //getter
    {
        return BallBrand;
    }
};

int main()
{  
    cout << "  Hybrid Inheritance    " << endl << endl;

    Country c;              //object creation for parent class
    Bat b1;                 //object creation for child class
    Ball b2;                //object creation for child class

    cout << "<---------------------------->" << endl;
    b1.setCname("England");
    cout << "   Through Bat class" << endl;
    cout << "Country Name: " << b1.CountryName << endl;
    b2.setCname("India");
    cout << "   Through Ball class" << endl;
    cout << "Country Name: " << b2.CountryName << endl;
    cout << "<---------------------------->" << endl;

    cout << "<---------------------------->" << endl;
    b1.setBatBrand("Spartan");
    cout << "Bat Brand: " << b1.BatBrand << endl;
    b2.setBallBrand("SG");
    cout << "Ball Brand: " << b2.BallBrand << endl;
    cout << "<---------------------------->" << endl;

    /*you cannot access setBatBrand from object b2 similarly
    you cannot access setBallBrand from object b1 as they 
    both inherit the parent class Country but do not inherit 
    each other. Hence it is an example of Hierarchical inheritance
    */

    cout << "<---------------------------->" << endl;
    b1.setPName("Virat");
    cout << "Setting name from bat class" << endl;
    cout << "Player Name: " << b1.Name << endl;
    cout << "<---------------------------->" << endl;
    cout << endl;

    /*you cannot set player name from ball class as it 
    does not inherit the class Player while bat is inherit
    two classes country and player. Hence it is an example 
    of multiple inheritance.
    */

    /*this is an example of hybrid inheritance as it a 
    combination of hierarchical and multiple inheritance
    */

    return 0;
}