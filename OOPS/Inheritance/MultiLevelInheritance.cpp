//program displyaing multi-level inheritance in cpp
#include<iostream>              //header file
#include<string.h>
using namespace std;

class cars                      //class creation
{
    public:                     //public access modifier
    string Brand;
    string type;

    public:                     //public access modifier
    string getBrand()           //getter
    {
        return Brand;
    }
    string getType()
    {
        return type;
    }
};

//single-level inheritance
class SubCars: public cars      
{   
    public:                     //public access modifier
    void setName(string name)   //setter
    {
        this-> Brand = name;
    }
};

//multi-level inheritance
class Types: public SubCars      
{   
    public:                     //public access modifier
    void setType(string type)   //setter
    {
        this-> type = type;
    }
};

int main()
{  
    cout << "  Multi-Level Inheritance    " << endl << endl;

    SubCars c;                  //object creation for single-level inheritance
    c.setName("Honda");
    cout << "<------------------------>" << endl;
    cout << "  Through SubCars class" << endl;
    cout << "  Brand: " << c.getBrand() << endl;
    cout << "<------------------------>" << endl;
    cout << endl;

    Types c1;                   //object creation for multi-level inheritance
    c1.setType("Suv");
    cout << "  Type: " << c1.getType() << endl << endl;

    c1.setName("Audi");                                 //name can be set as it is the inheritance of
    cout << "<------------------------>" << endl;       //single level class which is the inheritacne
    cout << "  Through Types class" << endl;            //of parent class
    cout << "  Type: " << c1.getType() << endl;
    cout << "<------------------------>" << endl;

    return 0;
}