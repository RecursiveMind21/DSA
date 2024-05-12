//program displyaing single inheritance in cpp
#include<iostream>              //header file
#include<string.h>
using namespace std;

class cars                      //class creation
{
    public:                     //public access modifier
    string Brand;

    public:                     //public access modifier
    string getBrand()           //getter
    {
        return Brand;
    }
};

//single inheritance
class SubCars: public cars      
{   
    public:                     //public access modifier
    void setName(string name)   //setter
    {
        this-> Brand = name;
    }
};

int main()
{  
    cout << "  Single Inheritance    " << endl << endl;

    SubCars c;                  //object creation
    c.setName("Honda");
    cout << "  Brand: " << c.getBrand() << endl << endl;

    return 0;
}