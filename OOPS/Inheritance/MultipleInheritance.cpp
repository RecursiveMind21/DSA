//program displyaing multiple inheritance in cpp
#include<iostream>              //header file
#include<string.h>
using namespace std;

class Country                      //class creation
{
    public:                     //public access modifier
    string CountryName;

    public:                     //public access modifier
    string getCName()           //getter
    {
        return CountryName;
    }
};


class Player   
{   
    public:                     //public access modifier
    string PlayerName;

    public:                     //public access modifier
    string getPName()           //getter
    {
        return PlayerName;
    }
};

//multiple inheritance
class Cricket: public Country, public Player      
{   
    public:
    void setPname(string name){
        this -> PlayerName = name;
    }
    void setCname(string name){
        this -> CountryName = name;
    }
};

int main()
{  
    cout << "  Multiple Inheritance    " << endl << endl;

    Cricket c;                  //object creation for single-level inheritance
    
    c.setCname("India");
    c.setPname("Virat");

    cout << "<====================>" << endl;
    cout << "Country Name: " << c.getCName() << endl;
    cout <<  "<===================>" << endl;
    cout << "Player Name: " << c.getPName() << endl;
    cout << "<====================>" << endl;
    cout << endl;

    return 0;
}