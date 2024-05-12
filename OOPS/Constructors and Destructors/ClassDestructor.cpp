//program with destructor in class 
#include<iostream>              //header file

using namespace std;

class Hero{                     //class creation with name Hero;

    public:                   //public access modifier

    //destructor 
    ~Hero(){                
        cout << "Destructor Called" << endl;
    }

    //only difference between constructor and destructor is tilda(~).
};

int main()                          //main function
{
    cout << "<------------------------------------------->" << endl;
    cout << "                 \e[2mDESTRUCTOR\e[6m               "   << endl;
    cout << "<------------------------------------------->" << endl;

    //static allocation -> destructor called automatically
    Hero h1;

    //dynamic allocation -> destructor to be called manually
    Hero *h2 = new Hero;
    //manual calling of destructor
    cout << "For Dynamic Allocation: " << endl;
    delete h2;
    cout << "<------------------------------------------->" << endl;
    cout << "For Static Allocation: " << endl;

    return 0;
}